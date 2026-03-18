/*
 * XREFs of DxgkSetMemoryBudgetTarget @ 0x1C01A2D80
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

__int64 __fastcall DxgkSetMemoryBudgetTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // [rsp+28h] [rbp-20h] BYREF
  __int64 v28; // [rsp+30h] [rbp-18h]

  v4 = (_DWORD *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2141);
  if ( CheckTokenForResourceManagerAccess(a1, a2, a3, a4) )
  {
    v27 = 0LL;
    v28 = 0LL;
    v13 = v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v13 = (_DWORD *)MmUserProbeAddress;
    v14 = (unsigned int)*v13;
    if ( *v13 >= 0x10u )
    {
      if ( *v13 > 0x10u )
        LODWORD(v14) = 16;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      memmove(&v27, v4, (unsigned int)v14);
      if ( (_DWORD)v28
        && (v19 = HIDWORD(v28), HIDWORD(v28))
        && (unsigned int)v28 < 0x64
        && HIDWORD(v28) < 0x64
        && (unsigned int)(HIDWORD(v28) + v28) < 0x64
        && !HIDWORD(v27) )
      {
        ApplyResourceManagerPolicyToRenderAdapters(1LL, (__int64)&v27, v20, v21);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v22, &EventProfilerExit, v23, 2141);
        return 0LL;
      }
      else
      {
        v24 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
        *(_QWORD *)(v24 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v24);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v25, &EventProfilerExit, v26, 2141);
        return 3221225485LL;
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v14, v7, v8);
      *(_QWORD *)(v15 + 24) = 3653LL;
      WdLogEvent5_WdWarning(v15);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v16, &EventProfilerExit, v17, 2141);
      return 3221225485LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v9 + 24) = DXGPROCESS::GetCurrent(v10);
    *(_QWORD *)(v9 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v9);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v11, 2141);
    return 3221225506LL;
  }
}
