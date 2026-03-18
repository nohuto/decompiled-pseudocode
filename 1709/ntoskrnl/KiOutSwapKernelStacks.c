/*
 * XREFs of KiOutSwapKernelStacks @ 0x1400ACF64
 * Callers:
 *     KeSwapProcessOrStack @ 0x140142E10 (KeSwapProcessOrStack.c)
 * Callees:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KiWaitForContextSwap @ 0x14005B39C (KiWaitForContextSwap.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     KeEnumerateKernelStackSegments @ 0x1400AD238 (KeEnumerateKernelStackSegments.c)
 *     KiDecrementProcessStackCount @ 0x1400AD3D8 (KiDecrementProcessStackCount.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void KiOutSwapKernelStacks()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  unsigned int v2; // esi
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  _QWORD *v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // rbx
  int v10; // r14d
  _KPROCESS *v11; // rdx
  int v12[4]; // [rsp+28h] [rbp-E0h] BYREF
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh]
  __int64 v15; // [rsp+40h] [rbp-C8h]
  __int64 v16; // [rsp+48h] [rbp-C0h]
  __int64 v17; // [rsp+50h] [rbp-B8h]
  _QWORD v18[5]; // [rsp+F8h] [rbp-10h] BYREF

  v0 = 0LL;
  v1 = KiProcessorBlock[KiLastProcessor];
  v2 = MEMORY[0xFFFFF78000000320] - KiStackProtectTime;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v12[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 22800), 0LL) )
  {
    do
      KeYieldProcessorEx(v12);
    while ( *(_QWORD *)(v1 + 22800) );
  }
  v4 = *(_QWORD **)(v1 + 22784);
  while ( v4 != (_QWORD *)(v1 + 22784) )
  {
    if ( (unsigned int)v0 >= 5 )
      break;
    v5 = (unsigned __int64)(v4 - 27);
    v4 = (_QWORD *)*v4;
    if ( v2 < *(_DWORD *)(v5 + 436) )
      break;
    if ( *(char *)(v5 + 195) >= 25 )
    {
      v6 = *(_QWORD *)(v5 + 216);
      v7 = *(_QWORD **)(v5 + 224);
      if ( *(_QWORD *)(v6 + 8) != v5 + 216 || *v7 != v5 + 216 )
        __fastfail(3u);
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 0x11u);
      if ( _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0x14u) )
        v18[v0] = v5 | 1;
      else
        v18[v0] = v5;
      v0 = (unsigned int)(v0 + 1);
      v6 = *(_QWORD *)(v5 + 216);
      v7 = *(_QWORD **)(v5 + 224);
      if ( *(_QWORD *)(v6 + 8) != v5 + 216 || *v7 != v5 + 216 )
        __fastfail(3u);
    }
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)(v5 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 22800), 0LL);
  __writecr8(CurrentIrql);
  ++KiLastProcessor;
  if ( KiLastProcessor == KeQueryActiveProcessorCountEx(0xFFFFu) )
    KiLastProcessor = 0;
  if ( (_DWORD)v0 )
  {
    v8 = &v18[v0];
    do
    {
      --v8;
      LODWORD(v0) = v0 - 1;
      v9 = *v8;
      if ( (*v8 & 1) != 0 )
      {
        v9 &= ~1uLL;
        v10 = 0;
      }
      else
      {
        v10 = 1;
      }
      KiWaitForContextSwap(v9);
      if ( v10 )
        KiDecrementProcessStackCount(*(_QWORD *)(v9 + 184));
      if ( (MiFlags & 0x40) != 0 )
      {
        v13 = 0;
        LOWORD(v14) = 0;
        v16 = 0LL;
        v17 = 0LL;
        v15 = 20LL;
        KeEnumerateKernelStackSegments(v9, MiOutPageSingleKernelStack, &v13);
        MiFlushTbList((__int64)&v13, v11);
      }
    }
    while ( (_DWORD)v0 );
  }
}
