/*
 * XREFs of ?Reset@CForceEvaluator@@QEAAXMMPEAUIAccelerator@@W4ScrollAxis@@@Z @ 0x180189070
 * Callers:
 *     ?Update@CSpringForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180188B10 (-Update@CSpringForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180188CC0 (-Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CForceEvaluator::Reset(__int64 a1, float a2, float a3, __int64 a4, int a5)
{
  __int64 *v6; // rdi
  __int64 v7; // xmm0_8
  int v8; // eax
  float v9; // xmm0_4
  __int64 result; // rax
  float v11; // xmm1_4

  *(float *)(a1 + 16) = a2;
  *(float *)(a1 + 20) = a3;
  v6 = (__int64 *)(a1 + 12);
  if ( a4 )
    *(float *)v6 = (*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 16LL))(a4, a1 + 12);
  else
    *(_DWORD *)v6 = 0;
  v7 = *v6;
  v8 = *((_DWORD *)v6 + 2);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = v7;
  v9 = FLOAT_0_1;
  *(_DWORD *)(a1 + 32) = v8;
  result = (unsigned int)a5;
  if ( a5 < 0 )
    goto LABEL_9;
  if ( a5 <= 1 )
  {
    v11 = FLOAT_10_0;
    goto LABEL_10;
  }
  if ( a5 != 2 )
  {
LABEL_9:
    v11 = 0.0;
    goto LABEL_10;
  }
  v11 = FLOAT_0_1;
LABEL_10:
  *(float *)(a1 + 40) = v11;
  if ( a5 < 0 )
    goto LABEL_13;
  if ( a5 <= 1 )
  {
    v9 = FLOAT_10_0;
    goto LABEL_14;
  }
  if ( a5 != 2 )
LABEL_13:
    v9 = 0.0;
LABEL_14:
  *(float *)(a1 + 36) = v9;
  return result;
}
