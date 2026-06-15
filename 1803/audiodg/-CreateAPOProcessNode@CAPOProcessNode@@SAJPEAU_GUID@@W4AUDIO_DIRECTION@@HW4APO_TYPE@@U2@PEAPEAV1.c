/*
 * XREFs of ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000FBD0
 * Callers:
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140006B20 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000B3B0 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B540 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000C180 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140010960 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x1400115D0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003DE30 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x14000FFA0 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _wcsicmp @ 0x14001CA54 (_wcsicmp.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF__guid_ @ 0x14003E518 (WPP_SF__guid_.c)
 */

__int64 __fastcall CAPOProcessNode::CreateAPOProcessNode(
        const struct _GUID *a1,
        int a2,
        int a3,
        int a4,
        __int128 *a5,
        _QWORD *a6)
{
  int v6; // r15d
  unsigned int v9; // ebx
  int v10; // r14d
  LSTATUS v11; // eax
  int Common; // edi
  DWORD v13; // esi
  HKEY v14; // r15
  LSTATUS v15; // eax
  int v16; // esi
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  char *v19; // rcx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // eax
  _QWORD *v23; // rax
  LSTATUS v25; // eax
  LSTATUS v26; // eax
  CLSID *v27; // rcx
  __int64 v28; // rdx
  APO_REG_PROPERTIES *v29; // rax
  CLSID clsid; // xmm0
  CLSID v31; // xmm1
  CLSID v32; // xmm0
  CLSID v33; // xmm1
  CLSID v34; // xmm0
  CLSID v35; // xmm1
  CLSID v36; // xmm0
  IID v37; // xmm1
  CLSID v38; // xmm1
  CLSID v39; // xmm0
  CLSID v40; // xmm1
  unsigned int v41; // eax
  int phkResult; // [rsp+20h] [rbp-E0h]
  DWORD cchName; // [rsp+40h] [rbp-C0h] BYREF
  LPOLESTR lpsz; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+54h] [rbp-ACh]
  HKEY v47; // [rsp+58h] [rbp-A8h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A0h] BYREF
  DWORD Type; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v50; // [rsp+70h] [rbp-90h]
  struct _FILETIME ftLastWriteTime; // [rsp+78h] [rbp-88h] BYREF
  __int128 v52; // [rsp+80h] [rbp-80h] BYREF
  int v53; // [rsp+90h] [rbp-70h]
  int v54; // [rsp+4A0h] [rbp+3A0h]
  int v55; // [rsp+4A8h] [rbp+3A8h]
  GUID pclsid; // [rsp+4D0h] [rbp+3D0h] BYREF
  APO_REG_PROPERTIES v57; // [rsp+4E0h] [rbp+3E0h] BYREF
  WCHAR Name[512]; // [rsp+930h] [rbp+830h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D68h] [rbp+C68h]

  v6 = a4;
  v50 = a6;
  v45 = a4;
  v46 = a3;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_b0b678a55dcf3cc4e3459249774c166a_Traceguids, a1);
  }
  v9 = 0;
  v10 = 0;
  v11 = RegOpenKeyExW(HKEY_CLASSES_ROOT, L"AudioEngine\\AudioProcessingObjects", 0, 0x20019u, &hKey);
  Common = v11;
  if ( v11 )
  {
    if ( v11 > 0 )
      Common = (unsigned __int16)v11 | 0x80070000;
  }
  else
  {
    v13 = 0;
    do
    {
      v14 = hKey;
      lpsz = 0LL;
      v10 = 0;
      cchName = 512;
      v15 = RegEnumKeyExW(hKey, v13, Name, &cchName, 0LL, 0LL, 0LL, &ftLastWriteTime);
      if ( !v15 || v15 == 234 )
      {
        Common = StringFromCLSID(a1, &lpsz);
        if ( Common >= 0 && !wcsicmp(Name, lpsz) )
        {
          v25 = RegOpenKeyExW(v14, Name, 0, 0x20019u, &v47);
          Common = v25;
          if ( v25 )
          {
            if ( v25 > 0 )
              Common = (unsigned __int16)v25 | 0x80070000;
          }
          else
          {
            Common = InnerGetCommon(v47, a1, &v57);
            if ( Common >= 0 )
            {
              v57.u32NumAPOInterfaces = 1;
              cchName = 1024;
              v26 = RegQueryValueExW(v47, L"APOInterface0", 0LL, &Type, (LPBYTE)Name, &cchName);
              Common = v26;
              if ( v26 )
              {
                if ( v26 > 0 )
                  Common = (unsigned __int16)v26 | 0x80070000;
              }
              else
              {
                Common = CLSIDFromString(Name, &pclsid);
                if ( Common >= 0 )
                {
                  v27 = (CLSID *)&v52;
                  v28 = 8LL;
                  v29 = &v57;
                  v57.iidAPOInterfaceList[0] = pclsid;
                  do
                  {
                    v27 += 8;
                    clsid = v29->clsid;
                    v31 = *(CLSID *)&v29->Flags;
                    v29 = (APO_REG_PROPERTIES *)((char *)v29 + 128);
                    v27[-8] = clsid;
                    v32 = *(CLSID *)&v29[-1].szCopyrightInfo[232];
                    v27[-7] = v31;
                    v33 = *(CLSID *)&v29[-1].szCopyrightInfo[240];
                    v27[-6] = v32;
                    v34 = *(CLSID *)&v29[-1].szCopyrightInfo[248];
                    v27[-5] = v33;
                    v35 = *(CLSID *)&v29[-1].u32MajorVersion;
                    v27[-4] = v34;
                    v36 = *(CLSID *)&v29[-1].u32MinOutputConnections;
                    v27[-3] = v35;
                    v37 = v29[-1].iidAPOInterfaceList[0];
                    v27[-2] = v36;
                    v27[-1] = v37;
                    --v28;
                  }
                  while ( v28 );
                  v10 = 1;
                  v38 = *(CLSID *)&v29->Flags;
                  *v27 = v29->clsid;
                  v39 = *(CLSID *)&v29->szFriendlyName[6];
                  v27[1] = v38;
                  v40 = *(CLSID *)&v29->szFriendlyName[14];
                  v41 = *(_DWORD *)&v29->szFriendlyName[22];
                  v27[2] = v39;
                  v27[3] = v40;
                  v27[4].Data1 = v41;
                }
              }
            }
            RegCloseKey(v47);
          }
        }
      }
      else
      {
        Common = -2005139398;
      }
      if ( lpsz )
      {
        CoTaskMemFree(lpsz);
        lpsz = 0LL;
      }
      if ( Common < 0 )
        break;
      ++v13;
    }
    while ( !v10 );
    RegCloseKey(hKey);
    v6 = v45;
  }
  if ( Common < 0 )
    goto LABEL_41;
  if ( !v10 )
  {
    Common = -2005139430;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x206,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)Common,
      phkResult);
    return (unsigned int)Common;
  }
  v16 = v53;
  if ( v55 == 1 && v54 == 1 || (v53 & 0x10) != 0 )
  {
    v17 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v17;
    if ( v17 )
    {
      v17[1] = 0LL;
      v17[2] = 0LL;
      *((_DWORD *)v17 + 6) = a2;
      v17[4] = 0LL;
      *((_DWORD *)v17 + 10) = 2;
      *v17 = &CAPOProcessNode::`vftable';
      *((_DWORD *)v17 + 12) = v16;
      v19 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v19 )
      {
        v20 = v52;
        v21 = *a5;
        v22 = v46;
        *((_QWORD *)v19 + 5) = 0LL;
        *(_DWORD *)v19 = v22;
        v23 = v50;
        *((_DWORD *)v19 + 12) = 1;
        *((_DWORD *)v19 + 13) = 1;
        *((_DWORD *)v19 + 1) = v6;
        *(_OWORD *)(v19 + 8) = v20;
        *(_OWORD *)(v19 + 24) = v21;
        v18[4] = v19;
        *v23 = v18;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x20F,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
          (const char *)0x8007000ELL,
          phkResult);
        v9 = -2147024882;
        (*(void (__fastcall **)(_QWORD *, __int64))*v18)(v18, 1LL);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20C,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)0x8007000ELL,
        phkResult);
      return (unsigned int)-2147024882;
    }
    return v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x209,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)0x887C0037LL,
      phkResult);
    return 2289827895LL;
  }
}
