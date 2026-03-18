/*
 * XREFs of DxgkOutputDuplGetPointerShapeData @ 0x1C01AFD70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01AF22C (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
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
  char *v12; // r15
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  size_t Size[2]; // [rsp+30h] [rbp-48h] BYREF
  void *v18[2]; // [rsp+40h] [rbp-38h]
  __int128 v19; // [rsp+50h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp-18h]

  v3 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2065);
  v4 = v3;
  if ( v3 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)Size = *(_OWORD *)v4;
  *(_OWORD *)v18 = *(_OWORD *)(v4 + 16);
  v19 = *(_OWORD *)(v4 + 32);
  v20 = *(_QWORD *)(v4 + 48);
  v5 = operator new(LODWORD(Size[1]), 0x674D444Fu, PagedPool);
  v7 = v5;
  if ( v5 )
  {
    v12 = (char *)v18[0];
    v18[0] = v5;
    v13 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
            LODWORD(Size[0]),
            HIDWORD(Size[0]),
            (__int64)Size,
            (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_323a6f2bac221de0325809d248e0690f_::_lambda_invoker_cdecl_);
    v18[0] = v12;
    if ( (int)(v13 + 0x80000000) < 0 || v13 == -1073741789 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = *(_OWORD *)Size;
      *(_OWORD *)(v3 + 16) = *(_OWORD *)v18;
      *(_OWORD *)(v3 + 32) = v19;
      *(_QWORD *)(v3 + 48) = v20;
    }
    if ( v13 >= 0 )
    {
      v14 = LODWORD(v18[1]);
      if ( LODWORD(v18[1]) )
      {
        if ( LODWORD(Size[1]) < LODWORD(v18[1]) )
          v14 = LODWORD(Size[1]);
        if ( (unsigned __int64)&v12[v14] > MmUserProbeAddress || &v12[v14] <= v12 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v12, v7, (unsigned int)v14);
      }
    }
    ExFreePoolWithTag(v7, 0);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v15, &EventProfilerExit, v16, 2065);
    return (unsigned int)v13;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v8 + 24) = LODWORD(Size[1]);
    WdLogEvent5_WdLowResource(v8);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v10, 2065);
    return 3221225495LL;
  }
}
