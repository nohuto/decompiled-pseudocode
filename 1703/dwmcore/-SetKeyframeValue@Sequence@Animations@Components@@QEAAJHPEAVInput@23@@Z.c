/*
 * XREFs of ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x1800910A4
 * Callers:
 *     ?ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z @ 0x180020FA8 (-ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z.c)
 *     ?ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z @ 0x18002C254 (-ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z.c)
 *     ?ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z @ 0x18002C2EC (-ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z.c)
 *     ?ApiSetStartingValue@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@@Z @ 0x18002C50C (-ApiSetStartingValue@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@W4Dwm__.c)
 *     ?ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__AnimationType@23@@Z @ 0x1801B77E0 (-ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__An.c)
 *     ?ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z @ 0x1801B78B0 (-ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z.c)
 *     ?ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z @ 0x1801B7984 (-ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z.c)
 *     ?ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z @ 0x1801B7A54 (-ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Sequence::SetKeyframeValue(
        Components::Animations::Sequence *this,
        int a2,
        struct Components::Animations::Input *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  _DWORD *v6; // rcx

  v3 = *(_QWORD *)this;
  v5 = 3LL * a2;
  if ( a3 )
    ++*((_DWORD *)a3 + 2);
  v6 = *(_DWORD **)(v3 + 24LL * a2 + 8);
  if ( v6 )
  {
    if ( v6[2]-- == 1 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 48LL))(v6);
  }
  *(_QWORD *)(v3 + 8 * v5 + 8) = a3;
  return 0LL;
}
