/*
 * XREFs of ndisReferenceMiniportByName @ 0x1C01003B4
 * Callers:
 *     NdisEnumerateFilterModules @ 0x1C0058770 (NdisEnumerateFilterModules.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C005FBBC (ndisIMDeleteIfStackEntry.c)
 *     ndisWmiQueryAllData @ 0x1C00AC238 (ndisWmiQueryAllData.c)
 *     ndisWmiExecuteMethod @ 0x1C00AC874 (ndisWmiExecuteMethod.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00AD358 (ndisWmiQuerySingleInstance.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00E46B0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00E4EE4 (ndisHandleBindNotification.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     memcmp @ 0x1C0025D20 (memcmp.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C0041C64 (WPP_SF_Z.c)
 */

void __fastcall ndisReferenceMiniportByName(PCUNICODE_STRING SourceString, __int64 *a2, char a3, unsigned __int8 a4)
{
  char v5; // r14
  unsigned int v8; // r15d
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // rsi
  __int64 MiniportQueue; // rbx
  unsigned __int16 Length; // bp
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // r8
  __int64 v17; // r9
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  KIRQL v19; // [rsp+70h] [rbp+8h]

  v5 = a3;
  v8 = 1;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_Z(0x21u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, &SourceString->Length);
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
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v10 = ndisMiniDriverList;
    v19 = v9;
    if ( ndisMiniDriverList )
    {
      while ( 1 )
      {
        KeAcquireSpinLockAtDpcLevel(&v10->Ref.SpinLock);
        MiniportQueue = (__int64)v10->MiniportQueue;
        if ( !MiniportQueue )
          goto LABEL_20;
        Length = DestinationString.Length;
        while ( 1 )
        {
          v13 = *(_DWORD *)(MiniportQueue + 124) & 0x2000000;
          if ( !v5 )
            break;
          if ( !v13
            && Length == *(_WORD *)(MiniportQueue + 3832)
            && !memcmp(DestinationString.Buffer, *(const void **)(MiniportQueue + 3840), Length) )
          {
            goto LABEL_18;
          }
LABEL_14:
          MiniportQueue = *(_QWORD *)(MiniportQueue + 8);
          if ( !MiniportQueue )
            goto LABEL_20;
        }
        if ( v13 )
          goto LABEL_14;
        v14 = *(_QWORD *)(MiniportQueue + 3792);
        if ( !v14 )
          goto LABEL_14;
        v15 = *(_DWORD *)v14;
        if ( *(_DWORD *)v14 < v8
          || Length != *(_WORD *)(v14 + 8)
          || memcmp(DestinationString.Buffer, *(const void **)(v14 + 16), Length) )
        {
          break;
        }
        v8 = v15;
        if ( *a2 )
        {
          ndisDereferenceMiniport(*a2, a4, v16, v17);
          *a2 = 0LL;
          v8 = **(_DWORD **)(MiniportQueue + 3792);
        }
LABEL_18:
        if ( ndisReferenceMiniport(MiniportQueue) )
          *a2 = MiniportQueue;
LABEL_20:
        KeReleaseSpinLockFromDpcLevel(&v10->Ref.SpinLock);
        v10 = v10->NextDriver;
        v5 = a3;
        if ( !v10 )
        {
          v9 = v19;
          goto LABEL_22;
        }
      }
      v5 = a3;
      goto LABEL_14;
    }
LABEL_22:
    KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    if ( (unsigned __int8)byte_1C0099614 >= 4u )
      WPP_SF_q(0x22u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, *a2);
  }
}
