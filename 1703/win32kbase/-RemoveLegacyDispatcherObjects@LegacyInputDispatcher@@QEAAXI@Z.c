/*
 * XREFs of ?RemoveLegacyDispatcherObjects@LegacyInputDispatcher@@QEAAXI@Z @ 0x1C011A560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LegacyInputDispatcher::RemoveLegacyDispatcherObjects(LegacyInputDispatcher *this, unsigned int a2)
{
  *((_DWORD *)this + 10) -= a2;
  memset((void *)(*((_QWORD *)this + 1) + 8LL * *((unsigned int *)this + 10)), 0, 8LL * a2);
}
