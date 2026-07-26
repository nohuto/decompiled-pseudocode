/*
 * XREFs of ndisMiniportPreAddProtocolOffload @ 0x1C00D4D0C
 * Callers:
 *     ndisOidPreAddPMProtocolOffload @ 0x1C00D50A0 (ndisOidPreAddPMProtocolOffload.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     ndisGetNewPatternEntryId @ 0x1C00BB08C (ndisGetNewPatternEntryId.c)
 *     ndisPMPatternIdExist @ 0x1C00BB0A8 (ndisPMPatternIdExist.c)
 *     ndisComparePMProtocolOffloads @ 0x1C00D48E4 (ndisComparePMProtocolOffloads.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C00D4A60 (ndisCreatePMProtocolOffloadEntry.c)
 *     ndisIsPMProtocolOffloadSupported @ 0x1C00D4CB0 (ndisIsPMProtocolOffloadSupported.c)
 */

__int64 __fastcall ndisMiniportPreAddProtocolOffload(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rdi
  _DWORD *v8; // rsi
  __int64 OidSourceHandle; // rax
  __int64 **v10; // rcx
  __int64 v11; // r12
  _QWORD *v12; // r14
  _QWORD *v13; // rax
  unsigned int v14; // edx
  _DWORD *PMProtocolOffloadEntry; // rax
  _DWORD *v16; // r9
  int NewPatternEntryId; // eax

  v3 = 0;
  v5 = 0LL;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x5Eu, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1, a2);
  v8 = *(_DWORD **)(a2 + 40);
  *a3 = 1;
  if ( !ndisIsPMProtocolOffloadSupported(v8[3], a1) )
  {
    v3 = -1073741637;
    goto LABEL_30;
  }
  OidSourceHandle = ndisGetOidSourceHandle(a2);
  v10 = (__int64 **)(a1 + 976);
  v11 = OidSourceHandle;
  v12 = *(_QWORD **)(a1 + 976);
  if ( !v12 )
    goto LABEL_15;
  do
  {
    v5 = v12;
    if ( ndisComparePMProtocolOffloads((__int64)(v12 + 6), (__int64)v8) )
      break;
    v12 = (_QWORD *)*v12;
    v5 = 0LL;
  }
  while ( v12 );
  if ( !v5 )
    goto LABEL_14;
  v13 = v5 + 1;
  if ( v5 == (_QWORD *)-8LL )
    goto LABEL_14;
  do
  {
    if ( v13[2] == v11 )
      break;
    v13 = (_QWORD *)*v13;
  }
  while ( v13 );
  if ( !v13 )
  {
LABEL_14:
    v10 = (__int64 **)(a1 + 976);
LABEL_15:
    if ( (v8[1] & 1) == 0 || (v14 = v8[37], v14 >= 0xFFFF) && !ndisPMPatternIdExist(v10, v14) )
    {
      PMProtocolOffloadEntry = ndisCreatePMProtocolOffloadEntry(v8, *(_DWORD *)(a2 + 8));
      v16 = PMProtocolOffloadEntry;
      if ( PMProtocolOffloadEntry )
      {
        *((_QWORD *)PMProtocolOffloadEntry + 3) = v11;
        *(_QWORD *)(a1 + 192) = PMProtocolOffloadEntry;
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
          NewPatternEntryId = ndisGetNewPatternEntryId((__int64 **)(a1 + 976));
        }
        v8[37] = NewPatternEntryId;
        v16[49] = NewPatternEntryId;
        v16[10] = NewPatternEntryId;
        if ( v5 )
        {
          *a3 = 1;
          *((_QWORD *)v16 + 1) = v5 + 1;
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
      goto LABEL_30;
    }
    if ( (unsigned __int8)byte_1C0092615 >= 2u )
      WPP_SF_d(0x5Fu, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, v14);
  }
  v3 = -1073676267;
LABEL_30:
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qdD(0x60u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1, (unsigned __int8)*a3, v3);
  return v3;
}
