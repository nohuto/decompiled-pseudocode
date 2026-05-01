/*
 * XREFs of ??_GCOperation@CDelayIAMOperations@@UEAAPEAXI@Z @ 0x180006E20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDelayIAMOperations::COperation *__fastcall CDelayIAMOperations::COperation::`scalar deleting destructor'(
        CDelayIAMOperations::COperation *this,
        char a2)
{
  *(_QWORD *)this = &CDelayIAMOperations::COperation::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
