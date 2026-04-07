/*
 * XREFs of ?Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18004299C
 * Callers:
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x180042B10 (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x180042B90 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenMagnifier::Create(
        struct IDwmChannel *a1,
        struct CResource *a2,
        struct CVisual *a3,
        struct CFullScreenMagnifier **a4)
{
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  unsigned int v10; // edi

  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         64LL);
  v9 = (volatile signed __int32 *)v8;
  v10 = 0;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)v8 = &CFullScreenMagnifier::`vftable';
    *(_QWORD *)(v8 + 40) = 0x3FF0000000000000LL;
    *(_QWORD *)(v8 + 16) = a1;
    *(_QWORD *)(v8 + 48) = 0LL;
    *(_QWORD *)(v8 + 56) = 0LL;
    *(_QWORD *)(v8 + 24) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    *(_QWORD *)(v8 + 32) = a3;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    CFullScreenMagnifier::UpdateSettings((CFullScreenMagnifier *)v9, 1.0, 0.0, 0.0);
    *a4 = (struct CFullScreenMagnifier *)v9;
    _InterlockedIncrement(v9 + 2);
    CBaseObject::Release((CBaseObject *)v9);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x5Du);
  }
  return v10;
}
