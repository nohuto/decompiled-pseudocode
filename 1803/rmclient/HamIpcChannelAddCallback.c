/*
 * XREFs of HamIpcChannelAddCallback @ 0x180005D80
 * Callers:
 *     HamCreateActivityForProcess @ 0x1800041E0 (HamCreateActivityForProcess.c)
 *     HamCreateExtendedExecution @ 0x1800045B0 (HamCreateExtendedExecution.c)
 *     RmpClientRegisterActivityHostCallbacks @ 0x180004920 (RmpClientRegisterActivityHostCallbacks.c)
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x1800060F0 (HampIpcChannelObjectCompareObjectsForTree.c)
 */

__int64 __fastcall HamIpcChannelAddCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // edi
  unsigned __int64 v10; // rax

  v3 = *(_QWORD *)(a1 + 40);
  RtlAcquireSRWLockExclusive(v3 + 8, a2, a3);
  *(_DWORD *)(v3 + 16) = GetCurrentThreadId();
  v6 = *(_QWORD *)(a1 + 40) + 24LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 32LL);
  v8 = *(_QWORD *)v6;
  if ( (v7 & 1) != 0 && v8 )
    v8 ^= v6;
  LOBYTE(v5) = 0;
  v9 = v7 & 1;
  if ( v8 )
  {
    while ( 1 )
    {
      if ( (int)HampIpcChannelObjectCompareObjectsForTree(a1, v8, v5) < 0 )
      {
        v10 = *(_QWORD *)v8;
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_16;
          v10 ^= v8;
        }
        if ( !v10 )
        {
LABEL_16:
          LOBYTE(v5) = 0;
          break;
        }
      }
      else
      {
        v10 = *(_QWORD *)(v8 + 8);
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_10;
          v10 ^= v8;
        }
        if ( !v10 )
        {
LABEL_10:
          LOBYTE(v5) = 1;
          break;
        }
      }
      v8 = v10;
    }
  }
  RtlRbInsertNodeEx(v6, v8, v5, a1);
  *(_DWORD *)(v3 + 16) = 0;
  return RtlReleaseSRWLockExclusive(v3 + 8);
}
