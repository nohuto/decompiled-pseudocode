/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1C010C868
 * Callers:
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C0124F5C (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 *     UnInitializeInputComponents @ 0x1C012EBF8 (UnInitializeInputComponents.c)
 * Callees:
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C010E2FC (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0124DC4 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ??1CBaseProcessor@@QEAA@XZ @ 0x1C0132780 (--1CBaseProcessor@@QEAA@XZ.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(CTouchProcessor *this)
{
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo(this);
  CInpLockGuard::Uninitialize((CTouchProcessor *)((char *)this + 72));
  *(_QWORD *)this = &CKeyboardProcessor::`vftable';
  CBaseProcessor::~CBaseProcessor(this);
}
