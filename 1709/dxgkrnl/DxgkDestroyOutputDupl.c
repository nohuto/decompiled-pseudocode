/*
 * XREFs of DxgkDestroyOutputDupl @ 0x1C01C9680
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01C8FD8 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkDestroyOutputDupl(__int64 a1, int a2, __int64 a3)
{
  ULONG64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // r8
  unsigned int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]

  v4 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2062);
  if ( a2 )
  {
    if ( v4 <= MmUserProbeAddress )
    {
      v5 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v5 + 24) = 3306LL;
      WdLogEvent5_WdAssertion(v5);
    }
    *(_QWORD *)v9 = *(_QWORD *)v4;
    v10 = *(_DWORD *)(v4 + 8);
  }
  else
  {
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    *(_QWORD *)v9 = *(_QWORD *)v4;
    v10 = *(_DWORD *)(v4 + 8);
  }
  v6 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         v9[0],
         v9[1],
         (__int64)v9,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_090d52b4b377212e5b096f8abab319d1_::_lambda_invoker_cdecl_);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(qword_1C005F010, &EventProfilerExit, v7, 2062);
  return v6;
}
