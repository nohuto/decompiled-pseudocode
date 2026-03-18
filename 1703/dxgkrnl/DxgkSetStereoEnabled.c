/*
 * XREFs of DxgkSetStereoEnabled @ 0x1C01977B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetStereoEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int updated; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int v13; // [rsp+58h] [rbp+10h] BYREF
  BOOL v14; // [rsp+60h] [rbp+18h] BYREF

  v3 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2089);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    v13 = 0;
    v11 = (*(__int64 (__fastcall **)(int *))(*((_QWORD *)Current + 9) + 224LL))(&v13);
    if ( !v13 || v11 )
    {
      updated = -1073741637;
    }
    else
    {
      v14 = v3 != 0;
      updated = ZwUpdateWnfStateData(&WNF_DX_STEREO_CONFIG, &v14, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6, v5);
    updated = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 2089);
  return updated;
}
