/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00D65C8
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C009BE20 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 * Callees:
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x1C00024BC (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C000D950 (-SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DxgkIsExpandedResourceApplication@@YA_NPEAU_EPROCESS@@@Z @ 0x1C0088100 (-DxgkIsExpandedResourceApplication@@YA_NPEAU_EPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00D6DB8 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // al
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  DXGPROCESS_NONPAGED *v13; // rax
  DXGPROCESS_NONPAGED *v14; // rax
  _QWORD *v15; // rax
  __int64 ProcessImageFileName; // rax
  const void *v17; // rsi
  size_t v18; // rdi
  SIZE_T v19; // rdx
  PVOID v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DXGGLOBAL *v32; // rdi
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  SIZE_T v38; // rax
  PVOID v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // edi
  _QWORD *i; // rsi
  __int64 v46; // rax

  if ( *((_DWORD *)this + 8) )
    return 3221225485LL;
  if ( *((_QWORD *)this + 10) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 1109LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 33) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 1110LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)this + 6) == (_QWORD)PsInitialSystemProcess;
  *((_BYTE *)this + 273) = v8;
  if ( !v8 && *((_BYTE *)DXGGLOBAL::GetGlobal((__int64)PsInitialSystemProcess, a2, a3, a4) + 1488) )
    *((_BYTE *)this + 494) = DxgkIsExpandedResourceApplication(*((PEPROCESS *)this + 6));
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
  *((_QWORD *)this + 10) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_14;
  v12 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x4B677844u);
  if ( v12 )
  {
    *v12 = 0LL;
    v12[1] = 0LL;
    *((_DWORD *)v12 + 6) = 0;
    *((_DWORD *)v12 + 7) = 6;
    *((_DWORD *)v12 + 8) = 22;
    v12[2] = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)this + 33) = v12;
  if ( !v12 )
    goto LABEL_14;
  v13 = (DXGPROCESS_NONPAGED *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x4B677844u);
  v14 = v13 ? DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v13) : 0LL;
  *((_QWORD *)this + 8) = v14;
  if ( !v14 )
    goto LABEL_14;
  *((_QWORD *)v14 + 4) = this;
  *(_QWORD *)(*((_QWORD *)this + 8) + 72LL) = *((_QWORD *)this + 7);
  v15 = (_QWORD *)*((_QWORD *)this + 8);
  v15[7] = DxgkpProcessStatusChangeWork;
  v15[8] = this;
  v15[5] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 6));
  v17 = (const void *)ProcessImageFileName;
  v18 = -1LL;
  do
    ++v18;
  while ( *(_BYTE *)(ProcessImageFileName + v18) );
  v19 = 1LL;
  if ( v18 != -1LL )
    v19 = v18 + 1;
  v20 = v19 <= 0x7FFFFFFF ? ExAllocatePoolWithTag((POOL_TYPE)512, v19, 0x4B677844u) : 0LL;
  *(_QWORD *)(*((_QWORD *)this + 8) + 80LL) = v20;
  v10 = *(_QWORD *)(*((_QWORD *)this + 8) + 80LL);
  if ( !v10 )
    goto LABEL_14;
  memmove((void *)v10, v17, v18);
  v21 = *(_QWORD *)(*((_QWORD *)this + 8) + 80LL);
  *(_BYTE *)(v18 + v21) = 0;
  Global = DXGGLOBAL::GetGlobal(v21, v22, v23, v24);
  DXGVALIDATION::SetupValidationForProcess((struct DXGGLOBAL *)((char *)Global + 1108), this);
  v32 = DXGGLOBAL::GetGlobal(v27, v26, v28, v29);
  if ( !*((_DWORD *)v32 + 204) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
    *(_QWORD *)(v35 + 24) = 1969LL;
    WdLogEvent5_WdAssertion(v35);
  }
  v36 = *((unsigned int *)v32 + 204);
  if ( !(_DWORD)v36 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
    *(_QWORD *)(v37 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v37);
  }
  v10 = -1LL;
  v38 = 8 * v36;
  if ( !is_mul_ok(v36, 8uLL) )
    v38 = -1LL;
  if ( !v38 )
    v38 = 1LL;
  v39 = v38 <= 0x7FFFFFFF ? ExAllocatePoolWithTag(PagedPool, v38, 0x4B677844u) : 0LL;
  *((_QWORD *)this + 5) = v39;
  if ( v39 )
  {
    memset(v39, 0, 8 * v36);
    v44 = 0;
    for ( i = &DXGGLOBAL::m_pDxgmmsExport; ; ++i )
    {
      DXGGLOBAL::GetGlobal(v41, v40, v42, v43);
      if ( *i )
      {
        result = DXGPROCESS::DeferredInitialize(this, v44);
        if ( (int)result < 0 )
          break;
      }
      if ( ++v44 >= 2 )
      {
        if ( (__int64)++*((_QWORD *)this + 3) <= 0 )
        {
          v46 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
          *(_QWORD *)(v46 + 24) = 887LL;
          WdLogEvent5_WdAssertion(v46);
        }
        *((_DWORD *)this + 8) = 1;
        return 0LL;
      }
    }
  }
  else
  {
LABEL_14:
    v11 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdLowResource(v11);
    return 3221225495LL;
  }
  return result;
}
