/*
 * XREFs of ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01E6E70
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001D44 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009910 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000BC94 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C000BE20 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C001637C (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00165AC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0028BF8 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C009631C (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C00D54D8 (DxgkShareObjectsInternal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00E6124 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00F8734 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z @ 0x1C019EA5C (-FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C01B74FC (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C01BC834 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C01BCA9C (-DxgkSendCreateBundleObject@@YAJKPEAI0@Z.c)
 *     ?DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z @ 0x1C01BCC10 (-DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z.c)
 *     ?DxgkSendDestroyBundleObject@@YAJI@Z @ 0x1C01BCD84 (-DxgkSendDestroyBundleObject@@YAJI@Z.c)
 *     ?DxgkCreateCompositionSurfaceProxy@@YAJPEAPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C01BE054 (-DxgkCreateCompositionSurfaceProxy@@YAJPEAPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C01BE664 (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?SendBindCompositionSurface@DXGCOMPOSITIONSURFACEPROXY@@QEAAJHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@PEA_K@Z @ 0x1C01BE68C (-SendBindCompositionSurface@DXGCOMPOSITIONSURFACEPROXY@@QEAAJHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@.c)
 *     ?SendEnqueueFlipExToken@DXGCOMPOSITIONSURFACEPROXY@@QEAAJPEAU_D3DKMT_FLIPMODEL_REMOTEPRESENTHISTORYTOKEN@@@Z @ 0x1C01BEB34 (-SendEnqueueFlipExToken@DXGCOMPOSITIONSURFACEPROXY@@QEAAJPEAU_D3DKMT_FLIPMODEL_REMOTEPRESENTHIST.c)
 *     ?SendReleaseCompositionSurfaceReference@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C01BEE74 (-SendReleaseCompositionSurfaceReference@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?SendUnbindCompositionSurface@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C01BF0D4 (-SendUnbindCompositionSurface@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 */

__int64 __fastcall VailDRTTest(
        struct DXGADAPTER *const a1,
        struct _D3DKMT_DRT_ESCAPE_HEAD *const a2,
        __int64 a3,
        struct _EPROCESS *a4)
{
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rcx
  struct _KTHREAD **v13; // rax
  struct _KTHREAD **VirtualMachine; // rax
  struct _KTHREAD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // ecx
  struct _KPROCESS *CurrentProcess; // r14
  struct _KPROCESS *v23; // rdx
  DXGAUTOMUTEX *v24; // rcx
  struct DXGPROCESS *v25; // rax
  struct DXGPROCESS *v26; // r14
  __int64 v27; // r15
  int v28; // r13d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r14
  unsigned int v33; // edi
  int v34; // eax
  int EntryType; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // ecx
  struct _EX_RUNDOWN_REF *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  int v44; // ebx
  _QWORD *v45; // rax
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  __int64 v49; // rcx
  void **v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rdx
  DXGCOMPOSITIONSURFACEPROXY *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rdx
  struct DXGPROCESS *Current; // rax
  __int64 v57; // rcx
  DxgkCompositionObject **v58; // rbx
  struct DXGVAILOBJECT *v59; // rax
  void *v60; // r15
  unsigned int v61; // ebx
  char *v62; // rax
  char *v63; // r12
  __int128 v64; // xmm0
  __int64 v65; // rax
  unsigned int v66; // ebx
  __int64 v67; // r14
  unsigned int v68; // edi
  NTSTATUS v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rax
  int BundleObjectByPointer; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rax
  unsigned int i; // ebx
  PVOID v81; // rcx
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v84; // [rsp+68h] [rbp-A0h] BYREF
  char v85; // [rsp+70h] [rbp-98h]
  char v86[8]; // [rsp+78h] [rbp-90h] BYREF
  char v87; // [rsp+80h] [rbp-88h]
  char v88[8]; // [rsp+90h] [rbp-78h] BYREF
  char v89; // [rsp+98h] [rbp-70h]
  __int64 v90[3]; // [rsp+A8h] [rbp-60h] BYREF
  int v91; // [rsp+C0h] [rbp-48h]
  __int128 v92; // [rsp+C8h] [rbp-40h]
  _BYTE v93[960]; // [rsp+D8h] [rbp-30h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+498h] [rbp+390h] BYREF
  char v95; // [rsp+4C8h] [rbp+3C0h]
  PVOID v96[16]; // [rsp+4D8h] [rbp+3D0h] BYREF

