/*
 * XREFs of ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180018EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800029E4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z @ 0x180016C00 (-InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
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
  CVolumeStrip *v19; // r10
  __int64 v20; // rcx
  int v21; // edi
  __int64 (__fastcall *v22)(CPerStreamVolumeAudioStream *, unsigned int); // rax
  int v23; // eax
  struct IUnknown *v25; // rsi
  __int64 v26; // rdx
  struct IUnknown *v27; // rsi
  __int64 v28; // rdx
  struct IUnknown *v29; // rsi
  __int64 v30; // rcx
  int v31; // eax
  struct IUnknown *v32; // rsi
  __int64 v33; // rdx
  int v34; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  char v36; // [rsp+28h] [rbp-18h]
  struct IUnknown *v37; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v38; // [rsp+80h] [rbp+40h] BYREF

  if ( !*((_BYTE *)this + 41) )
    *((_DWORD *)this + 33) = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v36 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v37 = 0LL;
      v9 = (**v8)(v8, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v37);
      v10 = v37;
      if ( v9 >= 0 && *((struct IUnknown **)this + 22) != v37 )
      {
        v25 = v37;
        if ( v37 )
        {
          ((void (*)(void))v37->lpVtbl->AddRef)();
          v10 = v37;
        }
        v26 = *((_QWORD *)this + 22);
        if ( v26 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26 + 16LL))(*((_QWORD *)this + 22));
          v10 = v37;
        }
        *((_QWORD *)this + 22) = v25;
      }
      if ( v10 )
        ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v37 = 0LL;
      v12 = (**v11)(v11, &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd, &v37);
      v13 = v37;
      if ( v12 >= 0 && *((struct IUnknown **)this + 23) != v37 )
      {
        v27 = v37;
        if ( v37 )
        {
          ((void (*)(void))v37->lpVtbl->AddRef)();
          v13 = v37;
        }
        v28 = *((_QWORD *)this + 23);
        if ( v28 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28 + 16LL))(*((_QWORD *)this + 23));
          v13 = v37;
        }
        *((_QWORD *)this + 23) = v27;
      }
      if ( v13 )
        ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
      v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v37 = 0LL;
      v15 = (**v14)(v14, &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9, &v37);
      v16 = v37;
      if ( v15 >= 0 && *((struct IUnknown **)this + 25) != v37 )
      {
        v32 = v37;
        if ( v37 )
        {
          ((void (*)(void))v37->lpVtbl->AddRef)();
          v16 = v37;
        }
        v33 = *((_QWORD *)this + 25);
        if ( v33 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 16LL))(*((_QWORD *)this + 25));
          v16 = v37;
        }
        *((_QWORD *)this + 25) = v32;
      }
      if ( v16 )
        ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
      v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v37 = 0LL;
      if ( (int)(**v17)(v17, &GUID_419b26e3_fa99_4408_83de_cc1276efa489, &v37) >= 0 )
      {
        v29 = v37;
        if ( *((struct IUnknown **)this + 24) != v37 )
        {
          if ( v37 )
            ((void (__fastcall *)(struct IUnknown *))v37->lpVtbl->AddRef)(v37);
          v30 = *((_QWORD *)this + 24);
          if ( v30 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          *((_QWORD *)this + 24) = v29;
        }
        v31 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 24) + 32LL))(
                *((_QWORD *)this + 24),
                (char *)this + 92);
        if ( v31 < 0
          && WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            28LL,
            &WPP_c45047042f6d344739c91af1a021533b_Traceguids,
            (unsigned int)v31);
        }
      }
      if ( v37 )
        ((void (__fastcall *)(struct IUnknown *))v37->lpVtbl->Release)(v37);
      v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*a4;
      v37 = 0LL;
      if ( (int)(**v18)(v18, &GUID_1cfdfbb6_d1cc_4b8c_8e78_e9281f547eec, &v37) >= 0 )
      {
        if ( *((struct IUnknown **)this + 26) != v37 )
          ATL::AtlComPtrAssign((struct IUnknown **)this + 26, v37);
        v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 26) + 32LL))(
                *((_QWORD *)this + 26),
                *((unsigned int *)this + 21));
        if ( v34 < 0 )
        {
          v19 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
          {
            goto LABEL_18;
          }
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            29LL,
            &WPP_c45047042f6d344739c91af1a021533b_Traceguids,
            (unsigned int)v34);
        }
      }
      v19 = WPP_GLOBAL_Control;
LABEL_18:
      if ( v37 )
      {
        ((void (__fastcall *)(struct IUnknown *))v37->lpVtbl->Release)(v37);
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
  if ( v36 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v19 = WPP_GLOBAL_Control;
  }
  if ( !*((_BYTE *)this + 41) )
  {
    v20 = *((_QWORD *)this + 22);
    if ( v20 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 40LL))(v20, &v38);
      if ( v21 >= 0 )
      {
        v22 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, unsigned int))(*(_QWORD *)this + 152LL);
        if ( v22 == CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount )
          v23 = CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount(this, v38);
        else
          v23 = v22(this, v38);
        v21 = v23;
      }
      v19 = WPP_GLOBAL_Control;
    }
    else
    {
      if ( v19 != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v19 + 7) & 0x200000) != 0
        && *((_BYTE *)v19 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v19 + 2), 30LL, &WPP_c45047042f6d344739c91af1a021533b_Traceguids);
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
      if ( v19 != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v19 + 7) & 0x200000) != 0
        && *((_BYTE *)v19 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v19 + 2), 31LL, &WPP_c45047042f6d344739c91af1a021533b_Traceguids);
      }
      v21 = -2147467262;
    }
    AudSrvTraceLoggingErrorHelper("CAudioStream::InitializeAPOs", 0x431u, v21);
    return (unsigned int)v21;
  }
  return 0LL;
}
