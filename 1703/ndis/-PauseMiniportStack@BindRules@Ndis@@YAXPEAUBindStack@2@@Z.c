/*
 * XREFs of ?PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00B3778
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B2734 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F139C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  __int64 v3; // rdi
  BOOL v5; // esi
  __int64 v6; // r15
  _DWORD *v7; // rbx
  int v8; // r8d
  unsigned int v9; // eax
  int v10; // r9d
  char v11; // al
  int v12; // r15d
  __int64 i; // rdi
  __int64 v14; // r12
  _DWORD *v15; // rbx
  int v16; // r8d
  unsigned int v17; // eax
  int v18; // r9d
  bool v19; // cf
  _QWORD v20[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((_DWORD *)this + 5);
  v3 = 0LL;
  v5 = *((_DWORD *)this + 17) == 0;
  while ( (_DWORD)v3 != v2 )
  {
    if ( (unsigned int)v3 >= *((_DWORD *)this + 5) )
      __fastfail(0xBAD0FFu);
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
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v10);
        *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
        v11 = 1;
      }
      if ( v11 && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v3),
          (struct NDIS_PNPTRACE_LOCALS *)v20);
        if ( (unsigned __int8)byte_1C0092623 >= 4u )
          WPP_SF_Zq(0x42u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v20[1], v20[0]);
      }
      v5 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v3) + 36LL) == 0;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  v12 = *((_DWORD *)this + 1);
  for ( i = 0LL; (_DWORD)i != v12; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 1) )
      __fastfail(0xBAD0FFu);
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
      if ( (unsigned __int8)byte_1C0092623 >= 5u )
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v16, v18);
      v19 = (unsigned __int8)byte_1C0092623 < 4u;
      *(_BYTE *)(*(_QWORD *)v15 + 5240LL) = 1;
      if ( !v19 )
        WPP_SF_Zq(
          0x43u,
          &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
          *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v14 + 8 * i) + 80LL) + 32LL),
          **(_QWORD **)(v14 + 8 * i));
    }
  }
}
