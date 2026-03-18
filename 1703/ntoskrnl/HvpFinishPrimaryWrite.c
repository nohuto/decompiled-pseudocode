/*
 * XREFs of HvpFinishPrimaryWrite @ 0x14043938C
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x1404391D8 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLogEvent @ 0x140662528 (CmpLogEvent.c)
 */

__int64 __fastcall HvpFinishPrimaryWrite(__int64 a1, char a2, unsigned __int8 a3, char a4)
{
  char v4; // si
  int v5; // edi
  __int64 v8; // rbx
  __int64 result; // rax

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 144) & 0x100;
  v8 = a1;
  if ( a2 == (v5 != 0) || (a1 = (*(_DWORD *)(a1 + 5488) >> 3) & 1, (_BYTE)a1 != a3) )
  {
    if ( !a4 )
    {
      CmpLockRegistry(a1);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v8 + 2848), 1u);
      v4 = 1;
    }
  }
  if ( a2 )
  {
    if ( v5 )
      *(_DWORD *)(v8 + 144) &= ~0x100u;
  }
  else if ( !v5 )
  {
    CmpLogEvent(&REG_EVENT_FLUSH_IO_FAIL);
    *(_DWORD *)(v8 + 144) |= 0x100u;
  }
  result = (*(_DWORD *)(v8 + 5488) >> 3) & 1;
  if ( (_DWORD)result != a3 )
  {
    result = *(_DWORD *)(v8 + 5488) ^ ((unsigned __int8)*(_DWORD *)(v8 + 5488) ^ (unsigned __int8)(8 * a3)) & 8u;
    *(_DWORD *)(v8 + 5488) = result;
  }
  if ( v4 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v8 + 2848));
    return CmpUnlockRegistry();
  }
  return result;
}
