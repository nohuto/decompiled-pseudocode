/*
 * XREFs of ndisQuerySetMiniportEx2 @ 0x1C001F144
 * Callers:
 *     ndisQuerySupportedGuidToOidList @ 0x1C00C3A64 (ndisQuerySupportedGuidToOidList.c)
 *     ndisQueryOidList @ 0x1C00C405C (ndisQueryOidList.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C000AE70 (ndisQuerySetMiniportEx.c)
 *     WPP_SF_Ddd @ 0x1C0043AE4 (WPP_SF_Ddd_ea_1C0043AE4.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx2(
        _QWORD *a1,
        __int64 a2,
        struct _NDIS_OID_REQUEST *a3,
        __int64 a4,
        int a5,
        int a6,
        ULONG Tag,
        _QWORD *a8,
        UINT *a9,
        UINT *a10)
{
  UINT BytesNeeded; // esi
  void *v11; // rdi
  unsigned int i; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  PVOID PoolWithTag; // rax

  BytesNeeded = 0;
  v11 = 0LL;
  for ( i = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, 0LL); ; i = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, 0LL) )
  {
    v17 = i;
    if ( i != -1073676268 && i != -2147483643 && i != -1073676266 )
      break;
    if ( a3->DATA.QUERY_INFORMATION.BytesNeeded <= BytesNeeded )
    {
      if ( (unsigned __int8)byte_1C0099612 >= 2u )
        WPP_SF_Ddd(v16, v15, a3->DATA.QUERY_INFORMATION.Oid);
      v17 = -1073741823;
      goto LABEL_19;
    }
    BytesNeeded = a3->DATA.QUERY_INFORMATION.BytesNeeded;
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      BytesNeeded = a3->DATA.QUERY_INFORMATION.BytesNeeded;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, BytesNeeded, Tag);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( (unsigned __int8)byte_1C0099612 >= 2u )
        WPP_SF_dd(11LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, BytesNeeded, a3->DATA.QUERY_INFORMATION.Oid);
      v17 = -1073741670;
      break;
    }
    a3->DATA.QUERY_INFORMATION.InformationBuffer = PoolWithTag;
    a3->DATA.QUERY_INFORMATION.InformationBufferLength = BytesNeeded;
  }
  if ( !v17 )
  {
    *a10 = a3->DATA.QUERY_INFORMATION.BytesWritten;
    goto LABEL_7;
  }
LABEL_19:
  BytesNeeded = 0;
  *a10 = 0;
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v11 = 0LL;
LABEL_7:
  *a8 = v11;
  *a9 = BytesNeeded;
  return v17;
}
