/*
 * XREFs of ??_GCWindowsPolicyManager@@UEAAPEAXI@Z @ 0x180004AEC
 * Callers:
 *     ??_ECWindowsPolicyManager@@WBA@EAAPEAXI@Z @ 0x180006890 (--_ECWindowsPolicyManager@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CWindowsPolicyManager *__fastcall CWindowsPolicyManager::`scalar deleting destructor'(
        CWindowsPolicyManager *this,
        char a2)
{
  *(_QWORD *)this = &CWindowsPolicyManager::`vftable'{for `IAudioPolicyManager'};
  *((_QWORD *)this + 1) = &CWindowsPolicyManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 2) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
