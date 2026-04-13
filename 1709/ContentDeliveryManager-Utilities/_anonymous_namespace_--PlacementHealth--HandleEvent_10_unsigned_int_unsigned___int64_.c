/*
 * XREFs of _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x180036BF4
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18002AF5C (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 * Callees:
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x180026E18 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 *     ??$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z @ 0x1800293F0 (--$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z.c)
 *     _anonymous_namespace_::StartsWith @ 0x18002AEC4 (_anonymous_namespace_--StartsWith.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180034944 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003B2BC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003CDBC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_(
        char *Src,
        int a2,
        __int64 a3)
{
  volatile signed __int32 *v6; // rbx
  void *v7; // rcx
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  unsigned __int64 v10; // r8
  volatile signed __int32 *v11; // rbx
  CreativeFramework::Health::details::BaseScenarioEvents *v12; // [rsp+38h] [rbp-89h] BYREF
  volatile signed __int32 *v13; // [rsp+40h] [rbp-81h]
  CreativeFramework::Health::details::BaseScenarioEvents *v14; // [rsp+48h] [rbp-79h] BYREF
  volatile signed __int32 *v15; // [rsp+50h] [rbp-71h]
  CreativeFramework::Health::details::BaseScenarioEvents *v16; // [rsp+58h] [rbp-69h] BYREF
  volatile signed __int32 *v17; // [rsp+60h] [rbp-61h]
  CreativeFramework::Health::details::BaseScenarioEvents *v18; // [rsp+68h] [rbp-59h] BYREF
  volatile signed __int32 *v19; // [rsp+70h] [rbp-51h]
  __int64 v20; // [rsp+78h] [rbp-49h]
  _QWORD v21[3]; // [rsp+80h] [rbp-41h] BYREF
  unsigned __int64 v22; // [rsp+98h] [rbp-29h]
  _QWORD v23[4]; // [rsp+A0h] [rbp-21h] BYREF
  _QWORD v24[4]; // [rsp+C0h] [rbp-1h] BYREF
  _QWORD v25[4]; // [rsp+E0h] [rbp+1Fh] BYREF

  v20 = -2LL;
  if ( CompareStringOrdinal((LPCWCH)Src, -1, L"LockScreen", -1, 1) == 2 )
  {
    std::to_wstring(v23, 1u);
    CreativeFramework::Health::details::GenericOffersHealthTracker<3,1>::GetOrCreateBaseEventForPlacementId(&v12, v23);
    CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<10,unsigned int,unsigned __int64>(v12, a2, a3);
    if ( v13 && !_InterlockedDecrement(v13 + 2) )
    {
      v6 = v13;
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( !_InterlockedDecrement(v6 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
    if ( v23[3] >= 8uLL )
    {
      v7 = (void *)v23[0];
LABEL_33:
      operator delete(v7);
    }
  }
  else if ( CompareStringOrdinal((LPCWCH)Src, -1, L"LockScreenOverlay", -1, 1) == 2 )
  {
    std::to_wstring(v24, 2u);
    CreativeFramework::Health::details::GenericOffersHealthTracker<3,1>::GetOrCreateBaseEventForPlacementId(&v14, v24);
    CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<10,unsigned int,unsigned __int64>(v14, a2, a3);
    if ( v15 )
    {
      if ( !_InterlockedDecrement(v15 + 2) )
      {
        v8 = v15;
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( !_InterlockedDecrement(v8 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    if ( v24[3] >= 8uLL )
    {
      v7 = (void *)v24[0];
      goto LABEL_33;
    }
  }
  else if ( CompareStringOrdinal((LPCWCH)Src, -1, L"StartMenu", -1, 1) == 2 )
  {
    std::to_wstring(v25, 3u);
    CreativeFramework::Health::details::GenericOffersHealthTracker<3,1>::GetOrCreateBaseEventForPlacementId(&v16, v25);
    CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<10,unsigned int,unsigned __int64>(v16, a2, a3);
    if ( v17 )
    {
      if ( !_InterlockedDecrement(v17 + 2) )
      {
        v9 = v17;
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( !_InterlockedDecrement(v9 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    if ( v25[3] >= 8uLL )
    {
      v7 = (void *)v25[0];
      goto LABEL_33;
    }
  }
  else if ( anonymous_namespace_::StartsWith(Src) )
  {
    v22 = 7LL;
    v21[2] = 0LL;
    LOWORD(v21[0]) = 0;
    if ( *(_WORD *)Src )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)&Src[2 * v10] );
    }
    else
    {
      v10 = 0LL;
    }
    std::wstring::assign(v21, Src, v10);
    CreativeFramework::Health::details::GenericOffersHealthTracker<11,1>::GetOrCreateBaseEventForPlacementId(&v18, v21);
    CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<10,unsigned int,unsigned __int64>(v18, a2, a3);
    if ( v19 )
    {
      if ( !_InterlockedDecrement(v19 + 2) )
      {
        v11 = v19;
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( !_InterlockedDecrement(v11 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
    if ( v22 >= 8 )
    {
      v7 = (void *)v21[0];
      goto LABEL_33;
    }
  }
}
