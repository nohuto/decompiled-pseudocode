/*
 * XREFs of ?PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BCFB4
 * Callers:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rbx
  BOOL v5; // esi
  __int64 v6; // r14
  _DWORD *v7; // rdi
  int v8; // r8d
  int v9; // r9d
  char v10; // al
  __int64 v11; // r14
  unsigned __int64 i; // rbx
  __int64 v13; // r15
  _DWORD *v14; // rdi
  int v15; // r8d
  int v16; // r9d
  bool v17; // cf
  _QWORD v18[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0LL;
  v5 = *((_DWORD *)this + 17) == 0;
  while ( v3 != v2 )
  {
    if ( v3 >= *((unsigned int *)this + 5) )
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * v3);
    if ( v7[13] )
    {
      v8 = v7[9];
      if ( v5 )
        v9 = v8 & 0xFFFFFFEF;
      else
        v9 = v8 | 0x10;
      v7[9] = v9;
      if ( (v8 != 0) == (v9 != 0) && *(_QWORD *)v7 )
      {
        v10 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
          WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v8, v9);
        *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
        v10 = 1;
      }
      if ( v10 && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v3),
          (struct NDIS_PNPTRACE_LOCALS *)v18);
        if ( (unsigned __int8)byte_1C0099623 >= 4u )
          WPP_SF_Zq(0x42u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v18[1], v18[0]);
      }
      v5 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v3) + 36LL) == 0;
    }
    ++v3;
  }
  v11 = *((unsigned int *)this + 1);
  for ( i = 0LL; i != v11; ++i )
  {
    if ( i >= *((unsigned int *)this + 1) )
      __fastfail(5u);
    v13 = *((_QWORD *)this + 1);
    v14 = *(_DWORD **)(v13 + 8 * i);
    v15 = v14[9];
    if ( v5 )
      v16 = v15 & 0xFFFFFFEF;
    else
      v16 = v15 | 0x10;
    v14[9] = v16;
    if ( (v15 != 0) != (v16 != 0) || !*(_QWORD *)v14 )
    {
      if ( (unsigned __int8)byte_1C0099623 >= 5u )
        WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v15, v16);
      v17 = (unsigned __int8)byte_1C0099623 < 4u;
      *(_BYTE *)(*(_QWORD *)v14 + 5240LL) = 1;
      if ( !v17 )
        WPP_SF_Zq(
          0x43u,
          &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
          *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v13 + 8 * i) + 80LL) + 24LL),
          **(_QWORD **)(v13 + 8 * i));
    }
  }
}
