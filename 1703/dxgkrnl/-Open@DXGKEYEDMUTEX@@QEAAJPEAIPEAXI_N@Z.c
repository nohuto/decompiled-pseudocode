/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0088420
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C0100890 (DxgkOpenResourceFromNtHandle.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C01A5554 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C01A6034 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C0013624 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0014BE4 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0038578 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00385A8 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0087F50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Open(DXGKEYEDMUTEX *this, unsigned int *a2, char *a3, unsigned int a4)
{
  unsigned __int64 v4; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int *Current; // r13
  __int64 v13; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  void *v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rdi
  unsigned int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // r8d
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  int v45; // edx
  _BYTE v46[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v47[32]; // [rsp+40h] [rbp-38h] BYREF

  v4 = a4;
  Current = (unsigned int *)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdWarning(v13);
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v46, this, v10, v11);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v46);
  if ( !(_DWORD)v4 )
  {
    if ( !a3 )
      goto LABEL_22;
    goto LABEL_17;
  }
  v19 = *((_DWORD *)this + 36);
  if ( v19 )
  {
    if ( v19 == (_DWORD)v4 )
      goto LABEL_22;
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    v27[3] = this;
    v27[4] = v4;
    v27[5] = *((unsigned int *)this + 36);
    v27[6] = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdWarning(v27);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v46, v28, v29, v30);
    return 3221225485LL;
  }
  if ( !a3 )
  {
LABEL_17:
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    v27[3] = this;
    v27[4] = -1073741811LL;
    goto LABEL_18;
  }
  if ( *((_QWORD *)this + 17) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = 3226LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v22 = operator new[](v4, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 17) = v22;
  if ( !v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdLowResource(v21);
    v23[3] = this;
    v23[4] = v4;
    v23[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v23);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v46, v24, v25, v26);
    return 3221225495LL;
  }
  *((_DWORD *)this + 36) = v4;
  if ( &a3[v4] < a3 || (unsigned __int64)&a3[v4] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v22, a3, v4);
LABEL_22:
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v46, v15, v17, v18);
  DXGKEYEDMUTEX::AcquireReference(this, v31, v32, v33);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v47,
    (struct DXGPROCESS *)Current,
    v34,
    v35);
  v36 = Current + 48;
  v37 = HMGRTABLE::AllocHandle(Current + 48, (__int64)this, 9LL, 0LL, 0);
  v39 = v37;
  *a2 = v37;
  if ( !v37 )
  {
    v40 = WdLogNewEntry5_WdLowResource(v38);
    *(_QWORD *)(v40 + 24) = this;
    *(_QWORD *)(v40 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v40);
    DXGKEYEDMUTEX::ReleaseReference(this, v41, v42, v43);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47);
    return 3221225495LL;
  }
  v44 = (v37 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v44 < Current[52] )
  {
    v45 = *(_DWORD *)(*v36 + 16 * v44 + 8);
    if ( ((v39 >> 26) & 0x30) == (*(_BYTE *)(*v36 + 16 * v44 + 8) & 0x30) && (v45 & 0x1000) == 0 && (v45 & 0xF) != 0 )
      *(_DWORD *)(*v36 + 16 * (((unsigned __int64)v39 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47);
  return 0LL;
}
