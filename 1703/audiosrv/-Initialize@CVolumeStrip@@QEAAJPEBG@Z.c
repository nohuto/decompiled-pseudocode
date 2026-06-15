/*
 * XREFs of ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180039FA8
 * Callers:
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x180039CBC (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ??$?4UIMMDevice@@@?$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV?$CComPtr@UIMMDevice@@@1@@Z @ 0x180004410 (--$-4UIMMDevice@@@-$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV-$CComP.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001D40C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002A820 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180033870 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003A428 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CMeterControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18003A6E0 (--0CMeterControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ?RegisterForNotifications@CMuteHardware@@UEAAJXZ @ 0x18003A7D0 (-RegisterForNotifications@CMuteHardware@@UEAAJXZ.c)
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003A83C (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CMuteControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18003AB04 (--0CMuteControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ??0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18003B018 (--0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ?RegisterForNotifications@CVolumeHardware@@UEAAJXZ @ 0x18003B0F0 (-RegisterForNotifications@CVolumeHardware@@UEAAJXZ.c)
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003B13C (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z @ 0x18003BA08 (-InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 *     ??0CVolumeSoftware@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180087B44 (--0CVolumeSoftware@@QEAA@PEAVCVolumeStrip@@@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CVolumeStrip::Initialize(CVolumeStrip *this, char *a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  char *v7; // rax
  int v8; // ebx
  const unsigned __int16 *v9; // rdx
  __int64 (__fastcall *v10)(CPolicyConfig *, const unsigned __int16 *, int, struct tWAVEFORMATEX **); // rax
  int DeviceFormat; // eax
  CVolumeControlBase *v12; // rax
  CVolumeControlBase *v13; // rsi
  CMuteControlBase *v14; // rax
  CMuteControlBase *v15; // rsi
  CMeterControlBase *v16; // rax
  CMeterControlBase *v17; // rsi
  CMuteHardware *v18; // rcx
  __int64 (__fastcall *v19)(CMuteHardware *__hidden); // rax
  int v20; // eax
  CVolumeHardware *v21; // rcx
  __int64 (__fastcall *v22)(CVolumeHardware *__hidden); // rax
  int v23; // eax
  CVolumeSoftware *v25; // rax
  CVolumeSoftware *v26; // rsi
  CMuteControlBase *v27; // rax
  CMuteControlBase *v28; // rsi
  CMeterControlBase *v29; // rax
  CMeterControlBase *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  struct IUnknown *v34; // [rsp+38h] [rbp-39h] BYREF
  __int64 v35; // [rsp+40h] [rbp-31h]
  __int64 v36; // [rsp+48h] [rbp-29h]
  CVolumeControlBase *v37; // [rsp+50h] [rbp-21h]
  KSDATAFORMAT v38; // [rsp+58h] [rbp-19h] BYREF
  struct IMMDevice *v39; // [rsp+D8h] [rbp+67h] BYREF
  struct IPartsList *v40; // [rsp+E8h] [rbp+77h]
  LPVOID pv; // [rsp+F0h] [rbp+7Fh] BYREF

  v36 = -2LL;
  v39 = 0LL;
  v35 = 0LL;
  v40 = 0LL;
  v34 = 0LL;
  pv = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)&a2[2 * v4] );
  v5 = v4 + 1;
  v6 = 2 * v5;
  if ( !is_mul_ok(v5, 2uLL) )
    v6 = -1LL;
  v7 = (char *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)this + 28) = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    goto LABEL_109;
  }
  v8 = StringCchCopyW(v7, v5, a2);
  if ( v8 < 0 )
    goto LABEL_109;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)this + 28),
         &v39);
  if ( v8 < 0 )
    goto LABEL_109;
  ATL::CComPtr<IMMEndpointInternal>::operator=<IMMDevice>(&v34, (struct IUnknown **)&v39);
  if ( !v34 )
  {
    v8 = -2147024809;
    goto LABEL_109;
  }
  v8 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v34->lpVtbl[2].Release)(v34, (char *)this + 232);
  if ( v8 >= 0 )
  {
    v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v39->lpVtbl->Activate)(
           v39,
           &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
           23LL);
    if ( v8 >= 0 )
    {
      v9 = (const unsigned __int16 *)*((_QWORD *)this + 28);
      v10 = *(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, int, struct tWAVEFORMATEX **))(*(_QWORD *)g_PolicyConfig + 32LL);
      if ( v10 == CPolicyConfig::GetDeviceFormat )
        DeviceFormat = CPolicyConfig::GetDeviceFormat(g_PolicyConfig, v9, 0, (struct tWAVEFORMATEX **)&pv);
      else
        DeviceFormat = v10(g_PolicyConfig, v9, 0, (struct tWAVEFORMATEX **)&pv);
      v8 = DeviceFormat;
      if ( DeviceFormat < 0 )
        goto LABEL_109;
      InitKsDataFormat(&v38, (struct tWAVEFORMATEX *)pv);
      CoTaskMemFree(pv);
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids, this);
      }
      v8 = (*(__int64 (__fastcall **)(__int64, KSDATAFORMAT *, __int64))(*(_QWORD *)v35 + 24LL))(v35, &v38, 64LL);
      if ( v8 >= 0 )
      {
        v12 = (CVolumeControlBase *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
        v13 = v12;
        v37 = v12;
        if ( v12 )
        {
          CVolumeControlBase::CVolumeControlBase(v12, this);
          *(_QWORD *)v13 = &CVolumeHardware::`vftable';
          *((_QWORD *)v13 + 30) = 0LL;
          *((_QWORD *)v13 + 31) = 0LL;
          *((GUID *)v13 + 16) = GUID_00000000_0000_0000_0000_000000000000;
          *((_QWORD *)v13 + 34) = 0LL;
        }
        else
        {
          v13 = 0LL;
        }
        if ( !v13 )
          v8 = -2147024882;
        if ( v8 < 0 )
          goto LABEL_109;
        v8 = CVolumeHardware::Initialize(v13, v39, v40);
        if ( v8 < 0 )
          (*(void (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)v13 + 16LL))(v13);
        else
          *((_QWORD *)this + 30) = v13;
      }
    }
    if ( !*((_QWORD *)this + 30) )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          17,
          (unsigned int)&WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids,
          (_DWORD)a2,
          v8);
      }
      v25 = (CVolumeSoftware *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
      v37 = v25;
      if ( v25 )
        v26 = CVolumeSoftware::CVolumeSoftware(v25, this);
      else
        v26 = 0LL;
      if ( !v26 )
        goto LABEL_79;
      v8 = (*(__int64 (__fastcall **)(CVolumeSoftware *, struct IMMDevice *))(*(_QWORD *)v26 + 48LL))(v26, v39);
      if ( v8 < 0 )
        (*(void (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)v26 + 16LL))(v26);
      else
        *((_QWORD *)this + 30) = v26;
    }
    if ( v8 < 0 )
      goto LABEL_109;
    if ( v40 )
    {
      v14 = (CMuteControlBase *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
      v15 = v14;
      v37 = v14;
      if ( v14 )
      {
        CMuteControlBase::CMuteControlBase(v14, this);
        *(_QWORD *)v15 = &CMuteHardware::`vftable';
        *((_QWORD *)v15 + 5) = 0LL;
        *((_QWORD *)v15 + 6) = 0LL;
        *((_DWORD *)v15 + 14) = 0;
      }
      else
      {
        v15 = 0LL;
      }
      if ( !v15 )
        v8 = -2147024882;
      if ( v8 < 0 )
        goto LABEL_109;
      v8 = CMuteHardware::Initialize(v15, v39, v40);
      if ( v8 < 0 )
        (*(void (__fastcall **)(CMuteControlBase *))(*(_QWORD *)v15 + 16LL))(v15);
      else
        *((_QWORD *)this + 31) = v15;
    }
    if ( *((_QWORD *)this + 31) )
      goto LABEL_37;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        18,
        (unsigned int)&WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids,
        (_DWORD)a2,
        v8);
    }
    v27 = (CMuteControlBase *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v28 = v27;
    v37 = v27;
    if ( v27 )
    {
      CMuteControlBase::CMuteControlBase(v27, this);
      *(_QWORD *)v28 = &CMuteSoftware::`vftable';
      *((_QWORD *)v28 + 5) = 0LL;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v28 + 48));
      *((_QWORD *)v28 + 11) = 0LL;
      *((_BYTE *)v28 + 96) = 0;
    }
    else
    {
      v28 = 0LL;
    }
    if ( v28 )
    {
      v8 = (*(__int64 (__fastcall **)(CMuteControlBase *, struct IMMDevice *))(*(_QWORD *)v28 + 48LL))(v28, v39);
      if ( v8 < 0 )
        (*(void (__fastcall **)(CMuteControlBase *))(*(_QWORD *)v28 + 16LL))(v28);
      else
        *((_QWORD *)this + 31) = v28;
LABEL_37:
      if ( v8 >= 0 )
      {
        if ( v40 )
        {
          v16 = (CMeterControlBase *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
          v17 = v16;
          v37 = v16;
          if ( v16 )
          {
            CMeterControlBase::CMeterControlBase(v16, this);
            *(_QWORD *)v17 = &CMeterHardware::`vftable';
            *((_QWORD *)v17 + 5) = 0LL;
            *((_QWORD *)v17 + 6) = 0LL;
          }
          else
          {
            v17 = 0LL;
          }
          if ( !v17 )
            v8 = -2147024882;
          if ( v8 < 0 )
            goto LABEL_109;
          v8 = CMeterHardware::Initialize(v17, v39, v40);
          if ( v8 < 0 )
            (*(void (__fastcall **)(CMeterControlBase *))(*(_QWORD *)v17 + 16LL))(v17);
          else
            *((_QWORD *)this + 32) = v17;
        }
        if ( *((_QWORD *)this + 32) )
        {
LABEL_47:
          if ( v8 >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 96LL))(*((_QWORD *)this + 32));
            if ( v8 >= 0 )
            {
              v18 = (CMuteHardware *)*((_QWORD *)this + 31);
              v19 = *(__int64 (__fastcall **)(CMuteHardware *__hidden))(*(_QWORD *)v18 + 96LL);
              v20 = v19 == CMuteHardware::RegisterForNotifications
                  ? CMuteHardware::RegisterForNotifications(v18)
                  : ((__int64 (*)(void))v19)();
              v8 = v20;
              if ( v20 >= 0 )
              {
                v21 = (CVolumeHardware *)*((_QWORD *)this + 30);
                v22 = *(__int64 (__fastcall **)(CVolumeHardware *__hidden))(*(_QWORD *)v21 + 192LL);
                v23 = v22 == CVolumeHardware::RegisterForNotifications
                    ? CVolumeHardware::RegisterForNotifications(v21)
                    : ((__int64 (*)(void))v22)();
                v8 = v23;
                if ( v23 >= 0 )
                  goto LABEL_55;
              }
            }
          }
          goto LABEL_109;
        }
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            19,
            (unsigned int)&WPP_e3bea070e28c3377d9986b9fba3066b8_Traceguids,
            (_DWORD)a2,
            v8);
        }
        v29 = (CMeterControlBase *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
        v30 = v29;
        v37 = v29;
        if ( v29 )
        {
          CMeterControlBase::CMeterControlBase(v29, this);
          *(_QWORD *)v30 = &CMeterSoftware::`vftable';
          *((_QWORD *)v30 + 5) = 0LL;
          ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v30 + 48));
        }
        else
        {
          v30 = 0LL;
        }
        if ( v30 )
        {
          v8 = (*(__int64 (__fastcall **)(CMeterControlBase *, struct IMMDevice *))(*(_QWORD *)v30 + 48LL))(v30, v39);
          if ( v8 < 0 )
            (*(void (__fastcall **)(CMeterControlBase *))(*(_QWORD *)v30 + 16LL))(v30);
          else
            *((_QWORD *)this + 32) = v30;
          goto LABEL_47;
        }
        goto LABEL_79;
      }
      goto LABEL_109;
    }
LABEL_79:
    v8 = -2147024882;
  }
LABEL_109:
  v31 = *((_QWORD *)this + 32);
  if ( v31 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    *((_QWORD *)this + 32) = 0LL;
  }
  v32 = *((_QWORD *)this + 31);
  if ( v32 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    *((_QWORD *)this + 31) = 0LL;
  }
  v33 = *((_QWORD *)this + 30);
  if ( v33 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    *((_QWORD *)this + 30) = 0LL;
  }
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CVolumeStrip::Initialize", 0x1FFu, v8);
LABEL_55:
  if ( v34 )
    ((void (__fastcall *)(struct IUnknown *))v34->lpVtbl->Release)(v34);
  if ( v40 )
    ((void (__fastcall *)(struct IPartsList *))v40->lpVtbl->Release)(v40);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v39 )
    ((void (__fastcall *)(struct IMMDevice *))v39->lpVtbl->Release)(v39);
  return (unsigned int)v8;
}
