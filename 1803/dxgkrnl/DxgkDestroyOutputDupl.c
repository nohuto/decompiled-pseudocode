/*
 * XREFs of DxgkDestroyOutputDupl @ 0x1C01CCAA0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01CC308 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkDestroyOutputDupl(__int64 a1, int a2, __int64 a3)
{
  ULONG64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // r8
  int v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  unsigned int v12[2]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]

  v4 = a1;
  v11 = 0LL;
  v10 = 2062;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2062);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 2062);
  if ( a2 )
  {
    if ( v4 <= MmUserProbeAddress )
    {
      v6 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v6 + 24) = 3306LL;
      WdLogEvent5_WdAssertion(v6);
    }
    *(_QWORD *)v12 = *(_QWORD *)v4;
    v13 = *(_DWORD *)(v4 + 8);
  }
  else
  {
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    *(_QWORD *)v12 = *(_QWORD *)v4;
    v13 = *(_DWORD *)(v4 + 8);
  }
  v7 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         v12[0],
         v12[1],
         (__int64)v12,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_090d52b4b377212e5b096f8abab319d1_::_lambda_invoker_cdecl_);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(qword_1C0079010, &EventProfilerExit, v8, v10);
  return v7;
}
