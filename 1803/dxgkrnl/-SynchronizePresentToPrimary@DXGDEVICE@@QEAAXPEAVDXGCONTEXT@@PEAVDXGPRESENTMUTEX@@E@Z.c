/*
 * XREFs of ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C01B48A0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01B2E2C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@P.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F9D50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
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
  __int64 v9; // rbx
  __int64 **v10; // r12
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 **v13; // rdx
  __int64 *v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  _QWORD *v21; // rsi
  _QWORD *v22; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v24[16]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v26[64]; // [rsp+70h] [rbp-90h] BYREF

  v4 = *((_QWORD *)this + 2);
  v7 = *(_QWORD *)(v4 + 672);
  v8 = *(_QWORD *)(v4 + 680);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 712, 0LL);
  *(_QWORD *)(v4 + 720) = KeGetCurrentThread();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(v7 + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v7, (struct ADAPTER_RENDER *)v4);
  if ( a4 || !*((_QWORD *)a2 + 20) && *(_DWORD *)(v4 + 704) >= 0x40u )
  {
    v9 = 0LL;
    v10 = (__int64 **)(v4 + 688);
    while ( 1 )
    {
      v11 = 0LL;
      if ( *v10 != (__int64 *)v10 )
        v11 = *v10;
      if ( !v11 )
        break;
      v12 = *v11;
      if ( *v11 )
      {
        if ( *(__int64 **)(v12 + 8) != v11 || (v13 = (__int64 **)v11[1], *v13 != v11) )
          __fastfail(3u);
        *v13 = (__int64 *)v12;
        *(_QWORD *)(v12 + 8) = v13;
        --*(_DWORD *)(v4 + 704);
      }
      *v11 = 0LL;
      v14 = v11 - 20;
      if ( a2 != (struct DXGCONTEXT *)(v11 - 20)
        && (*((_DWORD *)v14 + 91) & 0x10) == 0
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2] + 16) + 520LL) + 8LL)
                                                      + 792LL))(v14[29])
        && (unsigned int)v9 < 0x40 )
      {
        v26[v9] = v14[29];
        v9 = (unsigned int)(v9 + 1);
      }
    }
    if ( (_DWORD)v9 )
    {
      v15 = *((_QWORD *)a2 + 2);
      v25 = ++v8;
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 520LL) + 8LL) + 648LL))(
              0LL,
              0LL,
              (unsigned int)v9,
              v26,
              1,
              &VidSchSyncObject,
              0,
              &v25);
      v18 = v16;
      if ( v16 < 0 )
      {
LABEL_20:
        v19 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v19 + 24) = v18;
        *(_QWORD *)(v19 + 32) = a2;
        WdLogEvent5_WdError(v19);
        goto LABEL_26;
      }
      *(_QWORD *)(v4 + 680) = v8;
    }
  }
  if ( *((_QWORD *)a2 + 22) < v8 )
  {
    if ( (*((_DWORD *)a2 + 91) & 0x10) == 0 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 520LL) + 8LL)
                                                                                              + 632LL))(
              *((_QWORD *)a2 + 29),
              VidSchSyncObject,
              v8);
      v18 = v20;
      if ( v20 < 0 )
        goto LABEL_20;
    }
    *((_QWORD *)a2 + 22) = v8;
  }
LABEL_26:
  v21 = (_QWORD *)((char *)a2 + 160);
  if ( !*v21 )
  {
    v22 = *(_QWORD **)(v4 + 696);
    if ( *v22 != v4 + 688 )
      __fastfail(3u);
    *v21 = v4 + 688;
    v21[1] = v22;
    *v22 = v21;
    *(_QWORD *)(v4 + 696) = v21;
    ++*(_DWORD *)(v4 + 704);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  *(_QWORD *)(v4 + 720) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 712, 0LL);
  KeLeaveCriticalRegion();
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
}
