/*
 * XREFs of ?ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z @ 0x18002C2EC
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18002AB6C (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x1800910A4 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetColor(__int64 a1, int a2, _OWORD *a3)
{
  int v6; // eax
  struct Components::Animations::Input *v7; // rbx
  int v8; // edi
  double *v9; // rdx
  __int64 i; // rax
  float v11; // xmm0_4
  _OWORD v14[2]; // [rsp+20h] [rbp-28h]
  struct Components::Animations::Input *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  v6 = Components::Animations::ConstantInput::CreateInstance(&v15);
  v7 = v15;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = (double *)((char *)v15 + 16);
    v14[0] = *a3;
    for ( i = 0LL; i < 4; ++i )
    {
      v11 = *((float *)v14 + i);
      *v9++ = v11;
    }
    *((_DWORD *)v7 + 3) = 70;
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
