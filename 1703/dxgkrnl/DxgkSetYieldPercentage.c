/*
 * XREFs of DxgkSetYieldPercentage @ 0x1C01A36C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0121574 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1C01A16F0 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall DxgkSetYieldPercentage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  _DWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // [rsp+28h] [rbp-20h] BYREF
  __int64 v29; // [rsp+30h] [rbp-18h]

  v4 = (_DWORD *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2139);
  if ( !CheckTokenForResourceManagerAccess(a1, a2, a3, a4) )
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v9 + 24) = DXGPROCESS::GetCurrent(v10);
    *(_QWORD *)(v9 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v9);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v11, 2139);
    return 3221225506LL;
  }
  v28 = 0LL;
  v29 = 0LL;
  v13 = v4;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v13 = (_DWORD *)MmUserProbeAddress;
  v14 = (unsigned int)*v13;
  if ( *v13 < 0x10u )
  {
    v15 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v14, v7, v8);
    *(_QWORD *)(v15 + 24) = 3356LL;
    WdLogEvent5_WdWarning(v15);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v16, &EventProfilerExit, v17, 2139);
    return 3221225485LL;
  }
  if ( *v13 > 0x10u )
    LODWORD(v14) = 16;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_DWORD *)MmUserProbeAddress;
  memmove(&v28, v4, (unsigned int)v14);
  v22 = HIDWORD(v29);
  if ( (unsigned int)(HIDWORD(v29) - 1) > 0x62 )
  {
    v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    *(_QWORD *)(v23 + 24) = v22;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
  }
  else
  {
    if ( (v29 & 0xFFFFFFFE) == 0 && !HIDWORD(v28) )
    {
      ApplyResourceManagerPolicyToRenderAdapters(0LL, (__int64)&v28, v20, v21);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v24, &EventProfilerExit, v25, 2139);
      return 0LL;
    }
    v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdWarning(v23);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 2139);
  return 3221225485LL;
}
