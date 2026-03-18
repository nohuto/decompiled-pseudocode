/*
 * XREFs of NtRemoveProcessDebug @ 0x14070FDBC
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140555328 (PsTestProtectedProcessIncompatibility.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkClearProcessDebugObject @ 0x1405EE030 (DbgkClearProcessDebugObject.c)
 */

NTSTATUS __stdcall NtRemoveProcessDebug(HANDLE Process, HANDLE DebugObject)
{
  char PreviousMode; // si
  NTSTATUS result; // eax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  NTSTATUS v7; // ebx
  __int64 v8; // rax
  PVOID Object; // [rsp+40h] [rbp-A8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v10; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v11[8]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v12; // [rsp+58h] [rbp-90h]
  __int64 v13; // [rsp+60h] [rbp-88h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)Process,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             &v10,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    LOBYTE(v5) = PreviousMode;
    v6 = (_QWORD *)v10;
    if ( PsTestProtectedProcessIncompatibility(v5, (__int64)KeGetCurrentThread()->ApcState.Process, *(_QWORD *)&v10) )
    {
      v7 = -1073740014;
    }
    else
    {
      v8 = v6[90];
      if ( (v8 & 1) == 0 || (v13 = 0LL, v12 = v8, v7 = VslpEnterIumSecureMode(2u, 11LL, 0, (__int64)v11), v7 >= 0) )
      {
        v7 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
        if ( v7 >= 0 )
        {
          v7 = DbgkClearProcessDebugObject((ULONG_PTR)v6, (__int64)Object);
          ObfDereferenceObject(Object);
        }
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return v7;
  }
  return result;
}
