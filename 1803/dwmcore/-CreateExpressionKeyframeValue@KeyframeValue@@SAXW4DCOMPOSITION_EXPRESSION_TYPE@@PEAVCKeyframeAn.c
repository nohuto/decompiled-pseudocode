/*
 * XREFs of ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x1801C0EF0
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18003E02C (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeValue@@SAPEAX_K@Z @ 0x1800298F4 (--2KeyframeValue@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ @ 0x180040A4C (-InternalRelease@-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall KeyframeValue::CreateExpressionKeyframeValue(int a1, __int64 a2, int a3, _QWORD *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  KeyframeValue *v11; // [rsp+48h] [rbp+10h] BYREF

  v8 = KeyframeValue::operator new();
  v9 = v8;
  if ( v8 )
  {
    *(_QWORD *)v8 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v8 = &KeyframeValue::`vftable';
    v8[2] = 0;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
    (**(void (__fastcall ***)(_DWORD *))v9)(v9);
  v11 = 0LL;
  v9[5] = 2;
  *((_QWORD *)v9 + 3) = a2;
  v9[8] = a3;
  v9[4] = a1;
  *a4 = v9;
  return Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(&v11);
}
