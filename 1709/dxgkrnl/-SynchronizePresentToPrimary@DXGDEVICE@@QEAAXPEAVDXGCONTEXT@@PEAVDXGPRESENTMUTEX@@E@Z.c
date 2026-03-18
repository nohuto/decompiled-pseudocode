/*
 * XREFs of ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C009E2EC
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00C1650 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008E24 (-GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008EC0 (-GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C008AAE4 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
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
  _QWORD *v9; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // rbx
  __int64 **v12; // r12
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 **v15; // rdx
  DXGCONTEXT *v16; // rdi
  struct _VIDSCH_CONTEXT *RenderHwQueue; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  struct _VIDSCH_CONTEXT *ImplicitHwQueue; // rax
  __int64 v25; // rdx
  int v26; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v28[16]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v30[64]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = *((_QWORD *)this + 2);
  v7 = *(_QWORD *)(v4 + 656);
  v8 = *(_QWORD *)(v4 + 664);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 696, 0LL);
  *(_QWORD *)(v4 + 704) = KeGetCurrentThread();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGFASTMUTEX *const)(v7 + 32));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v7, (struct ADAPTER_RENDER *)v4);
  if ( a4 || !*((_QWORD *)a2 + 20) && *(_DWORD *)(v4 + 688) >= 0x40u )
  {
    v11 = 0LL;
    v12 = (__int64 **)(v4 + 672);
    while ( 1 )
    {
      v13 = *v12;
      if ( *v12 == (__int64 *)v12 || !v13 )
        break;
      v14 = *v13;
      if ( *v13 )
      {
        if ( *(__int64 **)(v14 + 8) != v13 || (v15 = (__int64 **)v13[1], *v15 != v13) )
          __fastfail(3u);
        *v15 = (__int64 *)v14;
        *(_QWORD *)(v14 + 8) = v15;
        --*(_DWORD *)(v4 + 688);
      }
      *v13 = 0LL;
      v16 = (DXGCONTEXT *)(v13 - 20);
      if ( a2 != (struct DXGCONTEXT *)(v13 - 20) )
      {
        RenderHwQueue = DXGCONTEXT::GetRenderHwQueue(v16);
        if ( (*(unsigned __int8 (__fastcall **)(struct _VIDSCH_CONTEXT *))(*(_QWORD *)(v18 + 8) + 680LL))(RenderHwQueue) )
        {
          if ( (unsigned int)v11 < 0x40 )
          {
            v30[v11] = DXGCONTEXT::GetRenderHwQueue(v16);
            v11 = (unsigned int)(v11 + 1);
          }
        }
      }
    }
    if ( (_DWORD)v11 )
    {
      v19 = *((_QWORD *)a2 + 2);
      v29 = ++v8;
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 504LL) + 8LL) + 544LL))(
              (unsigned int)v11,
              v30,
              1LL,
              &VidSchSyncObject,
              0,
              &v29);
      v22 = v20;
      if ( v20 < 0 )
      {
LABEL_28:
        v23 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v23 + 24) = v22;
        *(_QWORD *)(v23 + 32) = a2;
        WdLogEvent5_WdError(v23);
        goto LABEL_4;
      }
      *(_QWORD *)(v4 + 664) = v8;
    }
  }
  if ( *((_QWORD *)a2 + 22) >= v8 )
    goto LABEL_4;
  ImplicitHwQueue = DXGCONTEXT::GetImplicitHwQueue(a2);
  v26 = (*(__int64 (__fastcall **)(struct _VIDSCH_CONTEXT *, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(v25 + 8) + 536LL))(
          ImplicitHwQueue,
          VidSchSyncObject,
          v8);
  v22 = v26;
  if ( v26 < 0 )
    goto LABEL_28;
  *((_QWORD *)a2 + 22) = v8;
LABEL_4:
  v9 = (_QWORD *)((char *)a2 + 160);
  if ( !*v9 )
  {
    v10 = *(_QWORD **)(v4 + 680);
    if ( *v10 != v4 + 672 )
      __fastfail(3u);
    *v9 = v4 + 672;
    v9[1] = v10;
    *v10 = v9;
    *(_QWORD *)(v4 + 680) = v9;
    ++*(_DWORD *)(v4 + 688);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
  *(_QWORD *)(v4 + 704) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 696, 0LL);
  KeLeaveCriticalRegion();
  if ( v28[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
}
