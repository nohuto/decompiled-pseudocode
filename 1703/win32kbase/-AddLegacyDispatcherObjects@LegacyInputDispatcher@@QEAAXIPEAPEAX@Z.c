/*
 * XREFs of ?AddLegacyDispatcherObjects@LegacyInputDispatcher@@QEAAXIPEAPEAX@Z @ 0x1C011A320
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

void __fastcall LegacyInputDispatcher::AddLegacyDispatcherObjects(
        LegacyInputDispatcher *this,
        unsigned int a2,
        void **a3)
{
  memmove((void *)(*((_QWORD *)this + 1) + 8LL * *((unsigned int *)this + 10)), a3, 8LL * a2);
  *((_DWORD *)this + 10) += a2;
}
