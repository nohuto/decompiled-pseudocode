/*
 * XREFs of ndisSetOpenAddWakeUpPattern @ 0x1C00E3210
 * Callers:
 *     ndisOidPreAddWakeUpPattern @ 0x1C00E1080 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memcmp @ 0x1C0025D20 (memcmp.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C00E0E18 (ndisCreateWakeUpPatternEntry.c)
 */

__int64 __fastcall ndisSetOpenAddWakeUpPattern(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  unsigned int v9; // ecx
  unsigned int v10; // eax
  _DWORD *v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 *i; // rdi
  __int64 v15; // r15
  __int64 v16; // r12
  size_t v17; // r8
  _DWORD *WakeUpPatternEntry; // rcx

  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x17u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, a2);
  v6 = 0;
  *a3 = 1;
  *(_DWORD *)(a2 + 56) = 0;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_BYTE *)(v7 + 56);
  if ( v8 > 6u || v8 == 6 && *(_BYTE *)(v7 + 57) >= 0x14u )
  {
    v6 = -1073741637;
    goto LABEL_28;
  }
  v9 = *(_DWORD *)(a2 + 48);
  if ( v9 < 0x18 )
  {
    v10 = 24;
LABEL_13:
    *(_DWORD *)(a2 + 56) = v10;
    v6 = -1073676268;
    if ( (unsigned __int8)byte_1C0099612 >= 2u )
      WPP_SF_(0x18u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids);
    goto LABEL_28;
  }
  v11 = *(_DWORD **)(a2 + 40);
  v12 = (unsigned int)v11[2];
  if ( !(_DWORD)v12 || (v13 = (unsigned int)v11[3], v13 < v12 + 24) || (v10 = v13 + v11[4], v10 < (unsigned int)v13) )
  {
LABEL_9:
    v6 = -1073676267;
    goto LABEL_28;
  }
  if ( v9 < v10 )
    goto LABEL_13;
  *v11 = 0;
  for ( i = *(__int64 **)(a1 + 496); i; i = (__int64 *)*i )
  {
    if ( v11[4] == *((_DWORD *)i + 16) && v11[2] == *((_DWORD *)i + 14) )
    {
      v15 = (unsigned int)v11[3];
      v16 = *((unsigned int *)i + 15);
      v11[3] = 0;
      v17 = *((unsigned int *)i + 14) + 24LL;
      *((_DWORD *)i + 15) = 0;
      if ( !memcmp(v11, i + 6, v17) && !memcmp((char *)v11 + v15, (char *)i + v16 + 48, *((unsigned int *)i + 16)) )
      {
        v11[3] = v15;
        *((_DWORD *)i + 15) = v16;
        goto LABEL_9;
      }
      v11[3] = v15;
      *((_DWORD *)i + 15) = v16;
    }
  }
  WakeUpPatternEntry = ndisCreateWakeUpPatternEntry(v11, *(_DWORD *)(a2 + 8));
  if ( WakeUpPatternEntry )
  {
    *((_QWORD *)WakeUpPatternEntry + 3) = *(_QWORD *)(a2 + 104);
    *(_QWORD *)(a2 + 160) = WakeUpPatternEntry;
    *a3 = 0;
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_28:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qdD(0x19u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, (unsigned __int8)*a3, v6);
  return v6;
}