  if ( !g_OSTestSigningEnabled || !(_BYTE)KdDebuggerEnabled )
    return 3221225506LL;
  if ( *((_DWORD *)a2 + 1) != 160 )
    return 3221225485LL;
  v6 = *((_DWORD *)a2 + 3);
  if ( v6 > 6 )
  {
    v46 = v6 - 7;
    if ( v46 )
    {
      v47 = v46 - 1;
      if ( v47 )
      {
        v48 = v47 - 1;
        if ( v48 )
        {
          v49 = (unsigned int)(v48 - 1);
          if ( (_DWORD)v49 )
          {
            if ( (_DWORD)v49 != 1 )
              return 3221225485LL;
            Object = 0LL;
            if ( (int)DxgkCreateCompositionSurfaceProxy((struct DXGCOMPOSITIONSURFACEPROXY **)&Object, (__int64)a2) >= 0 )
            {
              memset(v93, 0, sizeof(v93));
              v50 = (void **)Object;
              if ( (int)DXGCOMPOSITIONSURFACEPROXY::SendBindCompositionSurface(
                          (void **)Object,
                          v51,
                          (struct _DXGK_REMOTE_CSM_BUFFER_INFO *)v93,
                          (unsigned __int64 *)&HandleInformation) >= 0 )
              {
                memset(v93, 0, 0x1F8uLL);
                DXGCOMPOSITIONSURFACEPROXY::SendEnqueueFlipExToken(
                  v53,
                  (struct _D3DKMT_FLIPMODEL_REMOTEPRESENTHISTORYTOKEN *)v93);
                DXGCOMPOSITIONSURFACEPROXY::SendUnbindCompositionSurface(v50, v54);
              }
              DXGCOMPOSITIONSURFACEPROXY::SendReleaseCompositionSurfaceReference(v50, v52);
              DXGCOMPOSITIONSURFACEPROXY::Release((DXGCOMPOSITIONSURFACEPROXY *)v50, v55);
            }
            return 0LL;
          }
          Current = DXGPROCESS::GetCurrent(v49, (__int64)a2);
          v58 = (DxgkCompositionObject **)Current;
          if ( !Current || !*((_QWORD *)Current + 55) )
          {
            v65 = WdLogNewEntry5_WdError(v57);
            *(_QWORD *)(v65 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v65);
            return 3221225485LL;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v86, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v86);
          v59 = DXGPROCESS::ReferenceVailObject(v58);
          v60 = (void *)*((_QWORD *)v59 + 11);
          DxgkCompositionObject::Release(v59);
          ObfReferenceObject(v60);
          if ( v87 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
          v61 = -1073741801;
          v62 = (char *)operator new(0xE8uLL, 0x4B677844u, 1, (POOL_TYPE)512);
          v63 = v62;
          if ( v62 )
          {
            *(_QWORD *)v62 = 0LL;
            *((_QWORD *)v62 + 2) = VailDRTProcessExtractWorker;
            *((_QWORD *)v62 + 3) = v62;
            *((_OWORD *)v62 + 2) = *(_OWORD *)a2;
            *((_OWORD *)v62 + 3) = *((_OWORD *)a2 + 1);
            *((_OWORD *)v62 + 4) = *((_OWORD *)a2 + 2);
            *((_OWORD *)v62 + 5) = *((_OWORD *)a2 + 3);
            *((_OWORD *)v62 + 6) = *((_OWORD *)a2 + 4);
            *((_OWORD *)v62 + 7) = *((_OWORD *)a2 + 5);
            *((_OWORD *)v62 + 8) = *((_OWORD *)a2 + 6);
            *((_OWORD *)v62 + 9) = *((_OWORD *)a2 + 7);
            *((_OWORD *)v62 + 10) = *((_OWORD *)a2 + 8);
            v64 = *((_OWORD *)a2 + 9);
            *((_QWORD *)v62 + 24) = v60;
            *((_OWORD *)v62 + 11) = v64;
            KeInitializeEvent((PRKEVENT)(v62 + 200), NotificationEvent, 0);
            *((_DWORD *)v63 + 56) = -1073741823;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)v63, NormalWorkQueue);
            KeWaitForSingleObject(v63 + 200, Executive, 0, 0, 0LL);
            *(_OWORD *)a2 = *((_OWORD *)v63 + 2);
            *((_OWORD *)a2 + 1) = *((_OWORD *)v63 + 3);
            *((_OWORD *)a2 + 2) = *((_OWORD *)v63 + 4);
            *((_OWORD *)a2 + 3) = *((_OWORD *)v63 + 5);
            *((_OWORD *)a2 + 4) = *((_OWORD *)v63 + 6);
            *((_OWORD *)a2 + 5) = *((_OWORD *)v63 + 7);
            *((_OWORD *)a2 + 6) = *((_OWORD *)v63 + 8);
            *((_OWORD *)a2 + 7) = *((_OWORD *)v63 + 9);
            *((_OWORD *)a2 + 8) = *((_OWORD *)v63 + 10);
            *((_OWORD *)a2 + 9) = *((_OWORD *)v63 + 11);
            v61 = *((_DWORD *)v63 + 56);
            operator delete(v63);
          }
          ObfDereferenceObject(v60);
          return v61;
        }
        else
        {
          v66 = *((_DWORD *)a2 + 4);
          LODWORD(v67) = -1073741823;
          if ( v66 > 0x10 )
            return 3221225485LL;
          memset(v96, 0, sizeof(v96));
          v68 = 0;
          if ( v66 )
          {
            while ( 1 )
            {
              v69 = ObReferenceObjectByHandle(*((HANDLE *)a2 + v68 + 3), 0x20000u, 0LL, 1, &Object, &HandleInformation);
              v67 = v69;
              v96[v68] = Object;
              if ( v69 < 0 )
                break;
              v73 = *((unsigned int *)a2 + 4);
              if ( ++v68 >= (unsigned int)v73 )
                goto LABEL_106;
            }
            v74 = WdLogNewEntry5_WdWarning(v71, v70, v72);
            *(_QWORD *)(v74 + 24) = v67;
            WdLogEvent5_WdWarning(v74);
            v73 = *((unsigned int *)a2 + 4);
LABEL_106:
            if ( (int)v67 >= 0 )
            {
              BundleObjectByPointer = DxgkSendCreateBundleObjectByPointer(v73, v96, (unsigned int *)a2 + 38);
              v67 = BundleObjectByPointer;
              if ( BundleObjectByPointer < 0 )
              {
                v79 = WdLogNewEntry5_WdWarning(v77, v76, v78);
                *(_QWORD *)(v79 + 24) = v67;
                WdLogEvent5_WdWarning(v79);
              }
            }
          }
          for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
          {
            v81 = v96[i];
            if ( v81 )
              ObfDereferenceObject(v81);
          }
          return (unsigned int)v67;
        }
      }
      else
      {
        return DxgkExtractRemoteBundleObject(*((unsigned int *)a2 + 4), *((unsigned int *)a2 + 5), (void **)a2 + 3, a4);
      }
    }
    else
    {
      return DxgkSendDestroyBundleObject(*((unsigned int *)a2 + 4), (__int64)a2);
    }
  }
  else
  {
    if ( v6 != 6 )
    {
      if ( !v6 )
        return 0LL;
      v7 = v6 - 1;
      if ( !v7 )
        return 0LL;
      v8 = (unsigned int)(v7 - 1);
      if ( (_DWORD)v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( (unsigned int)(v9 - 1) > 1 )
            return 3221225485LL;
          return 0LL;
        }
        HandleInformation = 0LL;
        DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v86);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v86);
        Global = DXGGLOBAL::GetGlobal(v10);
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v88,
          (struct _KTHREAD **)Global + 33);
        v13 = (struct _KTHREAD **)DXGGLOBAL::GetGlobal(v12);
        VirtualMachine = DXGGLOBAL::FindVirtualMachine(v13, (struct _GUID *)a2 + 1);
        if ( !VirtualMachine
          || (*((_OWORD *)a2 + 1) = *((_OWORD *)VirtualMachine + 12), (v15 = VirtualMachine[7]) == 0LL) )
        {
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v88);
          goto LABEL_47;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v88);
        v18 = 0LL;
        if ( *((_DWORD *)a2 + 8) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v84, *((struct DXGFASTMUTEX *const *)v15 + 14), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v84);
          if ( *((_DWORD *)v15 + 10) == 1 )
          {
            DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v88, (struct _KTHREAD **)v15);
            v19 = (*((_DWORD *)a2 + 8) >> 6) & 0xFFFFFF;
            if ( (unsigned int)v19 < *((_DWORD *)v15 + 62) )
            {
              v20 = *((_QWORD *)v15 + 29);
              v21 = *(_DWORD *)(v20 + 16 * v19 + 8);
              if ( ((*((_DWORD *)a2 + 8) >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60)
                && (v21 & 0x2000) == 0
                && (v21 & 0x1F) == 0xC )
              {
                v18 = *(_QWORD *)(v20 + 16LL * (unsigned int)v19);
                if ( v18 )
                {
                  DXGPROCESS::AcquireReference((DXGPROCESS *)v18);
                  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v88);
                  if ( v85 )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v84);
                  goto LABEL_24;
                }
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v88);
          }
          if ( !v85 )
            goto LABEL_47;
          v24 = (DXGAUTOMUTEX *)&v84;
          goto LABEL_40;
        }
