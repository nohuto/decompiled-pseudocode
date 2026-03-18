/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00F76A4
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z @ 0x1C00D3444 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z.c)
 * Callees:
 *     ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0007040 (-SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x1C000AAA8 (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00165AC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00F8124 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00F9DEC (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DxgkIsExpandedResourceApplication@@YA_NPEAU_EPROCESS@@@Z @ 0x1C01B684C (-DxgkIsExpandedResourceApplication@@YA_NPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  _QWORD *v7; // rax
  DXGPROCESS_NONPAGED *v8; // rax
  DXGPROCESS_NONPAGED *v9; // rax
  _QWORD *v10; // rax
  __int64 ProcessImageFileName; // rax
  const void *v12; // rsi
  size_t v13; // rdi
  __int64 v14; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rcx
  DXGGLOBAL *v17; // rax
  unsigned int MaximumAdapterCount; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  SIZE_T v21; // rax
  PVOID v22; // rax
  PVOID v23; // rax
  PVOID v24; // rax
  struct DXGGLOBAL *v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  _QWORD *v28; // rsi
  unsigned int v29; // edi
  __int64 result; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  bool v35; // zf

  if ( *((_DWORD *)this + 10) )
    return 3221225485LL;
  if ( *((_QWORD *)this + 14) )
  {
    v31 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v31 + 24) = 1244LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( *((_QWORD *)this + 39) )
  {
    v32 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v32 + 24) = 1245LL;
    WdLogEvent5_WdAssertion(v32);
  }
  *((_BYTE *)this + 321) = *((_QWORD *)this + 7) == (_QWORD)PsInitialSystemProcess;
  CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess, a2);
  LOBYTE(v4) = PsGetProcessWow64Process(CurrentProcess) != 0;
  *((_BYTE *)this + 323) = v4 | *((_BYTE *)this + 323) & 0xFE;
  if ( !*((_BYTE *)this + 321) && *((_BYTE *)DXGGLOBAL::GetGlobal(v4) + 1696) )
    *((_BYTE *)this + 434) = DxgkIsExpandedResourceApplication(*((PEPROCESS *)this + 7));
  v5 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    *((_DWORD *)v5 + 6) = 0;
    *((_DWORD *)v5 + 7) = 4;
    *((_DWORD *)v5 + 8) = 27;
    v5[2] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)this + 14) = v5;
  if ( !v5 )
    goto LABEL_38;
  v7 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v7 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    *((_DWORD *)v7 + 6) = 0;
    *((_DWORD *)v7 + 7) = 6;
    *((_DWORD *)v7 + 8) = 19;
    v7[2] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 39) = v7;
  if ( !v7 )
    goto LABEL_38;
  v8 = (DXGPROCESS_NONPAGED *)operator new(0x70uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  v9 = v8 ? DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v8) : 0LL;
  *((_QWORD *)this + 9) = v9;
  if ( !v9 )
    goto LABEL_38;
  *((_QWORD *)v9 + 4) = this;
  *(_QWORD *)(*((_QWORD *)this + 9) + 72LL) = *((_QWORD *)this + 8);
  v10 = (_QWORD *)*((_QWORD *)this + 9);
  v10[7] = DxgkpProcessStatusChangeWork;
  v10[8] = this;
  v10[5] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 7));
  v12 = (const void *)ProcessImageFileName;
  v13 = -1LL;
  do
    ++v13;
  while ( *(_BYTE *)(ProcessImageFileName + v13) );
  *(_QWORD *)(*((_QWORD *)this + 9) + 80LL) = operator new[](v13 + 1, 0x4B677844u, (POOL_TYPE)512);
  v6 = *(void **)(*((_QWORD *)this + 9) + 80LL);
  if ( !v6 )
    goto LABEL_38;
  memmove(v6, v12, v13);
  v14 = *(_QWORD *)(*((_QWORD *)this + 9) + 80LL);
  *(_BYTE *)(v13 + v14) = 0;
  Global = DXGGLOBAL::GetGlobal(v14);
  DXGVALIDATION::SetupValidationForProcess((struct DXGGLOBAL *)((char *)Global + 1188), this);
  v17 = DXGGLOBAL::GetGlobal(v16);
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(v17);
  v20 = MaximumAdapterCount;
  if ( !MaximumAdapterCount )
  {
    v34 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v34 + 24) = 1307LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v21 = 8 * v20;
  if ( !is_mul_ok(v20, 8uLL) )
    v21 = -1LL;
  v22 = operator new[](v21, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 6) = v22;
  if ( v22
    && (memset(v22, 0, 8 * v20),
        v23 = operator new(0x30uLL, 0x4B677844u, 1, PagedPool),
        (*((_QWORD *)this + 10) = v23) != 0LL)
    && (v24 = operator new(0x30uLL, 0x4B677844u, 1, PagedPool), (*((_QWORD *)this + 11) = v24) != 0LL) )
  {
    v25 = DXGGLOBAL::GetGlobal((__int64)v6);
    if ( !*((_DWORD *)v25 + 398) || (v35 = *((_DWORD *)v25 + 399) == 0, v27 = 1, v35) )
      v27 = 0;
    *((_DWORD *)this + 24) = v27;
    v28 = &DXGGLOBAL::m_pDxgmmsExport;
    v29 = 0;
    while ( 1 )
    {
      DXGGLOBAL::GetGlobal(v26);
      if ( *v28 )
      {
        result = DXGPROCESS::DeferredInitialize(this, v29);
        if ( (int)result < 0 )
          break;
      }
      ++v29;
      ++v28;
      if ( v29 >= 2 )
      {
        DXGPROCESS::AcquireReference(this);
        result = 0LL;
        *((_DWORD *)this + 10) = 1;
        return result;
      }
    }
  }
  else
  {
LABEL_38:
    v33 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v33 + 24) = this;
    WdLogEvent5_WdLowResource(v33);
    return 3221225495LL;
  }
  return result;
}
