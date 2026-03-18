/*
 * XREFs of ?ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z @ 0x18002C254
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18002AB6C (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x1800910A4 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetFloat(
        Components::Animations::Sequence **this,
        int a2,
        float a3)
{
  int v5; // eax
  struct Components::Animations::Input *v6; // rbx
  int v7; // edi
  struct Components::Animations::Input *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v5 = Components::Animations::ConstantInput::CreateInstance(&v10);
  v6 = v10;
  v7 = v5;
  if ( v5 >= 0 )
  {
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((double *)v6 + 2) = a3;
    *((_DWORD *)v6 + 3) = 18;
    v7 = Components::Animations::Sequence::SetKeyframeValue(this[1], a2, v6);
    if ( v7 >= 0 )
      v7 = 0;
  }
  if ( v6 )
  {
    if ( (*((_DWORD *)v6 + 2))-- == 1 )
      (*(void (__fastcall **)(struct Components::Animations::Input *))(*(_QWORD *)v6 + 48LL))(v6);
  }
  return (unsigned int)v7;
}
