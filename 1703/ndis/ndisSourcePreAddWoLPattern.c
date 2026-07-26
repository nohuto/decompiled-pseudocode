/*
 * XREFs of ndisSourcePreAddWoLPattern @ 0x1C00BA844
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C00BAB50 (ndisOidPrePMAddWOLPattern.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     ndisCreateWoLPatternEntry @ 0x1C00BAAA0 (ndisCreateWoLPatternEntry.c)
 *     ndisIsWoLPacketTypeSupported @ 0x1C00BB060 (ndisIsWoLPacketTypeSupported.c)
 *     ndisCompareWoLPatterns @ 0x1C00BB0C4 (ndisCompareWoLPatterns.c)
 */

__int64 __fastcall ndisSourcePreAddWoLPattern(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  unsigned int v8; // ebx
  unsigned int *v9; // r15
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  __int64 WoLPatternEntry; // rcx

  v8 = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(0x38u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, (__int64)a3);
  v9 = (unsigned int *)a3[5];
  *a4 = 1;
  if ( a1 )
    v10 = *(_QWORD *)(a1 + 16);
  else
    v10 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int8)ndisIsWoLPacketTypeSupported(v9[3], v10) )
  {
    if ( a1 )
      v11 = *(_QWORD **)(a1 + 504);
    else
      v11 = *(_QWORD **)(a2 + 864);
    if ( !v11 )
      goto LABEL_9;
    do
    {
      if ( (unsigned __int8)ndisCompareWoLPatterns(v11 + 6, v9) )
        break;
      v11 = (_QWORD *)*v11;
    }
    while ( v11 );
    if ( v11 )
    {
      v8 = -1073676267;
    }
    else
    {
LABEL_9:
      WoLPatternEntry = ndisCreateWoLPatternEntry(v9);
      if ( WoLPatternEntry )
      {
        *(_QWORD *)(WoLPatternEntry + 24) = a3[13];
        a3[20] = WoLPatternEntry;
        *a4 = 0;
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  else
  {
    v8 = -1073741637;
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_dd(0x39u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, (unsigned __int8)*a4, v8);
  return v8;
}
