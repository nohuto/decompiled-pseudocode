/*
 * XREFs of ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x180011E00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180011780 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0ddddddddddffffqqq @ 0x1800959A0 (McTemplateU0ddddddddddffffqqq.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::OnStoryboardBegin(CAnimatedTransitionVisual *this, char a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  unsigned int v8; // esi
  __int64 v10; // rax

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  LOBYTE(v7) = 0;
  v8 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x98u);
  }
  else
  {
    if ( !*((_BYTE *)this + 968) && *((float *)this + 235) == 0.0 )
    {
      *((_DWORD *)this + 186) = *((_DWORD *)this + 232);
      *((_QWORD *)this + 94) = 0LL;
      *((_DWORD *)this + 190) = 0;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x2000u);
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v10 = *((_QWORD *)this + 3);
      if ( v10 )
        v7 = *(_DWORD *)(v10 + 24);
      McTemplateU0ddddddddddffffqqq(
        v6,
        v5,
        *((_DWORD *)this + 184),
        *((_DWORD *)this + 185),
        *((_DWORD *)this + 214),
        *((_DWORD *)this + 215),
        *((_DWORD *)this + 216),
        *((_DWORD *)this + 217),
        *((_DWORD *)this + 218),
        *((_DWORD *)this + 219),
        *((_DWORD *)this + 220),
        *((_DWORD *)this + 221),
        *((_DWORD *)this + 232),
        *((_DWORD *)this + 233),
        *((_DWORD *)this + 230),
        *((_DWORD *)this + 231),
        v7,
        *((_DWORD *)this + 240),
        a2);
    }
    *((_BYTE *)this + 985) = 1;
  }
  return v8;
}
