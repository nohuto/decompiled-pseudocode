/*
 * XREFs of ndisSetupUpwardHandlers @ 0x1C000F844
 * Callers:
 *     ndisSetupLwfMiniportHandlers @ 0x1C000F7EC (ndisSetupLwfMiniportHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

__int64 (__fastcall *__fastcall ndisSetupUpwardHandlers(__int64 a1))(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rdi
  int v2; // esi
  char v3; // bp
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rax
  __int64 (__fastcall *result)(ULONG_PTR); // rax

  v1 = *(_QWORD *)(a1 + 2056);
  v2 = 0;
  v3 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(67LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
  *(_QWORD *)(v1 + 472) = *(_QWORD *)(a1 + 2440);
  *(_QWORD *)(v1 + 480) = *(_QWORD *)(a1 + 2400);
  *(_QWORD *)(v1 + 488) = *(_QWORD *)(a1 + 2408);
  *(_QWORD *)(v1 + 496) = *(_QWORD *)(a1 + 2416);
  *(_QWORD *)(v1 + 504) = *(_QWORD *)(a1 + 2448);
  *(_QWORD *)(v1 + 512) = *(_QWORD *)(a1 + 2320);
  *(_QWORD *)(v1 + 520) = *(_QWORD *)(a1 + 2328);
  *(_QWORD *)(v1 + 528) = *(_QWORD *)(a1 + 2336);
  if ( *(_QWORD *)(*(_QWORD *)(v1 + 16) + 248LL) )
  {
    *(_DWORD *)(v1 + 60) |= 1u;
    v3 = 1;
  }
  else
  {
    *(_DWORD *)(v1 + 60) &= ~1u;
  }
  v5 = *(_QWORD *)(v1 + 112);
  *(_BYTE *)(a1 + 1999) = 0;
  while ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 120);
    if ( v3 || !*(_QWORD *)(*(_QWORD *)(v5 + 16) + 248LL) )
    {
      *(_DWORD *)(v5 + 60) &= ~1u;
    }
    else
    {
      *(_DWORD *)(v5 + 60) |= 1u;
      v3 = 1;
    }
    v7 = v2 + 1;
    if ( (*(_DWORD *)(v6 + 56) & 0x8000) == 0 )
      v7 = v2;
    v2 = v7;
    v8 = *(_QWORD *)(v6 + 600);
    if ( v8 )
    {
      *(_QWORD *)(v5 + 472) = v8;
      *(_QWORD *)(v5 + 480) = *(_QWORD *)(v6 + 24);
      *(_QWORD *)(v5 + 488) = *(_QWORD *)(v6 + 800);
      *(_QWORD *)(v5 + 496) = v6;
    }
    else
    {
      *(_QWORD *)(v5 + 472) = *(_QWORD *)(v6 + 472);
      *(_QWORD *)(v5 + 480) = *(_QWORD *)(v6 + 480);
      *(_QWORD *)(v5 + 488) = *(_QWORD *)(v6 + 488);
      *(_QWORD *)(v5 + 496) = *(_QWORD *)(v6 + 496);
    }
    if ( *(_QWORD *)(v6 + 616) )
    {
      if ( !v2 )
        ++*(_BYTE *)(a1 + 1999);
      *(_QWORD *)(v5 + 504) = *(_QWORD *)(v6 + 616);
      *(_QWORD *)(v5 + 512) = *(_QWORD *)(v6 + 24);
      *(_QWORD *)(v5 + 520) = *(_QWORD *)(v6 + 800);
      *(_QWORD *)(v5 + 528) = v6;
    }
    else
    {
      *(_QWORD *)(v5 + 504) = *(_QWORD *)(v6 + 504);
      *(_QWORD *)(v5 + 512) = *(_QWORD *)(v6 + 512);
      *(_QWORD *)(v5 + 520) = *(_QWORD *)(v6 + 520);
      *(_QWORD *)(v5 + 528) = *(_QWORD *)(v6 + 528);
    }
    v5 = *(_QWORD *)(v5 + 112);
  }
  v9 = *(_QWORD *)(a1 + 2048);
  v10 = v2 + 1;
  v11 = *(_QWORD *)(v9 + 600);
  if ( (*(_DWORD *)(v9 + 56) & 0x8000) == 0 )
    v10 = v2;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 2624) = v11;
    *(_QWORD *)(a1 + 2584) = *(_QWORD *)(v9 + 24);
    *(_QWORD *)(a1 + 2592) = *(_QWORD *)(v9 + 800);
    *(_QWORD *)(a1 + 2600) = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 2624) = *(_QWORD *)(v9 + 472);
    *(_QWORD *)(a1 + 2584) = *(_QWORD *)(v9 + 480);
    *(_QWORD *)(a1 + 2592) = *(_QWORD *)(v9 + 488);
    *(_QWORD *)(a1 + 2600) = *(_QWORD *)(v9 + 496);
  }
  if ( *(_QWORD *)(v9 + 616) )
  {
    if ( !v10 )
      ++*(_BYTE *)(a1 + 1999);
    *(_QWORD *)(a1 + 2632) = *(_QWORD *)(v9 + 616);
    *(_QWORD *)(a1 + 2504) = *(_QWORD *)(v9 + 24);
    result = *(__int64 (__fastcall **)(ULONG_PTR))(v9 + 800);
    *(_QWORD *)(a1 + 2512) = result;
    *(_QWORD *)(a1 + 2520) = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 2632) = *(_QWORD *)(v9 + 504);
    *(_QWORD *)(a1 + 2504) = *(_QWORD *)(v9 + 512);
    *(_QWORD *)(a1 + 2512) = *(_QWORD *)(v9 + 520);
    result = *(__int64 (__fastcall **)(ULONG_PTR))(v9 + 528);
    *(_QWORD *)(a1 + 2520) = result;
  }
  if ( v10 == 1 )
  {
    result = (__int64 (__fastcall *)(ULONG_PTR))*(unsigned int *)(a1 + 464);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 3 )
        goto LABEL_24;
      result = ndisMIndicatePacket;
    }
    else
    {
      result = ethFilterDprIndicateReceivePacket;
    }
    *(_QWORD *)(a1 + 3408) = result;
  }
LABEL_24:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    return (__int64 (__fastcall *)(ULONG_PTR))WPP_SF_q(68LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
  return result;
}
