/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C0089968
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C00F0940 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0008CAC (-SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x1C000E6F0 (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C0088BF8 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?DxgkIsExpandedResourceApplication@@YA_NPEAU_EPROCESS@@@Z @ 0x1C01B93A8 (-DxgkIsExpandedResourceApplication@@YA_NPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this)
{
  __int64 CurrentProcess; // rax
  __int64 v3; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  DXGPROCESS_NONPAGED *v7; // rax
  DXGPROCESS_NONPAGED *v8; // rdi
  DXGPROCESS_NONPAGED *v9; // rax
  _QWORD *v10; // rax
  __int64 ProcessImageFileName; // rax
  const void *v12; // rsi
  size_t v13; // rdi
  SIZE_T v14; // rdx
  PVOID v15; // rax
  __int64 v16; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct DXGGLOBAL *v20; // rdi
  unsigned __int64 v21; // rdi
  SIZE_T v22; // rax
  PVOID v23; // rax
  PVOID v24; // rax
  PVOID v25; // rdi
  PVOID v26; // rax
  PVOID v27; // rdi
  struct DXGGLOBAL *v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  _QWORD *v31; // rsi
  unsigned int v32; // edi
  __int64 result; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  bool v39; // zf
  __int64 v40; // rax

  if ( *((_DWORD *)this + 8) )
    return 3221225485LL;
  if ( *((_QWORD *)this + 13) )
  {
    v34 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v34 + 24) = 1112LL;
    WdLogEvent5_WdAssertion(v34);
  }
  if ( *((_QWORD *)this + 37) )
  {
    v35 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v35 + 24) = 1113LL;
    WdLogEvent5_WdAssertion(v35);
  }
  *((_BYTE *)this + 305) = *((_QWORD *)this + 6) == (_QWORD)PsInitialSystemProcess;
  CurrentProcess = PsGetCurrentProcess();
  LOBYTE(v3) = PsGetProcessWow64Process(CurrentProcess) != 0;
  *((_BYTE *)this + 307) = v3 | *((_BYTE *)this + 307) & 0xFE;
  if ( !*((_BYTE *)this + 305) && *((_BYTE *)DXGGLOBAL::GetGlobal(v3) + 1568) )
    *((_BYTE *)this + 542) = DxgkIsExpandedResourceApplication(*((PEPROCESS *)this + 6));
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x4B677844u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *((_DWORD *)PoolWithTag + 7) = 4;
    *((_DWORD *)PoolWithTag + 8) = 30;
    PoolWithTag[2] = 0LL;
  }
  else
  {
    PoolWithTag = 0LL;
  }
  *((_QWORD *)this + 13) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_54;
  v6 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x4B677844u);
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    *((_DWORD *)v6 + 6) = 0;
    *((_DWORD *)v6 + 7) = 6;
    *((_DWORD *)v6 + 8) = 22;
    v6[2] = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 37) = v6;
  if ( !v6 )
    goto LABEL_54;
  v7 = (DXGPROCESS_NONPAGED *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x4B677844u);
  v8 = v7;
  if ( v7 )
  {
    memset(v7, 0, 0x70uLL);
    v9 = DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v8);
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 8) = v9;
  if ( !v9 )
    goto LABEL_54;
  *((_QWORD *)v9 + 4) = this;
  *(_QWORD *)(*((_QWORD *)this + 8) + 72LL) = *((_QWORD *)this + 7);
  v10 = (_QWORD *)*((_QWORD *)this + 8);
  v10[7] = DxgkpProcessStatusChangeWork;
  v10[8] = this;
  v10[5] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 6));
  v12 = (const void *)ProcessImageFileName;
  v13 = -1LL;
  do
    ++v13;
  while ( *(_BYTE *)(ProcessImageFileName + v13) );
  v14 = 1LL;
  if ( v13 != -1LL )
    v14 = v13 + 1;
  v15 = v14 > 0x7FFFFFFF ? 0LL : ExAllocatePoolWithTag((POOL_TYPE)512, v14, 0x4B677844u);
  *(_QWORD *)(*((_QWORD *)this + 8) + 80LL) = v15;
  v5 = *(_QWORD *)(*((_QWORD *)this + 8) + 80LL);
  if ( !v5 )
    goto LABEL_54;
  memmove((void *)v5, v12, v13);
  v16 = *(_QWORD *)(*((_QWORD *)this + 8) + 80LL);
  *(_BYTE *)(v13 + v16) = 0;
  Global = DXGGLOBAL::GetGlobal(v16);
  DXGVALIDATION::SetupValidationForProcess((struct DXGGLOBAL *)((char *)Global + 1108), this);
  v20 = DXGGLOBAL::GetGlobal(v18);
  if ( !*((_DWORD *)v20 + 204) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v37 + 24) = 2105LL;
    WdLogEvent5_WdAssertion(v37);
  }
  v21 = *((unsigned int *)v20 + 204);
  if ( !(_DWORD)v21 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v38 + 24) = 1175LL;
    WdLogEvent5_WdAssertion(v38);
  }
  v5 = -1LL;
  v22 = 8 * v21;
  if ( !is_mul_ok(v21, 8uLL) )
    v22 = -1LL;
  if ( !v22 )
    v22 = 1LL;
  v23 = v22 > 0x7FFFFFFF ? 0LL : ExAllocatePoolWithTag(PagedPool, v22, 0x4B677844u);
  *((_QWORD *)this + 5) = v23;
  if ( !v23 )
    goto LABEL_54;
  memset(v23, 0, 8 * v21);
  v24 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4B677844u);
  v25 = v24;
  if ( v24 )
    memset(v24, 0, 0x30uLL);
  *((_QWORD *)this + 9) = v25;
  if ( !v25 )
    goto LABEL_54;
  v26 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4B677844u);
  v27 = v26;
  if ( v26 )
    memset(v26, 0, 0x30uLL);
  *((_QWORD *)this + 10) = v27;
  if ( v27 )
  {
    v28 = DXGGLOBAL::GetGlobal(v5);
    if ( !*((_DWORD *)v28 + 366) || (v39 = *((_DWORD *)v28 + 367) == 0, v30 = 1, v39) )
      v30 = 0;
    *((_DWORD *)this + 22) = v30;
    v31 = &DXGGLOBAL::m_pDxgmmsExport;
    v32 = 0;
    while ( 1 )
    {
      DXGGLOBAL::GetGlobal(v29);
      if ( *v31 )
      {
        result = DXGPROCESS::DeferredInitialize(this, v32);
        if ( (int)result < 0 )
          break;
      }
      ++v32;
      ++v31;
      if ( v32 >= 2 )
      {
        if ( (__int64)++*((_QWORD *)this + 3) <= 0 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v29);
          *(_QWORD *)(v40 + 24) = 810LL;
          WdLogEvent5_WdAssertion(v40);
        }
        *((_DWORD *)this + 8) = 1;
        return 0LL;
      }
    }
  }
  else
  {
LABEL_54:
    v36 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v36 + 24) = this;
    WdLogEvent5_WdLowResource(v36);
    return 3221225495LL;
  }
  return result;
}
