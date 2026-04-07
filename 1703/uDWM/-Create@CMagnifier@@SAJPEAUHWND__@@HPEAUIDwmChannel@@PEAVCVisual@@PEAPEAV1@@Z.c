/*
 * XREFs of ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18007CF40
 * Callers:
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x18007DE9C (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@@Z @ 0x18007CDE4 (--0CMagnifier@@AEAA@PEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x18007D014 (-Initialize@CMagnifier@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifier::Create(
        HWND a1,
        int a2,
        struct IDwmChannel *a3,
        struct CVisual *a4,
        struct CMagnifier **a5)
{
  CMagnifier *v9; // rax
  volatile signed __int32 *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax

  v9 = (CMagnifier *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                       WPF::g_pProcessHeap,
                       384LL);
  if ( v9 )
    v10 = (volatile signed __int32 *)CMagnifier::CMagnifier(v9, a1, a2, a3, a4);
  else
    v10 = 0LL;
  if ( v10 )
  {
    v12 = CMagnifier::Initialize((CMagnifier *)v10);
    v11 = v12;
    if ( v12 >= 0 )
    {
      *a5 = (struct CMagnifier *)v10;
      _InterlockedIncrement(v10 + 2);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x66u);
    }
    CBaseObject::Release((CBaseObject *)v10);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x64u);
  }
  return v11;
}
