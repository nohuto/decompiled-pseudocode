/*
 * XREFs of DxgkOpenProtectedSessionFromNtHandle @ 0x1C01BCCB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C01BBDB8 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C01BBFF0 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkOpenProtectedSessionFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  _OWORD *v14; // rax
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  DXGPROTECTEDSESSION **v22; // rdi
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r15
  unsigned int v29; // r14d
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // r15d
  __int64 v33; // rax
  _DWORD *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  HANDLE Handle[2]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+70h] [rbp+18h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2152);
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
    v11 = qword_1C005F010;
    v12 = (qword_1C005F010 & 2) == 0;
LABEL_8:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v10, 2152);
    return (unsigned int)v9;
  }
  v14 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v14;
  LODWORD(Handle[1]) = 0;
  v15 = ObReferenceObjectByHandle(
          Handle[0],
          0x20000u,
          g_pDxgkSharedProtectedSessionObjectType,
          1,
          &Object,
          &HandleInformation);
  v9 = v15;
  if ( v15 == -1073741788 )
  {
    v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(HANDLE *)(v19 + 24) = Handle[0];
    *(_QWORD *)(v19 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v19);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v20, 2152);
    return 3221225508LL;
  }
  else
  {
    if ( v15 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(HANDLE *)(v21 + 24) = Handle[0];
      *(_QWORD *)(v21 + 32) = v9;
      WdLogEvent5_WdWarning(v21);
      v12 = (qword_1C005F010 & 2) == 0;
      goto LABEL_8;
    }
    v22 = (DXGPROTECTEDSESSION **)Object;
    if ( !*(_QWORD *)Object )
    {
      v23 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v23 + 24) = 782LL;
      WdLogEvent5_WdAssertion(v23);
    }
    v24 = DXGPROTECTEDSESSION::Open(*v22, (unsigned int *)&Handle[1]);
    v28 = v24;
    if ( v24 >= 0 )
    {
      v32 = (int)Handle[1];
      if ( !LODWORD(Handle[1]) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v33 + 24) = 797LL;
        WdLogEvent5_WdAssertion(v33);
      }
      v34 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v34 = (_DWORD *)MmUserProbeAddress;
      *v34 = v32;
      ObfDereferenceObject(v22);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v35, &EventProfilerExit, v36, 2152);
      return 0LL;
    }
    else
    {
      v29 = (unsigned int)Handle[1];
      if ( LODWORD(Handle[1]) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v30 + 24) = 790LL;
        WdLogEvent5_WdAssertion(v30);
      }
      v31 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(HANDLE *)(v31 + 24) = Handle[0];
      *(_QWORD *)(v31 + 32) = v28;
      WdLogEvent5_WdWarning(v31);
      if ( v29 )
        DXGPROTECTEDSESSION::DestroyProtectedSession(*v22, v29);
      ObfDereferenceObject(v22);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v37, &EventProfilerExit, v38, 2152);
      return (unsigned int)v28;
    }
  }
}
