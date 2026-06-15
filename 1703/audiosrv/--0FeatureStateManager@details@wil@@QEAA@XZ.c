/*
 * XREFs of ??0FeatureStateManager@details@wil@@QEAA@XZ @ 0x180038640
 * Callers:
 *     ??0?$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ @ 0x180038624 (--0-$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION *__fastcall wil::details::FeatureStateManager::FeatureStateManager(
        struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  LOBYTE(this->DebugInfo) = 0;
  *(_QWORD *)&this->LockCount = "WilStaging_01";
  this->OwningThread = 0LL;
  this->LockSemaphore = 0LL;
  this->SpinCount = 0LL;
  InitializeCriticalSectionEx(this + 1, 0, 0);
  this[2].DebugInfo = 0LL;
  result = this;
  LOBYTE(this[2].LockCount) = 0;
  this[2].OwningThread = 0LL;
  this[2].LockSemaphore = 0LL;
  this[2].SpinCount = 0LL;
  this[3].DebugInfo = 0LL;
  *(_QWORD *)&this[3].LockCount = 0LL;
  this[3].OwningThread = 0LL;
  LOBYTE(this->DebugInfo) = 1;
  return result;
}
