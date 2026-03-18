/*
 * XREFs of ?Update@CSpringForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180188B10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x180188D20 (-AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 *     ?Reset@CForceEvaluator@@QEAAXMMPEAUIAccelerator@@W4ScrollAxis@@@Z @ 0x180189070 (-Reset@CForceEvaluator@@QEAAXMMPEAUIAccelerator@@W4ScrollAxis@@@Z.c)
 */

float __fastcall CSpringForce::Update(CSpringForce *this, float a2, struct CExpressionValueStack *a3)
{
  __int64 v3; // rdx
  _BYTE v6[16]; // [rsp+30h] [rbp-38h] BYREF

  if ( !*((_BYTE *)this + 68) )
  {
    CForceEvaluator::Reset((char *)this + 24, v3, a3, this, *((_DWORD *)this + 18));
    *((_BYTE *)this + 68) = 1;
  }
  CForceEvaluator::AdvanceToTime((CSpringForce *)((char *)this + 24), a2 - *((float *)this + 24), this);
  return *(float *)((*(__int64 (__fastcall **)(CSpringForce *, _BYTE *))(*(_QWORD *)this + 40LL))(this, v6) + 4);
}
