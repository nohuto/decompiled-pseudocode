/*
 * XREFs of ?Initialize@COcclusionContext@@AEAAJXZ @ 0x1800ACD30
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C5768 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C44D4 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z @ 0x1800C5864 (-Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::Initialize(struct ICoverageSet **this)
{
  _QWORD *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  v1 = this + 49;
  v3 = CArrayBasedCoverageSet::Create(this + 49);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x2Au);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 48LL))(*v1);
    v5 = CContentBounder::Create(this[79], this + 143);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x2Eu);
    }
    else
    {
      *((_DWORD *)this + 294) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)(this + 144), 0x28u);
    }
  }
  return v4;
}
