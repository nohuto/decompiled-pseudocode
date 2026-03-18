/*
 * XREFs of ??_GCExpressionForce@@UEAAPEAXI@Z @ 0x1801CB880
 * Callers:
 *     ??_ECExpressionForce@@WBA@EAAPEAXI@Z @ 0x1800DDD70 (--_ECExpressionForce@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CExpressionForce *__fastcall CExpressionForce::`scalar deleting destructor'(CExpressionForce *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_QWORD *)this + 2) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
