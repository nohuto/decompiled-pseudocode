/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00126F0
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0014020 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000DFA4 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004BDD4 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00E2B30 (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C00FA0E4 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00FA0F4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *hLogicalSurface; // rbx
  _QWORD *v4; // r15
  _QWORD *v5; // r14
  NTSTATUS v6; // eax
  _QWORD **v7; // rdi
  NTSTATUS v8; // ebx
  _QWORD *v9; // rdi
  void (__fastcall ***v10)(_QWORD); // r13
  __int64 v11; // rcx
  struct DXGSESSIONDATA *SessionData; // rax
  void (__fastcall ***v13)(_QWORD); // r14
  UINT64 CompositionBindingId; // rcx
  void *v15; // r12
  _QWORD *v16; // rax
  _QWORD **v17; // r14
  _QWORD *v18; // r12
  int v19; // ebx
  bool v20; // zf
  UINT64 v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rbx
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  DXGGLOBAL *v29; // rax
  struct DXGSESSIONDATA *v30; // rax
  __int64 v31; // r14
  int v32; // edi
  struct DXGGLOBAL *v33; // rax
  __int64 v34; // rcx
  DXGSESSIONMGR *SessionMgr; // rax
  struct DXGSESSIONDATA *v36; // rax
  struct DXGSESSIONDATA *v37; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v39; // rcx
  PVOID v40; // r14
  DXGFASTMUTEX *v41; // rdi
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  struct DXGGLOBAL *Global; // rax
  UINT v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  char v61; // [rsp+48h] [rbp-39h] BYREF
  char v62[7]; // [rsp+49h] [rbp-38h] BYREF
  void *Handle; // [rsp+50h] [rbp-31h] BYREF
  int v64; // [rsp+58h] [rbp-29h]
  DXGFASTMUTEX *v65; // [rsp+60h] [rbp-21h] BYREF
  char v66; // [rsp+68h] [rbp-19h]
  PVOID Object; // [rsp+70h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-9h] BYREF

  hLogicalSurface = (void *)a2->Token.Flip.hLogicalSurface;
  v64 = a1;
  KeEnterCriticalRegion();
  v4 = 0LL;
  v5 = 0LL;
  v6 = ObReferenceObjectByHandle(hLogicalSurface, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v7 = (_QWORD **)Object;
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_7;
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v7[1] + 16LL))(v7[1]) == 1 )
    {
      v5 = v7;
      goto LABEL_5;
    }
    v8 = -1073741788;
  }
  else
  {
    v8 = -1073741816;
  }
  ObfDereferenceObject(v7);
LABEL_5:
  if ( v8 >= 0 )
    v4 = v5;
LABEL_7:
  if ( v8 < 0 )
    goto LABEL_76;
  v9 = 0LL;
  v10 = 0LL;
  v8 = ObReferenceObjectByPointer(v4, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v8 >= 0 )
  {
    v8 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v4[5])(v4 + 5) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4 + 6, 0LL);
      v4[7] = KeGetCurrentThread();
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v4[5])(v4 + 5) )
        goto LABEL_11;
      CPushLock::ReleaseLock((CPushLock *)(v4 + 5));
    }
    v8 = -1073741816;
