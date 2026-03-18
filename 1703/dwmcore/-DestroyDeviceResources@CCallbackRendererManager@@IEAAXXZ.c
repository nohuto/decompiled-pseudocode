/*
 * XREFs of ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800ABDB0
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800AE5D4 (--1CD2DContext@@UEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800AE630 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z @ 0x1800C5FC4 (--$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C75BC (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 */

void __fastcall CCallbackRendererManager::DestroyDeviceResources(CCallbackRendererManager *this)
{
  __int64 i; // rdi
  __int64 v3; // rdi

  ReleaseInterface<CDisplay>((char *)this + 104);
  ReleaseInterface<CDisplay>((char *)this + 96);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
    ReleaseInterface<CWARPCallbackRenderer>(*((_QWORD *)this + 4) + 8 * i);
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 32, 8u);
  v3 = 0LL;
  for ( *((_DWORD *)this + 30) = *((_DWORD *)this + 14);
        (unsigned int)v3 < *((_DWORD *)this + 22);
        v3 = (unsigned int)(v3 + 1) )
  {
    ReleaseInterface<CWARPCallbackRenderer>(*((_QWORD *)this + 8) + 8 * v3);
  }
  *((_DWORD *)this + 22) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 64, 8u);
  *((_DWORD *)this + 32) = *((_DWORD *)this + 22);
}
