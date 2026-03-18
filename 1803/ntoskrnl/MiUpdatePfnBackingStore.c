/*
 * XREFs of MiUpdatePfnBackingStore @ 0x1400D6420
 * Callers:
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedPages @ 0x1400D6708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 */

struct _KTHREAD *__fastcall MiUpdatePfnBackingStore(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int8 v4; // di
  struct _KTHREAD *result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8

  v4 = 0;
  if ( !a4 )
    v4 = MiLockPageInline(a1);
  *(_QWORD *)(a1 + 16) = MiTransferSoftwarePte(*(_QWORD *)(a1 + 16), a2, a3, 2 * ((*(_DWORD *)(a1 + 16) >> 1) & 1u) + 1);
  result = (struct _KTHREAD *)MiPteInShadowRange(a1 + 16);
  if ( (_DWORD)result )
    result = MiWritePteShadow(v11, v10, v12);
  if ( !a4 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (struct _KTHREAD *)v4;
    __writecr8(v4);
  }
  return result;
}
