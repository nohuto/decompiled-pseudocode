/*
 * XREFs of ndisSourcePreAddWoLPattern @ 0x1C00ACAD8
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C00ADAD0 (ndisOidPrePMAddWOLPattern.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     ndisCompareWoLPatterns @ 0x1C00ACA04 (ndisCompareWoLPatterns.c)
 *     ndisCreateWoLPatternEntry @ 0x1C00ADA20 (ndisCreateWoLPatternEntry.c)
 *     ndisIsWoLPacketTypeSupported @ 0x1C00ADFE8 (ndisIsWoLPacketTypeSupported.c)
 */

__int64 __fastcall ndisSourcePreAddWoLPattern(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  unsigned int v8; // ebx
  _DWORD *v9; // r15
  __int64 v10; // rdx
  __int64 *v11; // rdi
  __int64 WoLPatternEntry; // rcx

  v8 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x38u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, (__int64)a3);
  v9 = (_DWORD *)a3[5];
  *a4 = 1;
  if ( a1 )
    v10 = *(_QWORD *)(a1 + 16);
  else
    v10 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int8)ndisIsWoLPacketTypeSupported((unsigned int)v9[3], v10) )
  {
    if ( a1 )
      v11 = *(__int64 **)(a1 + 504);
    else
      v11 = *(__int64 **)(a2 + 864);
    if ( !v11 )
      goto LABEL_9;
    do
    {
      if ( ndisCompareWoLPatterns((_DWORD *)v11 + 12, v9) )
        break;
      v11 = (__int64 *)*v11;
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
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_dd(0x39u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, (unsigned __int8)*a4, v8);
  return v8;
}
