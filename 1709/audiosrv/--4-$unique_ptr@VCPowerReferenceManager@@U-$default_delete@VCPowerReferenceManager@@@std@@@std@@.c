/*
 * XREFs of ??4?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180061068
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180061F40 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180060F74 (--1CPowerReferenceManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CPowerReferenceManager **__fastcall std::unique_ptr<CPowerReferenceManager>::operator=(
        __int64 a1,
        CPowerReferenceManager **a2)
{
  CPowerReferenceManager *v2; // rax
  CPowerReferenceManager *v3; // rbx

  if ( &g_powerReferenceManager != a2 )
  {
    v2 = *a2;
    *a2 = 0LL;
    v3 = g_powerReferenceManager;
    g_powerReferenceManager = v2;
    if ( v3 )
    {
      CPowerReferenceManager::~CPowerReferenceManager(v3);
      operator delete(v3, (const struct std::nothrow_t *)0x198);
    }
  }
  return &g_powerReferenceManager;
}
