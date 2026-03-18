/*
 * XREFs of ?AddLegacyDispatcherObjects@LegacyInputDispatcher@@QEAAXIPEAPEAX@Z @ 0x1C0118F90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

void __fastcall LegacyInputDispatcher::AddLegacyDispatcherObjects(
        LegacyInputDispatcher *this,
        unsigned int a2,
        void **a3)
{
  memmove((void *)(*((_QWORD *)this + 1) + 8LL * *((unsigned int *)this + 13)), a3, 8LL * a2);
  *((_DWORD *)this + 13) += a2;
}
