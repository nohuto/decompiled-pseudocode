/*
 * XREFs of ?ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__AnimationType@23@@Z @ 0x1801B77E0
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ??2Interpolation@Animations@Components@@SAPEAX_K@Z @ 0x18002A820 (--2Interpolation@Animations@Components@@SAPEAX_K@Z.c)
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x1800910A4 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetExpression(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  _DWORD *v9; // rax
  _DWORD *v10; // r10
  _DWORD *v11; // rbx
  signed int v12; // esi

  v9 = Components::Animations::Interpolation::operator new(0x20uLL);
  v10 = v9;
  if ( v9 )
  {
    v9[2] = 1;
    *(_QWORD *)v9 = &Components::Animations::ExpressionInput::`vftable';
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 0LL;
  if ( v10 )
    v11 = v10;
  v12 = v10 == 0LL ? 0x8007000E : 0;
  if ( v10 )
  {
    v11[3] = a5;
    *((_QWORD *)v11 + 2) = a3;
    v11[6] = a4;
    v12 = Components::Animations::Sequence::SetKeyframeValue(
            *(Components::Animations::Sequence **)(a1 + 8),
            a2,
            (struct Components::Animations::Input *)v11);
    if ( v12 >= 0 )
      v12 = 0;
  }
  if ( v11 )
  {
    if ( v11[2]-- == 1 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 48LL))(v11);
  }
  return (unsigned int)v12;
}
