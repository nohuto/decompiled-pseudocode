/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C01BD0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001D44 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009910 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000BC94 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C001637C (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00165AC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0028BF8 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C01BC598 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C01BC7D8 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(
        struct _KPROCESS **this,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _KPROCESS *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KPROCESS *v15; // rdx
  struct _KPROCESS *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 ProcessDxgProcess; // r13
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // r14
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // r10
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct _KPROCESS *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v45[8]; // [rsp+38h] [rbp-C8h] BYREF
  char v46; // [rsp+40h] [rbp-C0h]
  _BYTE v47[16]; // [rsp+50h] [rbp-B0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-A0h] BYREF
  char v49; // [rsp+90h] [rbp-70h]
  void *v50[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v51; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v52[2]; // [rsp+128h] [rbp+28h] BYREF

  v3 = (unsigned int)a3;
  if ( (unsigned int)a3 < 0xC )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v6[3] = v3;
LABEL_3:
    LODWORD(v7) = -1073741811;
    v6[4] = -1073741811LL;
LABEL_4:
    WdLogEvent5_WdWarning(v6);
    return (unsigned int)v7;
  }
  v9 = a2[2] - 1;
  if ( a2[2] == 1 )
  {
    if ( (_DWORD)a3 != 88 )
    {
LABEL_14:
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, a2, a3);
      v6[3] = (int)a2[2];
      v6[4] = v3;
      v7 = -1073741811LL;
LABEL_15:
      v6[5] = v7;
      goto LABEL_4;
    }
    v16 = this[3];
    if ( (struct _KPROCESS *)PsGetCurrentProcess(v9, a2) != v16 && (unsigned __int8)PsGetProcessExitProcessCalled(v16) )
      goto LABEL_18;
    *(_QWORD *)v52 = 0LL;
    v51 = 0LL;
    HIDWORD(v51) = a2[1];
    LODWORD(v51) = 1869901170;
    v52[0] = 2;
    memset(v50, 0, sizeof(v50));
    if ( a2[4] > 0x10 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
      v10 = a2[4];
      goto LABEL_21;
    }
    if ( a2[5] >= 2 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
      v10 = a2[5];
      goto LABEL_21;
    }
    ProcessDxgProcess = PsGetProcessDxgProcess(this[3]);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v47);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)v45,
      (struct _KTHREAD **)ProcessDxgProcess);
    v22 = a2[3];
    v23 = (a2[3] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v23 < *(_DWORD *)(ProcessDxgProcess + 248)
      && (v21 = *(_QWORD *)(ProcessDxgProcess + 232),
          v24 = (unsigned int)v23,
          v22 = ((unsigned int)v22 >> 25) & 0x60,
          v23 = *(unsigned int *)(v21 + 16LL * (unsigned int)v23 + 8),
          (_BYTE)v22 == (v23 & 0x60))
      && (v23 & 0x2000) == 0
      && (v23 & 0x1F) != 0
      && (v25 = 2 * v24, v23 &= 0x1Fu, (_BYTE)v23 == 12) )
    {
      v26 = *(_QWORD *)(v21 + 8 * v25);
      if ( v26 )
      {
        DXGPROCESS::AcquireReference((DXGPROCESS *)v26);
        goto LABEL_33;
      }
    }
    else
    {
      v26 = 0LL;
    }
    v28 = WdLogNewEntry5_WdWarning(v23, v22, v21);
    *(_QWORD *)(v28 + 24) = a2[3];
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    HIDWORD(v51) = -1073741811;
LABEL_33:
    if ( v26 )
    {
      if ( (a2[5] & 1) != 0 )
      {
        v29 = 0LL;
        if ( a2[4] )
        {
          while ( 1 )
          {
            v30 = a2[v29 + 6];
            v31 = (a2[v29 + 6] >> 6) & 0xFFFFFF;
            v32 = (unsigned int)v29;
            if ( (unsigned int)v31 >= *(_DWORD *)(ProcessDxgProcess + 248) )
              break;
            v33 = *(_QWORD *)(ProcessDxgProcess + 232);
            v30 = ((unsigned int)v30 >> 25) & 0x60;
            v27 = *(unsigned int *)(v33 + 16 * v31 + 8);
            if ( (_BYTE)v30 != (*(_BYTE *)(v33 + 16 * v31 + 8) & 0x60) )
              break;
            if ( (v27 & 0x2000) != 0 )
              break;
            if ( (v27 & 0x1F) == 0 )
              break;
            v27 &= 0x1Fu;
            if ( (_BYTE)v27 != 13 )
              break;
            v27 = *(_QWORD *)(v33 + 16LL * (unsigned int)v31);
            if ( !v27 )
              break;
            v50[v29] = *(void **)(v27 + 8);
            a2[v29 + 6] = *(_DWORD *)v27;
            v29 = (unsigned int)(v29 + 1);
            if ( (unsigned int)v29 >= a2[4] )
              goto LABEL_45;
          }
          v34 = WdLogNewEntry5_WdWarning(v27, v29, v30);
          *(_QWORD *)(v34 + 24) = a2[v32 + 6];
          *(_QWORD *)(v34 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v34);
          HIDWORD(v51) = -1073741811;
          DXGPROCESS::ReleaseReference((DXGPROCESS *)v26);
          v26 = 0LL;
        }
      }
    }
