/*
 * XREFs of ??_ECStreamClassPolicyManager@@UEAAPEAXI@Z @ 0x180023040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CStreamClassPolicyManager *__fastcall CStreamClassPolicyManager::`vector deleting destructor'(
        CStreamClassPolicyManager *this,
        char a2)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
