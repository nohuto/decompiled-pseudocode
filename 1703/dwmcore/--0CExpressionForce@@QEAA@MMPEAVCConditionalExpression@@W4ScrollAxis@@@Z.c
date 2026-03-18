/*
 * XREFs of ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180188BA0
 * Callers:
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ @ 0x180181E40 (-SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpressionForce::CExpressionForce(__int64 a1, float a2, float a3, __int64 a4, int a5)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = &CMILRefCountBase::`vftable';
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &CExpressionForce::`vftable'{for `IAccelerator'};
  *(_QWORD *)(a1 + 8) = &CExpressionForce::`vftable'{for `CMILRefCountBase'};
  *(_QWORD *)(a1 + 72) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  *(_DWORD *)(a1 + 80) = a5;
  result = a1;
  *(float *)(a1 + 108) = a2;
  *(float *)(a1 + 112) = a3;
  *(_BYTE *)(a1 + 104) = 0;
  return result;
}
