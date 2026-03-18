/*
 * XREFs of PsEnumProcessThreads @ 0x1405D6210
 * Callers:
 *     PopUpdateSingleProcessHeteroPolicies @ 0x1405D61F0 (PopUpdateSingleProcessHeteroPolicies.c)
 *     EtwpProcessEnumCallback @ 0x14074DE90 (EtwpProcessEnumCallback.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PsGetNextProcessThread @ 0x1404D9170 (PsGetNextProcessThread.c)
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
