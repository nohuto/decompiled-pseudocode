/*
 * XREFs of ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800419B0
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800302A0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180012174 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800123A4 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180012B30 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180016DE8 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800170B0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180017348 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180022830 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800233E0 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023604 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002EF7C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800378B0 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180037B2C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180037B7C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B404 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180041744 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x1800417F4 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 */

__int64 __fastcall CLoginTransition::StartAnimation(
        CLoginTransition *this,
        int a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4,
        unsigned __int64 a5)
{
  CAnimationEngine *v9; // r14
  int v10; // eax
  int v11; // ebx
  struct CResource ***v12; // r14
  __int64 v13; // rcx
  struct CResource ***v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  CVisual **v17; // r12
  CBaseObject *v18; // rcx
  int inserted; // eax
  struct tagRECT v20; // xmm6
  int v21; // eax
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  int v25; // edx
  int v26; // ebx
  int v27; // eax
  struct CResource **v28; // rcx
  int v29; // edx
  int v30; // eax
  struct CResource **v31; // rcx
  struct CResource **v32; // rax
  struct CResource **v33; // rax
  struct CResource **v34; // rcx
  struct CResource **v35; // rcx
  struct CResource **v36; // rcx
  struct CResource *v37; // rax
  struct CVisual *v38; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v40; // eax
  __int64 v41; // rcx
  unsigned int v42; // edx
  unsigned int v43; // eax
  int v44; // eax
  int v45; // eax
  int started; // eax
  int v47; // eax
  int v49; // r9d
  unsigned int v50; // [rsp+28h] [rbp-A1h]
  struct CAnimationEngine *v51; // [rsp+38h] [rbp-91h]
  struct CResource *v53; // [rsp+48h] [rbp-81h] BYREF
  struct tagPOINT v54; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v55[2]; // [rsp+58h] [rbp-71h] BYREF
  struct CResource **v56; // [rsp+60h] [rbp-69h] BYREF
  __int128 v57; // [rsp+68h] [rbp-61h] BYREF
  __int64 v58; // [rsp+78h] [rbp-51h]
  unsigned int v59; // [rsp+80h] [rbp-49h]
  struct CResource **v60; // [rsp+88h] [rbp-41h] BYREF
  struct tagRECT v61; // [rsp+98h] [rbp-31h] BYREF
  struct tagRECT rc; // [rsp+A8h] [rbp-21h] BYREF

  v58 = 0LL;
  v59 = 0;
  v57 = 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(this, &UdwmLoginTransition_Start);
  *((_QWORD *)this + 10) = a5;
  *((_DWORD *)this + 18) = a2;
  v51 = CDesktopManager::AcquireAnimationEngine();
  v9 = v51;
  if ( v51 )
  {
    v10 = CLoginTransition::StopAnimation(this);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x31u);
      goto LABEL_53;
    }
    *((_QWORD *)this + 4) = a3;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)&a3[1]);
    *((_QWORD *)this + 5) = a4;
    if ( a4 )
      _InterlockedIncrement((volatile signed __int32 *)&a4[1]);
    v12 = (struct CResource ***)((char *)this + 8);
    v13 = *((_QWORD *)this + 1);
    if ( v13 )
    {
      CBaseObject::Release((CBaseObject *)(v13 + 8));
      *v12 = 0LL;
    }
    v14 = (struct CResource ***)((char *)this + 16);
    v15 = *((_QWORD *)this + 2);
    if ( v15 )
    {
      CBaseObject::Release((CBaseObject *)(v15 + 8));
      *v14 = 0LL;
    }
    v16 = *((_QWORD *)this + 3);
    if ( v16 )
    {
      CBaseObject::Release((CBaseObject *)(v16 + 8));
      *((_QWORD *)this + 3) = 0LL;
    }
    v17 = (CVisual **)((char *)this + 48);
    v18 = (CBaseObject *)*((_QWORD *)this + 6);
    if ( v18 )
    {
      CBaseObject::Release(v18);
      *v17 = 0LL;
    }
    inserted = CVisual::Create(
                 *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                 (struct CVisual **)this + 6);
    v11 = inserted;
    if ( inserted < 0 )
    {
      v50 = 67;
    }
    else
    {
      inserted = CAnimatedTransitionVisual::Create(
                   *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                   (struct CAnimatedTransitionVisual **)this + 1);
      v11 = inserted;
      if ( inserted < 0 )
      {
        v50 = 68;
      }
      else
      {
        inserted = CAnimatedTransitionVisual::Create(
                     *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                     (struct CAnimatedTransitionVisual **)this + 2);
        v11 = inserted;
        if ( inserted < 0 )
        {
          v50 = 69;
        }
        else
        {
          v54.x = -32000;
          v54.y = -32000;
          CVisual::SetOffset(a3, &v54);
          CVisual::SetOffset(a4, &v54);
          v20 = *(struct tagRECT *)((char *)CDesktopManager::s_pDesktopManagerInstance + 372);
          v61 = v20;
          rc = v20;
          OffsetRect(&rc, -32000, -32000);
          v21 = CAnimatedTransitionVisual::SetVisual(*v12, (struct CVisual *)a3, 1, &rc);
          v11 = v21;
          if ( v21 < 0 )
          {
            v50 = 87;
            v49 = v21;
            goto LABEL_68;
          }
          inserted = CAnimatedTransitionVisual::SetVisual(*v14, (struct CVisual *)a4, 0, &rc);
          v11 = inserted;
          if ( inserted < 0 )
          {
            v50 = 88;
          }
          else
          {
            inserted = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(
                         (CAnimatedTransitionVisual *)*v12,
                         (struct CVisual *)a3,
                         &rc);
            v11 = inserted;
            if ( inserted < 0 )
            {
              v50 = 91;
            }
            else
            {
              v22 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v20, 8));
              v23 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v20, 12))
                  - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v20, 4));
              v24 = _mm_cvtsi128_si32((__m128i)v20);
              v25 = v23;
              if ( v23 < 0 )
                v25 = 0;
              v26 = v22 - v24;
              v55[1] = v25;
              v27 = v26;
              if ( v26 < 0 )
                v27 = 0;
              v28 = *v12;
              v55[0] = v27;
              (*((void (__fastcall **)(struct CResource **, _DWORD *))v28[1] + 10))(v28 + 1, v55);
              v29 = v23;
              v30 = v26;
              if ( v23 < 0 )
                v29 = 0;
              HIDWORD(v53) = v29;
              if ( v26 < 0 )
                v30 = 0;
              v31 = *v14;
              LODWORD(v53) = v30;
              (*((void (__fastcall **)(struct CResource **, struct CResource **))v31[1] + 10))(v31 + 1, &v53);
              v32 = *v12;
              *((_DWORD *)v32 + 184) = a2;
              *((_DWORD *)v32 + 185) = 2;
              v33 = *v14;
              *((_DWORD *)v33 + 184) = a2;
              *((_DWORD *)v33 + 185) = 1;
              CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v12, &v61);
              CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v14, &v61);
              v34 = *v12;
              *(struct tagRECT *)(v34 + 109) = v20;
              CVisual::SetDirtyFlags((CVisual *)(v34 + 1), 4096);
              v35 = *v14;
              *(struct tagRECT *)(v35 + 109) = v20;
              CVisual::SetDirtyFlags((CVisual *)(v35 + 1), 4096);
              CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)*v14, 0.0);
              v36 = *v14;
              if ( v26 < 0 )
                v26 = 0;
              LODWORD(v53) = v26;
              if ( v23 < 0 )
                v23 = 0;
              HIDWORD(v53) = v23;
              v37 = v53;
              v36[119] = v53;
              (*v12)[119] = v37;
              v38 = *v17;
              RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                                   *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                                                   *((_QWORD *)this + 10));
              inserted = VisualCollection::InsertRelative(
                           (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                           v38,
                           0LL,
                           0,
                           1);
              v11 = inserted;
              if ( inserted < 0 )
              {
                v50 = 112;
              }
              else
              {
                inserted = VisualCollection::InsertRelative(
                             (CVisual *)((char *)*v17 + 32),
                             (struct CVisual *)((unsigned __int64)(*v12 + 1) & -(__int64)(*v12 != 0LL)),
                             0LL,
                             0,
                             1);
                v11 = inserted;
                if ( inserted < 0 )
                {
                  v50 = 113;
                }
                else
                {
                  inserted = VisualCollection::InsertRelative(
                               (CVisual *)((char *)*v17 + 32),
                               (struct CVisual *)((unsigned __int64)(*v14 + 1) & -(__int64)(*v14 != 0LL)),
                               0LL,
                               0,
                               1);
                  v11 = inserted;
                  if ( inserted < 0 )
                  {
                    v50 = 114;
                  }
                  else
                  {
                    inserted = CVisual::MoveToFront(*v17, 0);
                    v11 = inserted;
                    if ( inserted >= 0 )
                    {
                      v60 = *v12;
                      v40 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v57, 8u, 1, &v60);
                      v11 = v40;
                      if ( v40 < 0 )
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0xC0u);
                      if ( v11 < 0 )
                      {
                        v50 = 119;
                      }
                      else
                      {
                        v41 = v59;
                        v42 = a2;
                        v56 = *v14;
                        v43 = v59 + 1;
                        if ( v59 + 1 >= v59 )
                          v42 = v59 + 1;
                        v11 = v43 < v59 ? 0x80070216 : 0;
                        if ( v43 < v59 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB5u);
                        }
                        else if ( v42 <= HIDWORD(v58) )
                        {
                          v59 = v42;
                          *(_QWORD *)(v57 + 8 * v41) = v56;
                        }
                        else
                        {
                          v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v57, 8u, 1, &v56);
                          v11 = v44;
                          if ( v44 < 0 )
                            MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0xC0u);
                        }
                        if ( v11 >= 0 )
                        {
                          v9 = v51;
                          v45 = CAnimationEngine::RegisterForAnimationCompleteNotification(v51, this);
                          v11 = v45;
                          if ( v45 < 0 )
                          {
                            MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x7Cu);
                          }
                          else
                          {
                            started = CAnimationEngine::ScheduleStartAnimation(
                                        v51,
                                        a2,
                                        (__int64)&v57,
                                        (unsigned int *)this + 16);
                            v11 = started;
                            if ( started < 0 )
                            {
                              MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x7Fu);
                            }
                            else
                            {
                              v47 = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
                              v11 = v47;
                              if ( v47 < 0 )
                                MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x83u);
                              else
                                *((_BYTE *)this + 68) = 1;
                            }
                          }
LABEL_53:
                          if ( v11 >= 0 )
                            goto LABEL_54;
                          goto LABEL_59;
                        }
                        v50 = 120;
                      }
                      v49 = v11;
LABEL_68:
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, v50);
                      v9 = v51;
                      goto LABEL_53;
                    }
                    v50 = 117;
                  }
                }
              }
            }
          }
        }
      }
    }
    v49 = inserted;
    goto LABEL_68;
  }
  v11 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Eu);
LABEL_59:
  CLoginTransition::_CleanupAnimation(this);
LABEL_54:
  if ( v9 )
    CAnimationEngine::Release(v9);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v57);
  return (unsigned int)v11;
}
