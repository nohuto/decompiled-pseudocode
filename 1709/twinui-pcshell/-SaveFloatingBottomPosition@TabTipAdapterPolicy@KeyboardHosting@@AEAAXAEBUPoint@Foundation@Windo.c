/*
 * XREFs of ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x1801ABB58
 * Callers:
 *     ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1801AAB40 (-HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Found.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1801AACE0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801A9804 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::Foundation::Point *a2)
{
  __int64 v3; // rcx
  float v4; // xmm6_4
  float v5; // xmm5_4
  __m128 v6; // xmm4
  __m128 v7; // xmm2
  float v8; // xmm3_4
  float v9; // xmm6_4
  float v10; // xmm3_4
  float v11; // xmm5_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  const WCHAR *v15; // r8
  const WCHAR *v16; // rdx
  unsigned int v17; // eax
  const WCHAR *v18; // r8
  const WCHAR *v19; // rdx
  unsigned int v20; // eax
  int Data; // [rsp+38h] [rbp-19h] BYREF
  unsigned int lpData; // [rsp+3Ch] [rbp-15h] BYREF
  __m128 v23; // [rsp+40h] [rbp-11h]
  __int64 v24; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v3 = *((_BYTE *)this + 400) != 0 ? 0x38 : 0;
  v4 = *(float *)a2;
  v5 = *((float *)a2 + 1);
  v6 = *(__m128 *)((char *)this + v3 + 192);
  v7 = *(__m128 *)((char *)this + v3 + 208);
  v24 = *(_QWORD *)((char *)this + v3 + 240);
  v8 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
  LODWORD(v3) = (int)v8;
  v6.m128_f32[0] = _mm_shuffle_ps(v6, v6, 255).m128_f32[0];
  v9 = v4 - v8;
  v10 = *((float *)this + 98);
  v11 = v5 - v6.m128_f32[0];
  v23.m128_f32[0] = (float)((int)v24 * (int)v3 / 100);
  v23.m128_f32[1] = (float)((int)v24 * (int)v6.m128_f32[0] / 100);
  v23.m128_f32[2] = (float)((int)v24 * (int)v7.m128_f32[0] / 100);
  v23.m128_f32[3] = (float)((int)v24 * (int)_mm_shuffle_ps(v7, v7, 85).m128_f32[0] / 100);
  v12 = _mm_shuffle_ps(v23, v23, 170).m128_f32[0];
  if ( v12 < v10 || (v13 = *((float *)this + 99), v14 = v23.m128_f32[3], v23.m128_f32[3] < v13) )
  {
    *((_BYTE *)this + 388) = 0;
  }
  else
  {
    if ( v12 <= v10 )
      *((_DWORD *)this + 95) = 0;
    else
      *((float *)this + 95) = v9 / (float)(v12 - v10);
    if ( v14 <= v13 )
      *((_DWORD *)this + 96) = 0;
    else
      *((float *)this + 96) = v11 / (float)(v14 - v13);
    *((_BYTE *)this + 388) = 1;
  }
  if ( *((_BYTE *)this + 388) )
  {
    v15 = (const WCHAR *)*((_QWORD *)this + 11);
    v16 = (const WCHAR *)*((_QWORD *)this + 10);
    Data = (int)(float)((float)*((int *)this + 27) * *((float *)this + 95));
    v17 = RegSetKeyValueW(HKEY_CURRENT_USER, v16, v15, 4u, &Data, 4u);
    if ( v17 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x26B,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)v17);
    v18 = (const WCHAR *)*((_QWORD *)this + 12);
    v19 = (const WCHAR *)*((_QWORD *)this + 10);
    lpData = (int)(float)((float)*((int *)this + 27) * *((float *)this + 96));
    v20 = RegSetKeyValueW(HKEY_CURRENT_USER, v19, v18, 4u, &lpData, 4u);
    if ( v20 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x26E,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)v20);
  }
}
