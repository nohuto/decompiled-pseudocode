/*
 * XREFs of ndisMSetGeneralAttributes @ 0x1C001690C
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C2BB0 (NdisMSetMiniportAttributes.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisMSetPowerManagementCapabilities @ 0x1C0016D7C (ndisMSetPowerManagementCapabilities.c)
 *     ndisIfSetInterfaceState @ 0x1C0018DFC (ndisIfSetInterfaceState.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F1C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019FC4 (ndisMReferenceIfBlock.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisMSetRssCapabilities @ 0x1C00B6DEC (ndisMSetRssCapabilities.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C00E9070 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall ndisMSetGeneralAttributes(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  __int64 v5; // rdx
  int v6; // r8d
  unsigned int v7; // r11d
  int v8; // r10d
  unsigned int v9; // eax
  __int64 v10; // r8
  KIRQL v11; // r14
  char v12; // dl
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // ecx
  unsigned __int8 v16; // al
  __int64 result; // rax
  bool v18; // zf
  int v19; // ecx
  __int64 v20; // rcx
  unsigned int v21; // eax
  int v22; // eax
  int v23; // eax
  bool v24; // cf
  int v25; // eax
  unsigned int v26; // eax
  PVOID PoolWithTag; // rax
  __int128 v28; // xmm0
  int v29; // eax
  SIZE_T v30; // rdx
  PVOID v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  struct _NDIS_PNP_CAPABILITIES *v34; // rcx
  int v35; // eax

  v2 = a2;
  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(122LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
  {
    LOBYTE(a2) = 22;
    v32 = ndisMReferenceIfBlock(a1, a2);
    if ( !v32 )
      return 3221291025LL;
    LOBYTE(v33) = 22;
    *(_WORD *)(v2 + 180) = *(_WORD *)(v32 + 524);
    *(_DWORD *)(v2 + 8) = *(_DWORD *)(v32 + 564);
    *(_DWORD *)(v2 + 12) = *(_DWORD *)(v32 + 568);
    *(_BYTE *)(v2 + 182) = *(_BYTE *)(v32 + 556);
    *(_DWORD *)(v2 + 168) = *(_DWORD *)(v32 + 528);
    *(_DWORD *)(v2 + 176) = *(_DWORD *)(v32 + 536);
    *(_DWORD *)(v2 + 172) = *(_DWORD *)(v32 + 532);
    *(_QWORD *)(v2 + 200) = &ndisHandledWdfOids;
    *(_DWORD *)(v2 + 64) = 1500;
    *(_DWORD *)(v2 + 80) = 581;
    *(_DWORD *)(v2 + 208) = 108;
    ndisMDereferenceIfBlock(a1, v33);
  }
  v5 = 0LL;
  if ( !(_DWORD)ndisMediumArraySize )
    return 3221291033LL;
  v6 = *(_DWORD *)(v2 + 8);
  do
  {
    v7 = v5;
    v8 = *((_DWORD *)ndisMediumArray + v5);
    if ( v6 == v8 )
      break;
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < (unsigned int)ndisMediumArraySize );
  v9 = v7 + 1;
  if ( v6 == v8 )
    v9 = v7;
  if ( v9 >= (unsigned int)ndisMediumArraySize )
    return 3221291033LL;
  *(_DWORD *)(a1 + 464) = v6;
  *(_DWORD *)(a1 + 1836) = v6;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v12 = *(_BYTE *)(a1 + 88);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 729140;
  if ( (v12 & 8) == 0 )
    *(_DWORD *)(a1 + 344) = *(_DWORD *)(v2 + 56);
  if ( (v12 & 0x10) == 0 )
  {
    *(_QWORD *)(a1 + 2776) = *(_QWORD *)(v2 + 48);
    *(_QWORD *)(a1 + 2768) = *(_QWORD *)(v2 + 32);
    *(_DWORD *)(a1 + 348) = *(_DWORD *)(v2 + 60);
    *(_DWORD *)(a1 + 816) = *(_DWORD *)(v2 + 212);
  }
  if ( (v12 & 1) == 0 )
  {
    v13 = *(_DWORD *)(v2 + 56);
    v14 = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 480) = v13;
    if ( v13 == 1 )
      v15 = v14 | 0x20000000;
    else
      v15 = v14 & 0xDFFFFFFF;
    *(_DWORD *)(a1 + 120) = v15;
  }
  if ( (v12 & 2) == 0 )
  {
    *(_QWORD *)(a1 + 800) = *(_QWORD *)(v2 + 48);
    *(_QWORD *)(a1 + 792) = *(_QWORD *)(v2 + 32);
  }
  if ( (v12 & 4) == 0 )
    *(_DWORD *)(a1 + 488) = *(_DWORD *)(v2 + 60);
  LOBYTE(v10) = v11;
  ndisIfSetInterfaceState(a1, 0LL, v10);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v11);
  *(_BYTE *)(a1 + 929) = 1;
  *(_QWORD *)(a1 + 1120) = 0LL;
  *(_QWORD *)(a1 + 1128) = 0LL;
  *(_DWORD *)(a1 + 1136) = 0;
  v16 = *(_BYTE *)(v2 + 1);
  if ( v16 == 1 )
  {
    v34 = *(struct _NDIS_PNP_CAPABILITIES **)(v2 + 72);
    if ( v34 )
    {
      ndisConvertPnpCapabilitiesToPM(v34, (struct _NDIS_PM_CAPABILITIES *)(a1 + 1000));
      goto LABEL_26;
    }
    goto LABEL_69;
  }
  if ( v16 < 2u || !*(_QWORD *)(v2 + 216) )
  {
LABEL_69:
    if ( *(_BYTE *)(a1 + 32) >= 6u )
      *(_BYTE *)(a1 + 929) = 0;
    goto LABEL_26;
  }
  result = ndisMSetPowerManagementCapabilities(a1);
  v4 = result;
  if ( (_DWORD)result )
    return result;
LABEL_26:
  if ( *(_QWORD *)(v2 + 160) )
  {
    result = ndisMSetRssCapabilities(a1);
    v4 = result;
    if ( (_DWORD)result )
      return result;
  }
  v18 = (*(_BYTE *)(a1 + 4984) & 1) == 0;
  v19 = *(_DWORD *)(v2 + 84);
  *(_DWORD *)(a1 + 2296) = v19;
  if ( !v18 )
    *(_DWORD *)(a1 + 2296) = v19 | 0x20;
  v20 = *(int *)(a1 + 464);
  *(_QWORD *)(a1 + 2280) = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(a1 + 2288) = *(_QWORD *)(v2 + 40);
  *(_DWORD *)(a1 + 568) |= *(_DWORD *)(v2 + 80);
  if ( !(_DWORD)v20 )
  {
    v21 = *(_DWORD *)(v2 + 64);
    if ( v21 > 0x200 )
      v21 = 512;
LABEL_33:
    *(_DWORD *)(a1 + 596) = v21;
    goto LABEL_34;
  }
  if ( (_DWORD)v20 != 3 )
  {
    if ( (_DWORD)v20 == 4
      || (int)v20 > 8 && ((int)v20 <= 10 || (int)v20 > 14 && ((int)v20 <= 16 || (unsigned int)(v20 - 18) <= 1)) )
    {
      *(_DWORD *)(a1 + 596) = *(_DWORD *)(v2 + 64);
    }
    if ( (int)v20 < 20 )
      goto LABEL_34;
    v21 = *(_DWORD *)(v2 + 64);
    goto LABEL_33;
  }
  *(_DWORD *)(a1 + 596) = 512;
LABEL_34:
  if ( ((unsigned int)v20 <= 0x13 && ndisMediaTypeCl[v20] || (_DWORD)v20 == 3)
    && (*(_DWORD *)(a1 + 568) & 0x80000001) == 0x80000001 )
  {
    *(_DWORD *)(a1 + 596) = 512;
  }
  if ( (int)v20 >= 2 && ((int)v20 <= 8 || (int)v20 > 9 && ((int)v20 <= 15 || (_DWORD)v20 == 17)) || (int)v20 >= 20 )
    v22 = 0;
  else
    v22 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(a1 + 1832) = v22;
  if ( (*(_DWORD *)(a1 + 568) & 8) != 0 )
    *(_DWORD *)(a1 + 120) |= 0x8000000u;
  v23 = *(_DWORD *)(a1 + 464);
  if ( v23 )
  {
    if ( v23 == 16 )
      *(_DWORD *)(a1 + 584) = *(_DWORD *)(v2 + 88);
  }
  else
  {
    v24 = *(_BYTE *)(a1 + 32) < 6u;
    *(_DWORD *)(a1 + 584) = *(_DWORD *)(v2 + 88);
    if ( !v24 && *(_DWORD *)(a1 + 1832) == 1 )
      return 3221225659LL;
  }
  v25 = *(_DWORD *)(a1 + 1832);
  if ( !v25 )
  {
    v25 = 0;
    if ( *(_DWORD *)(a1 + 4192) == 14 )
    {
      *(_DWORD *)(a1 + 1832) = 14;
      v25 = 14;
    }
  }
  v24 = *(_BYTE *)(a1 + 32) < 6u;
  *(_DWORD *)(a1 + 3800) = v25;
  if ( v24 && (v35 = *(_DWORD *)(a1 + 2696)) != 0 )
    *(_DWORD *)(v2 + 184) = v35;
  else
    *(_DWORD *)(a1 + 2696) = *(_DWORD *)(v2 + 184);
  *(_DWORD *)(a1 + 3016) = *(_DWORD *)(v2 + 192);
  *(_DWORD *)(a1 + 3020) = *(_DWORD *)(v2 + 196);
  v26 = *(_DWORD *)(v2 + 208);
  if ( v26 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v26, 0x6D61444Eu);
    *(_QWORD *)(a1 + 496) = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(v2 + 200), *(unsigned int *)(v2 + 208));
      *(_DWORD *)(a1 + 200) = *(_DWORD *)(v2 + 208);
    }
  }
  v28 = *(_OWORD *)(a1 + 2700);
  *(_DWORD *)(a1 + 3072) = *(_DWORD *)(v2 + 168);
  *(_DWORD *)(a1 + 3080) = *(_DWORD *)(v2 + 176);
  *(_DWORD *)(a1 + 3092) = *(_DWORD *)(v2 + 196);
  *(_DWORD *)(a1 + 3088) = *(_DWORD *)(v2 + 192);
  *(_DWORD *)(a1 + 3024) = *(_DWORD *)v2;
  *(_DWORD *)(a1 + 3048) = *(_DWORD *)(v2 + 64);
  *(_DWORD *)(a1 + 3052) = *(_DWORD *)(a1 + 568);
  *(_DWORD *)(a1 + 3060) = *(_DWORD *)(v2 + 88);
  *(_DWORD *)(a1 + 3028) = *(_DWORD *)(v2 + 16);
  v29 = *(_DWORD *)(a1 + 2716);
  *(_OWORD *)(a1 + 3112) = v28;
  *(_DWORD *)(a1 + 3128) = v29;
  *(_QWORD *)(a1 + 3064) = a1 + 3112;
  *(_DWORD *)(a1 + 3056) = *(_DWORD *)(v2 + 84);
  *(_DWORD *)(a1 + 3084) = *(_DWORD *)(v2 + 184);
  *(_QWORD *)(a1 + 3032) = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(a1 + 3040) = *(_QWORD *)(v2 + 40);
  v30 = *(unsigned int *)(v2 + 208);
  if ( (_DWORD)v30 || *(_BYTE *)(a1 + 32) < 6u && *(_DWORD *)(a1 + 200) )
  {
    if ( *(_BYTE *)(a1 + 32) < 6u )
    {
      v30 = *(unsigned int *)(a1 + 200);
      *(_DWORD *)(v2 + 208) = v30;
      *(_QWORD *)(v2 + 200) = *(_QWORD *)(a1 + 496);
    }
    v31 = ExAllocatePoolWithTag(NonPagedPoolNx, v30, 0x6D61444Eu);
    *(_QWORD *)(a1 + 3096) = v31;
    if ( v31 )
    {
      memmove(v31, *(const void **)(v2 + 200), *(unsigned int *)(v2 + 208));
      *(_DWORD *)(a1 + 3104) = *(_DWORD *)(v2 + 208);
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(123LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, v4);
  return 0LL;
}
