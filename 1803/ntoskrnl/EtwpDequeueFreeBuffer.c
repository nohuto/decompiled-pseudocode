/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x1400D42C8
 * Callers:
 *     EtwpSwitchBuffer @ 0x1400D40D0 (EtwpSwitchBuffer.c)
 *     EtwpRotateCompressionTarget @ 0x1402B3EEC (EtwpRotateCompressionTarget.c)
 * Callees:
 *     EtwpEnqueueOverflowBuffer @ 0x1400D1C34 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpResetBufferHeader @ 0x1400D3A60 (EtwpResetBufferHeader.c)
 *     EtwpDequeueBuffer @ 0x1400D43F8 (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x1400D44D8 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400D4514 (EtwpLockBufferList.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     EtwpDisableCompression @ 0x1402B3888 (EtwpDisableCompression.c)
 */

volatile signed __int32 *__fastcall EtwpDequeueFreeBuffer(__int64 a1)
{
  volatile signed __int32 *result; // rax
  char v2; // bp
  int v4; // ebx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  signed __int32 v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // [rsp+50h] [rbp+8h] BYREF

  result = 0LL;
  v2 = 0;
  v11 = 0;
  if ( !*(_QWORD *)(a1 + 72) && !*(_QWORD *)(a1 + 88) )
    return result;
  v4 = *(_DWORD *)(a1 + 12);
  EtwpLockBufferList(a1, &v11);
  if ( (v4 & 0x400) == 0 )
  {
    v6 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 64);
    EtwpUnlockBufferList(v8, &v11);
    if ( v6 )
    {
      EtwpResetBufferHeader((__int64)v6, 0);
      *((_DWORD *)v6 + 11) = 1;
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
      goto LABEL_15;
    }
    return 0LL;
  }
  v6 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 80);
  if ( !v6 )
    v6 = (volatile signed __int32 *)EtwpDequeueBuffer(v5, a1 + 64);
  if ( *(_DWORD *)(a1 + 1184) )
  {
    v9 = *(_QWORD *)(a1 + 72);
    if ( !v9 || ((*(_DWORD *)(v9 + 12) - 4) & 0xFFFFFFFD) == 0 )
      v2 = 1;
  }
  EtwpUnlockBufferList(a1, &v11);
  if ( v2 )
    EtwpDisableCompression(a1);
  if ( !v6 )
    return 0LL;
  do
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 )
    {
      v7 = *((_DWORD *)v6 + 11);
      if ( (unsigned int)(v7 - 4) <= 1 )
        goto LABEL_12;
    }
    v7 = 0;
LABEL_12:
    if ( !*((_DWORD *)v6 + 3) && v7 == _InterlockedCompareExchange(v6 + 11, 1, v7) )
      break;
    EtwpEnqueueOverflowBuffer(a1, (__int64)v6);
    EtwpLockBufferList(a1, &v11);
    v6 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 64);
    EtwpUnlockBufferList(v10, &v11);
  }
  while ( v6 );
  if ( !v6 )
    return 0LL;
  EtwpResetBufferHeader((__int64)v6, 0);
LABEL_15:
  if ( *(_DWORD *)(a1 + 4) != *v6 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)v6, *(unsigned int *)(a1 + 4), *(unsigned int *)v6);
  return v6;
}
