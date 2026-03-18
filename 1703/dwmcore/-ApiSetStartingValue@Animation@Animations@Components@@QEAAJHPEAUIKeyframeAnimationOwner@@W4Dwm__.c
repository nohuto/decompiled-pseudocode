/*
 * XREFs of ?ApiSetStartingValue@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@@Z @ 0x18002C50C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ??2Interpolation@Animations@Components@@SAPEAX_K@Z @ 0x18002A820 (--2Interpolation@Animations@Components@@SAPEAX_K@Z.c)
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x1800910A4 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetStartingValue(__int64 a1, int a2, __int64 a3, int a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // r10
  _DWORD *v10; // rbx
  signed int v11; // esi

  v8 = Components::Animations::Interpolation::operator new(0x20uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    *(_QWORD *)v8 = &Components::Animations::StartingValueInput::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  v10 = 0LL;
  if ( v9 )
    v10 = v9;
  v11 = v9 == 0LL ? 0x8007000E : 0;
  if ( v9 )
  {
    *((_QWORD *)v10 + 2) = a3;
    v10[3] = a4;
    v11 = Components::Animations::Sequence::SetKeyframeValue(
            *(Components::Animations::Sequence **)(a1 + 8),
            a2,
            (struct Components::Animations::Input *)v10);
    if ( v11 >= 0 )
      v11 = 0;
  }
  if ( v10 )
  {
    if ( v10[2]-- == 1 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 48LL))(v10);
  }
  return (unsigned int)v11;
}
