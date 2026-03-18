/*
 * XREFs of MiUpdatePfnBackingStore @ 0x1402271CC
 * Callers:
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiUpdatePfnBackingStore(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int8 v4; // di
  __int64 result; // rax
  __int64 *v10; // r11

  v4 = 0;
  if ( !a4 )
    v4 = MiLockPageInline(a1);
  result = MiTransferSoftwarePte(*(_QWORD *)(a1 + 16), a2, a3, 2 * ((*(_DWORD *)(a1 + 16) & 2) != 0) + 1);
  *v10 = result;
  if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
    result = (__int64)MiWritePteShadow();
  if ( !a4 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = v4;
    __writecr8(v4);
  }
  return result;
}
