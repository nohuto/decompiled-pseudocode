/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x1400E0608
 * Callers:
 *     EtwpSwitchBuffer @ 0x1400E041C (EtwpSwitchBuffer.c)
 *     EtwpRotateCompressionTarget @ 0x140281C54 (EtwpRotateCompressionTarget.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x1400E0748 (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x1400E0828 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400E0868 (EtwpLockBufferList.c)
 *     EtwpResetBufferHeader @ 0x14011E224 (EtwpResetBufferHeader.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1401315F4 (EtwpEnqueueOverflowBuffer.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwpDisableCompression @ 0x1402815F4 (EtwpDisableCompression.c)
 */

volatile signed __int32 *__fastcall EtwpDequeueFreeBuffer(__int64 a1)
{
  char v1; // bp
  bool v3; // zf
  volatile signed __int32 *v4; // rdi
  signed __int32 v5; // edx
  __int64 v7; // rax
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 72) == 0LL;
  v8 = 0;
  if ( v3 && !*(_QWORD *)(a1 + 88) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    EtwpLockBufferList(a1, &v8);
    v4 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 80);
    if ( !v4 )
      v4 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 64);
    if ( *(_DWORD *)(a1 + 2328) )
    {
      v7 = *(_QWORD *)(a1 + 72);
      if ( !v7 || ((*(_DWORD *)(v7 + 12) - 4) & 0xFFFFFFFD) == 0 )
        v1 = 1;
    }
    EtwpUnlockBufferList(a1, &v8);
    if ( v1 )
      EtwpDisableCompression(a1);
    if ( !v4 )
      return 0LL;
    do
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
      if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 )
      {
        v5 = *((_DWORD *)v4 + 11);
        if ( (unsigned int)(v5 - 4) <= 1 )
          goto LABEL_12;
      }
      v5 = 0;
LABEL_12:
      if ( !*((_DWORD *)v4 + 3) && v5 == _InterlockedCompareExchange(v4 + 11, 1, v5) )
        break;
      EtwpEnqueueOverflowBuffer(a1, v4);
      EtwpLockBufferList(a1, &v8);
      v4 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 64);
      EtwpUnlockBufferList(a1, &v8);
    }
    while ( v4 );
    if ( !v4 )
      return 0LL;
    EtwpResetBufferHeader(v4, 0LL);
  }
  else
  {
    EtwpLockBufferList(a1, &v8);
    v4 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 64);
    EtwpUnlockBufferList(a1, &v8);
    if ( !v4 )
      return 0LL;
    EtwpResetBufferHeader(v4, 0LL);
    *((_DWORD *)v4 + 11) = 1;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
  }
  if ( *(_DWORD *)(a1 + 4) != *v4 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)v4, *(unsigned int *)(a1 + 4), *(unsigned int *)v4);
  return v4;
}
