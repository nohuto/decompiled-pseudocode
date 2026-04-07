/*
 * XREFs of ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x180087AD4
 * Callers:
 *     ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x180087CA0 (-ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180026940 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     ?InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z @ 0x180087554 (-InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z.c)
 *     ?OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z @ 0x1800875C8 (-OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x1800878B4 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 *     McTemplateU0dddd @ 0x180087CEC (McTemplateU0dddd.c)
 */

__int64 __fastcall CAnimatedGlassSheet::UpdateTransition(CAnimatedGlassSheet *this)
{
  __int64 v1; // rax
  float v3; // xmm6_4
  bool v4; // zf
  float v5; // xmm0_4
  char v6; // al
  float v7; // xmm1_4
  __int64 v8; // rax
  const struct tagRECT *v9; // rdx
  float v10; // xmm3_4
  LONG v11; // eax
  signed int v12; // r8d
  signed int v13; // edx
  CAnimatedGlassSheet *v14; // rcx
  LONG v15; // eax
  signed int v16; // r8d
  signed int v17; // edx
  CAnimatedGlassSheet *v18; // rcx
  LONG v19; // eax
  signed int v20; // r8d
  signed int v21; // edx
  CAnimatedGlassSheet *v22; // rcx
  int v23; // edx
  int v24; // ecx
  __int64 v25; // rax
  char v26; // al
  struct tagRECT v28; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 56);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 72) )
    {
      v3 = *((float *)this + 111);
      v4 = (*(_DWORD *)(v1 + 8))-- == 1;
      v5 = *((float *)this + 111) - 0.0;
      v6 = CDesktopManager::s_fTimelineDirty;
      if ( v4 )
        v6 = 1;
      *((_QWORD *)this + 56) = 0LL;
      CDesktopManager::s_fTimelineDirty = v6;
      v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
      if ( v7 <= 0.0000011920929 && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmGlassSheetFadeOut_End);
    }
    else
    {
      v3 = *(double *)(v1 + 48);
    }
    CVisual::SetOpacity(this, v3);
  }
  v8 = *((_QWORD *)this + 54);
  if ( v8 )
  {
    v9 = (const struct tagRECT *)((char *)this + 416);
    if ( *(_BYTE *)(v8 + 72) )
    {
      CAnimatedGlassSheet::OnRectUpdated((struct tagPOINT *)this, v9);
      v25 = *((_QWORD *)this + 54);
      if ( v25 )
      {
        v4 = (*(_DWORD *)(v25 + 8))-- == 1;
        v26 = CDesktopManager::s_fTimelineDirty;
        if ( v4 )
          v26 = 1;
        *((_QWORD *)this + 54) = 0LL;
        CDesktopManager::s_fTimelineDirty = v26;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0dddd(
          v24,
          v23,
          *((_DWORD *)this + 100),
          *((_DWORD *)this + 101),
          *((_DWORD *)this + 102),
          *((_DWORD *)this + 103));
    }
    else
    {
      v10 = *(double *)(v8 + 48);
      v11 = CAnimatedGlassSheet::InterpolateValueLinear(this, *((_DWORD *)this + 96), v9->left, v10);
      v12 = *((_DWORD *)this + 105);
      v13 = *((_DWORD *)this + 97);
      v28.left = v11;
      v15 = CAnimatedGlassSheet::InterpolateValueLinear(v14, v13, v12, v10);
      v16 = *((_DWORD *)this + 106);
      v17 = *((_DWORD *)this + 98);
      v28.top = v15;
      v19 = CAnimatedGlassSheet::InterpolateValueLinear(v18, v17, v16, v10);
      v20 = *((_DWORD *)this + 107);
      v21 = *((_DWORD *)this + 99);
      v28.right = v19;
      v28.bottom = CAnimatedGlassSheet::InterpolateValueLinear(v22, v21, v20, v10);
      CAnimatedGlassSheet::OnRectUpdated((struct tagPOINT *)this, &v28);
    }
  }
  if ( !*((_QWORD *)this + 54) && !*((_QWORD *)this + 56) )
    CAnimatedGlassSheet::StopAnimation(this);
  return 0LL;
}