LABEL_11:
    if ( v8 < 0 )
      ObfDereferenceObject(v4);
    else
      v9 = v4 + 3;
  }
  if ( v8 < 0 )
    goto LABEL_74;
  v8 = -1073741823;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v49 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v49 + 24) = 1970LL;
    WdLogEvent5_WdAssertion(v49);
  }
  SessionData = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
  if ( SessionData )
  {
    v13 = (void (__fastcall ***)(_QWORD))*((_QWORD *)SessionData + 2335);
    if ( v13 )
    {
      (**v13)(*((_QWORD *)SessionData + 2335));
      v8 = 0;
      v10 = v13;
    }
  }
  if ( v8 < 0 )
    goto LABEL_74;
  CompositionBindingId = a2->CompositionBindingId;
  v15 = 0LL;
  Handle = 0LL;
  if ( !*((_DWORD *)v9 + 22) )
    goto LABEL_93;
  v16 = (_QWORD *)v9[9];
  v17 = (_QWORD **)(v9 + 9);
  if ( v16 == v9 + 9 )
    goto LABEL_93;
  while ( 1 )
  {
    v18 = v16 - 3;
    if ( *(v16 - 1) == CompositionBindingId )
      break;
    v16 = (_QWORD *)*v16;
    if ( v16 == v17 )
    {
      v15 = Handle;
      goto LABEL_93;
    }
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 8LL))(v16 - 3);
  v15 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
  if ( v19 != 2 )
    goto LABEL_93;
  v20 = *((_DWORD *)v9 + 22) == 0;
  v21 = a2->CompositionBindingId;
  v61 = 0;
  v62[0] = 0;
  if ( v20 )
    goto LABEL_93;
  v22 = *v17;
  if ( *v17 == v17 )
    goto LABEL_93;
  while ( 1 )
  {
    v23 = v22 - 3;
    if ( *(v22 - 1) == v21 )
      break;
    v22 = (_QWORD *)*v22;
    if ( v22 == v17 )
      goto LABEL_93;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v23 + 8LL))(v22 - 3) != 2 )
  {
LABEL_93:
    v8 = -1073741811;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, union _D3DKMT_PRESENTHISTORYTOKEN::$04C5B4CD591473CAB2C95D87D2CBE864 *, char *, char *))(*v23 + 64LL))(
      v23,
      &a2->Token,
      &v61,
      v62);
    v8 = 0;
    if ( v61 )
    {
      v48 = a2->Token.Flip.Flags.Value | 0x200000;
      a2->Token.Flip.Flags.Value = v48;
      if ( v62[0] )
        a2->Token.Flip.Flags.Value = v48 | 0x400000;
    }
  }
  v24 = v9 + 3;
  if ( KeGetCurrentThread() == (struct _KTHREAD *)v9[4] )
  {
    v9[4] = 0LL;
    ExReleasePushLockExclusiveEx(v24, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v24, 0LL);
  }
  KeLeaveCriticalRegion();
  ObfDereferenceObject(v9 - 3);
  if ( v8 < 0 )
    goto LABEL_74;
  if ( (a2->Token.Flip.Flags.Value & 0x2000000) == 0 )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v50 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v50 + 24) = 1970LL;
      WdLogEvent5_WdAssertion(v50);
    }
    (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 219) + 152LL))();
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v51 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v51 + 24) = 1970LL;
      WdLogEvent5_WdAssertion(v51);
    }
    v27 = (*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 219) + 176LL))();
    if ( v15 )
    {
      if ( !v64
        || v27
        || !(unsigned int)IsTokenManagerReady()
        || (Global = DXGGLOBAL::GetGlobal(),
            !(*(unsigned int (__fastcall **)(void *))(*((_QWORD *)Global + 219) + 184LL))(v15)) )
      {
        v8 = -1071775733;
      }
    }
    else if ( !v64
           || v27
           || (v29 = DXGGLOBAL::GetGlobal(), (v30 = DXGGLOBAL::GetSessionData(v29)) == 0LL)
           || (v31 = *((_QWORD *)v30 + 2335)) == 0
           || ((**(void (__fastcall ***)(_QWORD))v31)(*((_QWORD *)v30 + 2335)),
               v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 160LL))(v31),
               (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31),
               !v32)
           || (v33 = DXGGLOBAL::GetGlobal(), !(*(unsigned int (**)(void))(*((_QWORD *)v33 + 219) + 168LL))()) )
    {
      v8 = -1071775730;
    }
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v52 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v52 + 24) = 1970LL;
      WdLogEvent5_WdAssertion(v52);
    }
    (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 219) + 192LL))();
  }
  if ( v8 < 0 )
    goto LABEL_74;
  v8 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), _QWORD *))(*v10)[10])(v10, v4);
  if ( v8 < 0 )
    goto LABEL_74;
  v8 = -1073741823;
  Handle = 0LL;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v53 = WdLogNewEntry5_WdAssertion(v34);
    *(_QWORD *)(v53 + 24) = 1970LL;
    WdLogEvent5_WdAssertion(v53);
  }
  SessionMgr = DXGGLOBAL::GetSessionMgr((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
  v36 = DXGSESSIONMGR::GetSessionData(SessionMgr);
  v37 = v36;
  if ( v36 )
  {
    v66 = 0;
    v65 = (struct DXGSESSIONDATA *)((char *)v36 + 18608);
    if ( v36 == (struct DXGSESSIONDATA *)-18608LL )
    {
      v54 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v54 + 24) = 508LL;
      WdLogEvent5_WdAssertion(v54);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v65 + 1) == CurrentThread )
    {
      v55 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v55 + 24) = 515LL;
      WdLogEvent5_WdAssertion(v55);
    }
    if ( v66 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
      v56[5] = &v65;
      v56[3] = 275LL;
      v56[4] = 4LL;
      v56[6] = 0LL;
      v56[7] = 0LL;
      WdLogEvent5_WdCriticalError(v56);
    }
    DXGFASTMUTEX::Acquire(v65);
    v40 = (PVOID)*((_QWORD *)v37 + 2331);
    v66 = 1;
    if ( !v40 )
    {
      v40 = Object;
      goto LABEL_60;
    }
    ObfReferenceObject(v40);
    v8 = 0;
    if ( v66 )
    {
LABEL_60:
      v41 = v65;
      v66 = 0;
      if ( *((struct _KTHREAD **)v65 + 1) != KeGetCurrentThread() )
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39);
        v57[3] = 275LL;
        v57[4] = 4LL;
        v57[5] = v41;
        v57[6] = 0LL;
        v57[7] = 0LL;
        WdLogEvent5_WdCriticalError(v57);
      }
      v42 = *((_DWORD *)v41 + 6);
      if ( v42 <= 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v39);
        *(_QWORD *)(v58 + 24) = 450LL;
        WdLogEvent5_WdAssertion(v58);
        v42 = *((_DWORD *)v41 + 6);
      }
      v43 = v42 - 1;
      *((_DWORD *)v41 + 6) = v43;
      if ( !v43 )
      {
        *((_QWORD *)v41 + 1) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v41 + 16, 0LL);
      }
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v40 = Object;
  }
  if ( v8 >= 0 )
  {
    KeStackAttachProcess((PRKPROCESS)v40, &ApcState);
    v8 = ObOpenObjectByPointer(v4, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, &Handle);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v40);
    if ( v8 >= 0 )
    {
      v20 = DXGGLOBAL::m_pGlobal == 0LL;
      a2->Token.Flip.hCompSurf = (LONG64)Handle;
      *((_QWORD *)&a2->Token.SurfaceComplete + 7) = v4[2];
      if ( v20 )
      {
        v59 = WdLogNewEntry5_WdAssertion(v44);
        *(_QWORD *)(v59 + 24) = 1970LL;
        WdLogEvent5_WdAssertion(v59);
      }
      (*(void (__fastcall **)(union _D3DKMT_PRESENTHISTORYTOKEN::$04C5B4CD591473CAB2C95D87D2CBE864 *, _QWORD))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 219) + 32LL))(
        &a2->Token,
        0LL);
      Handle = (void *)*((_QWORD *)&a2->Token.SurfaceComplete + 7);
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v60 = WdLogNewEntry5_WdAssertion(v45);
        *(_QWORD *)(v60 + 24) = 1970LL;
        WdLogEvent5_WdAssertion(v60);
      }
      (*(void (__fastcall **)(struct _D3DKMT_PRESENTHISTORYTOKEN *, _QWORD *, _QWORD, _QWORD, void *, UINT64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 219) + 64LL))(
        a2,
        v4,
        a2->Token.Flip.SwapChainIndex,
        a2->Token.Flip.PresentCount,
        Handle,
        a2->CompositionBindingId);
    }
  }
LABEL_74:
  ObfDereferenceObject(v4);
  if ( v10 )
    (*v10)[1](v10);
LABEL_76:
  if ( v8 == -1071775730 )
  {
    v8 = NotifySurfaceOfSkippedToken(a2);
    if ( v8 >= 0 )
      v8 = -1071775730;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
