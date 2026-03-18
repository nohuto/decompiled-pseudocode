/*
 * XREFs of ??0CHolographicDisplay@@IEAA@PEAVCComposition@@@Z @ 0x1801A4504
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x18013F660 (-GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ.c)
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
  *((_QWORD *)this + 7) = &CHolographicDisplay::`vftable'{for `IHolographicDisplay'};
  memset_0((char *)this + 72, 0, 0x50uLL);
  *((_BYTE *)this + 152) = 0;
  InitializeSRWLock((PSRWLOCK)this + 20);
  v3 = _InterlockedExchangeAdd(&CHolographicDisplay::s_displayIdCounter, 1u);
  v4 = (struct CHolographicManager **)*((_QWORD *)this + 2);
  *((_DWORD *)this + 18) = v3 + 1;
  *((_QWORD *)this + 8) = CComposition::GetHolographicManager(v4);
  return this;
}
