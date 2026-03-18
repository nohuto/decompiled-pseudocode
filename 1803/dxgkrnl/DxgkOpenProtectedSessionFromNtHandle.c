/*
 * XREFs of DxgkOpenProtectedSessionFromNtHandle @ 0x1C01BB800
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C01BA850 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C01BAA88 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkOpenProtectedSessionFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  _OWORD *v13; // rax
  HANDLE v14; // r14
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  PVOID *v24; // rdi
  DXGPROTECTEDSESSION *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // r14d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _DWORD *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // [rsp+30h] [rbp-38h] BYREF
  __int64 v39; // [rsp+38h] [rbp-30h]
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp+18h] BYREF

  v39 = 0LL;
  v38 = 2152;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2152);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 2152);
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 720LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGPROCESS::GetCurrent(v5, v4) )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_8:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v11, v38);
    return (unsigned int)v9;
  }
  v13 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v13;
  LODWORD(Handle[1]) = 0;
  v14 = Handle[0];
  v15 = ObReferenceObjectByHandle(
          Handle[0],
          0x20000u,
          g_pDxgkSharedProtectedSessionObjectType,
          1,
          &Object,
          &HandleInformation);
  v9 = v15;
  LODWORD(v19) = -1073741788;
  if ( v15 == -1073741788 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = v14;
    *(_QWORD *)(v20 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v20);
LABEL_16:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v38);
    return (unsigned int)v19;
  }
  if ( v15 < 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v23 + 24) = v14;
    *(_QWORD *)(v23 + 32) = v9;
    WdLogEvent5_WdWarning(v23);
    goto LABEL_8;
  }
  v24 = (PVOID *)Object;
  v25 = *(DXGPROTECTEDSESSION **)Object;
  if ( !*(_QWORD *)Object )
  {
    v26 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v26 + 24) = 782LL;
    WdLogEvent5_WdAssertion(v26);
    v25 = (DXGPROTECTEDSESSION *)*v24;
  }
  v27 = DXGPROTECTEDSESSION::Open(v25, (unsigned int *)&Handle[1]);
  v19 = v27;
  v31 = (unsigned int)Handle[1];
  if ( v27 < 0 )
  {
    if ( LODWORD(Handle[1]) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v32 + 24) = 790LL;
      WdLogEvent5_WdAssertion(v32);
    }
    v33 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(HANDLE *)(v33 + 24) = Handle[0];
    *(_QWORD *)(v33 + 32) = v19;
    WdLogEvent5_WdWarning(v33);
    if ( v31 )
      DXGPROTECTEDSESSION::DestroyProtectedSession(*v24, v31);
    ObfDereferenceObject(v24);
    goto LABEL_16;
  }
  if ( !LODWORD(Handle[1]) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v29);
    *(_QWORD *)(v34 + 24) = 797LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v35 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v35 = (_DWORD *)MmUserProbeAddress;
  *v35 = v31;
  ObfDereferenceObject(v24);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v38);
  return 0LL;
}
