/*
 * XREFs of VfPendingCheckForChanges @ 0x1407B37E4
 * Callers:
 *     VfInitVerifierComponents @ 0x1407A7380 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x1407BDC94 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall VfPendingCheckForChanges(__int16 a1)
{
  SIZE_T v1; // rbx
  PVOID PoolWithTagPriority; // rax

  if ( (a1 & 0x200) != 0 && !VfForcedPendingLog )
  {
    if ( (unsigned int)VfForcedPendingLogLength > 0x100000 )
      VfForcedPendingLogLength = 0x100000;
    v1 = (unsigned __int64)(unsigned int)VfForcedPendingLogLength << 9;
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(NonPagedPoolNx, v1, 0x50466656u, HighPoolPriority);
    VfForcedPendingLog = (__int64)PoolWithTagPriority;
    if ( PoolWithTagPriority )
      memset(PoolWithTagPriority, 0, v1);
  }
}
