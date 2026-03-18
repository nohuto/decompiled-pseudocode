/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x140209F5C
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x140278270 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x14008C950 (KiAcquireThreadStateLock.c)
 *     KeCheckAndApplyBamQos @ 0x140209EA0 (KeCheckAndApplyBamQos.c)
 */

void __fastcall KeSetThreadSchedulerAssist(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 v4; // di
  unsigned __int64 v5; // rax
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rax
  __int16 v8; // di
  int v9; // edx
  bool v10; // di
  signed __int32 v11; // ett
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int64 *v13; // [rsp+28h] [rbp-20h] BYREF
  int v14; // [rsp+40h] [rbp-8h]
  int v15; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v7 = *(_QWORD *)(a1 + 1512);
    v8 = v14;
    _disable();
    v9 = *(_DWORD *)(v7 + 4);
    v10 = (v8 & 0x200) != 0;
    if ( v9 != (*(_DWORD *)(a1 + 120) & 3) && v9 < 3 )
    {
      do
        v11 = *(_DWORD *)(a1 + 120);
      while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 120), v9 | v11 & 0xFFFFFFFC, v11) );
      KeCheckAndApplyBamQos((__int64)KeGetCurrentPrcb(), a1);
    }
    if ( v10 )
      _enable();
    v5 = CurrentIrql;
  }
  else
  {
    if ( a2 )
    {
      *(_QWORD *)(a1 + 1512) = a2;
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x16u);
      return;
    }
    v4 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( *(_QWORD *)(a1 + 64) );
    }
    KiAcquireThreadStateLock(a1, &v12, (volatile signed __int32 **)&v13);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0x16u);
    *(_QWORD *)(a1 + 1512) = 0LL;
    if ( v12 )
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
    if ( v13 )
      _InterlockedAnd64(v13, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
    v5 = v4;
  }
  __writecr8(v5);
}
