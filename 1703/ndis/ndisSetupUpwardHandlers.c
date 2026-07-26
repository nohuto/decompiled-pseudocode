/*
 * XREFs of ndisSetupUpwardHandlers @ 0x1C001A59C
 * Callers:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001A544 (ndisSetupLwfMiniportHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

__int64 (__fastcall *__fastcall ndisSetupUpwardHandlers(__int64 a1))(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rdi
  int v2; // esi
  char v3; // bp
  unsigned __int8 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rax
  __int64 (__fastcall *result)(ULONG_PTR); // rax

  v1 = *(_QWORD *)(a1 + 2056);
  v2 = 0;
  v3 = 0;
  v5 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(69LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
    v5 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  }
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
  v6 = *(_QWORD *)(v1 + 112);
  *(_BYTE *)(a1 + 1999) = 0;
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 120);
    if ( v3 || !*(_QWORD *)(*(_QWORD *)(v6 + 16) + 248LL) )
    {
      *(_DWORD *)(v6 + 60) &= ~1u;
    }
    else
    {
      *(_DWORD *)(v6 + 60) |= 1u;
      v3 = 1;
    }
    v8 = v2 + 1;
    if ( (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
      v8 = v2;
    v2 = v8;
    v9 = *(_QWORD *)(v7 + 600);
    if ( v9 )
    {
      *(_QWORD *)(v6 + 472) = v9;
      *(_QWORD *)(v6 + 480) = *(_QWORD *)(v7 + 24);
      *(_QWORD *)(v6 + 488) = *(_QWORD *)(v7 + 800);
      *(_QWORD *)(v6 + 496) = v7;
    }
    else
    {
      *(_QWORD *)(v6 + 472) = *(_QWORD *)(v7 + 472);
      *(_QWORD *)(v6 + 480) = *(_QWORD *)(v7 + 480);
      *(_QWORD *)(v6 + 488) = *(_QWORD *)(v7 + 488);
      *(_QWORD *)(v6 + 496) = *(_QWORD *)(v7 + 496);
    }
    if ( *(_QWORD *)(v7 + 616) )
    {
      if ( !v2 )
        ++*(_BYTE *)(a1 + 1999);
      *(_QWORD *)(v6 + 504) = *(_QWORD *)(v7 + 616);
      *(_QWORD *)(v6 + 512) = *(_QWORD *)(v7 + 24);
      *(_QWORD *)(v6 + 520) = *(_QWORD *)(v7 + 800);
      *(_QWORD *)(v6 + 528) = v7;
    }
    else
    {
      *(_QWORD *)(v6 + 504) = *(_QWORD *)(v7 + 504);
      *(_QWORD *)(v6 + 512) = *(_QWORD *)(v7 + 512);
      *(_QWORD *)(v6 + 520) = *(_QWORD *)(v7 + 520);
      *(_QWORD *)(v6 + 528) = *(_QWORD *)(v7 + 528);
    }
    v6 = *(_QWORD *)(v6 + 112);
  }
  v10 = *(_QWORD *)(a1 + 2048);
  v11 = v2 + 1;
  v12 = *(_QWORD *)(v10 + 600);
  if ( (*(_DWORD *)(v10 + 56) & 0x8000) == 0 )
    v11 = v2;
  if ( v12 )
  {
    *(_QWORD *)(a1 + 2624) = v12;
    *(_QWORD *)(a1 + 2584) = *(_QWORD *)(v10 + 24);
    *(_QWORD *)(a1 + 2592) = *(_QWORD *)(v10 + 800);
    *(_QWORD *)(a1 + 2600) = v10;
  }
  else
  {
    *(_QWORD *)(a1 + 2624) = *(_QWORD *)(v10 + 472);
    *(_QWORD *)(a1 + 2584) = *(_QWORD *)(v10 + 480);
    *(_QWORD *)(a1 + 2592) = *(_QWORD *)(v10 + 488);
    *(_QWORD *)(a1 + 2600) = *(_QWORD *)(v10 + 496);
  }
  if ( *(_QWORD *)(v10 + 616) )
  {
    if ( !v11 )
      ++*(_BYTE *)(a1 + 1999);
    *(_QWORD *)(a1 + 2632) = *(_QWORD *)(v10 + 616);
    *(_QWORD *)(a1 + 2504) = *(_QWORD *)(v10 + 24);
    result = *(__int64 (__fastcall **)(ULONG_PTR))(v10 + 800);
    *(_QWORD *)(a1 + 2512) = result;
    *(_QWORD *)(a1 + 2520) = v10;
  }
  else
  {
    *(_QWORD *)(a1 + 2632) = *(_QWORD *)(v10 + 504);
    *(_QWORD *)(a1 + 2504) = *(_QWORD *)(v10 + 512);
    *(_QWORD *)(a1 + 2512) = *(_QWORD *)(v10 + 520);
    result = *(__int64 (__fastcall **)(ULONG_PTR))(v10 + 528);
    *(_QWORD *)(a1 + 2520) = result;
  }
  if ( v11 == 1 )
  {
    result = (__int64 (__fastcall *)(ULONG_PTR))*(unsigned int *)(a1 + 464);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 3 )
        goto LABEL_23;
      result = ndisMIndicatePacket;
    }
    else
    {
      result = ethFilterDprIndicateReceivePacket;
    }
    *(_QWORD *)(a1 + 3408) = result;
  }
LABEL_23:
  if ( v5 >= 4u )
    return (__int64 (__fastcall *)(ULONG_PTR))WPP_SF_q(70LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
  return result;
}
