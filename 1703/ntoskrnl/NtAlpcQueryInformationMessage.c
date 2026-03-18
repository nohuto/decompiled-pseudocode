/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x140516968
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     AlpcpQuerySidMessage @ 0x140444048 (AlpcpQuerySidMessage.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     AlpcpCaptureIdMessage @ 0x140516B70 (AlpcpCaptureIdMessage.c)
 *     AlpcpQueryHandleInformationMessage @ 0x140516BEC (AlpcpQueryHandleInformationMessage.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x14059A7BC (AlpcpQueryTokenModifiedIdMessage.c)
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
  int v13; // r14d
  int v14; // ebx
  PVOID v15; // r15
  ULONG_PTR v16; // r14
  int v17; // edi
  int v18; // edi
  int TokenModifiedIdMessage; // eax
  int v21; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+34h] [rbp-34h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR v24[2]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(a2, &v21, &v22);
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
  v13 = v21;
  if ( !v21 )
  {
    v14 = -1073741811;
    goto LABEL_19;
  }
  v14 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v15 = Object;
    v14 = AlpcpLookupMessage((__int64)Object, v13, v22, v24);
    if ( v14 < 0 )
    {
LABEL_18:
      ObfDereferenceObject(v15);
      goto LABEL_19;
    }
    v16 = v24[0];
    if ( !*(_QWORD *)(v24[0] + 24) )
    {
      v14 = -1073740029;
      goto LABEL_17;
    }
    if ( a3 )
    {
      v17 = a3 - 1;
      if ( !v17 )
      {
        TokenModifiedIdMessage = AlpcpQueryTokenModifiedIdMessage((_DWORD)v15, v24[0], (_DWORD)a4, Length, v11);
        goto LABEL_16;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          TokenModifiedIdMessage = AlpcpQueryHandleInformationMessage((_DWORD)v15, v24[0], (_DWORD)a4, Length, v11);
LABEL_16:
          v14 = TokenModifiedIdMessage;
LABEL_17:
          AlpcpUnlockMessage(v16);
          goto LABEL_18;
        }
      }
      else if ( !a4 && !(_DWORD)Length && !v11 )
      {
        v14 = (*(_DWORD *)(v24[0] + 40) & 7) != 4 ? 0x103 : 0;
        goto LABEL_17;
      }
      v14 = -1073741811;
      goto LABEL_17;
    }
    TokenModifiedIdMessage = AlpcpQuerySidMessage((int)v15, v24[0], (__int64)a4, Length, v11);
    goto LABEL_16;
  }
LABEL_19:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v14;
}
