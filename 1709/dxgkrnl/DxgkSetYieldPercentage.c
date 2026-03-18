/*
 * XREFs of DxgkSetYieldPercentage @ 0x1C01BB660
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0120E14 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1C01B9104 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall DxgkSetYieldPercentage(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // [rsp+28h] [rbp-20h] BYREF
  __int64 v27; // [rsp+30h] [rbp-18h]

  v3 = (_DWORD *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2139);
  if ( !CheckTokenForResourceManagerAccess(a1) )
  {
    v7 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v7 + 24) = DXGPROCESS::GetCurrent(v9, v8);
    *(_QWORD *)(v7 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v7);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v10, 2139);
    return 3221225506LL;
  }
  v26 = 0LL;
  v27 = 0LL;
  v12 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v12 = (_DWORD *)MmUserProbeAddress;
  v13 = (unsigned int)*v12;
  if ( *v12 < 0x10u )
  {
    v14 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v13, v6);
    *(_QWORD *)(v14 + 24) = 3520LL;
    WdLogEvent5_WdWarning(v14);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, 2139);
    return 3221225485LL;
  }
  if ( *v12 > 0x10u )
    LODWORD(v13) = 16;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_DWORD *)MmUserProbeAddress;
  memmove(&v26, v3, (unsigned int)v13);
  v20 = HIDWORD(v27);
  if ( (unsigned int)(HIDWORD(v27) - 1) > 0x62 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = v20;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
  }
  else
  {
    if ( (v27 & 0xFFFFFFFE) == 0 && !HIDWORD(v26) )
    {
      ApplyResourceManagerPolicyToRenderAdapters(0LL, (__int64)&v26);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v22, &EventProfilerExit, v23, 2139);
      return 0LL;
    }
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdWarning(v21);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, 2139);
  return 3221225485LL;
}
