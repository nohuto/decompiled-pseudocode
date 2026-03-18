/*
 * XREFs of ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1C019EB38
 * Callers:
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00BF36C (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000BB4C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

const struct DXGK_GAMMA_RAMP *__fastcall DXGGLOBAL::GetDefaultColorSpaceTransform(DXGGLOBAL *this)
{
  _QWORD *v2; // rax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  signed int v7; // r8d
  __int64 v8; // rdx
  __m128i v9; // xmm0

  if ( !*((_QWORD *)this + 232) )
  {
    v2 = operator new[](0x28uLL, 0x4B677844u, PagedPool);
    if ( v2 )
    {
      v2[3] = 0LL;
      v2[4] = 0LL;
      *v2 = &ReferenceCounted::`vftable';
      *v2 = &DXGK_GAMMA_RAMP::`vftable';
      *((_DWORD *)v2 + 2) = 1;
      *((_DWORD *)v2 + 4) = 1;
    }
    *((_QWORD *)this + 232) = v2;
    if ( v2 )
    {
      v3 = DXGK_GAMMA_RAMP::Initialize(v2, D3DDDI_GAMMARAMP_MATRIX_3x4, 0LL);
      v5 = v3;
      if ( v3 >= 0 )
      {
        LODWORD(v5) = 0;
        memset(*(void **)(*((_QWORD *)this + 232) + 32LL), 0, 0xC034uLL);
        v7 = 0;
        **(_DWORD **)(*((_QWORD *)this + 232) + 32LL) = 1065353216;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 232) + 32LL) + 20LL) = 1065353216;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 232) + 32LL) + 40LL) = 1065353216;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 232) + 32LL) + 48LL) = 1065353216;
        v8 = 0LL;
        do
        {
          v8 += 12LL;
          v9 = _mm_cvtsi32_si128(v7++);
          *(float *)v9.m128i_i32 = _mm_cvtepi32_ps(v9).m128_f32[0] / 4095.0;
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 232) + 32LL) + v8 + 40) = v9.m128i_i32[0];
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 232) + 32LL) + v8 + 44) = v9.m128i_i32[0];
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 232) + 32LL) + v8 + 48) = v9.m128i_i32[0];
        }
        while ( v7 < 4096 );
      }
      else
      {
        v6 = WdLogNewEntry5_WdError(v4);
        *(_QWORD *)(v6 + 24) = v5;
        WdLogEvent5_WdError(v6);
      }
      if ( (int)v5 < 0 )
      {
        ReferenceCounted::Release(*((ReferenceCounted **)this + 232));
        *((_QWORD *)this + 232) = 0LL;
      }
    }
  }
  return (const struct DXGK_GAMMA_RAMP *)*((_QWORD *)this + 232);
}
