/*
 * XREFs of ?DxgMiniportQueryVidPnInterfaceCB@@YAJQEAUD3DKMDT_HVIDPN__@@W4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEBU_DXGK_VIDPN_INTERFACE@@@Z @ 0x1C00D52F0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DxgMiniportQueryVidPnInterfaceCB(
        struct D3DKMDT_HVIDPN__ *const a1,
        enum _DXGK_VIDPN_INTERFACE_VERSION a2,
        const struct _DXGK_VIDPN_INTERFACE **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct D3DKMDT_HVIDPN__ *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+28h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a2;
  v25 = 0LL;
  v24 = 7056;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 7056);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 7056);
  if ( a3 )
  {
    *a3 = 0LL;
    if ( !a1 || (v10 = a1, *((_DWORD *)a1 + 16) != 1833172997) )
      v10 = 0LL;
    if ( v10 )
    {
      v11 = *((_QWORD *)v10 + 6);
      if ( KeGetCurrentIrql() )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v26, v11);
        v18 = *(_QWORD *)(v11 + 8);
        if ( !v18 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v17);
          WdLogEvent5_WdAssertion(v19);
          v18 = *(_QWORD *)(v11 + 8);
        }
        v20 = *(_QWORD *)(v18 + 16);
        v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 64LL);
        if ( *(_DWORD *)(*(_QWORD *)(v21 + 40) + 28LL) >= 0x2003u )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21);
          v22[3] = 275LL;
          v22[4] = 20LL;
          v22[5] = v20;
          v22[6] = 0LL;
          v22[7] = 0LL;
          WdLogEvent5_WdCriticalError(v22);
        }
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40));
      }
      if ( (_DWORD)v4 == 1 )
      {
        *a3 = *(const struct _DXGK_VIDPN_INTERFACE **)(v11 + 368);
      }
      else
      {
        *a3 = 0LL;
        v23 = WdLogNewEntry5_WdWarning(v8, v7, v9);
        *(_QWORD *)(v23 + 24) = v4;
        WdLogEvent5_WdWarning(v23);
        v3 = -1073741637;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v16 + 24) = a1;
      WdLogEvent5_WdError(v16);
      v3 = -1071774973;
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v15[3] = 0LL;
    v15[4] = v4;
    v15[5] = a1;
    WdLogEvent5_WdError(v15);
    v3 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, v24);
  return v3;
}
