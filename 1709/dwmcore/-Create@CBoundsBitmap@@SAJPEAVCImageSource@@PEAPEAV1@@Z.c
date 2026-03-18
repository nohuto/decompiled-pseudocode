/*
 * XREFs of ?Create@CBoundsBitmap@@SAJPEAVCImageSource@@PEAPEAV1@@Z @ 0x1800BEF60
 * Callers:
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x18008E114 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBoundsBitmap::Create(struct CImageSource *a1, struct CBoundsBitmap **a2)
{
  char *v2; // rdi
  signed int v4; // eax
  unsigned int v5; // ebx
  signed int v6; // eax
  _DWORD *v7; // rax
  float v8; // xmm0_4
  double v9; // xmm0_8
  __m128d v10; // xmm1
  float v12; // [rsp+30h] [rbp-38h]
  float v13; // [rsp+34h] [rbp-34h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-28h] BYREF
  float v16[4]; // [rsp+48h] [rbp-20h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  v2 = (char *)a1 + 8;
  v4 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, float *))(*((_QWORD *)a1 + 1) + 120LL))(
         (char *)a1 + 8,
         0LL,
         0LL,
         v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x23u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(char *, unsigned __int64 *, _BYTE *))(*(_QWORD *)v2 + 128LL))(v2, &v14, v15);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x24u);
    }
    else
    {
      v7 = HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
      if ( !v7 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v8 = (float)(v16[3] - v16[1]) + 6291456.25;
      v13 = v8;
      v9 = (float)(v16[2] - v16[0]);
      v10 = (__m128d)v14;
      v7[2] = 0;
      *(_QWORD *)v7 = &CBoundsBitmap::`vftable'{for `CMILCOMBase'};
      *((_QWORD *)v7 + 2) = &CBoundsBitmap::`vftable'{for `IBitmapSource'};
      *((__m128d *)v7 + 2) = _mm_unpacklo_pd(v10, v10);
      v12 = v9 + 6291456.25;
      v7[6] = (int)(LODWORD(v12) << 10) >> 11;
      v7[7] = (int)(LODWORD(v13) << 10) >> 11;
      *a2 = (struct CBoundsBitmap *)v7;
      CMILCOMBase::InternalAddRef((CMILCOMBase *)v7);
    }
  }
  return v5;
}