LABEL_24:
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v17, v16);
        if ( !v18 )
          goto LABEL_35;
        if ( !*((_DWORD *)a2 + 9) )
        {
LABEL_34:
          DXGPROCESS::ReleaseReference((DXGPROCESS *)v18);
LABEL_35:
          if ( v87 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
          return 0LL;
        }
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v88, *(struct DXGFASTMUTEX *const *)(v18 + 112), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v88);
        if ( *(_DWORD *)(v18 + 40) == 1 && (*(_BYTE *)(v18 + 323) & 8) != 0 )
        {
          v23 = *(struct _KPROCESS **)(v18 + 56);
          v95 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v23);
          Object = 0LL;
          CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&Object, (struct DXGPROCESS *)v18);
          if ( Object )
          {
            LODWORD(v90[0]) = 48;
            v90[1] = 0LL;
            v91 = 0;
            v90[2] = 0LL;
            v92 = 0LL;
            if ( (int)DxgkShareObjectsInternal(
                        0LL,
                        1,
                        CurrentProcess,
                        1u,
                        (char *)a2 + 36,
                        (PVOID *)v90,
                        0x10000000u,
                        &HandleInformation,
                        0LL) >= 0 )
            {
              *((struct _OBJECT_HANDLE_INFORMATION *)a2 + 5) = HandleInformation;
              CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&Object);
              if ( v95 )
                KeUnstackDetachProcess(&ApcState);
              if ( v89 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v88);
              goto LABEL_34;
            }
          }
          DXGPROCESS::ReleaseReference((DXGPROCESS *)v18);
          CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&Object);
          if ( v95 )
          {
            KeUnstackDetachProcess(&ApcState);
            v95 = 0;
          }
        }
        else
        {
          DXGPROCESS::ReleaseReference((DXGPROCESS *)v18);
        }
        if ( v89 )
        {
          v24 = (DXGAUTOMUTEX *)v88;
LABEL_40:
          DXGAUTOMUTEX::Release(v24);
        }
