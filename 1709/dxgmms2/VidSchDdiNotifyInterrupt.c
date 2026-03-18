/*
 * XREFs of VidSchDdiNotifyInterrupt @ 0x1C000BF70
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C020 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiLogInterrupt @ 0x1C000C340 (VidSchiLogInterrupt.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 */

__int64 __fastcall VidSchDdiNotifyInterrupt(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ecx
  _QWORD *v11; // rax

  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter);
  result = DpiGetSchedulerCallbackState(a1);
  if ( (result & 2) != 0 )
  {
    result = DpiGetDxgAdapter(a1);
    v7 = result;
    if ( result )
    {
      result = *(_QWORD *)(result + 2312);
      v5 = *(_QWORD *)(result + 512);
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      LOBYTE(v6) = 1;
      VidSchiLogInterrupt(v5, a2, v6);
      if ( *a2 <= 0xA )
      {
        v10 = 1160;
        if ( _bittest(&v10, *a2) )
        {
          if ( !*(_QWORD *)(v7 + 2304) )
          {
            v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(1160LL, v8, v9);
            v11[3] = 281LL;
            v11[4] = 7LL;
            v11[5] = v7;
            v11[6] = 0LL;
            v11[7] = 0LL;
            WdLogEvent5_WdCriticalError(v11);
            JUMPOUT(0x1C001CB61LL);
          }
        }
      }
      result = VidSchDdiNotifyInterruptWorker(*(_QWORD *)(v7 + 2312), a2, 1LL);
    }
  }
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    return McTemplateK0q(v5, &EventProfilerExit);
  return result;
}
