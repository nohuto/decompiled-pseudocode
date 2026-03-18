/*
 * XREFs of ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x1402C81EC
 * Callers:
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x140716F70 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 * Callees:
 *     PspQueueApcSpecialApc @ 0x14052A140 (PspQueueApcSpecialApc.c)
 */

void __fastcall SC_ENV_ALLOCATOR::operator delete(void *a1)
{
  PspQueueApcSpecialApc(a1);
}
