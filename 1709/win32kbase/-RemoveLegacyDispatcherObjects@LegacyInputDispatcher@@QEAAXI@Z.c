/*
 * XREFs of ?RemoveLegacyDispatcherObjects@LegacyInputDispatcher@@QEAAXI@Z @ 0x1C0119230
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall LegacyInputDispatcher::RemoveLegacyDispatcherObjects(LegacyInputDispatcher *this, unsigned int a2)
{
  *((_DWORD *)this + 13) -= a2;
  memset((void *)(*((_QWORD *)this + 1) + 8LL * *((unsigned int *)this + 13)), 0, 8LL * a2);
}
