/*
 * XREFs of PsEnumProcessThreads @ 0x14062971C
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1406292D0 (EtwpProcessEnumCallback.c)
 *     PopUpdateSingleProcessHeteroPolicies @ 0x14076B0B0 (PopUpdateSingleProcessHeteroPolicies.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PsGetNextProcessThread @ 0x1404E8150 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PsEnumProcessThreads(__int64 a1, __int64 (__fastcall *a2)(__int64, _QWORD *, __int64), __int64 a3)
{
  int v3; // edi
  _QWORD *v5; // rdx
  __int64 i; // rsi
  _QWORD *NextProcessThread; // rax
  void *v9; // rbx

  v3 = 0;
  v5 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextProcessThread = PsGetNextProcessThread(a1, v5);
    v9 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    v3 = a2(i, NextProcessThread, a3);
    if ( v3 < 0 )
    {
      ObfDereferenceObjectWithTag(v9, 0x6E457350u);
      return (unsigned int)v3;
    }
    v5 = v9;
  }
  return (unsigned int)v3;
}
