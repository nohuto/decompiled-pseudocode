/*
 * XREFs of NtDebugActiveProcess @ 0x14070F9D8
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140555328 (PsTestProtectedProcessIncompatibility.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x14070EA5C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x14070F46C (DbgkpSetProcessDebugObject.c)
 */

NTSTATUS __stdcall NtDebugActiveProcess(HANDLE Process, HANDLE DebugObject)
{
  char PreviousMode; // bp
  NTSTATUS result; // eax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rdi
  _KPROCESS *v8; // rsi
  NTSTATUS v9; // ebx
  unsigned __int64 v10; // rax
  __int16 v11; // cx
  __int64 v12; // rax
  __int16 v13; // cx
  BOOLEAN v14; // al
  struct _KEVENT *v15; // rsi
  int v16; // eax
  struct _OBJECT_HANDLE_INFORMATION v17; // [rsp+40h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-A8h] BYREF
  char v20[8]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v21; // [rsp+68h] [rbp-90h]
  __int64 v22; // [rsp+70h] [rbp-88h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)Process,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             &v17,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (ULONG_PTR)v17;
    v8 = CurrentThread->ApcState.Process;
    if ( *(_KPROCESS **)&v17 == v8 || *(PEPROCESS *)&v17 == PsInitialSystemProcess )
    {
      v9 = -1073741790;
    }
    else
    {
      LOBYTE(v5) = PreviousMode;
      if ( PsTestProtectedProcessIncompatibility(v5, (__int64)CurrentThread->ApcState.Process, *(_QWORD *)&v17) )
      {
        v9 = -1073740014;
      }
      else if ( (*(_QWORD *)(v7 + 720) & 1) == 0
             || (v21 = *(_QWORD *)(v7 + 720), v22 = 1LL, v9 = VslpEnterIumSecureMode(2u, 11LL, 0, (__int64)v20), v9 >= 0) )
      {
        v10 = v8[1].ActiveProcessors.Bitmap[7];
        if ( !v10
          || (v11 = *(_WORD *)(v10 + 8), v11 != 332) && v11 != 452
          || (v12 = *(_QWORD *)(v7 + 1064)) != 0 && ((v13 = *(_WORD *)(v12 + 8), v13 == 332) || v13 == 452) )
        {
          v9 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
          if ( v9 >= 0 )
          {
            v14 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + 760));
            v15 = (struct _KEVENT *)Object;
            if ( v14 )
            {
              v16 = DbgkpPostFakeProcessCreateMessages((_KPROCESS *)v7, (struct _KEVENT *)Object, &v19);
              v9 = DbgkpSetProcessDebugObject(v7, v15, v16, v19);
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v7 + 760));
            }
            else
            {
              v9 = -1073741558;
            }
            ObfDereferenceObject(v15);
          }
        }
        else
        {
          v9 = -1073741637;
        }
      }
    }
    ObfDereferenceObjectWithTag((PVOID)v7, 0x4F676244u);
    return v9;
  }
  return result;
}
