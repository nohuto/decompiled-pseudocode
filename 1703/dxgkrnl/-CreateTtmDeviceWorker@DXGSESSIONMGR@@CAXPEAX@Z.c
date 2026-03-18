/*
 * XREFs of ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C0121F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001D90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C01B0CD8 (-RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::CreateTtmDeviceWorker(CTTMDEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  _QWORD *v20; // rax
  _BYTE v21[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF
  char v23; // [rsp+60h] [rbp-18h]

  v5 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4) + 73);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)v5, v6, v7);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 152, 0LL);
  *(_QWORD *)(v5 + 160) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 905) )
  {
    v15 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
  }
  else
  {
    v10 = *(_QWORD **)(v5 + 176);
    if ( *v10 != v5 + 168 )
      __fastfail(3u);
    *(_QWORD *)this = v5 + 168;
    *((_QWORD *)this + 1) = v10;
    *v10 = this;
    *(_QWORD *)(v5 + 176) = this;
    v11 = *(_QWORD *)(v5 + 120);
    if ( v11 && *(_BYTE *)(v11 + 18488) )
    {
      v23 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v11 + 18584));
      v16 = CTTMDEVICE::RegisterTtmDevice(this, *(struct DXGSESSIONDATA **)(v5 + 120));
      v19 = v16;
      if ( v16 < 0 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
        v20[3] = *((unsigned int *)this + 20);
        v20[4] = *((_QWORD *)this + 8);
        v20[5] = **(unsigned int **)(v5 + 120);
        v20[6] = v19;
        WdLogEvent5_WdError(v20);
      }
      if ( v23 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  *(_QWORD *)(v5 + 160) = 0LL;
  ExReleasePushLockExclusiveEx(v5 + 152, 0LL);
  KeLeaveCriticalRegion();
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v12, v13, v14);
}
