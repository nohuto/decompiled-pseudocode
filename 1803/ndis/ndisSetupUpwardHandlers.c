/*
 * XREFs of ndisSetupUpwardHandlers @ 0x1C001B098
 * Callers:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001B040 (ndisSetupLwfMiniportHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetupUpwardHandlers(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  bool v7; // zf
  __int64 v8; // rcx
  bool v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 2056);
  v3 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(67LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
  *(_QWORD *)(v1 + 472) = *(_QWORD *)(a1 + 2440);
  *(_QWORD *)(v1 + 480) = *(_QWORD *)(a1 + 2400);
  *(_QWORD *)(v1 + 488) = *(_QWORD *)(a1 + 2408);
  *(_QWORD *)(v1 + 496) = *(_QWORD *)(a1 + 2416);
  *(_QWORD *)(v1 + 504) = *(_QWORD *)(a1 + 2448);
  *(_QWORD *)(v1 + 512) = *(_QWORD *)(a1 + 2320);
  *(_QWORD *)(v1 + 520) = *(_QWORD *)(a1 + 2328);
  *(_QWORD *)(v1 + 528) = *(_QWORD *)(a1 + 2336);
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 248LL);
  v5 = *(_DWORD *)(v1 + 60);
  if ( v4 )
    v6 = v5 | 1;
  else
    v6 = v5 & 0xFFFFFFFE;
  v7 = v4 == 0;
  *(_DWORD *)(v1 + 60) = v6;
  v8 = *(_QWORD *)(v1 + 112);
  v9 = !v7;
  *(_BYTE *)(a1 + 1999) = 0;
  while ( v8 )
  {
    v12 = *(_QWORD *)(v8 + 120);
    if ( v9 || !*(_QWORD *)(*(_QWORD *)(v8 + 16) + 248LL) )
    {
      *(_DWORD *)(v8 + 60) &= ~1u;
    }
    else
    {
      *(_DWORD *)(v8 + 60) |= 1u;
      v9 = 1;
    }
    v13 = v3 + 1;
    if ( (*(_DWORD *)(v12 + 56) & 0x8000) == 0 )
      v13 = v3;
    v3 = v13;
    v14 = *(_QWORD *)(v12 + 600);
    if ( v14 )
    {
      *(_QWORD *)(v8 + 472) = v14;
      *(_QWORD *)(v8 + 480) = *(_QWORD *)(v12 + 24);
      *(_QWORD *)(v8 + 488) = *(_QWORD *)(v12 + 800);
      v10 = v12;
    }
    else
    {
      *(_QWORD *)(v8 + 472) = *(_QWORD *)(v12 + 472);
      *(_QWORD *)(v8 + 480) = *(_QWORD *)(v12 + 480);
      *(_QWORD *)(v8 + 488) = *(_QWORD *)(v12 + 488);
      v10 = *(_QWORD *)(v12 + 496);
    }
    *(_QWORD *)(v8 + 496) = v10;
    v11 = *(_QWORD *)(v12 + 616);
    if ( v11 )
    {
      if ( !v3 )
      {
        ++*(_BYTE *)(a1 + 1999);
        v11 = *(_QWORD *)(v12 + 616);
      }
      *(_QWORD *)(v8 + 504) = v11;
      *(_QWORD *)(v8 + 512) = *(_QWORD *)(v12 + 24);
      *(_QWORD *)(v8 + 520) = *(_QWORD *)(v12 + 800);
    }
    else
    {
      *(_QWORD *)(v8 + 504) = *(_QWORD *)(v12 + 504);
      *(_QWORD *)(v8 + 512) = *(_QWORD *)(v12 + 512);
      *(_QWORD *)(v8 + 520) = *(_QWORD *)(v12 + 520);
      v12 = *(_QWORD *)(v12 + 528);
    }
    *(_QWORD *)(v8 + 528) = v12;
    v8 = *(_QWORD *)(v8 + 112);
  }
  v15 = *(_QWORD *)(a1 + 2048);
  v16 = v3 + 1;
  v17 = *(_QWORD *)(v15 + 600);
  if ( (*(_DWORD *)(v15 + 56) & 0x8000) == 0 )
    v16 = v3;
  if ( v17 )
  {
    *(_QWORD *)(a1 + 2624) = v17;
    *(_QWORD *)(a1 + 2584) = *(_QWORD *)(v15 + 24);
    *(_QWORD *)(a1 + 2592) = *(_QWORD *)(v15 + 800);
    v18 = v15;
  }
  else
  {
    *(_QWORD *)(a1 + 2624) = *(_QWORD *)(v15 + 472);
    *(_QWORD *)(a1 + 2584) = *(_QWORD *)(v15 + 480);
    *(_QWORD *)(a1 + 2592) = *(_QWORD *)(v15 + 488);
    v18 = *(_QWORD *)(v15 + 496);
  }
  *(_QWORD *)(a1 + 2600) = v18;
  v19 = *(_QWORD *)(v15 + 616);
  if ( v19 )
  {
    if ( !v16 )
    {
      ++*(_BYTE *)(a1 + 1999);
      v19 = *(_QWORD *)(v15 + 616);
    }
    *(_QWORD *)(a1 + 2632) = v19;
    *(_QWORD *)(a1 + 2504) = *(_QWORD *)(v15 + 24);
    result = *(_QWORD *)(v15 + 800);
    *(_QWORD *)(a1 + 2512) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 2632) = *(_QWORD *)(v15 + 504);
    *(_QWORD *)(a1 + 2504) = *(_QWORD *)(v15 + 512);
    result = *(_QWORD *)(v15 + 520);
    *(_QWORD *)(a1 + 2512) = result;
    v15 = *(_QWORD *)(v15 + 528);
  }
  *(_QWORD *)(a1 + 2520) = v15;
  if ( v16 == 1 )
  {
    result = *(unsigned int *)(a1 + 464);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 3 )
        goto LABEL_24;
      result = (__int64)ndisMIndicatePacket;
    }
    else
    {
      result = (__int64)ethFilterDprIndicateReceivePacket;
    }
    *(_QWORD *)(a1 + 3408) = result;
  }
LABEL_24:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    return WPP_SF_q(68LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
  return result;
}
