/*
 * XREFs of ExpFastResourceLegacyIsAcquiredShared @ 0x14025BFB8
 * Callers:
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 * Callees:
 *     ExpFindFastOwnerEntryForThread @ 0x14014E814 (ExpFindFastOwnerEntryForThread.c)
 */

__int64 __fastcall ExpFastResourceLegacyIsAcquiredShared(__int64 a1)
{
  unsigned int v1; // r10d
  __int64 *FastOwnerEntryForThread; // rax
  int v3; // r9d
  unsigned __int8 v4; // r11
  __int64 *v5; // rcx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 64) )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread((__int64)KeGetCurrentThread(), a1, 0, 0);
    if ( FastOwnerEntryForThread )
    {
      v5 = (__int64 *)FastOwnerEntryForThread[5];
      v1 = v3 + 1;
      while ( v5 != FastOwnerEntryForThread + 5 )
      {
        v5 = (__int64 *)*v5;
        ++v1;
      }
    }
    __writecr8(v4);
  }
  return v1;
}
