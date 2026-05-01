/*
 * XREFs of HamIpcChannelAddCallback @ 0x18000D844
 * Callers:
 *     HamCreateActivityForProcess @ 0x1800014D0 (HamCreateActivityForProcess.c)
 *     HamCreateActivity @ 0x18000D250 (HamCreateActivity.c)
 *     HamCreateExtendedExecution @ 0x18000D3C0 (HamCreateExtendedExecution.c)
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x180006000 (HampIpcChannelObjectCompareObjectsForTree.c)
 */

__int64 __fastcall HamIpcChannelAddCallback(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r8
  __int64 v4; // r14
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 40);
  RtlAcquireSRWLockExclusive(v1 + 8);
  *(_DWORD *)(v1 + 16) = GetCurrentThreadId();
  LOBYTE(v3) = 0;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = *(_BYTE *)(v4 + 32) & 1;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (int)HampIpcChannelObjectCompareObjectsForTree(a1, v5) < 0 )
      {
        v7 = *(_QWORD *)v5;
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_13;
          v7 ^= v5;
        }
        if ( !v7 )
        {
LABEL_13:
          LOBYTE(v3) = 0;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_7;
          v7 ^= v5;
        }
        if ( !v7 )
        {
LABEL_7:
          LOBYTE(v3) = 1;
          break;
        }
      }
      v5 = v7;
    }
  }
  RtlRbInsertNodeEx(v4 + 24, v5, v3, a1);
  *(_DWORD *)(v1 + 16) = 0;
  return RtlReleaseSRWLockExclusive(v1 + 8);
}
