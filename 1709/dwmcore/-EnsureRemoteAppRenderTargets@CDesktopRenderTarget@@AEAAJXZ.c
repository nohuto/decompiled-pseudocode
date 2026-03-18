/*
 * XREFs of ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016E00
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800163A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180019AA0 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18001B3A0 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x180079310 (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800B0528 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B734C (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z @ 0x180130AC8 (-FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801358F4 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@@PEAVCRemoteApplicationWindow@@@Z @ 0x1801478B4 (-InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x180155FC4 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::EnsureRemoteAppRenderTargets(CDesktopRenderTarget *this)
{
  __int64 v1; // r13
  unsigned int v2; // edi
  int v3; // ebx
  __int64 v4; // r15
  __int64 v6; // r13
  __int64 v7; // rdi
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  __int64 *v11; // r9
  unsigned int v12; // eax
  __int64 v13; // xmm0_8
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  int RemoteAppRenderTarget; // eax
  unsigned int v19; // eax
  __int64 v20; // r14
  unsigned int v21; // r12d
  __int64 v22; // rdi
  CHwndRenderTarget *v23; // rax
  CHwndRenderTarget *v24; // rdi
  int inited; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned int v33; // edx
  _QWORD *v34; // r9
  _QWORD *v35; // rax
  unsigned int v36; // eax
  unsigned int v37; // r14d
  int v38; // eax
  __int64 v39; // r14
  CMILCOMBase *v40; // rcx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // r9d
  unsigned int v44; // [rsp+20h] [rbp-49h]
  struct CHwndRenderTarget *v45; // [rsp+30h] [rbp-39h] BYREF
  CHwndRenderTarget *v46; // [rsp+38h] [rbp-31h] BYREF
  _QWORD *v47; // [rsp+40h] [rbp-29h]
  struct CRemoteApplicationWindow *v48; // [rsp+48h] [rbp-21h]
  CHwndRenderTarget *v49; // [rsp+50h] [rbp-19h] BYREF
  void *lpMem[2]; // [rsp+58h] [rbp-11h] BYREF
  int v51; // [rsp+68h] [rbp-1h]
  unsigned int v52; // [rsp+6Ch] [rbp+3h]
  unsigned int v53; // [rsp+70h] [rbp+7h]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int v55; // [rsp+D0h] [rbp+67h]
  unsigned int v56; // [rsp+D8h] [rbp+6Fh]
  __int64 v57; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v57 = 0LL;
  v3 = 0;
  v45 = 0LL;
  v4 = 0LL;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  *(_OWORD *)lpMem = 0LL;
  if ( *(_DWORD *)(v1 + 592) )
  {
    v9 = v55;
    while ( 1 )
    {
      v11 = (__int64 *)(*(_QWORD *)(v1 + 568) + 8 * v4);
      v12 = v2 + 1;
      if ( v2 + 1 >= v2 )
        v9 = v2 + 1;
      v3 = v12 < v2 ? 0x80070216 : 0;
      if ( v12 < v2 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v9 > v52 )
      {
        v15 = DynArrayImpl<0>::AddMultipleAndSet(lpMem, 8LL, 1LL, v11);
        v3 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
        v2 = v53;
      }
      else
      {
        v13 = *v11;
        v14 = v2;
        v2 = v9;
        v53 = v9;
        *((_QWORD *)lpMem[0] + v14) = v13;
      }
      if ( v3 < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(v1 + 592) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x10E5u);
  }
LABEL_2:
  if ( v3 < 0 )
  {
    v44 = 173;
    v43 = v3;
  }
  else
  {
    v6 = 0LL;
    if ( v2 )
    {
      v10 = v55;
      do
      {
        v47 = lpMem[0];
        v16 = *((_QWORD *)lpMem[0] + v6);
        if ( *(_QWORD *)(v16 + 64) )
        {
          v17 = *((_QWORD *)this + 2);
          v48 = *(struct CRemoteApplicationWindow **)(v16 + 56);
          RemoteAppRenderTarget = CRenderTargetManager::FindRemoteAppRenderTarget(
                                    *(CRenderTargetManager **)(v17 + 72),
                                    *((_QWORD *)v48 + 2),
                                    &v45);
          v3 = RemoteAppRenderTarget;
          if ( RemoteAppRenderTarget < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RemoteAppRenderTarget, 0xB8u);
            goto LABEL_5;
          }
          if ( !v45 )
          {
            v19 = 0;
            v56 = 0;
            if ( *((_DWORD *)this + 36) )
            {
              do
              {
                v20 = v19;
                v21 = v10;
                v22 = *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * v19);
                if ( (unsigned __int8)CHwndRenderTarget::IsOfType(v22, 70LL)
                  && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 192LL))(v22) )
                {
                  v23 = (CHwndRenderTarget *)WPF::ProcessHeapImpl::AllocClear(0x360uLL);
                  v24 = v23;
                  if ( !v23 )
                    ModuleFailFastForHRESULT(2147942414LL, retaddr);
                  CHwndRenderTarget::CHwndRenderTarget(v23, *((struct CComposition **)this + 2));
                  *(_QWORD *)v24 = &CHwndRenderTargetRemoteApp::`vftable'{for `CNotificationResource'};
                  *((_QWORD *)v24 + 8) = &CHwndRenderTargetRemoteApp::`vftable'{for `IRenderTargetResource'};
                  *((_QWORD *)v24 + 9) = &CHwndRenderTargetRemoteApp::`vftable'{for `IVisualTreeClient'};
                  CMILCOMBase::InternalAddRef(v24);
                  inited = CHwndRenderTargetRemoteApp::InitRemoteApp(
                             v24,
                             this,
                             *(struct CHwndRenderTarget **)(*((_QWORD *)this + 15) + 8 * v20),
                             v48);
                  v3 = inited;
                  if ( inited < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inited, 0xD2u);
                  }
                  else
                  {
                    v26 = CComposition::AddHwndRenderTarget(*((CComposition **)this + 2), v24);
                    v3 = v26;
                    if ( v26 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xD5u);
                    }
                    else
                    {
                      v27 = CRenderTarget::SetRoot(v24, *(struct CVisual **)(v47[v6] + 64LL));
                      v3 = v27;
                      if ( v27 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xDAu);
                      }
                      else
                      {
                        v46 = v24;
                        v28 = *((unsigned int *)this + 48);
                        v29 = v28 + 1;
                        v10 = v28 + 1;
                        if ( (int)v28 + 1 < (unsigned int)v28 )
                          v10 = v21;
                        v3 = v29 < (unsigned int)v28 ? 0x80070216 : 0;
                        if ( v29 < (unsigned int)v28 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
                        }
                        else if ( v10 > *((_DWORD *)this + 47) )
                        {
                          v30 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 168, 8LL, 1LL, &v46);
                          v3 = v30;
                          if ( v30 < 0 )
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xC0u);
                        }
                        else
                        {
                          *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v28) = v46;
                          *((_DWORD *)this + 48) = v10;
                        }
                        if ( v3 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xDBu);
                        }
                        else
                        {
                          v31 = *((_QWORD *)v24 + 10);
                          v32 = *((unsigned int *)this + 72);
                          v33 = 0;
                          v34 = (_QWORD *)*((_QWORD *)this + 33);
                          v57 = v31;
                          if ( (_DWORD)v32 )
                          {
                            v35 = v34;
                            while ( v31 != *v35 )
                            {
                              ++v33;
                              ++v35;
                              if ( v33 >= (unsigned int)v32 )
                                goto LABEL_46;
                            }
                          }
                          else
                          {
LABEL_46:
                            v36 = v32 + 1;
                            v37 = v32 + 1;
                            if ( (int)v32 + 1 < (unsigned int)v32 )
                              v37 = v55;
                            v3 = v36 < (unsigned int)v32 ? 0x80070216 : 0;
                            v55 = v37;
                            if ( v36 < (unsigned int)v32 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
                            }
                            else if ( v37 > *((_DWORD *)this + 71) )
                            {
                              v38 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 264, 8LL, 1LL, &v57);
                              v3 = v38;
                              if ( v38 < 0 )
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xC0u);
                            }
                            else
                            {
                              v34[v32] = v57;
                              *((_DWORD *)this + 72) = v37;
                            }
                            if ( v3 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xE0u);
                              v55 = v37;
                            }
                            else
                            {
                              _InterlockedIncrement((volatile signed __int32 *)(v57 + 8));
                            }
                          }
                        }
                      }
                    }
                  }
                  if ( v3 < 0 )
                  {
                    v49 = v24;
                    DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 168, &v49);
                    CMILCOMBase::InternalRelease(v24);
                    CRenderTargetManager::RemoveRenderTarget(
                      *(CRenderTargetManager **)(*((_QWORD *)this + 2) + 72LL),
                      0LL);
                    DynArray<CBaseExpression *,1>::Remove((char *)this + 264, &v57);
                  }
                }
                v19 = v56 + 1;
                v56 = v19;
              }
              while ( v19 < *((_DWORD *)this + 36) );
              v2 = v53;
            }
            v39 = v47[v6];
            v40 = *(CMILCOMBase **)(v39 + 72);
            if ( v40 )
              CMILCOMBase::InternalRelease(v40);
            *(_QWORD *)(v39 + 72) = this;
            CMILCOMBase::InternalAddRef(this);
          }
        }
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < v2 );
    }
    v7 = 0LL;
    if ( !*((_DWORD *)this + 48) )
      goto LABEL_5;
    while ( 1 )
    {
      v41 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v7);
      v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 304LL))(v41);
      v3 = v42;
      if ( v42 < 0 )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)this + 48) )
        goto LABEL_5;
    }
    v44 = 242;
    v43 = v42;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, v44);
LABEL_5:
  if ( lpMem[0] != lpMem[1] )
    WPF::ProcessHeapImpl::Free(lpMem[0]);
  return (unsigned int)v3;
}
