/*
 * XREFs of AlpcpSendCloseMessage @ 0x1404DB5D0
 * Callers:
 *     AlpcpClosePort @ 0x1404DA9D0 (AlpcpClosePort.c)
 *     AlpcpDeletePort @ 0x14055F430 (AlpcpDeletePort.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpDispatchCloseMessage @ 0x1404DB6F0 (AlpcpDispatchCloseMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 */

void __fastcall AlpcpSendCloseMessage(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // edx
  ULONG_PTR v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v8[8]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = *(_DWORD *)(a1 + 416);
  v3 = (v2 >> 1) & 3;
  if ( v3 != 1 && (v2 & 8) == 0 && ((*(_DWORD *)(a1 + 256) & 0x1000) == 0 || v3 == 2) )
  {
    v4 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 16) + 64LL), 0LL);
    if ( v4 )
    {
      AlpcpLockForCachedReferenceBlob(v4);
      --*(_WORD *)(v4 - 30);
      *(_DWORD *)(v4 + 264) &= ~0x80000000;
      *(_DWORD *)(v4 + 240) = 3145736;
      *(_BYTE *)(v4 + 244) = 0;
      *(_WORD *)(v4 + 244) |= 5u;
      *(_WORD *)(v4 + 246) = 0;
      v8[0] = a1;
      v8[1] = v4;
      LODWORD(v8[6]) = 0x10000;
      *(_QWORD *)(v4 + 280) = KeGetCurrentThread()->ApcState.Process[1].ThreadListHead.Flink;
      *(_QWORD *)(v4 + 248) = 0LL;
      *(_QWORD *)(v4 + 256) = 0LL;
      if ( (int)AlpcpDispatchCloseMessage(v8) < 0 )
        AlpcpUnlockMessage(v4, v5, v6, v7);
    }
  }
}
