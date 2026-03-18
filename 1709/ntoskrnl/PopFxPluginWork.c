/*
 * XREFs of PopFxPluginWork @ 0x1400FD120
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     PopPepWork @ 0x1400FD200 (PopPepWork.c)
 *     PopFxProcessWork @ 0x1400FD9F8 (PopFxProcessWork.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopFxBugCheck @ 0x14023D978 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxPluginWork(__int64 a1)
{
  ULONG_PTR v1; // rbx
  ULONG_PTR v3; // rdi
  bool v4; // zf
  __int64 result; // rax
  unsigned __int8 (__fastcall *v6)(__int64, _DWORD **); // rax
  unsigned __int8 (__fastcall *v7)(__int64, _DWORD **); // rax
  _DWORD *v8; // [rsp+30h] [rbp-58h] BYREF
  char v9; // [rsp+38h] [rbp-50h]
  _DWORD v10[16]; // [rsp+40h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  do
  {
    v3 = 0LL;
    if ( PopFxWatchdogWorkOrderTimeout )
    {
      v3 = *(_QWORD *)(a1 + 48);
      if ( v3 )
        KeSetCoalescableTimer(
          (PKTIMER)v3,
          (LARGE_INTEGER)(-10000LL * (unsigned int)PopFxWatchdogWorkOrderTimeout),
          0,
          PopFxWatchdogWorkOrderTimeout / 0xAu,
          (PKDPC)(v3 + 64));
    }
    memset(v10, 0, sizeof(v10));
    v9 = 0;
    v8 = v10;
    if ( !v1 )
    {
      v4 = (unsigned __int8)PopPepWork(v10) == 0;
      goto LABEL_7;
    }
    v6 = *(unsigned __int8 (__fastcall **)(__int64, _DWORD **))(v1 + 96);
    if ( v6 && v6(13LL, &v8) )
    {
      v4 = v9 == 0;
LABEL_7:
      if ( v4 )
        goto LABEL_9;
      goto LABEL_8;
    }
    v7 = *(unsigned __int8 (__fastcall **)(__int64, _DWORD **))(v1 + 112);
    if ( !v7 || !v7(10LL, &v8) )
      PopFxBugCheck(0x605uLL, 0xDuLL, v1, 0LL);
    if ( v9 )
    {
      if ( (unsigned int)(v10[0] - 7) > 1 )
        PopFxBugCheck(0x612uLL, v1, 0LL, 0LL);
LABEL_8:
      PopFxProcessWork(v1);
    }
LABEL_9:
    if ( v3 )
    {
      if ( !KeCancelTimer((PKTIMER)v3) )
        PopFxBugCheck(0x618uLL, v3, 0LL, 0LL);
    }
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
