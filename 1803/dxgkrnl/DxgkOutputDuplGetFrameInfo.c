/*
 * XREFs of DxgkOutputDuplGetFrameInfo @ 0x1C01CCC30
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01CC308 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetFrameInfo(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  ULONG64 v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  unsigned int v11[4]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]
  __int128 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  v3 = a1;
  v10 = 0LL;
  v9 = 2063;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2063);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2063);
  v4 = v3;
  if ( v3 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)v11 = *(_OWORD *)v4;
  v12 = *(_OWORD *)(v4 + 16);
  v13 = *(_OWORD *)(v4 + 32);
  v14 = *(_QWORD *)(v4 + 48);
  v5 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         v11[0],
         v11[1],
         (__int64)v11,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_a555c8f1bf148962729f2402570fc0b4_::_lambda_invoker_cdecl_);
  if ( v5 >= 0 )
  {
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_OWORD *)v3 = *(_OWORD *)v11;
    *(_OWORD *)(v3 + 16) = v12;
    *(_OWORD *)(v3 + 32) = v13;
    *(_QWORD *)(v3 + 48) = v14;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, v9);
  return (unsigned int)v5;
}
