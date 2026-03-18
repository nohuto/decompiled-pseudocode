/*
 * XREFs of DxgkGetMemoryBudgetTarget @ 0x1C0120BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0120E14 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkGetMemoryBudgetTarget(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // rax
  size_t v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  const void *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rcx
  struct DXGGLOBAL *v19; // rax
  int v20; // esi
  int v21; // r14d
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  _BYTE v33[16]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v34; // [rsp+38h] [rbp-20h] BYREF
  __int64 v35; // [rsp+40h] [rbp-18h]

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2144);
  if ( CheckTokenForResourceManagerAccess() )
  {
    v34 = 0LL;
    v35 = 0LL;
    v7 = (_DWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    v8 = (unsigned int)*v7;
    if ( *v7 >= 0x10u )
    {
      if ( *v7 > 0x10u )
        v8 = 16LL;
      v13 = (const void *)a1;
      if ( a1 >= MmUserProbeAddress )
        v13 = (const void *)MmUserProbeAddress;
      memmove(&v34, v13, v8);
      if ( HIDWORD(v34) )
      {
        v30 = WdLogNewEntry5_WdWarning(v15, v14, v16);
        *(_QWORD *)(v30 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v30);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v31, &EventProfilerExit, v32, 2144);
        return 3221225485LL;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal(v15);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, (struct DXGGLOBAL *)((char *)Global + 400));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
        v19 = DXGGLOBAL::GetGlobal(v18);
        v20 = *((_DWORD *)v19 + 387);
        LODWORD(v35) = v20;
        v21 = *((_DWORD *)v19 + 388);
        HIDWORD(v35) = v21;
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
        v22 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v22 = (_DWORD *)MmUserProbeAddress;
        *v22 = v20;
        v23 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v23 = (_DWORD *)MmUserProbeAddress;
        *v23 = v21;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v24, &EventProfilerExit, v25, 2144);
        return 0LL;
      }
    }
    else
    {
      v9 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v8);
      *(_QWORD *)(v9 + 24) = 4150LL;
      WdLogEvent5_WdWarning(v9);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v10, &EventProfilerExit, v11, 2144);
      return 3221225485LL;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v26 + 24) = DXGPROCESS::GetCurrent(v28, v27);
    *(_QWORD *)(v26 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v26);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v29, 2144);
    return 3221225506LL;
  }
}
