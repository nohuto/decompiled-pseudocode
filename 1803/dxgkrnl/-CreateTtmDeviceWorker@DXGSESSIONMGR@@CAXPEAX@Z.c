/*
 * XREFs of ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C01CEFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000BC94 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C01D009C (-RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::CreateTtmDeviceWorker(CTTMDEVICE *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbp
  _QWORD *v10; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF
  char v13; // [rsp+60h] [rbp-18h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 74);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)v2, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 152, 0LL);
  *(_QWORD *)(v2 + 160) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 905) )
  {
    v4 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v4 + 24) = this;
    WdLogEvent5_WdError(v4);
  }
  else
  {
    v5 = *(_QWORD **)(v2 + 176);
    if ( *v5 != v2 + 168 )
      __fastfail(3u);
    *(_QWORD *)this = v2 + 168;
    *((_QWORD *)this + 1) = v5;
    *v5 = this;
    *(_QWORD *)(v2 + 176) = this;
    v6 = *(_QWORD *)(v2 + 120);
    if ( v6 && *(_BYTE *)(v6 + 18488) )
    {
      v13 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v6 + 18592));
      v7 = CTTMDEVICE::RegisterTtmDevice(this, *(struct DXGSESSIONDATA **)(v2 + 120));
      v9 = v7;
      if ( v7 < 0 )
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
        v10[3] = *((unsigned int *)this + 20);
        v10[4] = *((_QWORD *)this + 8);
        v10[5] = **(unsigned int **)(v2 + 120);
        v10[6] = v9;
        WdLogEvent5_WdError(v10);
      }
      if ( v13 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  *(_QWORD *)(v2 + 160) = 0LL;
  ExReleasePushLockExclusiveEx(v2 + 152, 0LL);
  KeLeaveCriticalRegion();
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
}
