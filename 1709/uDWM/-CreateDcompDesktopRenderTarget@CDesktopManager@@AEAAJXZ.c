/*
 * XREFs of ?CreateDcompDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18003B860
 * Callers:
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18003B784 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18002C05C (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x180036A68 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::CreateDcompDesktopRenderTarget(CDesktopManager *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  int v4; // ebx
  _QWORD *v5; // rsi
  unsigned int v6; // eax
  int v7; // eax
  int v8; // eax
  _QWORD *v9; // r14
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _QWORD *v16; // r14
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v23; // rcx
  CBaseObject *v24; // rcx
  HANDLE v25; // [rsp+30h] [rbp-10h] BYREF
  __int64 v26; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v27; // [rsp+78h] [rbp+38h] BYREF
  unsigned int v28; // [rsp+80h] [rbp+40h] BYREF
  HANDLE hObject; // [rsp+88h] [rbp+48h] BYREF

  hObject = 0LL;
  v27 = 0;
  v25 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
  v28 = 0;
  v26 = 0LL;
  v3 = (**v2)(v2, &GUID_e5416f03_7e37_415e_aacb_83cb988a6bb4, &v26);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x49Eu);
  }
  else
  {
    v5 = (_QWORD *)((char *)this + 72);
    v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                              + 25)
                                                           + 216LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
           &GUID_6c4d5135_93f5_4576_adf1_5060105c55bd,
           (char *)this + 72);
    v7 = FailFastIfAccessDenied(v6);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x4A0u);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 32LL))(*v5, 66584LL);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x4A2u);
      }
      else
      {
        v9 = (_QWORD *)((char *)this + 88);
        v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v26 + 648LL))(v26, (char *)this + 88);
        v4 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x4A4u);
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v9 + 24LL))(*v9, 1LL);
          v4 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x4A6u);
          }
          else
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 64LL))(*v5, *v9);
            v4 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x4A8u);
            }
            else
            {
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
              v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                           + 25)
                                                                        + 224LL))(
                      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
                      *v5,
                      &hObject);
              v4 = v13;
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x4ADu);
              }
              else
              {
                v14 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, unsigned int *))(**((_QWORD **)this + 4)
                                                                                         + 120LL))(
                        *((_QWORD *)this + 4),
                        hObject,
                        8LL,
                        &v27);
                v4 = v14;
                if ( v14 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x4B1u);
                }
                else
                {
                  v15 = CResource::WrapExistingResource(
                          *((struct IDwmChannel **)this + 4),
                          v27,
                          (struct CResource **)this + 8);
                  v4 = v15;
                  if ( v15 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x4B3u);
                  }
                  else
                  {
                    v16 = (_QWORD *)((char *)this + 128);
                    v17 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 25)
                                                                            + 216LL))(
                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
                            &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3,
                            (char *)this + 128);
                    v4 = v17;
                    if ( v17 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x4B5u);
                    }
                    else
                    {
                      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25)
                                                     + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
                      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                   + 25)
                                                                                + 224LL))(
                              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
                              *v16,
                              &v25);
                      v4 = v18;
                      if ( v18 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x4B9u);
                      }
                      else
                      {
                        v19 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, unsigned int *))(**((_QWORD **)this + 4)
                                                                                                 + 120LL))(
                                *((_QWORD *)this + 4),
                                v25,
                                38LL,
                                &v28);
                        v4 = v19;
                        if ( v19 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x4BDu);
                        }
                        else
                        {
                          v20 = CResource::WrapExistingResource(
                                  *((struct IDwmChannel **)this + 4),
                                  v28,
                                  (struct CResource **)this + 17);
                          v4 = v20;
                          if ( v20 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x4BFu);
                          }
                          else
                          {
                            v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, *v16);
                            v4 = v21;
                            if ( v21 < 0 )
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x4C1u);
                          }
                        }
                      }
                    }
                  }
                }
              }
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
  if ( v25 )
  {
    CloseHandle(v25);
    v25 = 0LL;
  }
  if ( v26 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    v26 = 0LL;
  }
  if ( v27 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 128LL))(*((_QWORD *)this + 4));
  if ( v28 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 128LL))(*((_QWORD *)this + 4));
  if ( v4 < 0 )
  {
    v23 = *((_QWORD *)this + 9);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v24 = (CBaseObject *)*((_QWORD *)this + 8);
    if ( v24 )
      CBaseObject::Release(v24);
  }
  return (unsigned int)v4;
}
