/*
 * XREFs of ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x1801E5ADC
 * Callers:
 *     ?GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801E5B70 (-GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::EnsureIgnoreAlphaBitmap(CD2DBitmap *this)
{
  unsigned int v1; // ebx
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  _OWORD v9[2]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 20) )
  {
    v3 = *(_OWORD *)((char *)this + 216);
    v4 = *(_OWORD *)((char *)this + 232);
    v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
    v6 = *((_QWORD *)this + 19);
    v9[0] = v3;
    DWORD1(v9[0]) = 3;
    v9[1] = v4;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *))(**(_QWORD **)(v5 + 184) + 96LL))(
           *(_QWORD *)(v5 + 184),
           v6,
           v9);
    v1 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x23Au);
  }
  return v1;
}
