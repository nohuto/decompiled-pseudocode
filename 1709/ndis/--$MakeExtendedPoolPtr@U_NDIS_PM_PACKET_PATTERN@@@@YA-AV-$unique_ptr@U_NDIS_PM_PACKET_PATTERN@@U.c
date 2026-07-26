/*
 * XREFs of ??$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U?$KFreePool@U_NDIS_PM_PACKET_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C00DED18
 * Callers:
 *     ndisXlateAddWolPatternToPacketPatternOid @ 0x1C00E2574 (ndisXlateAddWolPatternToPacketPatternOid.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 */

_QWORD *__fastcall MakeExtendedPoolPtr<_NDIS_PM_PACKET_PATTERN>(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v6; // ebp
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rsi

  if ( a4 )
    *a4 = 0;
  if ( a3 >= 0xFFFFFFE8 )
  {
    *a1 = 0LL;
  }
  else
  {
    v6 = a3 + 24;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3 + 24, 0x7877444Eu);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( a4 )
        *a4 = v6;
      memset(PoolWithTag, 0, v6);
      *a1 = v8;
      *v8 = 0LL;
      v8[1] = 0LL;
      v8[2] = 0LL;
    }
    else
    {
      *a1 = 0LL;
    }
  }
  return a1;
}
