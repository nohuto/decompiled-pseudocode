/*
 * XREFs of DxgkOutputDuplGetMetaData @ 0x1C01CCDE0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01CC308 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetMetaData(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  _OWORD *v4; // rax
  char *v5; // rsi
  int v6; // ebx
  const void *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  size_t Size[2]; // [rsp+30h] [rbp-28h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-18h]

  v3 = (_OWORD *)a1;
  v13 = 0LL;
  v12 = 2064;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2064);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2064);
  v4 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v4;
  *(_OWORD *)Src = v4[1];
  v5 = (char *)Src[0];
  LODWORD(Src[1]) = 0;
  Src[0] = 0LL;
  v6 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         LODWORD(Size[0]),
         HIDWORD(Size[0]),
         (__int64)Size,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_2348832400fa9218d4247e5b02438479_::_lambda_invoker_cdecl_);
  v7 = Src[0];
  Src[0] = v5;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741789 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *v3 = *(_OWORD *)Size;
    v3[1] = *(_OWORD *)Src;
  }
  if ( v6 >= 0 )
  {
    v8 = LODWORD(Src[1]);
    if ( LODWORD(Src[1]) )
    {
      if ( HIDWORD(Size[1]) < LODWORD(Src[1]) )
        v8 = HIDWORD(Size[1]);
      if ( (unsigned __int64)&v5[v8] > MmUserProbeAddress || &v5[v8] <= v5 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v5, v7, (unsigned int)v8);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v12);
  return (unsigned int)v6;
}
