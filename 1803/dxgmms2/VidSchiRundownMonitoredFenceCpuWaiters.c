/*
 * XREFs of VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C0003030
 * Callers:
 *     VidSchDestroyDeviceSyncObject @ 0x1C0002F90 (VidSchDestroyDeviceSyncObject.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 */

__int64 __fastcall VidSchiRundownMonitoredFenceCpuWaiters(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _QWORD *v5; // rbx
  _QWORD *v7; // rsi
  unsigned int i; // ebp
  _QWORD *v9; // rdi
  _QWORD *v10; // rax

  v2 = *(_QWORD *)(a2 + 32);
  v5 = *(_QWORD **)(v2 + 1016);
  while ( v5 != (_QWORD *)(v2 + 1016) )
  {
    v7 = v5;
    v5 = (_QWORD *)*v5;
    if ( v7[3] == a2 )
    {
      for ( i = 0; i < *((_DWORD *)v7 + 26); ++i )
      {
        v9 = (_QWORD *)(v7[4] + 16LL * i);
        if ( *v9 == a1 || !a1 )
        {
          v10 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
          v10[3] = *v9;
          v10[4] = a2;
          v10[5] = **(_QWORD **)(*v9 + 56LL);
          v10[6] = v9[1];
          v10[7] = *(unsigned __int8 *)(*v9 + 28LL);
          WdLogEvent5_WdEvent(v10);
          *v9 = 0LL;
        }
      }
    }
  }
  return VidSchiUnwaitMonitoredFences(v2);
}
