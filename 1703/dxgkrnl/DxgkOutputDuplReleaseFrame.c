/*
 * XREFs of DxgkOutputDuplReleaseFrame @ 0x1C01AFFF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01AF22C (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplReleaseFrame(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  ULONG64 v5; // rcx
  int v6; // ebx
  _DWORD *v7; // r8
  unsigned int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2072);
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_QWORD *)v9 = *(_QWORD *)v4;
  v10 = *(_DWORD *)(v4 + 8);
  v6 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         v9[0],
         v9[1],
         (__int64)v9,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_693db078d59c16956e85dd4c51bec7d2_::_lambda_invoker_cdecl_);
  if ( v6 >= 0 )
  {
    v7 = (_DWORD *)(a1 + 8);
    v5 = MmUserProbeAddress;
    if ( a1 + 8 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = v10;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v5, &EventProfilerExit, (__int64)v7, 2072);
  return (unsigned int)v6;
}
