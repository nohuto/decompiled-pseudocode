/*
 * XREFs of ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x18001EF10
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180026880 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18002C05C (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?GetRemotingMode@CDesktopManager@@SAJAEAW4Enum@DwmRemotingMode@@@Z @ 0x180035D84 (-GetRemotingMode@CDesktopManager@@SAJAEAW4Enum@DwmRemotingMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::SendTopLevelWindowCommand(CTopLevelWindow *this, HWND a2, struct CWindowData *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  CBaseObject *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // eax
  HANDLE hObject; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v22; // [rsp+38h] [rbp-8h] BYREF
  __int64 v23; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v24; // [rsp+78h] [rbp+38h] BYREF

  v3 = 0;
  hObject = 0LL;
  v24 = 0;
  v22 = 0LL;
  LODWORD(v23) = 0;
  if ( a2
    && ((v7 = *((_QWORD *)this + 2)) == 0 ? (v8 = 0LL) : (v8 = *(unsigned int *)(v7 + 24)),
        v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, HWND, __int64))(**(_QWORD **)(v7 + 16) + 456LL))(
               *(_QWORD *)(v7 + 16),
               v8,
               a2,
               1LL),
        v3 = v9,
        v9 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x15Du);
  }
  else
  {
    CDesktopManager::GetRemotingMode((enum DwmRemotingMode::Enum *)&v23);
    if ( (int)v23 >= 2 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 25)
                                                                 + 216LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
              &GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b,
              &v23);
      v3 = v11;
      if ( v11 >= 0 )
      {
        v12 = v23;
        *((_QWORD *)this + 100) = v23;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, *((_QWORD *)a3 + 5));
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
        v3 = v13;
        if ( v13 >= 0 )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                        + 25)
                                                                     + 224LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
                  v23,
                  &hObject);
          v3 = v14;
          if ( v14 >= 0 )
          {
            v15 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, unsigned int *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                                     + 120LL))(
                    *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                    hObject,
                    28LL,
                    &v24);
            v3 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x173u);
            }
            else
            {
              v16 = CResource::WrapExistingResource(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), v24, &v22);
              v17 = v22;
              v3 = v16;
              if ( v16 >= 0 )
              {
                v18 = *((_QWORD *)this + 2);
                if ( v18 )
                  v19 = *(unsigned int *)(v18 + 24);
                else
                  v19 = 0LL;
                v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v22 + 2) + 728LL))(
                        *((_QWORD *)v22 + 2),
                        *((unsigned int *)v22 + 6),
                        v19);
                v3 = v20;
                if ( v20 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x179u);
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x175u);
              }
              if ( v17 )
                CBaseObject::Release(v17);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x16Fu);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x16Cu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x166u);
      }
    }
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  if ( v24 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 128LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
  return v3;
}
