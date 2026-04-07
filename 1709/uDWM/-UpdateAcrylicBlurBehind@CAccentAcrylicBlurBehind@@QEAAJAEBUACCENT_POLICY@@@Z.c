/*
 * XREFs of ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x1800778B0
 * Callers:
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x180077BF0 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180075740 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x180075B70 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180076F3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
        CAccentAcrylicBlurBehind *this,
        const struct ACCENT_POLICY *a2)
{
  int v2; // edx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // esi
  int v8; // ebp
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  int v18; // [rsp+60h] [rbp+18h] BYREF
  int v19; // [rsp+64h] [rbp+1Ch]

  v2 = *((_DWORD *)a2 + 2);
  v17 = 0LL;
  v4 = CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(this, v2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 41) + 56LL))(
           *((_QWORD *)this + 41),
           *((_QWORD *)this + 39));
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      v8 = 0;
      if ( *((_DWORD *)this + 90) - *((_DWORD *)this + 88) >= 0 )
        v7 = *((_DWORD *)this + 90) - *((_DWORD *)this + 88);
      if ( *((_DWORD *)this + 91) - *((_DWORD *)this + 89) >= 0 )
        v8 = *((_DWORD *)this + 91) - *((_DWORD *)this + 89);
      v9 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
             (_QWORD *)this + 41,
             (__int64)&v17);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v17 + 288LL))(
                v17,
                _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v7), (__m128)COERCE_UNSIGNED_INT((float)v8)).m128_u64[0]);
        v5 = v10;
        if ( v10 >= 0 )
        {
          v11 = *((_QWORD *)this + 35);
          v18 = v7;
          v19 = v8;
          v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 80LL))(v11, &v18);
          v5 = v12;
          if ( v12 >= 0 )
          {
            v13 = *(_QWORD *)this;
            v18 = v7;
            v19 = v8;
            v14 = (*(__int64 (__fastcall **)(CAccentAcrylicBlurBehind *, int *))(v13 + 80))(this, &v18);
            v5 = v14;
            if ( v14 >= 0 )
            {
              v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 24LL))(*((_QWORD *)this + 36));
              v5 = v15;
              if ( v15 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x6C8u);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x6C6u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x6C5u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x6C3u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x6C2u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6BCu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x6B9u);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  return v5;
}
