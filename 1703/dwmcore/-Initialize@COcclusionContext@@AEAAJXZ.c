/*
 * XREFs of ?Initialize@COcclusionContext@@AEAAJXZ @ 0x18009EE88
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C624C (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C5A08 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z @ 0x1800C62C0 (-Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::Initialize(struct ICoverageSet **this)
{
  _QWORD *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  v1 = this + 38;
  v3 = CArrayBasedCoverageSet::Create(this + 38);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2Au);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 40LL))(*v1);
    v5 = CContentBounder::Create(this[68], this + 131);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2Eu);
    }
    else
    {
      *((_DWORD *)this + 270) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)(this + 132), 0x28u);
    }
  }
  return v4;
}
