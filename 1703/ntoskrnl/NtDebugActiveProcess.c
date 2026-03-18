/*
 * XREFs of NtDebugActiveProcess @ 0x140680094
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14054633C (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x14067F184 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x14067FB20 (DbgkpSetProcessDebugObject.c)
 */

NTSTATUS __stdcall NtDebugActiveProcess(HANDLE Process, HANDLE DebugObject)
{
  char PreviousMode; // bp
  NTSTATUS result; // eax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rdi
  _KPROCESS *v8; // rsi
  bool v9; // al
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // rax
  __int16 v12; // cx
  __int64 v13; // rax
  __int16 v14; // cx
  BOOLEAN v15; // al
  struct _KEVENT *v16; // rsi
  int v17; // eax
  struct _OBJECT_HANDLE_INFORMATION v18; // [rsp+40h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-A8h] BYREF
  char v21[8]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v22; // [rsp+68h] [rbp-90h]
  __int64 v23; // [rsp+70h] [rbp-88h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)Process,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             1332175428,
             &v18,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (ULONG_PTR)v18;
    v8 = CurrentThread->ApcState.Process;
    if ( *(_KPROCESS **)&v18 == v8 || *(PEPROCESS *)&v18 == PsInitialSystemProcess )
    {
      v10 = -1073741790;
    }
    else
    {
      LOBYTE(v5) = PreviousMode;
      v9 = PsTestProtectedProcessIncompatibility(v5, (__int64)CurrentThread->ApcState.Process, *(_QWORD *)&v18);
      v10 = v9 ? 0xC0000712 : 0;
      if ( !v9 )
      {
        if ( !*(_QWORD *)(v7 + 720)
          || (v22 = *(_QWORD *)(v7 + 720), v23 = 1LL, v10 = VslpEnterIumSecureMode(1, 11LL, 0LL, (__int64)v21), v10 >= 0) )
        {
          v11 = v8[1].ActiveProcessors.Bitmap[7];
          if ( !v11
            || (v12 = *(_WORD *)(v11 + 8), v12 != 332) && v12 != 452
            || (v13 = *(_QWORD *)(v7 + 1064)) != 0 && ((v14 = *(_WORD *)(v13 + 8), v14 == 332) || v14 == 452) )
          {
            v10 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
            if ( v10 >= 0 )
            {
              v15 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + 760));
              v16 = (struct _KEVENT *)Object;
              if ( v15 )
              {
                v17 = DbgkpPostFakeProcessCreateMessages((_KPROCESS *)v7, (struct _KEVENT *)Object, &v20);
                v10 = DbgkpSetProcessDebugObject(v7, v16, v17, v20);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v7 + 760));
              }
              else
              {
                v10 = -1073741558;
              }
              ObfDereferenceObject(v16);
            }
          }
          else
          {
            v10 = -1073741637;
          }
        }
      }
    }
    ObfDereferenceObjectWithTag((PVOID)v7, 0x4F676244u);
    return v10;
  }
  return result;
}
