/*
 * XREFs of ndisMiniportPreAddWoLPattern @ 0x1C00AD8AC
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C00ADAD0 (ndisOidPrePMAddWOLPattern.c)
 *     ndisOidPreAddWakeUpPattern @ 0x1C00DF880 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     ndisCompareWoLPatterns @ 0x1C00ACA04 (ndisCompareWoLPatterns.c)
 *     ndisPMPatternIdExist @ 0x1C00ACABC (ndisPMPatternIdExist.c)
 *     ndisCreateWoLPatternEntry @ 0x1C00ADA20 (ndisCreateWoLPatternEntry.c)
 *     ndisIsWoLPacketTypeSupported @ 0x1C00ADFE8 (ndisIsWoLPacketTypeSupported.c)
 *     ndisGetNewPatternEntryId @ 0x1C00AE014 (ndisGetNewPatternEntryId.c)
 */

__int64 __fastcall ndisMiniportPreAddWoLPattern(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rdi
  _DWORD *v8; // rbp
  int v9; // r8d
  __int64 OidSourceHandle; // rax
  __int64 **v11; // rcx
  __int64 v12; // r12
  __int64 *v13; // rsi
  __int64 WoLPatternEntry; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int NewPatternEntryId; // eax
  unsigned int v20; // edx
  _QWORD *v21; // rax

  v3 = 0;
  v5 = 0LL;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x3Au, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1, a2);
  v8 = *(_DWORD **)(a2 + 40);
  *a3 = 1;
  if ( !(unsigned __int8)ndisIsWoLPacketTypeSupported((unsigned int)v8[3], a1)
    && (v9 != 2 || (unsigned int)(*(_DWORD *)(a1 + 1100) - 2) > 2) )
  {
    v3 = -1073741637;
    goto LABEL_12;
  }
  OidSourceHandle = ndisGetOidSourceHandle(a2);
  v11 = (__int64 **)(a1 + 968);
  v12 = OidSourceHandle;
  v13 = *(__int64 **)(a1 + 968);
  if ( !v13 )
    goto LABEL_5;
  do
  {
    v5 = v13;
    if ( ndisCompareWoLPatterns((_DWORD *)v13 + 12, v8) )
      break;
    v13 = (__int64 *)*v13;
    v5 = 0LL;
  }
  while ( v13 );
  if ( !v5 )
    goto LABEL_18;
  v21 = v5 + 1;
  if ( v5 == (__int64 *)-8LL )
    goto LABEL_18;
  do
  {
    if ( v21[2] == v12 )
      break;
    v21 = (_QWORD *)*v21;
  }
  while ( v21 );
  if ( !v21 )
  {
LABEL_18:
    v11 = (__int64 **)(a1 + 968);
LABEL_5:
    if ( (v8[1] & 1) == 0 || (v20 = v8[37], v20 >= 0xFFFF) && !ndisPMPatternIdExist(v11, v20) )
    {
      WoLPatternEntry = ndisCreateWoLPatternEntry(v8);
      v17 = WoLPatternEntry;
      if ( WoLPatternEntry )
      {
        *(_QWORD *)(WoLPatternEntry + 24) = v12;
        *(_QWORD *)(a1 + 192) = WoLPatternEntry;
        if ( (v8[1] & 1) != 0 )
        {
          NewPatternEntryId = v8[37];
        }
        else if ( v5 )
        {
          NewPatternEntryId = *((_DWORD *)v5 + 49);
        }
        else
        {
          NewPatternEntryId = ndisGetNewPatternEntryId(a1 + 968, v15, v16, WoLPatternEntry);
        }
        v8[37] = NewPatternEntryId;
        *(_DWORD *)(v17 + 196) = NewPatternEntryId;
        *(_DWORD *)(v17 + 40) = NewPatternEntryId;
        if ( v5 )
        {
          *a3 = 1;
          *(_QWORD *)(v17 + 8) = v5 + 1;
        }
        else
        {
          *a3 = 0;
        }
      }
      else
      {
        v3 = -1073741670;
      }
      goto LABEL_12;
    }
    if ( (unsigned __int8)byte_1C0098755 >= 2u )
      WPP_SF_d(0x3Bu, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v20);
  }
  v3 = -1073676267;
LABEL_12:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qdD(0x3Cu, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1, (unsigned __int8)*a3, v3);
  return v3;
}