LABEL_47:
        if ( v87 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
        return 3221225485LL;
      }
      v25 = DXGPROCESS::GetCurrent(v8, (__int64)a2);
      v26 = v25;
      if ( !v25 )
        return 3221225485LL;
      LODWORD(Object) = *((_DWORD *)v25 + 98);
      if ( !(_DWORD)Object )
        return 3221225485LL;
      v27 = *((unsigned int *)a2 + 4);
      if ( !(_DWORD)v27 )
        return 3221225485LL;
      v28 = 0;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v86, (struct _KTHREAD **)v25);
      v32 = (__int64)v26 + 232;
      v33 = ((unsigned int)v27 >> 6) & 0xFFFFFF;
      if ( v33 < *(_DWORD *)(v32 + 16)
        && (v29 = *(unsigned int *)(*(_QWORD *)v32 + 16LL * v33 + 8),
            v30 = (unsigned int)v27 >> 30,
            v34 = (*(_DWORD *)(*(_QWORD *)v32 + 16LL * v33 + 8) >> 5) & 3,
            LODWORD(v84) = v30,
            (_DWORD)v30 == v34)
        && (v29 & 0x2000) == 0
        && (v29 & 0x1F) != 0 )
      {
        EntryType = HMGRTABLE::GetEntryType(v32, v33);
        if ( EntryType == 4 )
        {
          HandleInformation = 0LL;
          if ( v33 < *(_DWORD *)(v32 + 16)
            && (v38 = *(_DWORD *)(*(_QWORD *)v32 + 16LL * v33 + 8), (_DWORD)v84 == ((v38 >> 5) & 3))
            && (v38 & 0x2000) == 0
            && (v38 & 0x1F) == 4 )
          {
            v39 = *(struct _EX_RUNDOWN_REF **)(*(_QWORD *)v32 + 16LL * v33);
          }
          else
          {
            v39 = 0LL;
          }
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v84, v39);
          DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&HandleInformation, (struct DXGRESOURCE **)&v84);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v84);
          if ( HandleInformation )
          {
            v28 = *(_DWORD *)(*(_QWORD *)&HandleInformation + 20LL);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&HandleInformation);
            goto LABEL_79;
          }
          v43 = WdLogNewEntry5_WdWarning(v41, v40, v42);
          *(_QWORD *)(v43 + 24) = v27;
          *(_QWORD *)(v43 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v43);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&HandleInformation);
