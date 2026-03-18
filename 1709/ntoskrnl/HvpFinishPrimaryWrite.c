/*
 * XREFs of HvpFinishPrimaryWrite @ 0x1404E6964
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x1404E4520 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpLogEvent @ 0x14068BA34 (CmpLogEvent.c)
 */

__int64 __fastcall HvpFinishPrimaryWrite(__int64 a1, char a2, unsigned __int8 a3, char a4)
{
  char v4; // si
  int v5; // edi
  __int64 result; // rax

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 144) & 0x100;
  if ( (a2 == (v5 != 0) || ((*(_DWORD *)(a1 + 5488) & 8) != 0) != a3) && !a4 )
  {
    CmpLockRegistry();
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 2848), 1u);
    v4 = 1;
  }
  if ( a2 )
  {
    if ( v5 )
      *(_DWORD *)(a1 + 144) &= ~0x100u;
  }
  else if ( !v5 )
  {
    CmpLogEvent(&REG_EVENT_FLUSH_IO_FAIL);
    *(_DWORD *)(a1 + 144) |= 0x100u;
  }
  result = (*(_DWORD *)(a1 + 5488) >> 3) & 1;
  if ( (_DWORD)result != a3 )
  {
    result = *(_DWORD *)(a1 + 5488) ^ ((unsigned __int8)*(_DWORD *)(a1 + 5488) ^ (unsigned __int8)(8 * a3)) & 8u;
    *(_DWORD *)(a1 + 5488) = result;
  }
  if ( v4 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
    return CmpUnlockRegistry();
  }
  return result;
}
