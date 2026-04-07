/*
 * XREFs of ?EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18004A478
 * Callers:
 *     ?EnsureDesktopTarget@CDesktopManager@@SAJXZ @ 0x18004B1A0 (-EnsureDesktopTarget@CDesktopManager@@SAJXZ.c)
 * Callees:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180010D58 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x1800396C4 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800487F8 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x18004AF84 (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::EnsureDesktopRenderTarget(CDesktopManager *this)
{
  struct IDwmChannel **v1; // rdi
  int v2; // ebx
  _QWORD *v3; // rsi
  bool v4; // r14
  int v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  int v8; // eax
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _QWORD *v17; // r14
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  HANDLE v24; // [rsp+30h] [rbp-18h] BYREF
  __int64 v25; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+80h] [rbp+38h] BYREF
  int v27; // [rsp+84h] [rbp+3Ch]
  unsigned int v28; // [rsp+88h] [rbp+40h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+48h] BYREF
  HANDLE hObject; // [rsp+98h] [rbp+50h] BYREF

  v27 = HIDWORD(this);
  v1 = (struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  hObject = 0LL;
  v26 = 0;
  v24 = 0LL;
  v28 = 0;
  v3 = (_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 72);
  v25 = 0LL;
  v4 = 1;
  if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9) )
  {
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 25))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
           &GUID_e5416f03_7e37_415e_aacb_83cb988a6bb4,
           &v25);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, _QWORD *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 25)
                                                               + 216LL))(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
             &GUID_6c4d5135_93f5_4576_adf1_5060105c55bd,
             v3);
      v7 = FailFastIfAccessDenied(v6);
      v2 = v7;
      if ( v7 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 32LL))(*v3, 66584LL);
        v2 = v8;
        if ( v8 >= 0 )
        {
          v9 = v1 + 11;
          v10 = (*(__int64 (__fastcall **)(__int64, struct IDwmChannel **))(*(_QWORD *)v25 + 648LL))(v25, v1 + 11);
          v2 = v10;
          if ( v10 >= 0 )
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v9 + 24LL))(*v9, 1LL);
            v2 = v11;
            if ( v11 >= 0 )
            {
              v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 64LL))(*v3, *v9);
              v2 = v12;
              if ( v12 >= 0 )
              {
                if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ConfigureInput", &v29) )
                  v4 = v29 == 0;
                v13 = (*(__int64 (__fastcall **)(_QWORD, bool))(*(_QWORD *)*v3 + 80LL))(*v3, v4);
                v2 = v13;
                if ( v13 >= 0 )
                {
                  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
                  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 25)
                                                                            + 224LL))(
                          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
                          *v3,
                          &hObject);
                  v2 = v14;
                  if ( v14 >= 0 )
                  {
                    v15 = (*(__int64 (__fastcall **)(struct IDwmChannel *, HANDLE, __int64, unsigned int *))(*(_QWORD *)v1[4] + 120LL))(
                            v1[4],
                            hObject,
                            9LL,
                            &v26);
                    v2 = v15;
                    if ( v15 >= 0 )
                    {
                      v16 = CResource::WrapExistingResource(v1[4], v26, v1 + 8);
                      v2 = v16;
                      if ( v16 >= 0 )
                      {
                        v17 = v1 + 16;
                        v18 = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct IDwmChannel **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                                  + 25)
                                                                                               + 216LL))(
                                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
                                &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3,
                                v1 + 16);
                        v2 = v18;
                        if ( v18 >= 0 )
                        {
                          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25)
                                                         + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 25));
                          v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                       + 25)
                                                                                    + 224LL))(
                                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
                                  *v17,
                                  &v24);
                          v2 = v19;
                          if ( v19 >= 0 )
                          {
                            v20 = (*(__int64 (__fastcall **)(struct IDwmChannel *, HANDLE, __int64, unsigned int *))(*(_QWORD *)v1[4] + 120LL))(
                                    v1[4],
                                    v24,
                                    38LL,
                                    &v28);
                            v2 = v20;
                            if ( v20 >= 0 )
                            {
                              v21 = CResource::WrapExistingResource(v1[4], v28, v1 + 17);
                              v2 = v21;
                              if ( v21 >= 0 )
                              {
                                v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 24LL))(*v3, *v17);
                                v2 = v22;
                                if ( v22 < 0 )
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x527u);
                              }
                              else
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x525u);
                              }
                            }
                            else
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x523u);
                            }
                          }
                          else
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x51Fu);
                          }
                        }
                        else
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x51Bu);
                        }
                      }
                      else
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x519u);
                      }
                    }
                    else
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x517u);
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x513u);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x50Eu);
                }
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x505u);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x503u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x501u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x4FFu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x4FDu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x4FBu);
    }
    if ( hObject )
    {
      CloseHandle(hObject);
      hObject = 0LL;
    }
    if ( v24 )
    {
      CloseHandle(v24);
      v24 = 0LL;
    }
    if ( v25 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      v25 = 0LL;
    }
    if ( v26 )
      (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v1[4] + 128LL))(v1[4]);
    if ( v28 )
      (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v1[4] + 128LL))(v1[4]);
    if ( v2 < 0 )
      CDesktopManager::ReleaseDesktopRenderTarget((CDesktopManager *)v1);
  }
  return (unsigned int)v2;
}
