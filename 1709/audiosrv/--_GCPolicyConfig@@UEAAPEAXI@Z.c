/*
 * XREFs of ??_GCPolicyConfig@@UEAAPEAXI@Z @ 0x180061238
 * Callers:
 *     ??_ECPolicyConfig@@W7EAAPEAXI@Z @ 0x180036BC0 (--_ECPolicyConfig@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x18007F5A0 (--1CPolicyConfig@@UEAA@XZ.c)
 */

CPolicyConfig *__fastcall CPolicyConfig::`scalar deleting destructor'(CPolicyConfig *this, char a2)
{
  CPolicyConfig::~CPolicyConfig(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x490);
  return this;
}
