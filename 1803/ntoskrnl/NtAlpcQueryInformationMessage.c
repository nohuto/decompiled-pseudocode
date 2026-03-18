/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x14055DB84
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpCaptureIdMessage @ 0x1404CF0D0 (AlpcpCaptureIdMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpQueryHandleInformationMessage @ 0x14055DD68 (AlpcpQueryHandleInformationMessage.c)
 *     AlpcpQuerySidMessage @ 0x14055E040 (AlpcpQuerySidMessage.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1407473F4 (AlpcpQueryTokenModifiedIdMessage.c)
 */

__int64 __fastcall NtAlpcQueryInformationMessage(
        HANDLE Handle,
        __int64 a2,
        int a3,
        volatile void *a4,
        SIZE_T Length,
        unsigned __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // r14d
  int v14; // ebx
  PVOID v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG_PTR v19; // r14
  int v20; // edi
  int v21; // edi
  int TokenModifiedIdMessage; // eax
  unsigned int v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+34h] [rbp-34h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(a2, &v24, &v25);
  if ( PreviousMode )
  {
    ProbeForWrite(a4, (unsigned int)Length, 4u);
    v11 = a6;
    if ( a6 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( a6 < 0x7FFFFFFF0000LL )
        v12 = a6;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v11 = a6;
  }
  v13 = v24;
  if ( !v24 )
  {
    v14 = -1073741811;
    goto LABEL_19;
  }
  v14 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v15 = Object;
    v14 = AlpcpLookupMessage((__int64)Object, v13, v25, BugCheckParameter2);
    if ( v14 < 0 )
    {
LABEL_18:
      ObfDereferenceObject(v15);
      goto LABEL_19;
    }
    v19 = BugCheckParameter2[0];
    if ( !*(_QWORD *)(BugCheckParameter2[0] + 24) )
    {
      v14 = -1073740029;
      goto LABEL_17;
    }
    if ( a3 )
    {
      v20 = a3 - 1;
      if ( !v20 )
      {
        TokenModifiedIdMessage = AlpcpQueryTokenModifiedIdMessage(
                                   (_DWORD)v15,
                                   BugCheckParameter2[0],
                                   (_DWORD)a4,
                                   Length,
                                   v11);
        goto LABEL_16;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          TokenModifiedIdMessage = AlpcpQueryHandleInformationMessage(
                                     (_DWORD)v15,
                                     BugCheckParameter2[0],
                                     (_DWORD)a4,
                                     Length,
                                     v11);
LABEL_16:
          v14 = TokenModifiedIdMessage;
LABEL_17:
          AlpcpUnlockMessage(v19, v16, v17, v18);
          goto LABEL_18;
        }
      }
      else if ( !a4 && !(_DWORD)Length && !v11 )
      {
        v14 = (*(_DWORD *)(BugCheckParameter2[0] + 40) & 7) != 4 ? 0x103 : 0;
        goto LABEL_17;
      }
      v14 = -1073741811;
      goto LABEL_17;
    }
    TokenModifiedIdMessage = AlpcpQuerySidMessage((_DWORD)v15, BugCheckParameter2[0], (_DWORD)a4, Length, v11);
    goto LABEL_16;
  }
LABEL_19:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v14;
}
