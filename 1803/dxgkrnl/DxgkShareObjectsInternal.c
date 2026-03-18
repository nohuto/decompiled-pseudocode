/*
 * XREFs of DxgkShareObjectsInternal @ 0x1C00D54D8
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C004B2C0 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     DxgkShareObjects @ 0x1C00D5460 (DxgkShareObjects.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017DC90 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01E6E70 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0033374 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00333A4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C00D58A8 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C00D5AB4 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00F8734 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01A9B70 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkShareObjectsInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        struct _KPROCESS *a3,
        unsigned int a4,
        char *Src,
        PVOID *a6,
        ACCESS_MASK DesiredAccess,
        _QWORD *a8,
        PVOID *a9)
{
  __int64 v9; // r15
  char v10; // si
  _QWORD *v11; // r14
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // r13
  char *v14; // rcx
  __int64 inserted; // rbx
  __int64 *v16; // r12
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int EntryType; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  DXGKEYEDMUTEX *v23; // r14
  __int64 v24; // rsi
  PERESOURCE *Global; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  KPROCESSOR_MODE v29; // r12
  char v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct _KPROCESS *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  bool v45; // zf
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned int v51; // r9d
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  DXGGLOBAL *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  char v62; // [rsp+41h] [rbp-117h]
  char v63; // [rsp+42h] [rbp-116h]
  PVOID Object; // [rsp+50h] [rbp-108h] BYREF
  char v65[8]; // [rsp+58h] [rbp-100h] BYREF
  char v66; // [rsp+60h] [rbp-F8h]
  HANDLE Handle; // [rsp+68h] [rbp-F0h] BYREF
  PVOID *v68; // [rsp+70h] [rbp-E8h]
  __int64 v69; // [rsp+78h] [rbp-E0h]
  int v70; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v71; // [rsp+88h] [rbp-D0h]
  PRKPROCESS PROCESS; // [rsp+90h] [rbp-C8h]
  struct DXGPROCESS *v73; // [rsp+98h] [rbp-C0h]
  PVOID *v74; // [rsp+A0h] [rbp-B8h]
  _BYTE v75[24]; // [rsp+A8h] [rbp-B0h] BYREF
  _BYTE v76[24]; // [rsp+C0h] [rbp-98h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-80h] BYREF
  __int64 v78; // [rsp+108h] [rbp-50h] BYREF
  unsigned int v79; // [rsp+110h] [rbp-48h]

  v9 = a4;
  PROCESS = a3;
  v10 = a1;
  v62 = a1;
  v68 = a6;
  v11 = a8;
  v69 = (__int64)a8;
  v74 = a9;
  v71 = 0LL;
  v70 = 2074;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 2074);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v70, 2074);
  Object = 0LL;
  Handle = 0LL;
  v63 = 0;
  Current = DXGPROCESS::GetCurrent();
  v73 = Current;
  if ( Current )
  {
    if ( (unsigned int)(v9 - 1) > 2 )
    {
      v60 = WdLogNewEntry5_WdError(v12);
      LODWORD(inserted) = -1073741811;
      *(_QWORD *)(v60 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v60);
LABEL_104:
      v29 = a2;
      goto LABEL_31;
    }
    v78 = 0LL;
    v79 = 0;
    if ( v10 == 1 )
    {
      v14 = &Src[4 * v9];
      if ( v14 < Src || (unsigned __int64)v14 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(&v78, Src, 4 * v9);
    if ( a6 )
    {
      inserted = (unsigned int)v78;
      if ( (_DWORD)v78 )
      {
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v76, (struct _KTHREAD **)Current);
        v16 = (__int64 *)((char *)Current + 232);
        v17 = ((unsigned int)inserted >> 6) & 0xFFFFFF;
        if ( v17 < *((_DWORD *)Current + 62)
          && (v18 = *(_DWORD *)(*v16 + 16LL * v17 + 8), (unsigned int)inserted >> 30 == ((v18 >> 5) & 3))
          && (v18 & 0x2000) == 0
          && (v18 & 0x1F) != 0 )
        {
          EntryType = HMGRTABLE::GetEntryType((char *)Current + 232);
        }
        else
        {
          EntryType = 0;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v76);
        if ( EntryType == 4 )
        {
          v23 = 0LL;
          v24 = 0LL;
          Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v21);
          DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v65, Global);
          if ( (unsigned int)v9 <= 1 )
          {
LABEL_17:
            v29 = a2;
            v30 = v62;
            LOBYTE(v27) = v62;
            LODWORD(inserted) = CreateSharedResourceNtObject(v27, v26, (unsigned int)inserted, 0LL, v68, a2, &Object);
            if ( (int)inserted < 0 )
            {
              if ( Object )
              {
                v56 = WdLogNewEntry5_WdAssertion(v32);
                *(_QWORD *)(v56 + 24) = 783LL;
                WdLogEvent5_WdAssertion(v56);
              }
              if ( v23 )
                DXGKEYEDMUTEX::ReleaseReference(v23);
              if ( v24 )
              {
                v57 = DXGGLOBAL::GetGlobal(v32);
                DXGGLOBAL::DestroySyncObject(v57, (struct DXGSYNCOBJECT *)v24, 0);
              }
              if ( v66 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
LABEL_31:
              if ( (int)inserted >= 0 )
                goto LABEL_32;
              goto LABEL_46;
            }
            if ( v23 || v24 )
            {
              v58 = Object;
              *((_QWORD *)Object + 3) = v23;
              v58[4] = v24;
            }
            if ( v66 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
            v11 = (_QWORD *)v69;
LABEL_23:
            v33 = PROCESS;
            if ( PROCESS && v33 != (struct _KPROCESS *)PsGetCurrentProcess(v32, v31) )
            {
              KeStackAttachProcess(v33, &ApcState);
              v63 = 1;
            }
            inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &Handle);
            if ( v63 )
              KeUnstackDetachProcess(&ApcState);
            if ( (int)inserted < 0 )
            {
              v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
              v59[3] = Object;
              v59[4] = Current;
              v59[5] = inserted;
              WdLogEvent5_WdWarning(v59);
            }
            else if ( v30 == 1 )
            {
              if ( (unsigned __int64)v11 >= MmUserProbeAddress )
                v11 = (_QWORD *)MmUserProbeAddress;
              *v11 = Handle;
            }
            else
            {
              *v11 = Handle;
              if ( v74 )
                *v74 = Object;
            }
            goto LABEL_31;
          }
          if ( (_DWORD)v9 == 3 )
          {
            DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v65);
            DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
              (DXGHANDLETABLELOCKSHARED *)v75,
              (struct _KTHREAD **)Current);
            inserted = HIDWORD(v78);
            v49 = (HIDWORD(v78) >> 6) & 0xFFFFFF;
            v50 = HIDWORD(v78) >> 30;
            v51 = *((_DWORD *)Current + 62);
            if ( (unsigned int)v49 < v51
              && (v48 = *v16,
                  v47 = *(unsigned int *)(*v16 + 16 * v49 + 8),
                  (_DWORD)v50 == ((*(_DWORD *)(*v16 + 16 * v49 + 8) >> 5) & 3))
              && (v47 & 0x2000) == 0
              && (v47 & 0x1F) != 0
              && (v47 &= 0x1Fu, (_BYTE)v47 == 9) )
            {
              v23 = *(DXGKEYEDMUTEX **)(v48 + 16LL * (unsigned int)v49);
            }
            else
            {
              v23 = 0LL;
            }
            if ( v23 )
            {
              if ( (*((_DWORD *)v23 + 37) & 1) != 0 )
              {
                inserted = v79;
                v53 = (v79 >> 6) & 0xFFFFFF;
                v54 = v79 >> 30;
                if ( (unsigned int)v53 < v51
                  && (v48 = *v16,
                      v47 = *(unsigned int *)(*v16 + 16 * v53 + 8),
                      (_DWORD)v54 == ((*(_DWORD *)(*v16 + 16 * v53 + 8) >> 5) & 3))
                  && (v47 & 0x2000) == 0
                  && (v47 & 0x1F) != 0
                  && (v47 &= 0x1Fu, (_BYTE)v47 == 8) )
                {
                  v24 = *(_QWORD *)(v48 + 16LL * (unsigned int)v53);
                }
                else
                {
                  v24 = 0LL;
                }
                if ( v24 )
                {
                  if ( (*(_DWORD *)(v24 + 172) & 2) != 0 )
                  {
                    DXGKEYEDMUTEX::AcquireReference(v23);
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v75);
                    _InterlockedIncrement((volatile signed __int32 *)(v24 + 24));
                    LODWORD(inserted) = v78;
                    goto LABEL_17;
                  }
                  _InterlockedIncrement(&dword_1C007AD5C);
                  v55 = WdLogNewEntry5_WdError(v47);
                  *(_QWORD *)(v55 + 24) = v24;
                  LODWORD(inserted) = -1073741811;
                  *(_QWORD *)(v55 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v55);
                }
                else
                {
                  v46 = WdLogNewEntry5_WdWarning(v47, v54, v48);
                  *(_QWORD *)(v46 + 24) = inserted;
                  LODWORD(inserted) = -1073741811;
                  *(_QWORD *)(v46 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v46);
                }
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v75);
                v45 = v66 == 0;
                goto LABEL_66;
              }
              _InterlockedIncrement(&dword_1C007AD5C);
              v52 = WdLogNewEntry5_WdError(v47);
              *(_QWORD *)(v52 + 24) = v23;
              LODWORD(inserted) = -1073741811;
              *(_QWORD *)(v52 + 32) = -1073741811LL;
              WdLogEvent5_WdError(v52);
            }
            else
            {
              v44 = WdLogNewEntry5_WdWarning(v47, v50, v48);
              *(_QWORD *)(v44 + 24) = inserted;
              LODWORD(inserted) = -1073741811;
              *(_QWORD *)(v44 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v44);
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v75);
          }
          else
          {
            v43 = WdLogNewEntry5_WdWarning(v27, v26, v28);
            *(_QWORD *)(v43 + 24) = inserted;
            LODWORD(inserted) = -1073741811;
            *(_QWORD *)(v43 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v43);
          }
          v45 = v66 == 0;
LABEL_66:
          if ( !v45 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
          goto LABEL_104;
        }
        if ( EntryType == 11 || EntryType == 8 )
        {
          if ( (_DWORD)v9 == 1 )
          {
            v29 = a2;
            v30 = v62;
            LOBYTE(v21) = v62;
            LODWORD(inserted) = CreateSharedSyncNtObject(v21, EntryType, (unsigned int)inserted, 0LL, v68, a2, &Object);
            if ( (int)inserted >= 0 )
              goto LABEL_23;
            if ( !Object )
              goto LABEL_31;
            v42 = WdLogNewEntry5_WdAssertion(v32);
            *(_QWORD *)(v42 + 24) = 823LL;
            goto LABEL_58;
          }
        }
        else
        {
          v20 = 14LL;
          if ( EntryType != 14 )
          {
            v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, 14LL, v22);
            v41[3] = inserted;
            v41[4] = (int)EntryType;
            LODWORD(inserted) = -1073741811;
            v41[5] = -1073741811LL;
LABEL_44:
            WdLogEvent5_WdWarning(v41);
            goto LABEL_45;
          }
          if ( (_DWORD)v9 == 1 )
          {
            v29 = a2;
            v30 = v62;
            LOBYTE(v21) = v62;
            LODWORD(inserted) = CreateSharedProtectedSessionNtObject(v21, 14LL, (unsigned int)inserted);
            if ( (int)inserted >= 0 )
              goto LABEL_23;
            if ( !Object )
              goto LABEL_31;
            v42 = WdLogNewEntry5_WdAssertion(v32);
            *(_QWORD *)(v42 + 24) = 846LL;
LABEL_58:
            WdLogEvent5_WdAssertion(v42);
            goto LABEL_31;
          }
        }
        v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
        v41[3] = inserted;
        LODWORD(inserted) = -1073741811;
        v41[4] = -1073741811LL;
        goto LABEL_44;
      }
    }
  }
  v40 = WdLogNewEntry5_WdError(v12);
  LODWORD(inserted) = -1073741811;
  *(_QWORD *)(v40 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v40);
LABEL_45:
  v29 = a2;
LABEL_46:
  if ( Handle )
    ObCloseHandle(Handle, v29);
LABEL_32:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, v70);
  return (unsigned int)inserted;
}
