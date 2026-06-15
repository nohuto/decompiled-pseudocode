/*
 * XREFs of ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x1400067C0
 * Callers:
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140002190 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?ConnectToStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x140002490 (-ConnectToStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z.c)
 * Callees:
 *     ?IsActive@CSubmixImpl@@UEAA_NXZ @ 0x1400023A0 (-IsActive@CSubmixImpl@@UEAA_NXZ.c)
 *     wil::ScopeExit__lambda_ef105e67d81a19e965bf21a75f17bf90___ @ 0x14000391C (wil--ScopeExit__lambda_ef105e67d81a19e965bf21a75f17bf90___.c)
 *     ??$out_param@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@0@AEAV?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@Z @ 0x140003F70 (--$out_param@V-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140004DC0 (-GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?OnLeftSubmixConnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005420 (-OnLeftSubmixConnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400062A0 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?GetInputFormat@CSubmixImpl@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140006D70 (-GetInputFormat@CSubmixImpl@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140006ED0 (-OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140008CE0 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140008DD0 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400141C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?GetInterruptPeriodicity@CSubmixImpl@@UEAA_JXZ @ 0x14001BBB0 (-GetInterruptPeriodicity@CSubmixImpl@@UEAA_JXZ.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memcmp_0 @ 0x14001E758 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140030CE4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14003ED34 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140045064 (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
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
  struct tWAVEFORMATEX **v13; // rdx
  __int64 (__fastcall *v14)(CSystemAudioDeviceSharedBase *, struct tWAVEFORMATEX **); // rax
  int InputFormat; // eax
  unsigned int v16; // edx
  __int128 v17; // kr00_16
  void *v18; // rcx
  unsigned __int16 *v19; // rcx
  const struct tWAVEFORMATEX *v20; // rbx
  unsigned __int16 v21; // r8
  __int16 v22; // dx
  __int128 v23; // xmm1
  __int16 v24; // r11
  __int64 v25; // xmm0_8
  int v26; // r10d
  unsigned __int16 v27; // r8
  __int128 v28; // xmm1
  __int64 v29; // xmm0_8
  int v30; // r9d
  __int16 v31; // r8
  int v32; // ecx
  __int16 v33; // ax
  __int64 v34; // rax
  CPipeInstance *v35; // rcx
  void *v36; // rcx
  __int64 (__fastcall *v37)(CSubmixImpl *, struct ISubmixInternal *, struct CPipeInstance *); // rax
  int v38; // eax
  int (*v39)(CSubmixImpl *__hidden, struct ISubmixInternal *); // rax
  _BOOL8 (__fastcall *v40)(CSubmixImpl *); // rax
  bool IsActive; // al
  __int64 v42; // rbx
  void (__fastcall *v43)(__int64); // rax
  __int64 v45; // rax
  struct tWAVEFORMATEX *v46; // rbx
  __int64 v47; // rax
  int FormatConverterPipe; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int16 v51; // r9
  __int128 v52; // xmm0
  __int64 v53; // rax
  __int64 v54; // rax
  __int16 v55; // si
  __int128 v56; // xmm0
  int v57; // eax
  CSubmixImpl *v58; // [rsp+28h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-41h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-39h] BYREF
  char v61; // [rsp+40h] [rbp-31h]
  __int128 Buf1; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v63[24]; // [rsp+58h] [rbp-19h]
  __int128 Buf2; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v65[24]; // [rsp+80h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  if ( *(_BYTE *)(a1 + 273) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x344,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      (int)v58);
    return 2147549183LL;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 136);
  v61 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *a2;
  v58 = 0LL;
  v7 = *v6;
  if ( (char *)v7 == (char *)ATL::CComObject<CStreamGroup>::QueryInterface )
    v8 = ATL::CComObject<CStreamGroup>::QueryInterface(a2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v58);
  else
    v8 = v7((__int64)a2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v58);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x348,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v8,
      (int)v58);
  }
  else if ( *(_QWORD *)(a1 + 264) )
  {
    v9 = -2005139410;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C002ELL,
      (int)v58);
  }
  else
  {
    v10 = v58;
    if ( (a3 & 1) != 0
      || ((v11 = *(__int64 (__fastcall **)(CSubmixImpl *__hidden))(*(_QWORD *)v58 + 56LL),
           v11 != CSubmixImpl::GetInterruptPeriodicity)
        ? (InterruptPeriodicity = v11(v58), v10 = v58)
        : (CSubmixImpl *)(InterruptPeriodicity = CSubmixImpl::GetInterruptPeriodicity(v58)),
          *(_QWORD *)(a1 + 192) >= InterruptPeriodicity) )
    {
      pv = 0LL;
      v13 = (struct tWAVEFORMATEX **)(wil::out_param<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
                                        (__int64)&Buf1,
                                        (__int64)&pv)
                                    + 8);
      v14 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *, struct tWAVEFORMATEX **))(*(_QWORD *)v10 + 72LL);
      if ( v14 == CSystemAudioDeviceSharedBase::GetInputFormat )
      {
        InputFormat = CSystemAudioDeviceSharedBase::GetInputFormat(v10, v13);
      }
      else if ( v14 == CSubmixImpl::GetInputFormat )
      {
        InputFormat = CSubmixImpl::GetInputFormat(v10, v13);
      }
      else
      {
        InputFormat = v14(v10, v13);
      }
      v9 = InputFormat;
      if ( v63[0] )
      {
        v17 = Buf1;
        v18 = *(void **)Buf1;
        if ( *((_QWORD *)&Buf1 + 1) != *(_QWORD *)Buf1 )
        {
          if ( v18 )
            CoTaskMemFree(v18);
          *(_QWORD *)v17 = *((_QWORD *)&v17 + 1);
        }
      }
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x356,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v9,
          (int)v58);
        goto LABEL_68;
      }
      v19 = *(unsigned __int16 **)(a1 + 176);
      v20 = (const struct tWAVEFORMATEX *)pv;
      if ( !v19 )
      {
        if ( !pv )
        {
LABEL_50:
          v35 = *(CPipeInstance **)(a1 + 232);
          if ( v35 )
            CPipeInstance::`scalar deleting destructor'(v35, v16);
          *(_QWORD *)(a1 + 232) = 0LL;
          v36 = *(void **)(a1 + 240);
          if ( v36 )
          {
            CoTaskMemFree(v36);
            *(_QWORD *)(a1 + 240) = 0LL;
          }
          *(_BYTE *)(a1 + 256) = 0;
          goto LABEL_55;
        }
        goto LABEL_90;
      }
      if ( pv )
      {
        v21 = *v19;
        v22 = -2;
        if ( *v19 == 0xFFFE )
        {
          if ( v19[8] != 22 )
          {
            v49 = *((_QWORD *)v19 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
            if ( !v49 )
              v49 = *((_QWORD *)v19 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
            if ( v49 )
            {
              v50 = *((_QWORD *)v19 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
              if ( !v50 )
                v50 = *((_QWORD *)v19 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
              if ( v50 )
                goto LABEL_90;
            }
          }
          v23 = *((_OWORD *)v19 + 1);
          Buf1 = *(_OWORD *)v19;
          v24 = Buf1;
          v25 = *((_QWORD *)v19 + 4);
          *(_OWORD *)v63 = v23;
          v26 = DWORD1(v23);
          *(_QWORD *)&v63[16] = v25;
        }
        else
        {
          if ( v19[8] && ((v21 - 1) & 0xFFFD) != 0 )
            goto LABEL_90;
          v51 = v19[1];
          if ( (unsigned __int16)(v51 - 1) > 1u || ((v19[7] - 8) & 0xFFE7) != 0 )
            goto LABEL_90;
          v52 = *(_OWORD *)v19;
          *(_WORD *)&v63[2] = v19[7];
          v24 = -2;
          v26 = (v51 == 1) + 3;
          Buf1 = v52;
          *(_DWORD *)&v63[4] = v26;
          *(GUID *)&v63[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          LOWORD(Buf1) = -2;
          *(_DWORD *)&v63[8] = v21;
        }
        v27 = *(_WORD *)pv;
        *(_WORD *)v63 = 22;
        if ( v27 == 0xFFFE )
        {
          if ( *((_WORD *)pv + 8) == 22 )
            goto LABEL_25;
          v53 = *((_QWORD *)pv + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
          if ( !v53 )
            v53 = *((_QWORD *)pv + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
          if ( !v53 )
            goto LABEL_25;
          v54 = *((_QWORD *)pv + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v54 )
            v54 = *((_QWORD *)pv + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( !v54 )
          {
LABEL_25:
            v28 = *((_OWORD *)pv + 1);
            Buf2 = *(_OWORD *)pv;
            v22 = Buf2;
            v29 = *((_QWORD *)pv + 4);
            *(_OWORD *)v65 = v28;
            v30 = DWORD1(v28);
            *(_QWORD *)&v65[16] = v29;
            goto LABEL_26;
          }
        }
        else if ( !*((_WORD *)pv + 8) || ((v27 - 1) & 0xFFFD) == 0 )
        {
          v55 = *((_WORD *)pv + 1);
          if ( (unsigned __int16)(v55 - 1) <= 1u && ((*((_WORD *)pv + 7) - 8) & 0xFFE7) == 0 )
          {
            v56 = *(_OWORD *)pv;
            *(_WORD *)&v65[2] = *((_WORD *)pv + 7);
            v30 = (v55 == 1) + 3;
            Buf2 = v56;
            *(_DWORD *)&v65[4] = v30;
            *(GUID *)&v65[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
            LOWORD(Buf2) = -2;
            *(_DWORD *)&v65[8] = v27;
LABEL_26:
            *(_WORD *)v65 = 22;
            if ( WORD1(Buf1) )
            {
              v31 = WORD1(Buf2);
            }
            else
            {
              v31 = 0;
              WORD1(Buf2) = 0;
              DWORD2(Buf2) = 0;
              WORD6(Buf2) = 0;
            }
            if ( DWORD1(Buf1) )
            {
              v32 = DWORD1(Buf2);
            }
            else
            {
              v32 = 0;
              *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
            }
            if ( HIWORD(Buf1) )
            {
              v33 = HIWORD(Buf2);
            }
            else
            {
              v33 = 0;
              HIDWORD(Buf2) = 0;
            }
            if ( !v26 )
            {
              v30 = 0;
              *(_DWORD *)&v65[4] = 0;
            }
            if ( !v24 )
            {
              v22 = 0;
              LOWORD(Buf2) = 0;
            }
            if ( !v31 )
            {
              WORD1(Buf1) = 0;
              DWORD2(Buf1) = 0;
              WORD6(Buf1) = 0;
            }
            if ( !v32 )
              *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
            if ( !v33 )
              HIDWORD(Buf1) = 0;
            if ( !v30 )
              *(_DWORD *)&v63[4] = 0;
            if ( !v22 )
              LOWORD(Buf1) = 0;
            v34 = *(_QWORD *)&v63[8] - *(_QWORD *)&v65[8];
            if ( *(_QWORD *)&v63[8] == *(_QWORD *)&v65[8] )
              v34 = *(_QWORD *)&v63[16] - *(_QWORD *)&v65[16];
            if ( !v34 && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
              goto LABEL_50;
          }
        }
      }
LABEL_90:
      v45 = (*(__int64 (__fastcall **)(CSubmixImpl *))(*(_QWORD *)v58 + 56LL))(v58);
      if ( *(_QWORD *)(a1 + 232)
        && *(_QWORD *)(a1 + 248) == v45
        && (unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(a1 + 240), v20)
        || (v46 = (struct tWAVEFORMATEX *)pv,
            v47 = (*(__int64 (__fastcall **)(CSubmixImpl *))(*(_QWORD *)v58 + 56LL))(v58),
            FormatConverterPipe = CSubmixImpl::CreateFormatConverterPipe((CSubmixImpl *)a1, v46, v47),
            v9 = FormatConverterPipe,
            FormatConverterPipe >= 0) )
      {
LABEL_55:
        *(_QWORD *)&Buf1 = a1;
        *((_QWORD *)&Buf1 + 1) = &v58;
        wil::ScopeExit__lambda_ef105e67d81a19e965bf21a75f17bf90___((__int64)&Buf2, &Buf1);
        v37 = *(__int64 (__fastcall **)(CSubmixImpl *, struct ISubmixInternal *, struct CPipeInstance *))(*(_QWORD *)a1 + 144LL);
        if ( v37 == CSubmixImpl::ConnectPipesToRightSubmix )
          v38 = CSubmixImpl::ConnectPipesToRightSubmix((CSubmixImpl *)a1, v58, 0LL);
        else
          v38 = v37((CSubmixImpl *)a1, v58, 0LL);
        v9 = v38;
        if ( v38 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x370,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)v38,
            (int)v58);
          if ( v65[0] )
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)Buf2 + 152LL))(Buf2, **((_QWORD **)&Buf2 + 1));
        }
        else
        {
          v39 = *(int (**)(CSubmixImpl *__hidden, struct ISubmixInternal *))(*(_QWORD *)v58 + 80LL);
          if ( (char *)v39 == (char *)CSystemAudioDeviceSharedBase::OnLeftSubmixConnected )
          {
            CSystemAudioDeviceSharedBase::OnLeftSubmixConnected(v58, (struct ISubmixInternal *)a1);
          }
          else if ( v39 == CSubmixImpl::OnLeftSubmixConnected )
          {
            CSubmixImpl::OnLeftSubmixConnected(v58, (struct ISubmixInternal *)a1);
          }
          else
          {
            ((void (__fastcall *)(CSubmixImpl *, __int64))v39)(v58, a1);
          }
          v40 = *(_BOOL8 (__fastcall **)(CSubmixImpl *))(*(_QWORD *)a1 + 136LL);
          if ( v40 == CSubmixImpl::IsActive )
            IsActive = CSubmixImpl::IsActive((CSubmixImpl *)a1);
          else
            IsActive = v40((CSubmixImpl *)a1);
          if ( IsActive
            && (v57 = (*(__int64 (__fastcall **)(CSubmixImpl *, __int64))(*(_QWORD *)v58 + 96LL))(v58, a1),
                v9 = v57,
                v57 < 0) )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x37B,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
              (const char *)(unsigned int)v57,
              (int)v58);
          }
          else
          {
            v42 = *(_QWORD *)(a1 + 264);
            *(_QWORD *)(a1 + 264) = a2;
            v43 = (void (__fastcall *)(__int64))(*a2)[1];
            if ( (char *)v43 == (char *)ATL::CComObject<CStreamGroup>::AddRef )
              ATL::CComObject<CStreamGroup>::AddRef(a2);
            else
              v43((__int64)a2);
            if ( v42 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
            PublishDeviceGraphWnfState();
            v9 = 0;
          }
        }
        goto LABEL_68;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x35F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)FormatConverterPipe,
        (int)v58);
LABEL_68:
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_70;
    }
    v9 = -2005139386;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x352,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C0046LL,
      (int)v58);
  }
LABEL_70:
  if ( v58 )
    (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)v58 + 16LL))(v58);
  if ( v61 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v9;
}
