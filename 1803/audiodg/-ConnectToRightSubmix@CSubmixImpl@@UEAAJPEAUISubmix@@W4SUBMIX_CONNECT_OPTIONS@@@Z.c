/*
 * XREFs of ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140004D40
 * Callers:
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140002170 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?ConnectToStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x140002470 (-ConnectToStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z.c)
 * Callees:
 *     ?IsActive@CSubmixImpl@@UEAA_NXZ @ 0x140002380 (-IsActive@CSubmixImpl@@UEAA_NXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x140003B40 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400047E0 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?GetInputFormat@CSubmixImpl@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140005180 (-GetInputFormat@CSubmixImpl@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400052D0 (-OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?GetInterruptPeriodicity@CSubmixImpl@@UEAA_JXZ @ 0x140006690 (-GetInterruptPeriodicity@CSubmixImpl@@UEAA_JXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140007B00 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140012000 (-GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?OnLeftSubmixConnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400125C0 (-OnLeftSubmixConnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015040 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140015130 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14002F3F4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140044214 (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 */

__int64 __fastcall CSubmixImpl::ConnectToRightSubmix(
        __int64 a1,
        __int64 (__fastcall ***a2)(__int64, GUID *, CSubmixImpl **),
        char a3)
{
  __int64 (__fastcall **v6)(__int64, GUID *, CSubmixImpl **); // rax
  __int64 (__fastcall *v7)(__int64, GUID *, CSubmixImpl **); // rax
  int v8; // eax
  int v9; // ebx
  CSubmixImpl *v10; // rbx
  __int64 (__fastcall *v11)(CSubmixImpl *__hidden); // rax
  __int64 InterruptPeriodicity; // rax
  int (*v13)(CSystemAudioDeviceSharedBase *__hidden, struct tWAVEFORMATEX **); // rax
  int InputFormat; // eax
  struct tWAVEFORMATEX *v15; // r14
  _QWORD *v16; // r15
  struct tWAVEFORMATEX *v17; // rcx
  unsigned int v18; // edx
  CPipeInstance *v19; // rcx
  void *v20; // rcx
  __int64 (__fastcall *v21)(CSubmixImpl *, struct ISubmixInternal *, struct CPipeInstance *); // rax
  int v22; // eax
  int (*v23)(CSubmixImpl *__hidden, struct ISubmixInternal *); // rax
  bool (__fastcall *v24)(CSubmixImpl *); // rax
  bool IsActive; // al
  __int64 v26; // rbx
  void (__fastcall *v27)(__int64); // rax
  const struct tWAVEFORMATEX *v29; // rbx
  __int64 v30; // rax
  struct tWAVEFORMATEX *v31; // rbx
  __int64 v32; // rax
  int FormatConverterPipe; // eax
  int v34; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v36; // [rsp+28h] [rbp-30h]
  LPVOID *p_pv; // [rsp+30h] [rbp-28h]
  struct tWAVEFORMATEX *v38; // [rsp+38h] [rbp-20h] BYREF
  char v39; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+20h]
  CSubmixImpl *v41; // [rsp+80h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+40h] BYREF

  if ( *(_BYTE *)(a1 + 273) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x349,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      (int)lpCriticalSection);
    return 2147549183LL;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 136);
  v36 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *a2;
  v41 = 0LL;
  v7 = *v6;
  if ( (char *)v7 == (char *)ATL::CComObject<CStreamGroup>::QueryInterface )
    v8 = ATL::CComObject<CStreamGroup>::QueryInterface(a2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v41);
  else
    v8 = v7((__int64)a2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v41);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v8,
      (int)lpCriticalSection);
  }
  else if ( *(_QWORD *)(a1 + 264) )
  {
    v9 = -2005139410;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x352,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C002ELL,
      (int)lpCriticalSection);
  }
  else
  {
    v10 = v41;
    if ( (a3 & 1) != 0
      || ((v11 = *(__int64 (__fastcall **)(CSubmixImpl *__hidden))(*(_QWORD *)v41 + 56LL),
           v11 != CSubmixImpl::GetInterruptPeriodicity)
        ? (InterruptPeriodicity = v11(v41), v10 = v41)
        : (CSubmixImpl *)(InterruptPeriodicity = CSubmixImpl::GetInterruptPeriodicity(v41)),
          *(_QWORD *)(a1 + 192) >= InterruptPeriodicity) )
    {
      pv = 0LL;
      p_pv = &pv;
      v38 = 0LL;
      v39 = 1;
      v13 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct tWAVEFORMATEX **))(*(_QWORD *)v10 + 72LL);
      if ( v13 == CSystemAudioDeviceSharedBase::GetInputFormat )
      {
        InputFormat = CSystemAudioDeviceSharedBase::GetInputFormat(v10, &v38);
      }
      else if ( (char *)v13 == (char *)CSubmixImpl::GetInputFormat )
      {
        InputFormat = CSubmixImpl::GetInputFormat(v10, &v38);
      }
      else
      {
        InputFormat = ((__int64 (__fastcall *)(CSubmixImpl *, struct tWAVEFORMATEX **))v13)(v10, &v38);
      }
      v9 = InputFormat;
      if ( v39 )
      {
        v15 = v38;
        v16 = p_pv;
        v17 = (struct tWAVEFORMATEX *)*p_pv;
        if ( v38 != *p_pv )
        {
          if ( v17 )
            CoTaskMemFree(v17);
          *v16 = v15;
        }
      }
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x35B,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v9,
          (int)lpCriticalSection);
      }
      else
      {
        if ( (unsigned int)CompareWaveFormat(
                             *(const struct tWAVEFORMATEX **)(a1 + 176),
                             (const struct tWAVEFORMATEX *)pv) )
        {
          v19 = *(CPipeInstance **)(a1 + 232);
          if ( v19 )
            CPipeInstance::`scalar deleting destructor'(v19, v18);
          *(_QWORD *)(a1 + 232) = 0LL;
          v20 = *(void **)(a1 + 240);
          if ( v20 )
          {
            CoTaskMemFree(v20);
            *(_QWORD *)(a1 + 240) = 0LL;
          }
          *(_BYTE *)(a1 + 256) = 0;
          goto LABEL_24;
        }
        v29 = (const struct tWAVEFORMATEX *)pv;
        v30 = (*(__int64 (__fastcall **)(CSubmixImpl *))(*(_QWORD *)v41 + 56LL))(v41);
        if ( *(_QWORD *)(a1 + 232)
          && *(_QWORD *)(a1 + 248) == v30
          && (unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(a1 + 240), v29)
          || (v31 = (struct tWAVEFORMATEX *)pv,
              v32 = (*(__int64 (__fastcall **)(CSubmixImpl *))(*(_QWORD *)v41 + 56LL))(v41),
              FormatConverterPipe = CSubmixImpl::CreateFormatConverterPipe((CSubmixImpl *)a1, v31, v32),
              v9 = FormatConverterPipe,
              FormatConverterPipe >= 0) )
        {
LABEL_24:
          v21 = *(__int64 (__fastcall **)(CSubmixImpl *, struct ISubmixInternal *, struct CPipeInstance *))(*(_QWORD *)a1 + 144LL);
          if ( v21 == CSubmixImpl::ConnectPipesToRightSubmix )
            v22 = CSubmixImpl::ConnectPipesToRightSubmix((CSubmixImpl *)a1, v41, 0LL);
          else
            v22 = v21((CSubmixImpl *)a1, v41, 0LL);
          v9 = v22;
          if ( v22 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x375,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
              (const char *)(unsigned int)v22,
              (int)lpCriticalSection);
            (*(void (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)a1 + 152LL))(a1, v41);
          }
          else
          {
            v23 = *(int (**)(CSubmixImpl *__hidden, struct ISubmixInternal *))(*(_QWORD *)v41 + 80LL);
            if ( (char *)v23 == (char *)CSystemAudioDeviceSharedBase::OnLeftSubmixConnected )
            {
              CSystemAudioDeviceSharedBase::OnLeftSubmixConnected(v41, (struct ISubmixInternal *)a1);
            }
            else if ( v23 == CSubmixImpl::OnLeftSubmixConnected )
            {
              CSubmixImpl::OnLeftSubmixConnected(v41, (struct ISubmixInternal *)a1);
            }
            else
            {
              ((void (__fastcall *)(CSubmixImpl *, __int64))v23)(v41, a1);
            }
            v24 = *(bool (__fastcall **)(CSubmixImpl *))(*(_QWORD *)a1 + 136LL);
            if ( v24 == CSubmixImpl::IsActive )
              IsActive = CSubmixImpl::IsActive((CSubmixImpl *)a1);
            else
              IsActive = v24((CSubmixImpl *)a1);
            if ( IsActive
              && (v34 = (*(__int64 (__fastcall **)(CSubmixImpl *, __int64))(*(_QWORD *)v41 + 96LL))(v41, a1),
                  v9 = v34,
                  v34 < 0) )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x387,
                (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                (const char *)(unsigned int)v34,
                (int)lpCriticalSection);
              (*(void (__fastcall **)(CSubmixImpl *, __int64))(*(_QWORD *)v41 + 88LL))(v41, a1);
            }
            else
            {
              v26 = *(_QWORD *)(a1 + 264);
              *(_QWORD *)(a1 + 264) = a2;
              v27 = (void (__fastcall *)(__int64))(*a2)[1];
              if ( (char *)v27 == (char *)ATL::CComObject<CStreamGroup>::AddRef )
                ATL::CComObject<CStreamGroup>::AddRef(a2);
              else
                v27((__int64)a2);
              if ( v26 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
              PublishDeviceGraphWnfState();
              v9 = 0;
            }
          }
          goto LABEL_37;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x364,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)FormatConverterPipe,
          (int)lpCriticalSection);
      }
LABEL_37:
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_39;
    }
    v9 = -2005139386;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x357,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C0046LL,
      (int)lpCriticalSection);
  }
LABEL_39:
  if ( v41 )
    (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v36 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v9;
}
