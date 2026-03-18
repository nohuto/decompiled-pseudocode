/*
 * XREFs of ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1800210DC
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180030B20 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Round@Math@Animations@Components@@SAHM@Z @ 0x180029698 (-Round@Math@Animations@Components@@SAHM@Z.c)
 *     ?GetTimeLength@Animation@Animations@Components@@QEBAMXZ @ 0x18002C120 (-GetTimeLength@Animation@Animations@Components@@QEBAMXZ.c)
 *     ?Update@Timer@Animations@Components@@QEAAXH_N@Z @ 0x1800C57BC (-Update@Timer@Animations@Components@@QEAAXH_N@Z.c)
 */

void __fastcall Components::Animations::Animation::UpdateTime(Components::Animations::Animation *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  __int64 v5; // rcx
  float TimeLength; // xmm0_4
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // r9
  int v10; // ecx

  if ( (*((_BYTE *)this + 72) & 2) != 0 )
  {
    if ( *((_DWORD *)this + 6) == 2 )
    {
      TimeLength = Components::Animations::Animation::GetTimeLength(this);
      v8 = Components::Animations::Math::Round((float)(TimeLength * *(float *)(v7 + 44)) * 1000.0);
      Components::Animations::Sequence::ResetTime(*(Components::Animations::Sequence **)(v9 + 8), v8, 0);
    }
    else
    {
      v3 = *((_DWORD *)this + 5);
      v4 = *((_DWORD *)this + 4);
      if ( v3 < v4 )
      {
        v10 = v4 - v3;
        if ( a2 < v10 )
          v10 = a2;
        *((_DWORD *)this + 5) = v10 + v3;
        a2 -= v10;
      }
      v5 = *((_QWORD *)this + 1);
      if ( (*(_BYTE *)(v5 + 264) & 2) != 0 )
        Components::Animations::Timer::Update((Components::Animations::Timer *)(v5 + 208), a2, 1);
    }
  }
}
