/*
 * XREFs of ?DxgkCddCreate@@YAJQEAXPEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C009D250
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C009EDEC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z @ 0x1C00D3444 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddCreate(
        char *a1,
        const void *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _CDDDXGK_DRIVERINFO *a6,
        struct _CDDDXGK_DRIVERINFO *a7,
        void **a8,
        struct _OBJECT_TYPE **a9)
{
  unsigned int v9; // ebx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  struct DXGPROCESS *v19; // r12
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r8
  int DxgProcess; // eax
  _QWORD *v26; // rbx
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct DXGPROCESS *v31[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v32; // [rsp+30h] [rbp-20h]
  int v33; // [rsp+38h] [rbp-18h] BYREF
  __int64 v34; // [rsp+40h] [rbp-10h]

  v9 = 0;
  v34 = 0LL;
  v33 = 3000;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3000);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 3000);
  if ( !a3 || !a4 || !a6 || !a7 || !a8 )
    goto LABEL_29;
  *a3 = 0;
  *(_QWORD *)a6 = 0LL;
  *((_QWORD *)a6 + 1) = 0LL;
  *((_QWORD *)a6 + 2) = 0LL;
  *(_QWORD *)a7 = 0LL;
  *((_QWORD *)a7 + 1) = 0LL;
  *((_QWORD *)a7 + 2) = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v31[0] = Current;
  if ( !Current )
  {
    DxgProcess = DXGPROCESS::CreateDxgProcess(v31, 0LL, 0LL, 0LL);
    v18 = DxgProcess;
    if ( DxgProcess < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v26[3] = v18;
      v26[4] = a1;
      v26[5] = PsGetCurrentProcess();
      v27 = v26;
LABEL_31:
      WdLogEvent5_WdError(v27);
      goto LABEL_20;
    }
    Current = v31[0];
  }
  *((_QWORD *)Current + 13) = a2;
  *((_BYTE *)Current + 320) = 1;
  if ( !a1 )
  {
LABEL_29:
    v28 = WdLogNewEntry5_WdError(v14);
    v18 = -1073741811LL;
    goto LABEL_30;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(a1 + 268));
  v18 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v17);
LABEL_30:
    *(_QWORD *)(v28 + 24) = v18;
    v27 = (_QWORD *)v28;
    goto LABEL_31;
  }
  v19 = v31[0];
  v20 = *(_QWORD *)(*((_QWORD *)v31[0] + 2) + 16LL);
  if ( !*(_QWORD *)(v20 + 2464) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v29 + 24) = 232LL;
    WdLogEvent5_WdAssertion(v29);
  }
  v21 = *((_QWORD *)v19 + 211);
  if ( v21 && !*(_QWORD *)(v21 + 2456) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v30 + 24) = 234LL;
    WdLogEvent5_WdAssertion(v30);
  }
  *a8 = (void *)v20;
  *(_DWORD *)a7 = *(_DWORD *)(v20 + 276);
  *((_DWORD *)a7 + 1) = *(_DWORD *)(v20 + 280);
  *((_DWORD *)a7 + 2) = *(_DWORD *)(v20 + 284);
  *((_DWORD *)a7 + 3) = *(_DWORD *)(v20 + 288);
  *((_DWORD *)a7 + 4) = *(_DWORD *)(v20 + 292);
  *((_DWORD *)a7 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v20);
  if ( v21 )
  {
    *(_DWORD *)a6 = *(_DWORD *)(v21 + 276);
    *((_DWORD *)a6 + 1) = *(_DWORD *)(v21 + 280);
    *((_DWORD *)a6 + 2) = *(_DWORD *)(v21 + 284);
    *((_DWORD *)a6 + 3) = *(_DWORD *)(v21 + 288);
    *((_DWORD *)a6 + 4) = *(_DWORD *)(v21 + 292);
    *((_DWORD *)a6 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v21);
  }
  else
  {
    *(_OWORD *)a6 = *(_OWORD *)a7;
    *((_QWORD *)a6 + 2) = *((_QWORD *)a7 + 2);
  }
  *a3 = *((_DWORD *)v19 + 83);
  *a4 = *((_DWORD *)v31[1] + 6);
  if ( v32 )
    v9 = *(_DWORD *)(v32 + 24);
  *a5 = v9;
  *a9 = g_pDxgkSharedAllocationObjectType;
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v33);
  return (unsigned int)v18;
}
