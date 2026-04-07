/*
 * XREFs of ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180043580
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x1800426D4 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x1800172E0 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18001A148 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800229D0 (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002EEB0 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002EF7C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAVCResource@@@Z @ 0x1800422B0 (-SetRenderTargetForDesktops@CWindowList@@QEAAXPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::CreateDesktopRenderTarget(CDesktopManager *this)
{
  _QWORD *v2; // r14
  unsigned int v3; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  struct CResource **v9; // rsi
  int v10; // eax
  CWindowList *v11; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  int RenderTargets; // eax
  CBaseObject *v18; // rcx
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  hObject = 0LL;
  v19 = 0;
  v2 = (_QWORD *)((char *)this + 72);
  v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 21)
                                                         + 216LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
         &GUID_6c4d5135_93f5_4576_adf1_5060105c55bd,
         (char *)this + 72);
  v4 = FailFastIfAccessDenied(v3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x422u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 32LL))(*v2, 66584LL);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x424u);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 21) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21));
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 21)
                                                               + 224LL))(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
             *v2,
             &hObject);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x429u);
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, unsigned int *))(**((_QWORD **)this + 4) + 120LL))(
               *((_QWORD *)this + 4),
               hObject,
               8LL,
               &v19);
        v5 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x42Du);
        }
        else
        {
          v9 = (struct CResource **)((char *)this + 64);
          v10 = CResource::WrapExistingResource(*((struct IDwmChannel **)this + 4), v19, (struct CResource **)this + 8);
          v5 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x42Fu);
          }
          else
          {
            GetDesktopID(1LL, &v21);
            v11 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 51);
            RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v11, v21);
            CWindowList::BringDesktopToFront(v11, RenderTargetRootVisualForDesktop);
            v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 51) + 80LL) + 16LL);
            if ( v13 )
              v14 = *(unsigned int *)(v13 + 24);
            else
              v14 = 0LL;
            v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)*v9 + 2) + 720LL))(
                    *((_QWORD *)*v9 + 2),
                    *((unsigned int *)*v9 + 6),
                    v14);
            v5 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x437u);
            }
            else
            {
              CWindowList::SetRenderTargetForDesktops(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                *v9);
              RenderTargets = CDesktopManager::CreateRenderTargets(this);
              v5 = RenderTargets;
              if ( RenderTargets < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargets, 0x43Bu);
            }
          }
        }
      }
    }
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  if ( v19 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 128LL))(*((_QWORD *)this + 4));
  if ( v5 < 0 )
  {
    if ( *v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    v18 = (CBaseObject *)*((_QWORD *)this + 8);
    if ( v18 )
      CBaseObject::Release(v18);
  }
  return (unsigned int)v5;
}
