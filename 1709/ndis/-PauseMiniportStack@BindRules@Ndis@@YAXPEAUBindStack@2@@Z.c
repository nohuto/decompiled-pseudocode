/*
 * XREFs of ?PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD868
 * Callers:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA890 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rdi
  BOOL v5; // esi
  __int64 v6; // r14
  _DWORD *v7; // rbx
  int v8; // r8d
  unsigned int v9; // eax
  int v10; // r9d
  char v11; // al
  __int64 v12; // r15
  unsigned __int64 i; // rbx
  __int64 v14; // r14
  _DWORD *v15; // rdi
  int v16; // r8d
  unsigned int v17; // eax
  int v18; // r9d
  bool v19; // cf
  _QWORD v20[20]; // [rsp+20h] [rbp-C8h] BYREF

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
      v10 = v7[9];
      if ( (v8 != 0) == (v10 != 0) && *(_QWORD *)v7 )
      {
        v11 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v10);
        *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
        v11 = 1;
      }
      if ( v11 && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v3),
          (struct NDIS_PNPTRACE_LOCALS *)v20);
        if ( (unsigned __int8)byte_1C0098763 >= 4u )
          WPP_SF_Zq(0x42u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v20[1], v20[0]);
      }
      v5 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v3) + 36LL) == 0;
    }
    ++v3;
  }
  v12 = *((unsigned int *)this + 1);
  for ( i = 0LL; i != v12; ++i )
  {
    if ( i >= *((unsigned int *)this + 1) )
      __fastfail(5u);
    v14 = *((_QWORD *)this + 1);
    v15 = *(_DWORD **)(v14 + 8 * i);
    v16 = v15[9];
    if ( v5 )
      v17 = v16 & 0xFFFFFFEF;
    else
      v17 = v16 | 0x10;
    v15[9] = v17;
    v18 = v15[9];
    if ( (v16 != 0) != (v18 != 0) || !*(_QWORD *)v15 )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v16, v18);
      v19 = (unsigned __int8)byte_1C0098763 < 4u;
      *(_BYTE *)(*(_QWORD *)v15 + 5240LL) = 1;
      if ( !v19 )
        WPP_SF_Zq(
          0x43u,
          &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
          *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v14 + 8 * i) + 80LL) + 24LL),
          **(_QWORD **)(v14 + 8 * i));
    }
  }
}
