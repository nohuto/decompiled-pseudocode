/*
 * XREFs of ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x1800C535C
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18003E02C (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeValue@@SAPEAX_K@Z @ 0x1800298F4 (--2KeyframeValue@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ @ 0x180040A4C (-InternalRelease@-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall KeyframeValue::CreateStartingValueKeyframeValue(int a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  KeyframeValue *v9; // [rsp+38h] [rbp+10h] BYREF

  v6 = KeyframeValue::operator new();
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v6 = &KeyframeValue::`vftable';
    v6[2] = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
    (**(void (__fastcall ***)(_DWORD *))v7)(v7);
  v9 = 0LL;
  v7[5] = 3;
  *((_QWORD *)v7 + 3) = a2;
  v7[4] = a1;
  *a3 = v7;
  return Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(&v9);
}
