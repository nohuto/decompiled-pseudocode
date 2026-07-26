/*
 * XREFs of memcmp @ 0x1C0028680
 * Callers:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C00093E0 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D500 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisSetOpenRSSParameters @ 0x1C0021618 (ndisSetOpenRSSParameters.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0041514 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C0045244 (ndisIfUpdateCurrentMacAddress.c)
 *     ndisPostRemoveMiniportWakeUpPattern @ 0x1C004C6A4 (ndisPostRemoveMiniportWakeUpPattern.c)
 *     ndisRemoveOpenWakeUpPattern @ 0x1C004CD14 (ndisRemoveOpenWakeUpPattern.c)
 *     ndisMapOpenByName @ 0x1C00509FC (ndisMapOpenByName.c)
 *     ndisMIndicateQosParametersChange @ 0x1C005FA8C (ndisMIndicateQosParametersChange.c)
 *     ndisCaptureStackTrace @ 0x1C006C5A4 (ndisCaptureStackTrace.c)
 *     ndisFSetRestartAttributes @ 0x1C00B7890 (ndisFSetRestartAttributes.c)
 *     ndisCompareWoLPatterns @ 0x1C00BB0C4 (ndisCompareWoLPatterns.c)
 *     ?ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C00D00F8 (-ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     ?ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C00D0188 (-ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     ndisComparePMProtocolOffloads @ 0x1C00D48E4 (ndisComparePMProtocolOffloads.c)
 *     ndisPreRemoveMiniportWakeUpPattern @ 0x1C00D63C8 (ndisPreRemoveMiniportWakeUpPattern.c)
 *     ndisPreRemoveOpenWakeUpPattern @ 0x1C00D6560 (ndisPreRemoveOpenWakeUpPattern.c)
 *     ndisSetAddWakeUpPattern @ 0x1C00D6FD8 (ndisSetAddWakeUpPattern.c)
 *     ndisSetOpenAddWakeUpPattern @ 0x1C00D75D4 (ndisSetOpenAddWakeUpPattern.c)
 *     ndisIMQueueDeviceInstance @ 0x1C00DA4D4 (ndisIMQueueDeviceInstance.c)
 *     ndisReferenceMiniportByName @ 0x1C00F5008 (ndisReferenceMiniportByName.c)
 *     ndisFindRootDevice @ 0x1C0102110 (ndisFindRootDevice.c)
 *     ndisReferenceProtocolByName @ 0x1C01033F8 (ndisReferenceProtocolByName.c)
 *     ndisFindMiniportOnGlobalList @ 0x1C0104398 (ndisFindMiniportOnGlobalList.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto mcmp30;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
mcmp30:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto mcmp_adjust8;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto mcmp_adjust16;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
mcmp_adjust16:
        Buf1 = (char *)Buf1 + 8;
mcmp_adjust8:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto mcmp70;
      }
    }
  }
  else
  {
mcmp70:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto mcmp30;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto mcmp30;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
