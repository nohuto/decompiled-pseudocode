/*
 * XREFs of ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18006AAAC
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x18006A0B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x180064C24 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18006B630 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800B4BF8 (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800C9698 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z @ 0x180144B28 (-FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18014793C (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 *     ??0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z @ 0x180155938 (--0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z.c)
 *     ?InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@@PEAVCRemoteApplicationWindow@@@Z @ 0x180155BB4 (-InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@.c)
 */

__int64 __fastcall CDesktopRenderTarget::EnsureRemoteAppRenderTargets(CDesktopRenderTarget *this)
{
  __int64 v1; // r13
  unsigned int v2; // r12d
  unsigned int v4; // edi
  int v5; // ebx
  unsigned int v6; // r14d
  unsigned int v7; // r14d
  unsigned int v9; // esi
  __int64 *v10; // r9
  unsigned int v11; // eax
  __int64 v12; // xmm0_8
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  unsigned __int64 *v16; // rdx
  int RemoteAppRenderTarget; // eax
  __int64 v18; // rcx
  CHwndRenderTargetRemoteApp *v19; // rax
  CBitmapOfDeviceBitmaps *v20; // rax
  CBitmapOfDeviceBitmaps *v21; // rdi
  int inited; // eax
  unsigned int v23; // edx
  __int64 v24; // rcx
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  _QWORD *v28; // rax
  unsigned int v29; // ecx
  __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // eax
  int v33; // eax
  int v34; // r9d
  __int64 v35; // rsi
  CMILCOMBase *v36; // rcx
  unsigned int v37; // [rsp+20h] [rbp-58h]
  unsigned int v38; // [rsp+20h] [rbp-58h]
  CBitmapOfDeviceBitmaps *v39; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v40; // [rsp+38h] [rbp-40h]
  struct CRemoteApplicationWindow *v41; // [rsp+40h] [rbp-38h]
  CBitmapOfDeviceBitmaps *v42; // [rsp+48h] [rbp-30h] BYREF
  void *lpMem[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v44; // [rsp+60h] [rbp-18h]
  unsigned int v45; // [rsp+68h] [rbp-10h]
  void *retaddr; // [rsp+B8h] [rbp+40h]
  unsigned int v47; // [rsp+C0h] [rbp+48h]
  unsigned int v48; // [rsp+C8h] [rbp+50h]
  __int64 v49; // [rsp+D0h] [rbp+58h] BYREF
  struct CHwndRenderTarget *v50; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v49 = 0LL;
  v50 = 0LL;
  *(_OWORD *)lpMem = 0LL;
  v4 = 0;
  v44 = 0LL;
  v5 = 0;
  v45 = 0;
  v6 = 0;
  if ( *(_DWORD *)(v1 + 624) )
  {
    v9 = v47;
    while ( 1 )
    {
      v10 = (__int64 *)(*(_QWORD *)(v1 + 600) + 8LL * v6);
      v11 = v4 + 1;
      if ( v4 + 1 >= v4 )
        v9 = v4 + 1;
      v5 = v11 < v4 ? 0x80070216 : 0;
      if ( v11 < v4 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
      }
      else if ( v9 > HIDWORD(v44) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet(lpMem, 8LL, 1LL, v10);
        v5 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
        v4 = v45;
      }
      else
      {
        v12 = *v10;
        v13 = v4;
        v4 = v9;
        v45 = v9;
        *((_QWORD *)lpMem[0] + v13) = v12;
      }
      if ( v5 < 0 )
        break;
      if ( ++v6 >= *(_DWORD *)(v1 + 624) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1250u);
  }
LABEL_2:
  if ( v5 >= 0 )
  {
    v7 = 0;
    if ( !v4 )
      goto LABEL_4;
    while ( 1 )
    {
      v40 = lpMem[0];
      v15 = *((_QWORD *)lpMem[0] + v7);
      v16 = *(unsigned __int64 **)(v15 + 56);
      v41 = (struct CRemoteApplicationWindow *)v16;
      if ( *(_QWORD *)(v15 + 64) )
      {
        RemoteAppRenderTarget = CRenderTargetManager::FindRemoteAppRenderTarget(
                                  *(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL),
                                  v16[2],
                                  &v50);
        v5 = RemoteAppRenderTarget;
        if ( RemoteAppRenderTarget < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, RemoteAppRenderTarget, 0xB6u);
          goto LABEL_4;
        }
        if ( !v50 )
        {
          if ( *((_DWORD *)this + 36) )
          {
            while ( 1 )
            {
              v18 = *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * v2);
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v18 + 176LL))(v18) )
                break;
LABEL_63:
              if ( ++v2 >= *((_DWORD *)this + 36) )
              {
                v4 = v45;
                goto LABEL_65;
              }
            }
            v19 = (CHwndRenderTargetRemoteApp *)WPF::ProcessHeapImpl::AllocClear(0x350uLL);
            if ( !v19 )
            {
              ModuleFailFastForHRESULT(2147942414LL, retaddr);
              __debugbreak();
            }
            v20 = CHwndRenderTargetRemoteApp::CHwndRenderTargetRemoteApp(v19, *((struct CComposition **)this + 2));
            v21 = v20;
            if ( !v20 )
            {
              v5 = -2147024882;
              v38 = 203;
              goto LABEL_74;
            }
            CBitmapOfDeviceBitmaps::AddRef(v20);
            inited = CHwndRenderTargetRemoteApp::InitRemoteApp(
                       v21,
                       this,
                       *(struct CHwndRenderTarget **)(*((_QWORD *)this + 15) + 8LL * v2),
                       v41);
            v5 = inited;
            if ( inited < 0 )
            {
              v37 = 208;
            }
            else
            {
              inited = CComposition::AddHwndRenderTarget(*((CRenderTargetManager ***)this + 2), v21);
              v5 = inited;
              if ( inited < 0 )
              {
                v37 = 211;
              }
              else
              {
                inited = CRenderTarget::SetRoot(v21, *(struct CVisual **)(v40[v7] + 64LL));
                v5 = inited;
                if ( inited >= 0 )
                {
                  v23 = v47;
                  v24 = *((unsigned int *)this + 48);
                  v39 = v21;
                  v25 = v24 + 1;
                  if ( (int)v24 + 1 >= (unsigned int)v24 )
                    v23 = v24 + 1;
                  v5 = v25 < (unsigned int)v24 ? 0x80070216 : 0;
                  v47 = v23;
                  if ( v25 < (unsigned int)v24 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
                  }
                  else if ( v23 > *((_DWORD *)this + 47) )
                  {
                    v26 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 168, 8LL, 1LL, &v39);
                    v5 = v26;
                    if ( v26 < 0 )
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC0u);
                  }
                  else
                  {
                    *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v24) = v39;
                    *((_DWORD *)this + 48) = v23;
                  }
                  if ( v5 < 0 )
                  {
                    v37 = 217;
                  }
                  else
                  {
                    v27 = *((_QWORD *)v21 + 10);
                    v28 = (_QWORD *)*((_QWORD *)this + 33);
                    v29 = 0;
                    v49 = v27;
                    if ( *((_DWORD *)this + 72) )
                    {
                      while ( v27 != *v28 )
                      {
                        ++v29;
                        ++v28;
                        if ( v29 >= *((_DWORD *)this + 72) )
                          goto LABEL_43;
                      }
                      goto LABEL_61;
                    }
LABEL_43:
                    v30 = *((unsigned int *)this + 72);
                    v31 = v48;
                    v32 = v30 + 1;
                    if ( (int)v30 + 1 >= (unsigned int)v30 )
                      v31 = v30 + 1;
                    v5 = v32 < (unsigned int)v30 ? 0x80070216 : 0;
                    v48 = v31;
                    if ( v32 < (unsigned int)v30 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
                    }
                    else if ( v31 > *((_DWORD *)this + 71) )
                    {
                      v33 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 264, 8LL, 1LL, &v49);
                      v5 = v33;
                      if ( v33 < 0 )
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0xC0u);
                    }
                    else
                    {
                      *(_QWORD *)(*((_QWORD *)this + 33) + 8 * v30) = v49;
                      *((_DWORD *)this + 72) = v31;
                    }
                    if ( v5 >= 0 )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v49 + 8));
                      goto LABEL_61;
                    }
                    v37 = 222;
                  }
                  v34 = v5;
LABEL_60:
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, v37);
LABEL_61:
                  if ( v5 < 0 )
                  {
                    v42 = v21;
                    DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 168, &v42);
                    CMILCOMBase::InternalRelease(v21);
                    CRenderTargetManager::RemoveRenderTarget(
                      *(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL),
                      0LL);
                    DynArray<CBaseExpression *,1>::Remove((char *)this + 264, &v49);
                  }
                  goto LABEL_63;
                }
                v37 = 216;
              }
            }
            v34 = inited;
            goto LABEL_60;
          }
LABEL_65:
          v2 = 0;
          v35 = v40[v7];
          v36 = *(CMILCOMBase **)(v35 + 72);
          if ( v36 )
            CMILCOMBase::InternalRelease(v36);
          *(_QWORD *)(v35 + 72) = this;
          CBitmapOfDeviceBitmaps::AddRef(this);
        }
      }
      if ( ++v7 >= v4 )
        goto LABEL_4;
    }
  }
  v38 = 171;
LABEL_74:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v38);
LABEL_4:
  if ( lpMem[0] != lpMem[1] )
    WPF::ProcessHeapImpl::Free(lpMem[0]);
  return (unsigned int)v5;
}
