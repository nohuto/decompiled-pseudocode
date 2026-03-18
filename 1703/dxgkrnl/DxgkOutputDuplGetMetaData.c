/*
 * XREFs of DxgkOutputDuplGetMetaData @ 0x1C01AFBB0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01AF22C (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetMetaData(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  _OWORD *v4; // rax
  char *v5; // rsi
  int v6; // ebx
  __int64 v7; // r8
  const void *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  size_t Size[2]; // [rsp+20h] [rbp-28h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-18h]

  v3 = (_OWORD *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2064);
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
  v8 = Src[0];
  Src[0] = v5;
  v9 = v6 + 0x80000000;
  if ( (int)v9 < 0 || v6 == -1073741789 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *v3 = *(_OWORD *)Size;
    v3[1] = *(_OWORD *)Src;
  }
  if ( v6 >= 0 )
  {
    v10 = LODWORD(Src[1]);
    if ( LODWORD(Src[1]) )
    {
      if ( HIDWORD(Size[1]) < LODWORD(Src[1]) )
        v10 = HIDWORD(Size[1]);
      if ( (unsigned __int64)&v5[v10] > MmUserProbeAddress || &v5[v10] <= v5 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v5, v8, (unsigned int)v10);
    }
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v9, &EventProfilerExit, v7, 2064);
  return (unsigned int)v6;
}
