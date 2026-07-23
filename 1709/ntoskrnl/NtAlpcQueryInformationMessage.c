/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x140505F58
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureIdMessage @ 0x14049DE90 (AlpcpCaptureIdMessage.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     AlpcpQuerySidMessage @ 0x140505104 (AlpcpQuerySidMessage.c)
 *     AlpcpQueryHandleInformationMessage @ 0x140506154 (AlpcpQueryHandleInformationMessage.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1405EF11C (AlpcpQueryTokenModifiedIdMessage.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformationMessage(
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ALPC_MESSAGE_INFORMATION_CLASS MessageInformationClass,
        PVOID MessageInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // bl
  PULONG v11; // rsi
  __int64 v12; // rcx
  int v13; // r14d
  NTSTATUS v14; // ebx
  PVOID v15; // r15
  ULONG_PTR v16; // r14
  __int32 v17; // edi
  __int32 v18; // edi
  NTSTATUS TokenModifiedIdMessage; // eax
  int v21; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+34h] [rbp-34h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR v24[2]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage((__int64)PortMessage, &v21, &v22);
  if ( PreviousMode )
  {
    ProbeForWrite(MessageInformation, Length, 4u);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v12 = (__int64)ReturnLength;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v11 = ReturnLength;
  }
  v13 = v21;
  if ( !v21 )
  {
    v14 = -1073741811;
    goto LABEL_19;
  }
  v14 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
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
    if ( MessageInformationClass )
    {
      v17 = MessageInformationClass - 1;
      if ( !v17 )
      {
        TokenModifiedIdMessage = AlpcpQueryTokenModifiedIdMessage(
                                   (_DWORD)v15,
                                   v24[0],
                                   (_DWORD)MessageInformation,
                                   Length,
                                   (__int64)v11);
        goto LABEL_16;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          TokenModifiedIdMessage = AlpcpQueryHandleInformationMessage(
                                     (_DWORD)v15,
                                     v24[0],
                                     (_DWORD)MessageInformation,
                                     Length,
                                     (__int64)v11);
LABEL_16:
          v14 = TokenModifiedIdMessage;
LABEL_17:
          AlpcpUnlockMessage(v16);
          goto LABEL_18;
        }
      }
      else if ( !MessageInformation && !Length && !v11 )
      {
        v14 = (*(_DWORD *)(v24[0] + 40) & 7) != 4 ? 0x103 : 0;
        goto LABEL_17;
      }
      v14 = -1073741811;
      goto LABEL_17;
    }
    TokenModifiedIdMessage = AlpcpQuerySidMessage((int)v15, v24[0], MessageInformation, Length, v11);
    goto LABEL_16;
  }
LABEL_19:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v14;
}
