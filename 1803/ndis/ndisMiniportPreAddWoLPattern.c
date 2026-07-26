/*
 * XREFs of ndisMiniportPreAddWoLPattern @ 0x1C00C54A8
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C00C56D0 (ndisOidPrePMAddWOLPattern.c)
 *     ndisOidPreAddWakeUpPattern @ 0x1C00E1080 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ndisCreateWoLPatternEntry @ 0x1C00C561C (ndisCreateWoLPatternEntry.c)
 *     ndisIsWoLPacketTypeSupported @ 0x1C00C5BD8 (ndisIsWoLPacketTypeSupported.c)
 *     ndisGetNewPatternEntryId @ 0x1C00C5C04 (ndisGetNewPatternEntryId.c)
 *     ndisCompareWoLPatterns @ 0x1C00C5C30 (ndisCompareWoLPatterns.c)
 *     ndisPMPatternIdExist @ 0x1C00C5CE4 (ndisPMPatternIdExist.c)
 */

__int64 __fastcall ndisMiniportPreAddWoLPattern(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rdi
  _DWORD *v8; // rbp
  int v9; // r8d
  __int64 OidSourceHandle; // r12
  _QWORD *v11; // rsi
  __int64 WoLPatternEntry; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int NewPatternEntryId; // eax
  unsigned int v18; // edx
  _QWORD *v19; // rax

  v3 = 0;
  v5 = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x3Au, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, a2);
  v8 = *(_DWORD **)(a2 + 40);
  *a3 = 1;
  if ( (unsigned __int8)ndisIsWoLPacketTypeSupported((unsigned int)v8[3], a1)
    || v9 == 2 && (unsigned int)(*(_DWORD *)(a1 + 1100) - 2) <= 2 )
  {
    OidSourceHandle = ndisGetOidSourceHandle(a2);
    v11 = *(_QWORD **)(a1 + 968);
    if ( !v11 )
      goto LABEL_38;
    do
    {
      v5 = v11;
      if ( (unsigned __int8)ndisCompareWoLPatterns(v11 + 6, v8) )
        break;
      v11 = (_QWORD *)*v11;
      v5 = 0LL;
    }
    while ( v11 );
    if ( !v5 )
      goto LABEL_38;
    v19 = v5 + 1;
    if ( v5 == (_QWORD *)-8LL )
      goto LABEL_38;
    do
    {
      if ( v19[2] == OidSourceHandle )
        break;
      v19 = (_QWORD *)*v19;
    }
    while ( v19 );
    if ( !v19 )
    {
LABEL_38:
      if ( (v8[1] & 1) == 0 || (v18 = v8[37], v18 >= 0xFFFF) && !(unsigned __int8)ndisPMPatternIdExist() )
      {
        WoLPatternEntry = ndisCreateWoLPatternEntry(v8);
        v15 = WoLPatternEntry;
        if ( WoLPatternEntry )
        {
          *(_QWORD *)(WoLPatternEntry + 24) = OidSourceHandle;
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
            NewPatternEntryId = ndisGetNewPatternEntryId(a1 + 968, v13, v14, WoLPatternEntry);
          }
          v8[37] = NewPatternEntryId;
          *(_DWORD *)(v15 + 196) = NewPatternEntryId;
          *(_DWORD *)(v15 + 40) = NewPatternEntryId;
          if ( v5 )
          {
            *a3 = 1;
            *(_QWORD *)(v15 + 8) = v5 + 1;
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
      if ( (unsigned __int8)byte_1C0099615 >= 2u )
        WPP_SF_d(0x3Bu, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, v18);
    }
    v3 = -1073676267;
  }
  else
  {
    v3 = -1073741637;
  }
LABEL_12:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qdD(0x3Cu, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, (unsigned __int8)*a3, v3);
  return v3;
}
