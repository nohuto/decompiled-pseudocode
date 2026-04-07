/*
 * XREFs of ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800875D0
 * Callers:
 *     ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x180087790 (-ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ?InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z @ 0x180087070 (-InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z.c)
 *     ?OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z @ 0x1800870D8 (-OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x1800873C8 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 *     Template_dddd @ 0x1800877DC (Template_dddd.c)
 */

__int64 __fastcall CAnimatedGlassSheet::UpdateTransition(CAnimatedGlassSheet *this)
{
  __int64 v1; // rax
  float v3; // xmm6_4
  bool v4; // zf
  char v5; // al
  float v6; // xmm0_4
  float v7; // xmm1_4
  __int64 v8; // rax
  float v9; // xmm3_4
  LONG v10; // eax
  signed int v11; // r8d
  signed int v12; // edx
  CAnimatedGlassSheet *v13; // rcx
  LONG v14; // eax
  signed int v15; // r8d
  signed int v16; // edx
  CAnimatedGlassSheet *v17; // rcx
  LONG v18; // eax
  signed int v19; // r8d
  signed int v20; // edx
  CAnimatedGlassSheet *v21; // rcx
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rax
  char v25; // al
  struct tagRECT v27; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 56);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 72) )
    {
      v3 = *((float *)this + 111);
      v4 = (*(_DWORD *)(v1 + 8))-- == 1;
      v5 = CDesktopManager::s_fTimelineDirty;
      v6 = *((float *)this + 111);
      if ( v4 )
        v5 = 1;
      *((_QWORD *)this + 56) = 0LL;
      CDesktopManager::s_fTimelineDirty = v5;
      v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
      if ( v7 <= 0.0000011920929 && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        TemplateEventDescriptor((__int64)this, (__int64)&UdwmGlassSheetFadeOut_End);
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
    if ( *(_BYTE *)(v8 + 72) )
    {
      CAnimatedGlassSheet::OnRectUpdated((struct tagPOINT *)this, (const struct tagRECT *)this + 26);
      v24 = *((_QWORD *)this + 54);
      if ( v24 )
      {
        v4 = (*(_DWORD *)(v24 + 8))-- == 1;
        v25 = CDesktopManager::s_fTimelineDirty;
        if ( v4 )
          v25 = 1;
        *((_QWORD *)this + 54) = 0LL;
        CDesktopManager::s_fTimelineDirty = v25;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_dddd(
          v23,
          v22,
          *((_DWORD *)this + 100),
          *((_DWORD *)this + 101),
          *((_DWORD *)this + 102),
          *((_DWORD *)this + 103));
    }
    else
    {
      v9 = *(double *)(v8 + 48);
      v10 = CAnimatedGlassSheet::InterpolateValueLinear(this, *((_DWORD *)this + 96), *((_DWORD *)this + 104), v9);
      v11 = *((_DWORD *)this + 105);
      v12 = *((_DWORD *)this + 97);
      v27.left = v10;
      v14 = CAnimatedGlassSheet::InterpolateValueLinear(v13, v12, v11, v9);
      v15 = *((_DWORD *)this + 106);
      v16 = *((_DWORD *)this + 98);
      v27.top = v14;
      v18 = CAnimatedGlassSheet::InterpolateValueLinear(v17, v16, v15, v9);
      v19 = *((_DWORD *)this + 107);
      v20 = *((_DWORD *)this + 99);
      v27.right = v18;
      v27.bottom = CAnimatedGlassSheet::InterpolateValueLinear(v21, v20, v19, v9);
      CAnimatedGlassSheet::OnRectUpdated((struct tagPOINT *)this, &v27);
    }
  }
  if ( !*((_QWORD *)this + 54) && !*((_QWORD *)this + 56) )
    CAnimatedGlassSheet::StopAnimation(this);
  return 0LL;
}