LABEL_74:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v86);
          return 3221225485LL;
        }
        if ( EntryType == 11 )
        {
          if ( v33 < *(_DWORD *)(v32 + 16) )
          {
            v29 = *(_QWORD *)v32;
            v30 = *(unsigned int *)(*(_QWORD *)v32 + 16LL * v33 + 8);
            if ( (_DWORD)v84 == ((*(_DWORD *)(*(_QWORD *)v32 + 16LL * v33 + 8) >> 5) & 3)
              && (v30 & 0x2000) == 0
              && (v30 & 0x1F) != 0 )
            {
              v30 &= 0x1Fu;
              if ( (_BYTE)v30 == 11 )
              {
                v36 = *(_QWORD *)(v29 + 16LL * v33);
                if ( v36 )
                {
                  v28 = *(_DWORD *)(v36 + 44);
LABEL_79:
                  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v86);
                  if ( !v28 )
                    return 3221225485LL;
                  *((_DWORD *)a2 + 5) = (_DWORD)Object;
                  *((_DWORD *)a2 + 6) = v28;
                  return 0LL;
                }
              }
            }
          }
          v37 = WdLogNewEntry5_WdWarning(v30, v29, v31);
          *(_QWORD *)(v37 + 24) = v27;
          *(_QWORD *)(v37 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v37);
          goto LABEL_74;
        }
        v44 = EntryType;
      }
      else
      {
        v44 = 0;
      }
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
      v45[4] = v44;
      v45[3] = v27;
      v45[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v45);
      goto LABEL_79;
    }
    return DxgkSendCreateBundleObject(*((unsigned int *)a2 + 4), (unsigned int *)a2 + 5, (unsigned int *)a2 + 21);
  }
}
