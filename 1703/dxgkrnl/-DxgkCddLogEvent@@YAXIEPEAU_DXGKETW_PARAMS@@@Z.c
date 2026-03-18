/*
 * XREFs of ?DxgkCddLogEvent@@YAXIEPEAU_DXGKETW_PARAMS@@@Z @ 0x1C009DBA0
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C0013458 (Template_p.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     Template_qqqqqqqttQ3 @ 0x1C0025C10 (Template_qqqqqqqttQ3.c)
 */

void __fastcall DxgkCddLogEvent(__int64 a1, __int64 a2, struct _DXGKETW_PARAMS *a3, __int64 a4)
{
  int v5; // edi
  const EVENT_DESCRIPTOR *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v5 = a1;
  if ( (_DWORD)a1 == 8012 )
  {
    if ( !*(_QWORD *)a3 )
    {
      v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v9 + 24) = 2579LL;
      WdLogEvent5_WdAssertion(v9);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      Template_p(a1, &EventGdiRenderDuringCS, (__int64)a3, *(_QWORD *)a3);
  }
  else
  {
    if ( (qword_1C006E790 & 0x20) == 0 )
      return;
    if ( a3 )
    {
      if ( (_BYTE)a2 == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_qqqqqqqttQ3(
            a1,
            &EventExtendedProfilerEnter,
            (__int64)a3,
            a1,
            *(_DWORD *)a3,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            *((_DWORD *)a3 + 4),
            *((_DWORD *)a3 + 5),
            *((_DWORD *)a3 + 6),
            *((_DWORD *)a3 + 7),
            (__int64)a3 + 32);
      }
      else if ( (_BYTE)a2 == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_qqqqqqqttQ3(
            a1,
            &EventExtendedProfilerExit,
            (__int64)a3,
            a1,
            *(_DWORD *)a3,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            *((_DWORD *)a3 + 4),
            *((_DWORD *)a3 + 5),
            *((_DWORD *)a3 + 6),
            *((_DWORD *)a3 + 7),
            (__int64)a3 + 32);
      }
      else
      {
        if ( (_BYTE)a2 )
        {
          v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
          *(_QWORD *)(v8 + 24) = 2493LL;
          WdLogEvent5_WdAssertion(v8);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_qqqqqqqttQ3(
            a1,
            &EventExtendedProfilerInfo,
            (__int64)a3,
            v5,
            *(_DWORD *)a3,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            *((_DWORD *)a3 + 4),
            *((_DWORD *)a3 + 5),
            *((_DWORD *)a3 + 6),
            *((_DWORD *)a3 + 7),
            (__int64)a3 + 32);
      }
    }
    else if ( (_BYTE)a2 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        v6 = &EventProfilerEnter;
LABEL_15:
        Template_q(a1, v6, (__int64)a3, v5);
      }
    }
    else if ( (_BYTE)a2 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        v6 = &EventProfilerExit;
        goto LABEL_15;
      }
    }
    else
    {
      if ( (_BYTE)a2 )
      {
        v7 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
        *(_QWORD *)(v7 + 24) = 2454LL;
        WdLogEvent5_WdAssertion(v7);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        v6 = (const EVENT_DESCRIPTOR *)&EventProfilerInfo;
        goto LABEL_15;
      }
    }
  }
}
