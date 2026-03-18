/*
 * XREFs of PnpSetInterruptInformation @ 0x14059D3B8
 * Callers:
 *     PnpSetDevicePropertyData @ 0x14052F3A8 (PnpSetDevicePropertyData.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpSetInterruptInformation(__int64 a1, const void *a2, unsigned int a3)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rax
  void *v9; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a3 + 4, 0x47706E50u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = a3;
  memmove(PoolWithTag + 1, a2, a3);
  v8 = *(_QWORD *)(a1 + 312);
  v9 = *(void **)(v8 + 88);
  *(_QWORD *)(v8 + 88) = v7;
  if ( v9 )
    ExFreePoolWithTag(v9, 0x47706E50u);
  return 0LL;
}
