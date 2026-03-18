/*
 * XREFs of DxgkOutputDuplGetPointerShapeData @ 0x1C01CCFC0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01CC308 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetPointerShapeData(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r14
  ULONG64 v4; // rax
  PVOID v5; // rax
  __int64 v6; // rcx
  void *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  char *v12; // rsi
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+28h] [rbp-60h] BYREF
  __int64 v18; // [rsp+30h] [rbp-58h]
  PVOID v19; // [rsp+38h] [rbp-50h]
  size_t Size[2]; // [rsp+40h] [rbp-48h] BYREF
  void *v21[2]; // [rsp+50h] [rbp-38h]
  __int128 v22; // [rsp+60h] [rbp-28h]
  __int64 v23; // [rsp+70h] [rbp-18h]

  v3 = a1;
  v18 = 0LL;
  v17 = 2065;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2065);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2065);
  v4 = v3;
  if ( v3 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)Size = *(_OWORD *)v4;
  *(_OWORD *)v21 = *(_OWORD *)(v4 + 16);
  v22 = *(_OWORD *)(v4 + 32);
  v23 = *(_QWORD *)(v4 + 48);
  v5 = operator new[](LODWORD(Size[1]), 0x674D444Fu, PagedPool);
  v7 = v5;
  v19 = v5;
  if ( v5 )
  {
    v12 = (char *)v21[0];
    v21[0] = v5;
    v13 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
            LODWORD(Size[0]),
            HIDWORD(Size[0]),
            (__int64)Size,
            (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_323a6f2bac221de0325809d248e0690f_::_lambda_invoker_cdecl_);
    v21[0] = v12;
    if ( (int)(v13 + 0x80000000) < 0 || v13 == -1073741789 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = *(_OWORD *)Size;
      *(_OWORD *)(v3 + 16) = *(_OWORD *)v21;
      *(_OWORD *)(v3 + 32) = v22;
      *(_QWORD *)(v3 + 48) = v23;
    }
    if ( v13 >= 0 )
    {
      v14 = LODWORD(v21[1]);
      if ( LODWORD(v21[1]) )
      {
        if ( LODWORD(Size[1]) < LODWORD(v21[1]) )
          v14 = LODWORD(Size[1]);
        if ( (unsigned __int64)&v12[v14] > MmUserProbeAddress || &v12[v14] <= v12 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v12, v7, (unsigned int)v14);
      }
    }
    operator delete[](v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v17);
    return (unsigned int)v13;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v8 + 24) = LODWORD(Size[1]);
    WdLogEvent5_WdLowResource(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v17);
    return 3221225495LL;
  }
}
