/*
 * XREFs of ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400112E0
 * Callers:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000BAE0 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BC70 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000CC90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140011CE0 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140012AD0 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400145A0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003F364 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400116C0 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14001DC14 (_wcsicmp.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     WPP_SF__guid_ @ 0x14003FBC8 (WPP_SF__guid_.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAPOProcessNode::CreateAPOProcessNode(
        const struct _GUID *a1,
        int a2,
        int a3,
        int a4,
        __int128 *a5,
        _QWORD *a6)
{
  int v7; // esi
  int v10; // r14d
  LSTATUS v11; // eax
  int Common; // ebx
  OLECHAR *lpClass; // rcx
  DWORD v14; // edi
  HKEY v15; // rsi
  LSTATUS v16; // eax
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  char *v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _QWORD *v22; // rcx
  LSTATUS v24; // eax
  LSTATUS v25; // eax
  CLSID *v26; // rcx
  __int64 v27; // rdx
  struct APO_REG_PROPERTIES *v28; // rax
  CLSID clsid; // xmm0
  CLSID v30; // xmm1
  CLSID v31; // xmm0
  CLSID v32; // xmm1
  CLSID v33; // xmm0
  CLSID v34; // xmm1
  CLSID v35; // xmm0
  IID v36; // xmm1
  CLSID v37; // xmm1
  CLSID v38; // xmm0
  CLSID v39; // xmm1
  unsigned int v40; // eax
  DWORD cchName; // [rsp+40h] [rbp-C0h] BYREF
  LPOLESTR lpsz; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+50h] [rbp-B0h]
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A0h] BYREF
  struct _FILETIME ftLastWriteTime; // [rsp+68h] [rbp-98h] BYREF
  DWORD Type; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v48; // [rsp+78h] [rbp-88h]
  __int128 v49; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+90h] [rbp-70h]
  int v51; // [rsp+4A0h] [rbp+3A0h]
  int v52; // [rsp+4A8h] [rbp+3A8h]
  GUID pclsid; // [rsp+4D0h] [rbp+3D0h] BYREF
  struct APO_REG_PROPERTIES v54; // [rsp+4E0h] [rbp+3E0h] BYREF
  WCHAR Name[512]; // [rsp+930h] [rbp+830h] BYREF

  v7 = a3;
  v48 = a6;
  v43 = a3;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids, a1);
  }
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
    lpClass = 0LL;
    v14 = 0;
    do
    {
      v15 = hKey;
      v10 = (int)lpClass;
      lpsz = lpClass;
      cchName = 512;
      v16 = RegEnumKeyExW(hKey, v14, Name, &cchName, (LPDWORD)lpClass, lpClass, (LPDWORD)lpClass, &ftLastWriteTime);
      if ( !v16 || v16 == 234 )
      {
        Common = StringFromCLSID(a1, &lpsz);
        if ( Common >= 0 && !wcsicmp(Name, lpsz) )
        {
          v24 = RegOpenKeyExW(v15, Name, 0, 0x20019u, &phkResult);
          Common = v24;
          if ( v24 )
          {
            if ( v24 > 0 )
              Common = (unsigned __int16)v24 | 0x80070000;
          }
          else
          {
            Common = InnerGetCommon(phkResult, a1, &v54);
            if ( Common >= 0 )
            {
              v54.u32NumAPOInterfaces = 1;
              cchName = 1024;
              v25 = RegQueryValueExW(phkResult, L"APOInterface0", 0LL, &Type, (LPBYTE)Name, &cchName);
              Common = v25;
              if ( v25 )
              {
                if ( v25 > 0 )
                  Common = (unsigned __int16)v25 | 0x80070000;
              }
              else
              {
                Common = CLSIDFromString(Name, &pclsid);
                if ( Common >= 0 )
                {
                  v26 = (CLSID *)&v49;
                  v27 = 8LL;
                  v28 = &v54;
                  v54.iidAPOInterfaceList[0] = pclsid;
                  do
                  {
                    v26 += 8;
                    clsid = v28->clsid;
                    v30 = *(CLSID *)&v28->Flags;
                    v28 = (struct APO_REG_PROPERTIES *)((char *)v28 + 128);
                    v26[-8] = clsid;
                    v31 = *(CLSID *)&v28[-1].szCopyrightInfo[232];
                    v26[-7] = v30;
                    v32 = *(CLSID *)&v28[-1].szCopyrightInfo[240];
                    v26[-6] = v31;
                    v33 = *(CLSID *)&v28[-1].szCopyrightInfo[248];
                    v26[-5] = v32;
                    v34 = *(CLSID *)&v28[-1].u32MajorVersion;
                    v26[-4] = v33;
                    v35 = *(CLSID *)&v28[-1].u32MinOutputConnections;
                    v26[-3] = v34;
                    v36 = v28[-1].iidAPOInterfaceList[0];
                    v26[-2] = v35;
                    v26[-1] = v36;
                    --v27;
                  }
                  while ( v27 );
                  v10 = 1;
                  v37 = *(CLSID *)&v28->Flags;
                  *v26 = v28->clsid;
                  v38 = *(CLSID *)&v28->szFriendlyName[6];
                  v26[1] = v37;
                  v39 = *(CLSID *)&v28->szFriendlyName[14];
                  v40 = *(_DWORD *)&v28->szFriendlyName[22];
                  v26[2] = v38;
                  v26[3] = v39;
                  v26[4].Data1 = v40;
                }
              }
            }
            RegCloseKey(phkResult);
          }
        }
      }
      else
      {
        Common = -2005139398;
      }
      lpClass = lpsz;
      if ( lpsz )
      {
        CoTaskMemFree(lpsz);
        lpClass = 0LL;
        lpsz = 0LL;
      }
      if ( Common < 0 )
        break;
      ++v14;
    }
    while ( !v10 );
    RegCloseKey(hKey);
    v7 = v43;
  }
  if ( Common >= 0 )
  {
    if ( !v10 )
      Common = -2005139430;
    if ( Common >= 0 )
    {
      if ( v52 == 1 && v51 == 1 )
      {
        v17 = operator new(0x38uLL);
        ftLastWriteTime = (struct _FILETIME)v17;
        v18 = v17;
        if ( v17 )
        {
          v17[1] = 0LL;
          v17[2] = 0LL;
          *((_DWORD *)v17 + 6) = a2;
          v17[4] = 0LL;
          *((_DWORD *)v17 + 10) = 2;
          *v17 = &CAPOProcessNode::`vftable';
          *((_DWORD *)v17 + 12) = v50;
        }
        else
        {
          v18 = 0LL;
        }
        if ( v18 )
        {
          v19 = (char *)operator new(0x38uLL);
          ftLastWriteTime = (struct _FILETIME)v19;
          if ( v19 )
          {
            v20 = v49;
            v21 = *a5;
            v22 = v48;
            *((_QWORD *)v19 + 5) = 0LL;
            *((_DWORD *)v19 + 12) = 1;
            *(_DWORD *)v19 = v7;
            *((_DWORD *)v19 + 1) = a4;
            *(_OWORD *)(v19 + 8) = v20;
            *(_OWORD *)(v19 + 24) = v21;
            *v22 = v18;
            v18[4] = v19;
            return (unsigned int)Common;
          }
        }
        Common = -2147024882;
        if ( v18 )
          (*(void (__fastcall **)(_QWORD *, __int64))*v18)(v18, 1LL);
      }
      else
      {
        Common = -2005139401;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19LL,
      &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids,
      (unsigned int)Common);
  }
  AudDGTraceLoggingErrorHelper("CAPOProcessNode::CreateAPOProcessNode", 0x222u, Common);
  return (unsigned int)Common;
}
