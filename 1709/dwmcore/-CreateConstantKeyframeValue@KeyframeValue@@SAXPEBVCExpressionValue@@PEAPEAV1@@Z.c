/*
 * XREFs of ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x180092D44
 * Callers:
 *     ?SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800A48AC (-SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeValue@@SAPEAX_K@Z @ 0x180092B60 (--2KeyframeValue@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ @ 0x180092DD8 (-InternalRelease@-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180092EB0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall KeyframeValue::CreateConstantKeyframeValue(
        const struct CExpressionValue *a1,
        struct KeyframeValue **a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  int v6; // ecx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = KeyframeValue::operator new();
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v4 = &KeyframeValue::`vftable';
    v4[2] = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
    (**(void (__fastcall ***)(_DWORD *))v5)(v5);
  v5[5] = 1;
  CExpressionValue::CopyFrom((CExpressionValue *)(v5 + 6), a1);
  v6 = v5[22];
  v7 = 0LL;
  v5[4] = v6;
  *a2 = (struct KeyframeValue *)v5;
  Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(&v7);
}
