/*
 * XREFs of DxgMiniportQueryVidPnInterfaceCB @ 0x1C009BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DxgMiniportQueryVidPnInterfaceCB(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+50h] [rbp+18h] BYREF

  v5 = (int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7056);
  v7 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( !a1 || (v8 = a1, *(_DWORD *)(a1 + 64) != 1833172997) )
      v8 = 0LL;
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 48);
      if ( KeGetCurrentIrql() )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, v9, (__int64)a3, a4);
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
          WdLogEvent5_WdAssertion(v17);
        }
        v18 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
        v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 64LL);
        if ( *(_DWORD *)(*(_QWORD *)(v19 + 40) + 28LL) >= 0x2003u )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v13, v15);
          v20[3] = 275LL;
          v20[4] = 20LL;
          v20[5] = v18;
          v20[6] = 0LL;
          v20[7] = 0LL;
          WdLogEvent5_WdCriticalError(v20);
        }
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40), v13, v15, v16);
      }
      if ( (_DWORD)v5 == 1 )
      {
        *a3 = *(_QWORD *)(v9 + 360);
      }
      else
      {
        *a3 = 0LL;
        v21 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
        *(_QWORD *)(v21 + 24) = v5;
        WdLogEvent5_WdWarning(v21);
        v7 = -1073741637;
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v12 + 24) = a1;
      WdLogEvent5_WdError(v12);
      v7 = -1071774973;
    }
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
    v11[3] = 0LL;
    v11[4] = v5;
    v11[5] = a1;
    WdLogEvent5_WdError(v11);
    v7 = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerExit, (__int64)a3, 7056);
  return v7;
}
