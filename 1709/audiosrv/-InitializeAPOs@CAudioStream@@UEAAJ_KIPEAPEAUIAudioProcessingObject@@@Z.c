/*
 * XREFs of ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18001C580
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z @ 0x18002D870 (-InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioStream::InitializeAPOs(
        CAudioStream *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  unsigned int v7; // r14d
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
  CAudioDGProcess *v19; // r10
  __int64 v20; // rcx
  int v21; // ebx
  __int64 (__fastcall *v22)(CPerStreamVolumeAudioStream *__hidden, unsigned int); // rax
  int v23; // eax
  int v25; // eax
  int v26; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  char v28; // [rsp+28h] [rbp-18h]
  struct IUnknown *v29; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v30; // [rsp+80h] [rbp+40h] BYREF

  if ( !*((_BYTE *)this + 41) )
    *((_DWORD *)this + 33) = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v28 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v29 = 0LL;
      v9 = (**v8)(v8, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v29);
      v10 = v29;
      if ( v9 >= 0 && *((struct IUnknown **)this + 22) != v29 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 22, v29);
        v10 = v29;
      }
      if ( v10 )
        ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v29 = 0LL;
      v12 = (**v11)(v11, &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd, &v29);
      v13 = v29;
      if ( v12 >= 0 && *((struct IUnknown **)this + 23) != v29 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 23, v29);
        v13 = v29;
      }
      if ( v13 )
        ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
      v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v29 = 0LL;
      v15 = (**v14)(v14, &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9, &v29);
      v16 = v29;
      if ( v15 >= 0 && *((struct IUnknown **)this + 25) != v29 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 25, v29);
        v16 = v29;
      }
      if ( v16 )
        ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
      v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v29 = 0LL;
      if ( (int)(**v17)(v17, &GUID_419b26e3_fa99_4408_83de_cc1276efa489, &v29) >= 0 )
      {
        if ( *((struct IUnknown **)this + 24) != v29 )
          ATL::AtlComPtrAssign((struct IUnknown **)this + 24, v29);
        v25 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 24) + 32LL))(
                *((_QWORD *)this + 24),
                (char *)this + 88);
        if ( v25 < 0
          && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            27LL,
            &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids,
            (unsigned int)v25);
        }
      }
      if ( v29 )
        ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl->Release)(v29);
      v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v29 = 0LL;
      if ( (int)(**v18)(v18, &GUID_1cfdfbb6_d1cc_4b8c_8e78_e9281f547eec, &v29) >= 0 )
      {
        if ( *((struct IUnknown **)this + 26) != v29 )
          ATL::AtlComPtrAssign((struct IUnknown **)this + 26, v29);
        v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 26) + 32LL))(
                *((_QWORD *)this + 26),
                *((unsigned int *)this + 20));
        if ( v26 < 0 )
        {
          v19 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
          {
            goto LABEL_18;
          }
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            28LL,
            &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids,
            (unsigned int)v26);
        }
      }
      v19 = WPP_GLOBAL_Control;
LABEL_18:
      if ( v29 )
      {
        ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl->Release)(v29);
        v19 = WPP_GLOBAL_Control;
      }
      if ( !*((_QWORD *)this + 22)
        || !*((_QWORD *)this + 23)
        || !*((_QWORD *)this + 25)
        || !*((_QWORD *)this + 24)
        || !*((_QWORD *)this + 26) )
      {
        ++v7;
        ++a4;
        if ( v7 < a3 )
          continue;
      }
      goto LABEL_24;
    }
  }
  v19 = WPP_GLOBAL_Control;
LABEL_24:
  if ( v28 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v19 = WPP_GLOBAL_Control;
  }
  if ( !*((_BYTE *)this + 41) )
  {
    v20 = *((_QWORD *)this + 22);
    if ( v20 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 40LL))(v20, &v30);
      if ( v21 >= 0 )
      {
        v22 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *__hidden, unsigned int))(*(_QWORD *)this + 144LL);
        if ( v22 == CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount )
          v23 = CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount(this, v30);
        else
          v23 = v22(this, v30);
        v21 = v23;
      }
      v19 = WPP_GLOBAL_Control;
    }
    else
    {
      if ( v19 != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v19 + 7) & 0x200000) != 0
        && *((_BYTE *)v19 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v19 + 2), 29LL, &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids);
        v19 = WPP_GLOBAL_Control;
      }
      v21 = -2147467262;
    }
    if ( *((_QWORD *)this + 23) )
    {
      if ( v21 >= 0 )
        return (unsigned int)v21;
    }
    else
    {
      if ( v19 != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v19 + 7) & 0x200000) != 0
        && *((_BYTE *)v19 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v19 + 2), 30LL, &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids);
      }
      v21 = -2147467262;
    }
    AudSrvTraceLoggingErrorHelper("CAudioStream::InitializeAPOs", 0x3FFu, v21);
    return (unsigned int)v21;
  }
  return 0LL;
}
