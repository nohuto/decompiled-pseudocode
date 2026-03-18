/*
 * XREFs of ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180090EF8
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x1800910F4 (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x1800C1200 (-SetSize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180136130 (-Release@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 */

__int64 __fastcall Components::Animations::Sequence::SetKeyframeCount(Components::Animations::Sequence *this, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  Components::Animations::Input *v8; // rbx
  _DWORD *v9; // rdi
  __int64 v10; // r15
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rbx
  _DWORD *v17; // rcx

  v2 = *((int *)this + 2);
  v4 = a2;
  if ( a2 <= (int)v2 )
  {
    if ( a2 )
    {
      if ( a2 < (int)v2 )
      {
        if ( a2 < v2 )
        {
          v14 = 24LL * a2;
          v15 = v2 - a2;
          do
          {
            v16 = *(_QWORD *)this;
            Components::Animations::RefPtr<Components::Animations::Input>::Release(v14 + *(_QWORD *)this + 8LL);
            v17 = *(_DWORD **)(v14 + v16 + 16);
            *(_QWORD *)(v14 + v16 + 16) = 0LL;
            if ( v17 )
            {
              v13 = v17[2]-- == 1;
              if ( v13 )
                WPF::ProcessHeapImpl::Free(v17);
            }
            v14 += 24LL;
            --v15;
          }
          while ( v15 );
        }
        Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::SetSize(this, (unsigned int)v4);
      }
    }
    else
    {
      Components::Animations::Sequence::RemoveAllKeyFrames(this);
    }
  }
  else
  {
    result = Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::SetSize(
               this,
               (unsigned int)a2);
    if ( (int)result < 0 )
      return result;
    if ( v2 < v4 )
    {
      v6 = 24 * v2;
      v7 = v4 - v2;
      do
      {
        v8 = Components::Animations::Sequence::s_rpDefaultValue;
        if ( Components::Animations::Sequence::s_rpDefaultValue )
          ++*((_DWORD *)Components::Animations::Sequence::s_rpDefaultValue + 2);
        v9 = Components::Animations::Sequence::s_rpDefaultInterpolation;
        if ( Components::Animations::Sequence::s_rpDefaultInterpolation )
          ++*((_DWORD *)Components::Animations::Sequence::s_rpDefaultInterpolation + 2);
        v10 = *(_QWORD *)this;
        *(_DWORD *)(v6 + *(_QWORD *)this) = 0;
        if ( v8 )
          ++*((_DWORD *)v8 + 2);
        v11 = *(_DWORD **)(v6 + v10 + 8);
        if ( v11 )
        {
          v13 = v11[2]-- == 1;
          if ( v13 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 48LL))(v11);
        }
        *(_QWORD *)(v6 + v10 + 8) = v8;
        if ( v9 )
          ++v9[2];
        v12 = *(_DWORD **)(v6 + v10 + 16);
        if ( v12 )
        {
          v13 = v12[2]-- == 1;
          if ( v13 )
            WPF::ProcessHeapImpl::Free(v12);
        }
        *(_QWORD *)(v6 + v10 + 16) = v9;
        if ( v9 )
        {
          v13 = v9[2]-- == 1;
          if ( v13 )
            WPF::ProcessHeapImpl::Free(v9);
        }
        if ( v8 )
        {
          v13 = (*((_DWORD *)v8 + 2))-- == 1;
          if ( v13 )
            (*(void (__fastcall **)(Components::Animations::Input *))(*(_QWORD *)v8 + 48LL))(v8);
        }
        v6 += 24LL;
        --v7;
      }
      while ( v7 );
    }
  }
  return 0LL;
}
