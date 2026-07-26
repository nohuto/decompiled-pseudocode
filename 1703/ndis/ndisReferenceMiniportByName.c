/*
 * XREFs of ndisReferenceMiniportByName @ 0x1C00F5008
 * Callers:
 *     NdisEnumerateFilterModules @ 0x1C0058C90 (NdisEnumerateFilterModules.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C005F348 (ndisIMDeleteIfStackEntry.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A69C8 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00A6DE0 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00A72F4 (ndisWmiQueryAllData.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00D8B84 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00D93C4 (ndisHandleBindNotification.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     memcmp @ 0x1C0028680 (memcmp.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C0044008 (WPP_SF_Z.c)
 */

void __fastcall ndisReferenceMiniportByName(PCUNICODE_STRING SourceString, __int64 *a2, char a3, unsigned __int8 a4)
{
  unsigned int v7; // r12d
  KIRQL v8; // al
  struct _NDIS_M_DRIVER_BLOCK *v9; // rsi
  KIRQL v10; // r13
  __int64 MiniportQueue; // rbx
  unsigned __int16 Length; // bp
  __int64 v13; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  v7 = 1;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_Z(0x25u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, &SourceString->Length);
  *a2 = 0LL;
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          0x7473444Eu);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v9 = ndisMiniDriverList;
    v10 = v8;
    while ( 1 )
    {
      if ( !v9 )
      {
        KeReleaseSpinLock(&ndisMiniDriverListLock, v10);
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        if ( (unsigned __int8)byte_1C0092614 >= 4u )
          WPP_SF_q(0x26u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, *a2);
        return;
      }
      KeAcquireSpinLockAtDpcLevel(&v9->Ref.SpinLock);
      MiniportQueue = (__int64)v9->MiniportQueue;
      if ( !MiniportQueue )
        goto LABEL_19;
      Length = DestinationString.Length;
      while ( a3 )
      {
        if ( (*(_DWORD *)(MiniportQueue + 124) & 0x2000000) == 0
          && Length == *(_WORD *)(MiniportQueue + 3832)
          && !memcmp(DestinationString.Buffer, *(const void **)(MiniportQueue + 3840), Length) )
        {
          goto LABEL_17;
        }
LABEL_22:
        MiniportQueue = *(_QWORD *)(MiniportQueue + 8);
        if ( !MiniportQueue )
          goto LABEL_19;
      }
      if ( (*(_DWORD *)(MiniportQueue + 124) & 0x2000000) != 0 )
        goto LABEL_22;
      v13 = *(_QWORD *)(MiniportQueue + 3792);
      if ( !v13
        || *(_DWORD *)v13 < v7
        || Length != *(_WORD *)(v13 + 8)
        || memcmp(DestinationString.Buffer, *(const void **)(v13 + 16), Length) )
      {
        goto LABEL_22;
      }
      if ( *a2 )
      {
        ndisDereferenceMiniport(*a2, a4);
        *a2 = 0LL;
      }
      v7 = **(_DWORD **)(MiniportQueue + 3792);
LABEL_17:
      if ( ndisReferenceMiniport(MiniportQueue, a4) )
        *a2 = MiniportQueue;
LABEL_19:
      KeReleaseSpinLockFromDpcLevel(&v9->Ref.SpinLock);
      v9 = v9->NextDriver;
    }
  }
}
