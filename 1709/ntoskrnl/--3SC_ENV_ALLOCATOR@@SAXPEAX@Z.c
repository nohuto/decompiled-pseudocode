/*
 * XREFs of ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x1402926AC
 * Callers:
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x1406B24A0 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 * Callees:
 *     PspQueueApcSpecialApc @ 0x140453160 (PspQueueApcSpecialApc.c)
 */

void __fastcall SC_ENV_ALLOCATOR::operator delete(void *a1)
{
  PspQueueApcSpecialApc(a1);
}
