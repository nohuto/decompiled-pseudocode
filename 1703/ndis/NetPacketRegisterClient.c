/*
 * XREFs of NetPacketRegisterClient @ 0x1C00F2F80
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     ?QueueStateUpdates@@YAXXZ @ 0x1C00F299C (-QueueStateUpdates@@YAXXZ.c)
 */

_WORD *__fastcall NetPacketRegisterClient(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _WORD *PoolWithTag; // rax
  _WORD *v10; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x6C43784Eu);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    *(_DWORD *)v10 = 0;
    v10[2] = 0;
    *((_QWORD *)v10 + 1) = 0LL;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_QWORD *)v10 + 7) = 0LL;
    *((_QWORD *)v10 + 8) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
    return 0LL;
  *((_QWORD *)v10 + 6) = a5;
  *(_DWORD *)v10 = 0;
  *((_QWORD *)v10 + 2) = a1;
  *((_QWORD *)v10 + 3) = a2;
  *((_QWORD *)v10 + 4) = a3;
  *((_QWORD *)v10 + 5) = a4;
  ExAcquirePushLockExclusiveEx(&unk_1C0093D98, 0LL);
  *((_QWORD *)v10 + 1) = qword_1C0094158;
  qword_1C0094158 = v10;
  ExReleasePushLockExclusiveEx(&unk_1C0093D98, 0LL);
  *(_DWORD *)v10 = 1;
  QueueStateUpdates();
  return v10;
}
