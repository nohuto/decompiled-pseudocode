/*
 * XREFs of RootHub_InitializeReadModifyWriteLock @ 0x1C0020340
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C005E13C (RootHub_PrepareHardware.c)
 * Callees:
 *     DynamicLock_Create @ 0x1C003FC00 (DynamicLock_Create.c)
 */

__int64 __fastcall RootHub_InitializeReadModifyWriteLock(_QWORD *a1, unsigned int a2)
{
  return DynamicLock_Create(
           *a1,
           *(_QWORD *)(a1[1] + 72LL),
           *(_BYTE *)(a1[1] + 441LL) != 0,
           a1[6] + ((unsigned __int64)a2 << 6) + 16);
}
