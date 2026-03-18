/*
 * XREFs of ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C00BF62C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00BC4E4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00D8C70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICE::SynchronizePresentToPrimary(
        DXGDEVICE *this,
        struct DXGCONTEXT *a2,
        struct DXGPRESENTMUTEX *a3,
        char a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 **v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rcx
  __int64 v19; // rbx
  __int64 **v20; // r12
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rdi
  char v24; // al
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v32[16]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v34[64]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = *((_QWORD *)this + 2);
  v7 = *(_QWORD *)(v4 + 560);
  v8 = *(_QWORD *)(v4 + 568);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 600, 0LL);
  *(_QWORD *)(v4 + 608) = KeGetCurrentThread();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, (struct DXGFASTMUTEX *const)(v7 + 32), v9, v10);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v7, (struct ADAPTER_RENDER *)v4);
  if ( a4 || !*((_QWORD *)a2 + 20) && *(_DWORD *)(v4 + 592) >= 0x40u )
  {
    v19 = 0LL;
    v20 = (__int64 **)(v4 + 576);
    while ( 1 )
    {
      v21 = *v20;
      if ( *v20 == (__int64 *)v20 || !v21 )
        break;
      v22 = *v21;
      if ( *v21 )
      {
        v11 = (__int64 **)v21[1];
        if ( *(__int64 **)(v22 + 8) != v21 || *v11 != v21 )
          __fastfail(3u);
        *v11 = (__int64 *)v22;
        *(_QWORD *)(v22 + 8) = v11;
        --*(_DWORD *)(v4 + 592);
      }
      *v21 = 0LL;
      v23 = v21 - 20;
      if ( a2 != (struct DXGCONTEXT *)(v21 - 20) )
      {
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23[2] + 16) + 408LL) + 8LL)
                                                 + 680LL))(v23[29]);
        if ( v24 && (unsigned int)v19 < 0x40 )
        {
          v34[v19] = v23[29];
          v19 = (unsigned int)(v19 + 1);
        }
      }
    }
    if ( (_DWORD)v19 )
    {
      v25 = *((_QWORD *)a2 + 2);
      v33 = ++v8;
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 408LL) + 8LL) + 544LL))(
              (unsigned int)v19,
              v34,
              1LL,
              &VidSchSyncObject,
              0,
              &v33);
      v28 = v26;
      if ( v26 < 0 )
      {
LABEL_28:
        v29 = WdLogNewEntry5_WdError(v27, v11);
        *(_QWORD *)(v29 + 24) = v28;
        *(_QWORD *)(v29 + 32) = a2;
        WdLogEvent5_WdError(v29);
        goto LABEL_4;
      }
      *(_QWORD *)(v4 + 568) = v8;
    }
  }
  if ( *((_QWORD *)a2 + 22) >= v8 )
    goto LABEL_4;
  v30 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 408LL) + 8LL)
                                                                                          + 536LL))(
          *((_QWORD *)a2 + 29),
          VidSchSyncObject,
          v8);
  v28 = v30;
  if ( v30 < 0 )
    goto LABEL_28;
  *((_QWORD *)a2 + 22) = v8;
LABEL_4:
  v14 = (_QWORD *)((char *)a2 + 160);
  if ( !*v14 )
  {
    v18 = *(_QWORD **)(v4 + 584);
    if ( *v18 != v4 + 576 )
      __fastfail(3u);
    *v14 = v4 + 576;
    v14[1] = v18;
    *v18 = v14;
    *(_QWORD *)(v4 + 584) = v14;
    ++*(_DWORD *)(v4 + 592);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32, (__int64)v11, v12, v13);
  *(_QWORD *)(v4 + 608) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 600, 0LL);
  KeLeaveCriticalRegion();
  if ( v32[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32, v15, v16, v17);
}
