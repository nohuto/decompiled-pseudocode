/*
 * XREFs of ?GetSubscriptionBehavior@TargetedContent@CreativeFramework@@YA?AW4TargetedContentSubscriptionBehavior@12@PEBG@Z @ 0x18002C344
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003E81C (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800A4410 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A45D0 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800A45F0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::TargetedContent::GetSubscriptionBehavior(__int64 a1)
{
  char *v1; // rcx
  void **v2; // rbx
  _BYTE *v3; // rdx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-21h] BYREF
  __int128 v6; // [rsp+38h] [rbp-19h]
  __int64 v7; // [rsp+48h] [rbp-9h]
  __int128 v8; // [rsp+50h] [rbp-1h] BYREF
  __int128 v9; // [rsp+60h] [rbp+Fh]
  __int64 v10; // [rsp+70h] [rbp+1Fh]
  _BYTE v11[24]; // [rsp+78h] [rbp+27h] BYREF
  char *v12; // [rsp+90h] [rbp+3Fh]

  v7 = -2LL;
  v5 = a1;
  v8 = *(_OWORD *)&off_1800DC170;
  v9 = xmmword_1800DC180;
  v10 = 3600LL;
  *(_QWORD *)&v6 = &v5;
  *((_QWORD *)&v6 + 1) = &v8;
  v12 = 0LL;
  v1 = (char *)operator new(0x20uLL);
  if ( !v1 )
    std::_Xbad_alloc();
  *(_QWORD *)v1 = off_1800D2568;
  *(_OWORD *)(v1 + 8) = v6;
  v12 = v1;
  v2 = (void **)off_1800D2240;
  while ( 1 )
  {
    if ( !v1 )
      std::_Xbad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(char *, void **))(*(_QWORD *)v1 + 16LL))(v1, v2) )
      break;
    v2 += 5;
    if ( v2 == &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::ICreativeEventReportedCache>'} )
      break;
    v1 = v12;
  }
  if ( v12 )
  {
    v3 = v11;
    LOBYTE(v3) = v12 != v11;
    (*(void (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v12 + 32LL))(v12, v3);
  }
  result = (unsigned int)v9;
  if ( (v9 & 0x80) != 0 )
    return (unsigned int)v9 | 1;
  return result;
}
