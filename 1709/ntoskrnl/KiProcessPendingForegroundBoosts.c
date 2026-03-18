/*
 * XREFs of KiProcessPendingForegroundBoosts @ 0x1400AA990
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiApplyForegroundBoostThread @ 0x1400AAB38 (KiApplyForegroundBoostThread.c)
 */

void __fastcall KiProcessPendingForegroundBoosts(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _QWORD *v4; // rbx
  unsigned int v5; // esi
  int v6; // edi
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  unsigned int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // r9
  __int64 *v12; // r8
  bool v13; // di
  __int64 v14; // r8
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi
  int v17; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v18; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF

  v18 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  KxAcquireSpinLock(&qword_1403714D8);
  v7 = (__int64 *)qword_1403714C8;
  while ( v7 != &qword_1403714C8 )
  {
    v8 = v7 - 179;
    v9 = v6 - *((_DWORD *)v7 - 2);
    v7 = (__int64 *)*v7;
    if ( v9 < 2 )
    {
      if ( v9 > v5 )
        v5 = v9;
    }
    else
    {
      v10 = v8 + 179;
      v11 = v8[179];
      v12 = (__int64 *)v8[180];
      if ( *(__int64 **)(v11 + 8) != v8 + 179 || (_QWORD *)*v12 != v10 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *v10 = v4;
      v4 = v8 + 179;
      v8[180] = 0LL;
      _InterlockedAdd16((volatile signed __int16 *)v8 + 710, 1u);
    }
  }
  v13 = qword_1403714C8 != (_QWORD)&qword_1403714C8;
  KxReleaseSpinLock(&qword_1403714D8);
  if ( v13 )
  {
    v19[1] = -1LL;
    v19[0] = 0LL;
    KeSetTimer2((__int64)&KiForegroundState, -150000LL * (2 - v5), 0LL, (__int64)v19);
  }
  while ( v4 )
  {
    v15 = v4;
    v4 = (_QWORD *)*v4;
    v16 = v15 - 179;
    v17 = 0;
    v16[179] = 1LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v16 + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( v16[8] );
    }
    KiApplyForegroundBoostThread(v16, &v18);
    v16[8] = 0LL;
    _InterlockedAdd16((volatile signed __int16 *)v16 + 710, 0xFFFFu);
  }
  KiReadyDeferredReadyList((__int64)KeGetCurrentPrcb(), &v18, v14);
}
