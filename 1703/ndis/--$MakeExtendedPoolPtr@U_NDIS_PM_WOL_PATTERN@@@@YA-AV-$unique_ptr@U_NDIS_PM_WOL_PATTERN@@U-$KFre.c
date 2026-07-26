/*
 * XREFs of ??$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C00D45D0
 * Callers:
 *     ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00D7F88 (ndisXlateAddPacketPatternToWolPatternOid.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 */

_QWORD *__fastcall MakeExtendedPoolPtr<_NDIS_PM_WOL_PATTERN>(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v6; // esi
  PVOID PoolWithTag; // rax
  void *v8; // rbp

  if ( a4 )
    *a4 = 0;
  if ( a3 >= 0xFFFFFF3C )
  {
    *a1 = 0LL;
  }
  else
  {
    v6 = a3 + 196;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3 + 196, 0x7877444Eu);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( a4 )
        *a4 = v6;
      memset(PoolWithTag, 0, v6);
      memset(v8, 0, 0xC4uLL);
      *a1 = v8;
    }
    else
    {
      *a1 = 0LL;
    }
  }
  return a1;
}
