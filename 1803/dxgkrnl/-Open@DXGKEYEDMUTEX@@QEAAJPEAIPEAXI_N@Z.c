/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0097A7C
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00D44B0 (DxgkOpenResourceFromNtHandle.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C01C0140 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C01C0D64 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C01C0EB4 (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01CA964 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C001A370 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C001BB98 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0033374 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00333A4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00975C4 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Open(DXGKEYEDMUTEX *this, unsigned int *a2, char *a3, unsigned int a4, bool a5)
{
  SIZE_T v5; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *Current; // r13
  __int64 v13; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  PVOID v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // r8d
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edx
  _BYTE v31[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v32[32]; // [rsp+40h] [rbp-38h] BYREF

  v5 = a4;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdWarning(v13);
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v31, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
  if ( !(_DWORD)v5 )
  {
    if ( !a3 )
      goto LABEL_22;
    goto LABEL_17;
  }
  v18 = *((_DWORD *)this + 36);
  if ( v18 )
  {
    if ( v18 == (_DWORD)v5 )
      goto LABEL_22;
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v23[3] = this;
    v23[4] = v5;
    v23[5] = *((unsigned int *)this + 36);
    v23[6] = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdWarning(v23);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
    return 3221225485LL;
  }
  if ( !a3 )
  {
LABEL_17:
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v23[3] = this;
    v23[4] = -1073741811LL;
    goto LABEL_18;
  }
  if ( *((_QWORD *)this + 17) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v19 + 24) = 3493LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v21 = operator new[](v5, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 17) = v21;
  if ( !v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v20);
    v22[3] = this;
    v22[4] = v5;
    v22[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v22);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
    return 3221225495LL;
  }
  *((_DWORD *)this + 36) = v5;
  if ( &a3[v5] < a3 || (unsigned __int64)&a3[v5] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v21, a3, v5);
LABEL_22:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
  DXGKEYEDMUTEX::AcquireReference(this);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v32,
    (struct _KTHREAD **)Current);
  v24 = (_QWORD *)((char *)Current + 232);
  v25 = HMGRTABLE::AllocHandle((unsigned int *)Current + 58, (__int64)this, 9, 0, 0);
  v27 = v25;
  *a2 = v25;
  if ( !v25 )
  {
    v28 = WdLogNewEntry5_WdLowResource(v26);
    *(_QWORD *)(v28 + 24) = this;
    *(_QWORD *)(v28 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v28);
    DXGKEYEDMUTEX::ReleaseReference(this);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
    return 3221225495LL;
  }
  if ( a5 )
  {
    v29 = (v25 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *((_DWORD *)Current + 62) )
    {
      v30 = *(_DWORD *)(*v24 + 16 * v29 + 8);
      if ( ((v27 >> 25) & 0x60) == (*(_BYTE *)(*v24 + 16 * v29 + 8) & 0x60) && (v30 & 0x2000) == 0 && (v30 & 0x1F) != 0 )
        *(_DWORD *)(*v24 + 16 * (((unsigned __int64)v27 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
  return 0LL;
}
