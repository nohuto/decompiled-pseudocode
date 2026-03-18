/*
 * XREFs of KeSetIntervalProfile @ 0x14056DF7C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140435210 (EtwpEnableKernelTrace.c)
 *     NtSetIntervalProfile @ 0x14056DF2C (NtSetIntervalProfile.c)
 *     KiInitializeCacheErrataSupport @ 0x140834BBC (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiSanitizeProfileInterval @ 0x1402055B0 (KiSanitizeProfileInterval.c)
 *     KeQueryIntervalProfile @ 0x14056DB38 (KeQueryIntervalProfile.c)
 */

void __fastcall KeSetIntervalProfile(int a1, int a2)
{
  int IntervalProfile; // esi
  int v4; // edi
  int v5; // eax
  int v6; // [rsp+30h] [rbp-40h] BYREF
  struct _SINGLE_LIST_ENTRY v7; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v8[4]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD *v9; // [rsp+50h] [rbp-20h] BYREF
  int v10; // [rsp+58h] [rbp-18h]
  int v11; // [rsp+5Ch] [rbp-14h]

  IntervalProfile = 0;
  v6 = a1;
  v4 = a1;
  if ( (WORD2(PerfGlobalGroupMask) & 0x402) != 0 )
    IntervalProfile = KeQueryIntervalProfile(a2);
  if ( !a2 )
  {
    if ( (KiCacheErrataMonitor & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    {
LABEL_5:
      v7.Next = (struct _SINGLE_LIST_ENTRY *)__PAIR64__(v4, a2);
      KeGenericProcessorCallback(
        (unsigned __int16 *)KeActiveProcessors,
        (void (__fastcall *)(struct _KPRCB *, struct _SINGLE_LIST_ENTRY *))KiSetIntervalWorker,
        &v7,
        1LL);
      goto LABEL_6;
    }
    KiSanitizeProfileInterval(&v6);
    v4 = v6;
  }
  if ( a2 != 1 )
    goto LABEL_5;
  KiProfileAlignmentFixupInterval = v4;
LABEL_6:
  if ( (WORD2(PerfGlobalGroupMask) & 0x402) != 0 )
  {
    v5 = KeQueryIntervalProfile(a2);
    if ( v5 != IntervalProfile )
    {
      v11 = 0;
      v8[1] = v5;
      v8[0] = a2;
      v9 = v8;
      v8[2] = IntervalProfile;
      v10 = 12;
      EtwTraceKernelEvent((int)&v9, 1, 0x20000402u, 3912, 4200706);
    }
  }
}
