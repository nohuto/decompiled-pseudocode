/*
 * XREFs of ?ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z @ 0x180020FA8
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18002AB6C (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x1800910A4 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetVector2(
        __int64 a1,
        int a2,
        struct Components::Animations::Input *a3)
{
  int v6; // eax
  struct Components::Animations::Input *v7; // rbx
  int v8; // esi
  __int64 i; // rax
  struct Components::Animations::Input *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v6 = Components::Animations::ConstantInput::CreateInstance(&v12);
  v7 = v12;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v12 = a3;
    for ( i = 0LL; i < 2; ++i )
      *((double *)v7 + i + 2) = *((float *)&v12 + i);
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_DWORD *)v7 + 3) = 35;
    v8 = Components::Animations::Sequence::SetKeyframeValue(*(Components::Animations::Sequence **)(a1 + 8), a2, v7);
    if ( v8 >= 0 )
      v8 = 0;
  }
  if ( v7 )
  {
    if ( (*((_DWORD *)v7 + 2))-- == 1 )
      (*(void (__fastcall **)(struct Components::Animations::Input *))(*(_QWORD *)v7 + 48LL))(v7);
  }
  return (unsigned int)v8;
}
