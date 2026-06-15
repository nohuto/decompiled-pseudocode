/*
 * XREFs of ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18002EA30
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z @ 0x18002B8D0 (-InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioStream::InitializeAPOs(
        CAudioStream *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  unsigned int i; // r14d
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct IUnknown **); // rcx
  int v9; // eax
  struct IUnknown *v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IUnknown **); // rcx
  int v12; // eax
  struct IUnknown *v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct IUnknown **); // rcx
  int v15; // eax
  struct IUnknown *v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct IUnknown **); // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct IUnknown **); // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, struct IUnknown **); // rcx
  int v20; // eax
  struct IUnknown *v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, struct IUnknown **); // rcx
  int v23; // eax
  struct IUnknown *v24; // rcx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 (__fastcall *v27)(CPerStreamVolumeAudioStream *, unsigned int); // rax
  int v28; // eax
  CAudioSessionManager *v29; // rcx
  struct IUnknown *v31; // rdx
  struct IUnknown *v32; // rdi
  struct IUnknown *v33; // rdx
  struct IUnknown *v34; // rdi
  struct IUnknown *v35; // rcx
  struct IUnknown *v36; // rdi
  int v37; // eax
  struct IUnknown *v38; // rdx
  struct IUnknown *v39; // rdi
  struct IUnknown *v40; // rcx
  int v41; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  char v43; // [rsp+28h] [rbp-18h]
  struct IUnknown *v44; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v45; // [rsp+80h] [rbp+40h] BYREF

  if ( !*((_BYTE *)this + 49) )
    *((_DWORD *)this + 33) = 1;
  v43 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  for ( i = 0; i < a3; ++a4 )
  {
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
    v44 = 0LL;
    v9 = (**v8)(v8, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v44);
    v10 = v44;
    if ( v9 >= 0 )
    {
      v31 = (struct IUnknown *)*((_QWORD *)this + 22);
      if ( v31 != v44 )
      {
        v32 = v44;
        if ( v44 )
        {
          ((void (*)(void))v44->lpVtbl->AddRef)();
          v31 = (struct IUnknown *)*((_QWORD *)this + 22);
          v10 = v44;
        }
        if ( v31 )
        {
          ((void (__fastcall *)(struct IUnknown *))v31->lpVtbl->Release)(v31);
          v10 = v44;
        }
        *((_QWORD *)this + 22) = v32;
      }
    }
    if ( v10 )
      ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
    v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
    v44 = 0LL;
    v12 = (**v11)(v11, &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd, &v44);
    v13 = v44;
    if ( v12 >= 0 )
    {
      v33 = (struct IUnknown *)*((_QWORD *)this + 23);
      if ( v33 != v44 )
      {
        v34 = v44;
        if ( v44 )
        {
          ((void (*)(void))v44->lpVtbl->AddRef)();
          v33 = (struct IUnknown *)*((_QWORD *)this + 23);
          v13 = v44;
        }
        if ( v33 )
        {
          ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->Release)(v33);
          v13 = v44;
        }
        *((_QWORD *)this + 23) = v34;
      }
    }
    if ( v13 )
      ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
    v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
    v44 = 0LL;
    v15 = (**v14)(v14, &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9, &v44);
    v16 = v44;
    if ( v15 >= 0 )
    {
      v38 = (struct IUnknown *)*((_QWORD *)this + 25);
      if ( v38 != v44 )
      {
        v39 = v44;
        if ( v44 )
        {
          ((void (*)(void))v44->lpVtbl->AddRef)();
          v38 = (struct IUnknown *)*((_QWORD *)this + 25);
          v16 = v44;
        }
        if ( v38 )
        {
          ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
          v16 = v44;
        }
        *((_QWORD *)this + 25) = v39;
      }
    }
    if ( v16 )
      ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
    v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
    v44 = 0LL;
    if ( (int)(**v17)(v17, &GUID_419b26e3_fa99_4408_83de_cc1276efa489, &v44) >= 0 )
    {
      v35 = (struct IUnknown *)*((_QWORD *)this + 24);
      v36 = v44;
      if ( v35 != v44 )
      {
        if ( v44 )
        {
          ((void (__fastcall *)(struct IUnknown *))v44->lpVtbl->AddRef)(v44);
          v35 = (struct IUnknown *)*((_QWORD *)this + 24);
        }
        if ( v35 )
          ((void (__fastcall *)(struct IUnknown *))v35->lpVtbl->Release)(v35);
        *((_QWORD *)this + 24) = v36;
        v35 = v36;
      }
      v37 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v35->lpVtbl[1].AddRef)(v35, (char *)this + 96);
      if ( v37 < 0
        && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          25LL,
          &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
          (unsigned int)v37);
      }
    }
    if ( v44 )
      ((void (__fastcall *)(struct IUnknown *))v44->lpVtbl->Release)(v44);
    v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
    v44 = 0LL;
    if ( (int)(**v18)(v18, &GUID_1cfdfbb6_d1cc_4b8c_8e78_e9281f547eec, &v44) >= 0 )
    {
      v40 = (struct IUnknown *)*((_QWORD *)this + 26);
      if ( v40 != v44 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 26, v44);
        v40 = (struct IUnknown *)*((_QWORD *)this + 26);
      }
      v41 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))v40->lpVtbl[1].AddRef)(
              v40,
              *((unsigned int *)this + 22));
      if ( v41 < 0
        && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          26LL,
          &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
          (unsigned int)v41);
      }
    }
    if ( v44 )
      ((void (__fastcall *)(struct IUnknown *))v44->lpVtbl->Release)(v44);
    v19 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
    v44 = 0LL;
    v20 = (**v19)(v19, &GUID_8ab91395_f920_4132_873f_7a40607f7901, &v44);
    v21 = v44;
    if ( v20 >= 0 && *((struct IUnknown **)this + 27) != v44 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)this + 27, v44);
      v21 = v44;
    }
    if ( v21 )
      ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
    v22 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
    v44 = 0LL;
    v23 = (**v22)(v22, &GUID_778db40f_1278_4df7_994c_4da666c7a7ac, &v44);
    v24 = v44;
    if ( v23 >= 0 && *((struct IUnknown **)this + 28) != v44 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)this + 28, v44);
      v24 = v44;
    }
    if ( v24 )
      ((void (__fastcall *)(struct IUnknown *))v24->lpVtbl->Release)(v24);
    if ( *((_QWORD *)this + 22)
      && *((_QWORD *)this + 23)
      && *((_QWORD *)this + 25)
      && *((_QWORD *)this + 24)
      && *((_QWORD *)this + 26) )
    {
      break;
    }
    ++i;
  }
  if ( v43 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !*((_BYTE *)this + 49) )
  {
    v25 = *((_QWORD *)this + 22);
    if ( v25 )
    {
      v26 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 40LL))(v25, &v45);
      if ( v26 >= 0 )
      {
        v27 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, unsigned int))(*(_QWORD *)this + 144LL);
        if ( v27 == CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount )
          v28 = CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount(this, v45);
        else
          v28 = v27(this, v45);
        v26 = v28;
      }
      v29 = WPP_GLOBAL_Control;
    }
    else
    {
      v29 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids);
        v29 = WPP_GLOBAL_Control;
      }
      v26 = -2147467262;
    }
    if ( *((_QWORD *)this + 23) )
    {
      if ( v26 >= 0 )
        return (unsigned int)v26;
    }
    else
    {
      if ( v29 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v29 + 7) & 0x200000) != 0
        && *((_BYTE *)v29 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v29 + 2), 28LL, &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids);
      }
      v26 = -2147467262;
    }
    AudSrvTraceLoggingErrorHelper("CAudioStream::InitializeAPOs", 0x45Eu, v26);
    return (unsigned int)v26;
  }
  return 0LL;
}
