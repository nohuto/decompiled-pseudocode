/*
 * XREFs of VidSchDdiNotifyInterrupt @ 0x1C000C420
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C520 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiLogInterrupt @ 0x1C000C7F0 (VidSchiLogInterrupt.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchDdiNotifyInterrupt(__int64 a1, unsigned int *a2)
{
  __int64 DxgAdapter; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  int v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]

  v15 = 0LL;
  v14 = 4015;
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter);
  ((void (__fastcall *)(int *, __int64))DxgCoreInterface[72])(&v14, 4015LL);
  if ( (DpiGetSchedulerCallbackState(a1) & 2) != 0 )
  {
    DxgAdapter = DpiGetDxgAdapter(a1);
    v6 = DxgAdapter;
    v7 = DxgAdapter ? *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2464) + 528LL) : 0LL;
    if ( v7 )
    {
      LOBYTE(v5) = 1;
      VidSchiLogInterrupt(v7, a2, v5);
      if ( *a2 <= 0xA )
      {
        v10 = 1160;
        if ( _bittest(&v10, *a2) )
        {
          if ( !*(_QWORD *)(v6 + 2456) )
          {
            v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(1160LL, v8, v9);
            v13[3] = 281LL;
            v13[4] = 7LL;
            v13[5] = v6;
            v13[6] = 0LL;
            v13[7] = 0LL;
            WdLogEvent5_WdCriticalError(v13);
            JUMPOUT(0x1C001D914LL);
          }
        }
      }
      VidSchDdiNotifyInterruptWorker(*(_QWORD *)(v6 + 2464), a2, 1LL);
    }
  }
  result = ((__int64 (__fastcall *)(int *))DxgCoreInterface[73])(&v14);
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    return McTemplateK0q(v12, &EventProfilerExit);
  return result;
}
