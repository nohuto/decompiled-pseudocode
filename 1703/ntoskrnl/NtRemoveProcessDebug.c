/*
 * XREFs of NtRemoveProcessDebug @ 0x140680480
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14054633C (PsTestProtectedProcessIncompatibility.c)
 *     DbgkClearProcessDebugObject @ 0x1405860B0 (DbgkClearProcessDebugObject.c)
 */

NTSTATUS __stdcall NtRemoveProcessDebug(HANDLE Process, HANDLE DebugObject)
{
  char PreviousMode; // si
  NTSTATUS result; // eax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  bool v7; // al
  NTSTATUS v8; // ebx
  __int64 v9; // rax
  PVOID Object; // [rsp+40h] [rbp-A8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v11; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v12[8]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v13; // [rsp+58h] [rbp-90h]
  __int64 v14; // [rsp+60h] [rbp-88h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)Process,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             1332175428,
             &v11,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    LOBYTE(v5) = PreviousMode;
    v6 = (_QWORD *)v11;
    v7 = PsTestProtectedProcessIncompatibility(v5, (__int64)KeGetCurrentThread()->ApcState.Process, *(_QWORD *)&v11);
    v8 = v7 ? 0xC0000712 : 0;
    if ( !v7 )
    {
      v9 = v6[90];
      if ( !v9 || (v14 = 0LL, v13 = v9, v8 = VslpEnterIumSecureMode(1, 11LL, 0LL, (__int64)v12), v8 >= 0) )
      {
        v8 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
        if ( v8 >= 0 )
        {
          v8 = DbgkClearProcessDebugObject((ULONG_PTR)v6, (__int64)Object);
          ObfDereferenceObject(Object);
        }
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return v8;
  }
  return result;
}
