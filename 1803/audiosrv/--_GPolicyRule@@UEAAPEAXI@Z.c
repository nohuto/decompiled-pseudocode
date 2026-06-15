/*
 * XREFs of ??_GPolicyRule@@UEAAPEAXI@Z @ 0x1800FBB98
 * Callers:
 *     ??_EPolicyRule@@W7EAAPEAXI@Z @ 0x180066160 (--_EPolicyRule@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PolicyRule@@UEAA@XZ @ 0x1800FBAA8 (--1PolicyRule@@UEAA@XZ.c)
 */

PolicyRule *__fastcall PolicyRule::`scalar deleting destructor'(PolicyRule *this, char a2)
{
  PolicyRule::~PolicyRule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