LABEL_45:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v45);
    if ( v47[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
    if ( v26 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v45, *(struct DXGFASTMUTEX *const *)(v26 + 112), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
      if ( (*(_BYTE *)(v26 + 323) & 8) != 0 && *(_DWORD *)(v26 + 40) == 1 )
      {
        v38 = this[3];
        v49 = 0;
        CPROCESSATTACHHELPER::Attach(&ApcState, v38);
        v44 = 0LL;
        CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v44, (struct DXGPROCESS *)v26);
        if ( v44 )
        {
          HIDWORD(v51) = DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
                           (DXG_HOST_REMOTEOBJECTCHANNEL *)this,
                           a2[4],
                           a2 + 6,
                           v50,
                           &v52[1]);
        }
        else
        {
          v42 = WdLogNewEntry5_WdWarning(v40, v39, v41);
          *(_QWORD *)(v42 + 24) = a2[3];
          *(_QWORD *)(v42 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v42);
          HIDWORD(v51) = -1073741811;
        }
        CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v44);
        if ( v49 )
          KeUnstackDetachProcess(&ApcState);
      }
      else
      {
        v43 = WdLogNewEntry5_WdWarning(v36, v35, v37);
        *(_QWORD *)(v43 + 24) = a2[3];
        *(_QWORD *)(v43 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v43);
        HIDWORD(v51) = -1073741811;
      }
      if ( v46 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v45);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
      DXGPROCESS::ReleaseReference((DXGPROCESS *)v26);
      if ( v46 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
    }
    goto LABEL_60;
  }
  if ( a2[2] != 3 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, a2, a3);
    v10 = (int)a2[2];
LABEL_21:
    v6[3] = v10;
    goto LABEL_3;
  }
  if ( (_DWORD)a3 != 16 )
    goto LABEL_14;
  v11 = this[3];
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v9, a2) != v11 && (unsigned __int8)PsGetProcessExitProcessCalled(v11) )
  {
LABEL_18:
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v7 = -1073741558LL;
    v6[3] = (int)a2[2];
    v6[4] = this[3];
    goto LABEL_15;
  }
  v15 = this[3];
  v49 = 0;
  v51 = 0LL;
  *(_QWORD *)v52 = 0LL;
  HIDWORD(v51) = a2[1];
  LODWORD(v51) = 1869901170;
  v52[0] = 4;
  CPROCESSATTACHHELPER::Attach(&ApcState, v15);
  HIDWORD(v51) = DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback((DXG_HOST_REMOTEOBJECTCHANNEL *)this, a2[3]);
  if ( v49 )
    KeUnstackDetachProcess(&ApcState);
LABEL_60:
  (*(void (__fastcall **)(struct _KPROCESS *, __int64 *, __int64))(*(_QWORD *)this[1] + 24LL))(this[1], &v51, 16LL);
  return 0LL;
}
