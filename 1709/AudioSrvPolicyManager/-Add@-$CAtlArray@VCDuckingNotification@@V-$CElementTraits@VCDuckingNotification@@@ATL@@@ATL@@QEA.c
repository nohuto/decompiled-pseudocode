/*
 * XREFs of ?Add@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA_KAEBVCDuckingNotification@@@Z @ 0x18000A4A0
 * Callers:
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180009E10 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18000A100 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18000A9C4 (-GrowBuffer@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@A.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000B168 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::Add(
        _QWORD *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx

  v4 = a1[1];
  if ( v4 >= a1[2]
    && !(unsigned __int8)ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::GrowBuffer(
                           a1,
                           v4 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  v5 = *a1 + 32 * v4;
  if ( v5 )
  {
    *(_QWORD *)v5 = *(_QWORD *)a2;
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(a2 + 8);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      v5 + 16,
      a2 + 16);
    v6 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(v5 + 24) = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  ++a1[1];
  return v4;
}
