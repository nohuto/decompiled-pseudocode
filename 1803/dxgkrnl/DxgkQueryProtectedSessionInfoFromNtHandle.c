/*
 * XREFs of DxgkQueryProtectedSessionInfoFromNtHandle @ 0x1C01BBB50
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 */

__int64 __fastcall DxgkQueryProtectedSessionInfoFromNtHandle(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  ULONG64 v7; // rax
  char *v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  char *v15; // r15
  HANDLE v16; // r14
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  PVOID v21; // r13
  __int64 v22; // rax
  __int64 v23; // r14
  const void *v24; // rdx
  _DWORD *v25; // rdx
  __int64 v26; // rsi
  const void *v27; // rdx
  _DWORD *v28; // rdx
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+40h] [rbp-68h] BYREF
  int v31; // [rsp+48h] [rbp-60h] BYREF
  __int64 v32; // [rsp+50h] [rbp-58h]
  HANDLE Handle[2]; // [rsp+58h] [rbp-50h]
  void *v34[2]; // [rsp+68h] [rbp-40h]
  __int64 v35; // [rsp+78h] [rbp-30h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 530LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v32 = 0LL;
  v31 = 2151;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2151);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2151);
  v7 = a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  *(_OWORD *)Handle = *(_OWORD *)v7;
  *(_OWORD *)v34 = *(_OWORD *)(v7 + 16);
  v35 = *(_QWORD *)(v7 + 32);
  v8 = (char *)Handle[1];
  if ( !Handle[1] )
  {
    if ( !LODWORD(v34[0]) )
      goto LABEL_19;
LABEL_12:
    v9 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v6);
    v9[3] = v8;
    v10 = LODWORD(v34[0]);
LABEL_13:
    v9[4] = v10;
    LODWORD(v11) = -1073741811;
    v9[5] = -1073741811LL;
LABEL_14:
    WdLogEvent5_WdWarning(v9);
    goto LABEL_15;
  }
  if ( !LODWORD(v34[0]) )
    goto LABEL_12;
LABEL_19:
  v15 = (char *)v34[1];
  if ( !v34[1] )
  {
    if ( !(_DWORD)v35 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( !(_DWORD)v35 )
  {
LABEL_23:
    v9 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v6);
    v9[3] = v15;
    v10 = (unsigned int)v35;
    goto LABEL_13;
  }
LABEL_24:
  v16 = Handle[0];
  v17 = ObReferenceObjectByHandle(
          Handle[0],
          0x20000u,
          g_pDxgkSharedProtectedSessionObjectType,
          1,
          &Object,
          &HandleInformation);
  v11 = v17;
  if ( v17 == -1073741788 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    v11 = -1073741788LL;
LABEL_26:
    v9[3] = v16;
    v9[4] = v11;
    goto LABEL_14;
  }
  if ( v17 < 0 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    goto LABEL_26;
  }
  v21 = Object;
  if ( !*(_QWORD *)Object )
  {
    v22 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v22 + 24) = 608LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = *(unsigned int *)(*(_QWORD *)v21 + 88LL);
  if ( LODWORD(v34[0]) >= (unsigned int)v23 )
  {
    v24 = *(const void **)(*(_QWORD *)v21 + 80LL);
    if ( (unsigned __int64)&v8[v23] > MmUserProbeAddress || &v8[v23] <= v8 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v8, v24, (unsigned int)v23);
  }
  v25 = (_DWORD *)(a1 + 16);
  if ( a1 + 16 >= MmUserProbeAddress )
    v25 = (_DWORD *)MmUserProbeAddress;
  *v25 = v23;
  if ( v8 && LODWORD(v34[0]) < (unsigned int)v23 )
    LODWORD(v11) = -1073741789;
  v26 = *(unsigned int *)(*(_QWORD *)v21 + 104LL);
  if ( (unsigned int)v35 >= (unsigned int)v26 )
  {
    v27 = *(const void **)(*(_QWORD *)v21 + 96LL);
    if ( (unsigned __int64)&v15[v26] > MmUserProbeAddress || &v15[v26] <= v15 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, v27, (unsigned int)v26);
  }
  v28 = (_DWORD *)(a1 + 32);
  if ( a1 + 32 >= MmUserProbeAddress )
    v28 = (_DWORD *)MmUserProbeAddress;
  *v28 = v26;
  if ( v15 && (unsigned int)v35 < (unsigned int)v26 )
    LODWORD(v11) = -1073741789;
  ObfDereferenceObject(v21);
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, v31);
  return (unsigned int)v11;
}
