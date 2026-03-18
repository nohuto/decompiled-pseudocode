/*
 * XREFs of VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C000E0F8
 * Callers:
 *     VidSchDestroyDeviceSyncObject @ 0x1C000E170 (VidSchDestroyDeviceSyncObject.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BBA0 (VidSchiUnwaitMonitoredFences.c)
 */

void __fastcall VidSchiRundownMonitoredFenceCpuWaiters(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r13
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  unsigned int i; // ebp
  _QWORD *v8; // rdi
  _QWORD *v9; // rax

  v2 = *(_QWORD *)(a2 + 32);
  v5 = *(_QWORD **)(v2 + 1000);
  while ( v5 != (_QWORD *)(v2 + 1000) )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    if ( v6[3] == a2 )
    {
      for ( i = 0; i < *((_DWORD *)v6 + 26); ++i )
      {
        v8 = (_QWORD *)(v6[4] + 16LL * i);
        if ( *v8 == a1 || !a1 )
        {
          v9 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
          v9[3] = *v8;
          v9[4] = a2;
          v9[5] = **(_QWORD **)(*v8 + 56LL);
          v9[6] = v8[1];
          v9[7] = *(unsigned __int8 *)(*v8 + 28LL);
          WdLogEvent5_WdEvent(v9);
          *v8 = 0LL;
        }
      }
    }
  }
  VidSchiUnwaitMonitoredFences(v2);
}
