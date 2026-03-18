/*
 * XREFs of ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180044840
 * Callers:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180043ED0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18011B624 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ??$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z @ 0x1801A94D8 (--$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z.c)
 */

void __fastcall CD2DContext::SetClip(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  int v4; // edx
  __int64 v5; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  bool v11; // zf
  __int128 v12; // xmm0
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  volatile signed __int32 *v22; // rcx
  int v23; // eax
  __int128 v24; // [rsp+38h] [rbp-50h] BYREF
  __int64 v25; // [rsp+48h] [rbp-40h]
  _BYTE v26[16]; // [rsp+50h] [rbp-38h] BYREF

  v4 = *((_DWORD *)this + 86);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v4 - 1));
  if ( !*((_BYTE *)this + 464)
    || *((_BYTE *)this + 466)
    || a4 != *((_DWORD *)this + 102)
    || a3->left != *((float *)this + 98)
    || a3->top != *((float *)this + 99)
    || a3->right != *((float *)this + 100)
    || a3->bottom != *((float *)this + 101) )
  {
    v9 = *((_QWORD *)this + 56);
    if ( v9 )
    {
      v16 = 0LL;
      if ( v4 )
        v16 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v4 - 1));
      v17 = *(_QWORD *)(v16 + 24);
      *(_DWORD *)(v9 + 52) = *((_DWORD *)this + 8);
      v18 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 24LL))(v17, v26) + 8);
      *(_DWORD *)(v9 + 72) = v18;
      if ( v18 == 1 )
        *(float *)(v9 + 76) = (*(float (__fastcall **)(__int64))(*(_QWORD *)v17 + 160LL))(v17);
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 104LL))(v17);
      *(float *)(v9 + 56) = 2.0 / (float)*(int *)(v19 + 140);
      LODWORD(v19) = *(_DWORD *)(v19 + 144);
      *(_DWORD *)(v9 + 64) = -1082130432;
      *(_DWORD *)(v9 + 68) = 1065353216;
      *(float *)(v9 + 60) = -2.0 / (float)(int)v19;
      v20 = *((_QWORD *)this + 56);
      CD2DContext::EnsureBeginDraw(this);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 120LL))(*((_QWORD *)this + 23), v20);
      v21 = *((_QWORD *)this + 56);
      if ( v21 )
      {
        v22 = (volatile signed __int32 *)(v21 + 8);
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 && v22 )
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v22 + 16LL))(v22, 1LL);
        *((_QWORD *)this + 56) = 0LL;
      }
    }
    else
    {
      v10 = *((_QWORD *)this + 57);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 44) = *((_DWORD *)this + 8);
        *(_OWORD *)(v10 + 48) = *(_OWORD *)((char *)this + 424);
        *(_DWORD *)(v10 + 64) = *((_DWORD *)this + 110);
        *(_BYTE *)(v10 + 68) = 1;
        v23 = CD2DContext::DrawCustomCallbackRendererInternal(
                this,
                *((struct ID2D1PrivateCompositorRenderer **)this + 57));
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x324u);
        else
          ReleaseInterface<CWARPCallbackRenderer>((char *)this + 456);
      }
    }
    v11 = *(_BYTE *)(v5 + 48) == 0;
    v12 = (__int128)*a3;
    *(_DWORD *)(v5 + 76) = a4;
    *(_OWORD *)(v5 + 60) = v12;
    if ( !v11 )
    {
      v13 = *(_QWORD *)(v5 + 16);
      v24 = _xmm;
      v25 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v13 + 176) + 240LL))(*(_QWORD *)(v13 + 176), &v24);
      v14 = *(_QWORD *)(v13 + 184);
      *(_BYTE *)(v13 + 466) = 0;
      v15 = *(_OWORD *)(v5 + 60);
      *(_DWORD *)(v13 + 408) = a4;
      *(_OWORD *)(v13 + 392) = v15;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 80LL))(v14, v5 + 60, a4);
    }
    *(_BYTE *)(v5 + 56) = 1;
  }
}
