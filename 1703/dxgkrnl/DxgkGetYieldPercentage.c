/*
 * XREFs of DxgkGetYieldPercentage @ 0x1C01210E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0121574 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkGetYieldPercentage(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rax
  size_t v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  const void *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DXGGLOBAL *v26; // rax
  int v27; // esi
  int v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  _BYTE v42[16]; // [rsp+28h] [rbp-50h] BYREF
  int v43; // [rsp+38h] [rbp-40h]
  int v44; // [rsp+3Ch] [rbp-3Ch]
  __int64 v45; // [rsp+40h] [rbp-38h] BYREF
  __int64 v46; // [rsp+48h] [rbp-30h]

  v43 = 2142;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2142);
  if ( CheckTokenForResourceManagerAccess() )
  {
    v44 = 0;
    v45 = 0LL;
    v46 = 0LL;
    v8 = (_DWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    v9 = (unsigned int)*v8;
    if ( *v8 >= 0x10u )
    {
      if ( *v8 > 0x10u )
        v9 = 16LL;
      v14 = (const void *)a1;
      if ( a1 >= MmUserProbeAddress )
        v14 = (const void *)MmUserProbeAddress;
      memmove(&v45, v14, v9);
      if ( HIDWORD(v45) )
      {
        v39 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
        *(_QWORD *)(v39 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v39);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v40, &EventProfilerExit, v41, 2142);
        return 3221225485LL;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal(v16, v15, v17, v18);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v42, (struct DXGGLOBAL *)((char *)Global + 400), v20, v21);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
        v26 = DXGGLOBAL::GetGlobal(v23, v22, v24, v25);
        v27 = ((unsigned __int8)v46 ^ (unsigned __int8)*((_DWORD *)v26 + 368)) & 1 ^ v46;
        LODWORD(v46) = v27;
        v28 = *((_DWORD *)v26 + 365);
        HIDWORD(v46) = v28;
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v42, v29, v30, v31);
        v32 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v32 = (_DWORD *)MmUserProbeAddress;
        *v32 = v28;
        v33 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v33 = (_DWORD *)MmUserProbeAddress;
        *v33 = v27;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v42);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v34, &EventProfilerExit, v35, 2142);
        return 0LL;
      }
    }
    else
    {
      v10 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v9, v7);
      *(_QWORD *)(v10 + 24) = 3773LL;
      WdLogEvent5_WdWarning(v10);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v11, &EventProfilerExit, v12, 2142);
      return 3221225485LL;
    }
  }
  else
  {
    v36 = WdLogNewEntry5_WdWarning(v5, v4, v6, v7);
    *(_QWORD *)(v36 + 24) = DXGPROCESS::GetCurrent(v37);
    *(_QWORD *)(v36 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v36);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v38, 2142);
    return 3221225506LL;
  }
}
