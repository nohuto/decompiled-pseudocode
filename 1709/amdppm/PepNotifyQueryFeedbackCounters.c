/*
 * XREFs of PepNotifyQueryFeedbackCounters @ 0x1C002CC38
 * Callers:
 *     InitPepPerfStates @ 0x1C002C5E8 (InitPepPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C000C700 (memmove.c)
 *     memset @ 0x1C000CA40 (memset.c)
 */

__int64 __fastcall PepNotifyQueryFeedbackCounters(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v3; // rsi
  SIZE_T v6; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax

  v3 = a2;
  v6 = 8 * a2 + 4;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    *v8 = v3;
    v10 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1088), 9LL, v8);
    v9 = v10;
    if ( v10 >= 0 )
      memmove(a3, v8 + 1, 8 * v3);
    else
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        2u,
        0x1Fu,
        (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
        v10);
  }
  else
  {
    v9 = -1073741670;
  }
  ExFreePoolWithTag(v8, 0x72637250u);
  return v9;
}
