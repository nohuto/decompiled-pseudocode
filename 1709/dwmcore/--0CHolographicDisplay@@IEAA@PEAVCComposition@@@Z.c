/*
 * XREFs of ??0CHolographicDisplay@@IEAA@PEAVCComposition@@@Z @ 0x1801BCFAC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x180128048 (-GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ.c)
 */

CHolographicDisplay *__fastcall CHolographicDisplay::CHolographicDisplay(
        CHolographicDisplay *this,
        struct CComposition *a2)
{
  signed __int32 v3; // eax
  struct CHolographicManager **v4; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CHolographicDisplay::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicDisplay::`vftable'{for `IHolographicDisplayInfo'};
  memset_0((char *)this + 72, 0, 0x30uLL);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_BYTE *)this + 152) = 0;
  InitializeSRWLock((PSRWLOCK)this + 20);
  v3 = _InterlockedExchangeAdd(&CHolographicDisplay::s_displayIdCounter, 1u);
  *((_DWORD *)this + 21) = -1;
  v4 = (struct CHolographicManager **)*((_QWORD *)this + 2);
  *((_DWORD *)this + 18) = v3 + 1;
  *((_QWORD *)this + 8) = CComposition::GetHolographicManager(v4);
  return this;
}
