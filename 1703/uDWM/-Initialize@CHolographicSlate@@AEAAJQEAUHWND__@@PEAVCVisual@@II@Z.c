/*
 * XREFs of ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800796FC
 * Callers:
 *     ?CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z @ 0x1800795FC (-CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z.c)
 * Callees:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18001A148 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180073810 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnbindWindow@CHolographicSlate@@AEAAJXZ @ 0x180079A40 (-UnbindWindow@CHolographicSlate@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicSlate::Initialize(
        CHolographicSlate *this,
        HWND a2,
        struct CVisual *a3,
        unsigned int a4,
        unsigned int a5)
{
  _QWORD *v5; // r14
  __int64 v10; // rbx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebp
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // eax
  HANDLE hObject[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+70h] [rbp+8h] BYREF

  hObject[0] = 0LL;
  v5 = (_QWORD *)((char *)this + 24);
  v25 = 0;
  v10 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  v11 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v10 + 216LL))(
          v10,
          &GUID_adbab0af_769d_40da_a180_540472cbcc34,
          v5);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, a4);
    v12 = v13;
    if ( v13 >= 0 )
    {
      v14 = a5;
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 32LL))(*v5, a5);
      v12 = v15;
      if ( v15 >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 56LL))(*v5, (unsigned int)a2);
        v12 = v16;
        if ( v16 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 21) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21));
          v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 21)
                                                                    + 224LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
                  *v5,
                  hObject);
          v12 = v17;
          if ( v17 >= 0 )
          {
            v18 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, unsigned int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                        + 4)
                                                                                     + 120LL))(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                    hObject[0],
                    15LL,
                    &v25);
            v12 = v18;
            if ( v18 >= 0 )
            {
              v19 = CResource::WrapExistingResource(
                      *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                      v25,
                      (struct CResource **)this + 4);
              v12 = v19;
              if ( v19 >= 0 )
              {
                v20 = *((_QWORD *)a3 + 2);
                if ( v20 )
                  v21 = *(unsigned int *)(v20 + 24);
                else
                  v21 = 0LL;
                v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL)
                                                                         + 1200LL))(
                        *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
                        *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
                        v21);
                v12 = v22;
                if ( v22 >= 0 )
                {
                  *((_QWORD *)this + 5) = a3;
                  _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
                  *((_DWORD *)this + 12) = 0;
                  *((_DWORD *)this + 13) = 0;
                  *((_QWORD *)this + 2) = a2;
                  *((_DWORD *)this + 14) = a4;
                  *((_DWORD *)this + 15) = v14;
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x51u);
                }
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x4Du);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x4Bu);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x47u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x43u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x42u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x41u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x40u);
  }
  if ( hObject[0] )
  {
    CloseHandle(hObject[0]);
    hObject[0] = 0LL;
  }
  if ( v25 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  if ( v12 < 0 )
    CHolographicSlate::UnbindWindow(this);
  return (unsigned int)v12;
}
