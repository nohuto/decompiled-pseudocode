/*
 * XREFs of ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800413D0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800051EC (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18000AC5C (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18000C374 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x18000CB54 (-Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18003C194 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180087020 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x180095590 (-Free@ARI@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180098368 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800983C8 (_Init_thread_header.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x18010B8EC (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z @ 0x18010ED28 (-_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z.c)
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1801125B4 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180142830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_AnalyzeShellNotification(
        CApplicationManager *this,
        struct CApplicationManager::HSHELL_DATA *a2)
{
  unsigned __int8 v4; // si
  HWND v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r14
  HWND v8; // rdx
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rax
  HWND v12; // rbx
  __int64 v13; // rcx
  HWND v14; // rdx
  int v15; // ecx
  HANDLE v16; // r12
  int v17; // r14d
  __int64 v18; // rsi
  NTSTATUS v19; // eax
  void *v20; // rdx
  unsigned __int128 v21; // rax
  __int64 v22; // rbx
  int v23; // eax
  signed int LastError; // esi
  HWND v25; // rbx
  char v26; // al
  int v28; // edx
  ShellManagedWindowHelper *v29; // r14
  unsigned int v30; // eax
  int v31; // ecx
  unsigned __int64 v32; // rdx
  __int64 VisibleRootOwner; // rax
  unsigned int v34; // esi
  const UNICODE_STRING *v35; // r14
  void *v36; // rdx
  unsigned __int64 v37; // r13
  unsigned int *v38; // rbx
  unsigned __int64 v39; // rsi
  unsigned int *v40; // rax
  unsigned __int64 v41; // rcx
  unsigned int *v42; // r9
  int v43; // r10d
  __int64 v44; // r8
  char *v45; // rdx
  unsigned __int64 v46; // rsi
  unsigned int AppUserModelId; // eax
  __int64 v48; // rcx
  int v49; // edx
  int v50; // edx
  RTL_SRWLOCK *v51; // rbx
  int First; // eax
  int v53; // ecx
  HWND v54; // rdx
  CApplicationManager *v55; // rcx
  ATOM PropW; // si
  __int64 v57; // rdx
  __int64 v58; // rcx
  LPWSTR v59; // rbx
  signed int v60; // eax
  LPWSTR v61; // rax
  void *v62; // rdx
  void *v63; // rdx
  void *v64; // rdx
  __int16 v65; // ax
  void *v66; // rdx
  void *v67; // rdx
  unsigned __int16 *ReturnLength; // [rsp+20h] [rbp-89h]
  unsigned __int16 *ReturnLengtha; // [rsp+20h] [rbp-89h]
  unsigned int ReturnLengthb; // [rsp+20h] [rbp-89h]
  ULONG TokenInformationLength; // [rsp+30h] [rbp-79h] BYREF
  int v72; // [rsp+34h] [rbp-75h] BYREF
  struct _TOKEN_SECURITY_ATTRIBUTE_V1 *v73; // [rsp+38h] [rbp-71h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-69h] BYREF
  void *TokenHandle; // [rsp+50h] [rbp-59h] BYREF
  int v76; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v77; // [rsp+5Ch] [rbp-4Dh] BYREF
  DWORD dwProcessId; // [rsp+60h] [rbp-49h] BYREF
  int pvAttribute; // [rsp+64h] [rbp-45h] BYREF
  __int64 v80; // [rsp+68h] [rbp-41h] BYREF
  LPWSTR lpBuffer; // [rsp+70h] [rbp-39h] BYREF
  int v82; // [rsp+78h] [rbp-31h] BYREF
  __int64 v83; // [rsp+80h] [rbp-29h] BYREF
  int v84; // [rsp+88h] [rbp-21h]
  __int64 v85; // [rsp+90h] [rbp-19h]
  PSRWLOCK v86; // [rsp+98h] [rbp-11h]
  __int64 v87; // [rsp+A0h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-1h] BYREF
  _DWORD v89[4]; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v85 = -2LL;
  if ( ((*(_QWORD *)a2 - 18LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
    return 1;
  v4 = 0;
  v5 = (HWND)*((_QWORD *)a2 + 1);
  if ( dword_180438B18 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180438B18);
    if ( dword_180438B18 == -1 )
    {
      word_1804385D0 = GetClassInfoW(0LL, L"Ghost", &WndClass);
      Init_thread_footer(&dword_180438B18);
    }
  }
  if ( (unsigned __int16)GetClassLongW(v5, -32) == word_1804385D0 )
  {
    if ( ((*(_QWORD *)a2 - 17LL) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    {
      *((_QWORD *)a2 + 5) = *((_QWORD *)a2 + 1);
      *((_QWORD *)a2 + 1) = HungWindowFromGhostWindow();
    }
    else
    {
      *((_QWORD *)a2 + 1) = 0LL;
    }
  }
  if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
  {
    v89[0] = 20;
    v89[1] = 19;
    v89[2] = 23;
    v89[3] = 32;
    v48 = 0LL;
    while ( *(_QWORD *)a2 != v89[v48] )
    {
      if ( (unsigned __int64)++v48 >= 4 )
      {
        *((_QWORD *)a2 + 1) = 0LL;
        break;
      }
    }
  }
  v6 = *((_QWORD *)a2 + 1);
  if ( !v6 || !(unsigned int)GetWindowBand(v6, (char *)a2 + 24) )
    return v4;
  v7 = *((_QWORD *)a2 + 1);
  if ( (unsigned int)GetWindowBand(v7, &v76)
    && ((v76 == 1 || v76 == 8) && v76 != 1 || v76 == 1 && (unsigned int)IsShellManagedWindow(v7))
    && !GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
  {
    *((_DWORD *)a2 + 4) = 2;
  }
  else
  {
    v28 = *((_DWORD *)a2 + 6);
    v29 = (ShellManagedWindowHelper *)*((_QWORD *)a2 + 1);
    if ( ((unsigned int)(v28 - 1) <= 1 || v28 == 16)
      && (!(unsigned int)IsShellManagedWindow(*((_QWORD *)a2 + 1))
       || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(v29, v8))
      || GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
    {
      *((_DWORD *)a2 + 4) = 1;
    }
    else
    {
      v30 = *((_DWORD *)a2 + 6);
      if ( v30 == 13 )
      {
        *((_DWORD *)a2 + 4) = 3;
      }
      else if ( v30 <= 0x11 && (v31 = 131344, _bittest(&v31, v30)) )
      {
        v51 = CApplicationManagerUtility::g_pIAMGlobals;
        v86 = CApplicationManagerUtility::g_pIAMGlobals;
        AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
        v80 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v80);
        v83 = *((_QWORD *)a2 + 1);
        v84 = 2;
        First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                  (__int64)this,
                  (int)&v83,
                  &v80,
                  &v87);
        v53 = 4;
        if ( First >= 0 )
          v53 = 2;
        *((_DWORD *)a2 + 4) = v53;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v80);
        if ( v51 )
          ReleaseSRWLockShared(v51);
      }
      else
      {
        *((_DWORD *)a2 + 4) = 4;
      }
    }
  }
  *((_BYTE *)a2 + 28) = 0;
  v72 = 0;
  v9 = *((_QWORD *)this + 96);
  if ( v9
    && (*(int (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v9 + 48LL))(
         v9,
         *((unsigned int *)a2 + 2),
         0LL,
         &v72) >= 0
    && v72 == 1 )
  {
    *((_BYTE *)a2 + 28) = 1;
  }
  v10 = *((_DWORD *)a2 + 4);
  if ( (unsigned int)(v10 - 2) > 1 )
  {
    v32 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 == 34LL )
      return v4;
    if ( v10 != 1 )
    {
      if ( v32 == 20 )
      {
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 95) )
          return 1;
      }
      else if ( v32 > 0x1B )
      {
        return 0;
      }
      return ((unsigned int)v32 >= 0x17 || (unsigned int)v32 < 0x14)
          && ((_DWORD)v32 == 19 || (_DWORD)v32 == 23 || (unsigned int)v32 > 0x18);
    }
    if ( v32 > 0x16 )
      goto LABEL_44;
    if ( (_DWORD)v32 != 20 )
    {
      v49 = v32 - 17;
      if ( v49 )
      {
        v50 = v49 - 4;
        if ( !v50 )
          goto LABEL_46;
        if ( v50 != 1 )
        {
LABEL_44:
          v25 = (HWND)*((_QWORD *)a2 + 1);
          if ( *((_BYTE *)a2 + 20) )
          {
            if ( (GetWindowLongPtrW(v25, -20) & 0x40000) == 0 )
            {
LABEL_46:
              v26 = 0;
LABEL_47:
              *((_BYTE *)a2 + 21) = v26;
              return 1;
            }
          }
          else if ( (GetWindowLongPtrW(v25, -20) & 0x40000) == 0 && (GetWindowLongPtrW(v25, -20) & 0x8000080) != 0 )
          {
            goto LABEL_46;
          }
        }
      }
    }
    v26 = 1;
    goto LABEL_47;
  }
  v11 = *(_QWORD *)a2;
  if ( *((_BYTE *)a2 + 20) )
  {
    if ( v11 == 24 )
    {
      VisibleRootOwner = 0LL;
    }
    else
    {
      VisibleRootOwner = CApplicationManagerUtility::GetVisibleRootOwner(*((_QWORD *)a2 + 1), v11 == 21);
      *((_BYTE *)a2 + 20) = 0;
    }
    goto LABEL_66;
  }
  if ( v11 == 32 && CApplicationManagerUtility::IsOwnedWindow(*((CApplicationManagerUtility **)a2 + 1), v8) )
  {
    VisibleRootOwner = CApplicationManagerUtility::GetVisibleRootOwner(*((_QWORD *)a2 + 1), 0LL);
LABEL_66:
    *((_QWORD *)a2 + 1) = VisibleRootOwner;
  }
  v12 = (HWND)*((_QWORD *)a2 + 1);
  if ( v12 )
  {
    *((_BYTE *)a2 + 21) = 1;
    if ( !*((_QWORD *)a2 + 4) && *((_DWORD *)a2 + 4) == 2 && *(_QWORD *)a2 <= 0x1DuLL )
    {
      v13 = 604110848LL;
      if ( _bittest64(&v13, *(_QWORD *)a2) )
      {
        *((_QWORD *)a2 + 4) = 0LL;
        if ( !(unsigned int)GetWindowBand(v12, &v77)
          || v77 > 0x12
          || (v15 = 438098, !_bittest(&v15, v77))
          || !GetWindowThreadProcessId(v12, &dwProcessId) && (int)ResultFromKnownLastError() < 0
          || (v16 = OpenProcess(0x1000u, 0, dwProcessId)) == 0LL && (int)ResultFromKnownLastError() < 0 )
        {
LABEL_138:
          if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a2 + 1), v14)
            && !CApplicationManagerUtility::IsOwnedWindow(*((CApplicationManagerUtility **)a2 + 1), v54)
            && DwmGetWindowAttribute(*((HWND *)a2 + 1), 0xEu, &pvAttribute, 4u) >= 0
            && !pvAttribute )
          {
            CApplicationManager::_CloakRogueWindow(v55, *((HWND *)a2 + 1));
            return 0;
          }
          return 0;
        }
        if ( !(unsigned int)GetProcessUIContextInformation(v16, &v82) )
        {
          v17 = -2147024890;
          goto LABEL_100;
        }
        v17 = 0;
        if ( v82 != 2 || (PropW = (unsigned __int16)GetPropW(v12, L"{9F4C2855-9F79-4B39-A8D0-E1D42DE1D5F3} 5")) == 0 )
        {
LABEL_33:
          if ( *((_QWORD *)a2 + 4) )
            goto LABEL_100;
          *((_QWORD *)a2 + 4) = 0LL;
          *(_OWORD *)P = 0LL;
          if ( v16 == GetCurrentProcess() )
          {
            v18 = -4LL;
            TokenHandle = (void *)-4LL;
          }
          else
          {
            if ( !OpenProcessToken(v16, 8u, &TokenHandle) )
            {
              LastError = GetLastError();
              if ( LastError )
                goto LABEL_78;
            }
            v18 = (__int64)TokenHandle;
          }
          v19 = NtQueryInformationToken((HANDLE)v18, TokenSecurityAttributes, 0LL, 0, &TokenInformationLength);
          if ( v19 == -1073741789 )
          {
            v21 = TokenInformationLength * (unsigned __int128)0x10uLL;
            if ( is_mul_ok(TokenInformationLength, 0x10uLL)
              && (*(_QWORD *)&v21 = RtlAllocateHeap(
                                      NtCurrentPeb()->ProcessHeap,
                                      DWORD2(v21),
                                      16LL * TokenInformationLength),
                  (v22 = v21) != 0) )
            {
              memset_0((void *)v21, 0, TokenInformationLength);
              v23 = NtQueryInformationToken(
                      (HANDLE)v18,
                      TokenSecurityAttributes,
                      (PVOID)v22,
                      TokenInformationLength,
                      &TokenInformationLength);
              if ( v23 < 0 )
              {
                LastError = RtlNtStatusToDosErrorNoTeb(v23);
                ARI::Free((PVOID)v22, v62);
              }
              else if ( *(_DWORD *)(v22 + 4)
                     && (RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID"), v34 = 0, *(_DWORD *)(v22 + 4)) )
              {
                while ( 1 )
                {
                  v35 = (const UNICODE_STRING *)(*(_QWORD *)(v22 + 8) + 40LL * v34);
                  if ( !RtlCompareUnicodeString(&DestinationString, v35, 1u) )
                    break;
                  if ( ++v34 >= *(_DWORD *)(v22 + 4) )
                    goto LABEL_42;
                }
                P[1] = (PVOID)v35;
                P[0] = (PVOID)v22;
                ARI::Free(0LL, v36);
                LastError = 0;
              }
              else
              {
LABEL_42:
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v22);
                LastError = 1168;
              }
            }
            else
            {
              ARI::Free(0LL, *((void **)&v21 + 1));
              LastError = 8;
            }
          }
          else if ( v19 )
          {
            LastError = RtlNtStatusToDosErrorNoTeb(v19);
          }
          else
          {
            LastError = 1359;
          }
          if ( TokenHandle != (void *)-4LL )
            CloseHandle(TokenHandle);
LABEL_78:
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v17 = -2147023728;
          if ( LastError == -2147023728 )
          {
            ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P, v20);
            goto LABEL_100;
          }
          if ( LastError < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xAB,
              (unsigned int)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
              (const char *)(unsigned int)LastError,
              (int)ReturnLength);
            ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P, v63);
            v17 = LastError;
            goto LABEL_100;
          }
          if ( (unsigned int)ARI::ProcessToken::SysAppId::GetAppUserModelId(
                               (ARI::ProcessToken::SysAppId *)P[1],
                               0LL,
                               (unsigned int)&v73,
                               0LL,
                               ReturnLength) != 122 )
          {
            v17 = -2147418113;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xAE,
              (unsigned int)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
              (const char *)0x8000FFFFLL,
              (int)ReturnLengtha);
            ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P, v64);
            goto LABEL_100;
          }
          CoTaskMemFree(0LL);
          v37 = (unsigned int)v73;
          v38 = 0LL;
          v39 = (unsigned int)v73 + 1LL;
          if ( v39 < (unsigned int)v73 )
          {
            v17 = -2147024362;
            goto LABEL_174;
          }
          if ( is_mul_ok(v39, 2uLL) )
          {
            v40 = (unsigned int *)CoTaskMemAlloc(2 * v39);
            v38 = v40;
            if ( !v40 )
            {
              v17 = -2147024882;
              goto LABEL_174;
            }
            v17 = 0;
            if ( v39 > 0x7FFFFFFF || v37 >= 0x7FFFFFFF )
            {
              *(_WORD *)v40 = 0;
            }
            else
            {
              v41 = v39;
              v42 = v40;
              v43 = 0;
              v44 = 0LL;
              v45 = (char *)((char *)&word_18035ABCC - (char *)v40);
              while ( v41 != v39 )
              {
                v65 = *(_WORD *)&v45[(_QWORD)v42];
                if ( !v65 )
                  break;
                *(_WORD *)v42 = v65;
                v42 = (unsigned int *)((char *)v42 + 2);
                ++v44;
                if ( !--v41 )
                  goto LABEL_169;
              }
              if ( v41 )
                goto LABEL_91;
LABEL_169:
              v42 = (unsigned int *)((char *)v42 - 2);
              --v44;
              v43 = -2147024774;
LABEL_91:
              *(_WORD *)v42 = 0;
              v46 = v39 - v44;
              if ( v43 >= 0 && v46 > 1 && 2 * v46 > 2 )
                memset_0((char *)v38 + 2 * v44 + 2, 0, 2 * v46 - 2);
            }
          }
          else
          {
            v17 = -2147024362;
          }
          if ( v17 >= 0 )
          {
            AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                               (ARI::ProcessToken::SysAppId *)P[1],
                               (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(unsigned int)v37,
                               (unsigned int)&v73,
                               v38,
                               ReturnLengtha);
            if ( AppUserModelId )
            {
              v17 = wil::details::in1diag3::Return_Win32(
                      retaddr,
                      (void *)0xB2,
                      (unsigned int)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
                      (const char *)AppUserModelId,
                      ReturnLengthb);
              CoTaskMemFree(v38);
              ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P, v66);
            }
            else
            {
              *((_QWORD *)a2 + 4) = v38;
              CoTaskMemFree(0LL);
              if ( P[0] )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
              v17 = 0;
            }
LABEL_100:
            CloseHandle(v16);
            if ( v17 < 0 )
              goto LABEL_138;
            return 1;
          }
LABEL_174:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB1,
            (unsigned int)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
            (const char *)(unsigned int)v17,
            (int)ReturnLengtha);
          CoTaskMemFree(v38);
          ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P, v67);
          goto LABEL_100;
        }
        lpBuffer = 0LL;
        CoTaskMemFree(0LL);
        v17 = _AllocStringWorker<CTCoAllocPolicy>(v58, v57, 0LL, 0x104uLL, (__int64)ReturnLength, (void **)&lpBuffer);
        v59 = lpBuffer;
        if ( v17 >= 0 )
        {
          if ( GlobalGetAtomNameW(PropW, lpBuffer, 260) )
          {
            v17 = 0;
LABEL_152:
            v61 = v59;
            v59 = 0LL;
            *((_QWORD *)a2 + 4) = v61;
            goto LABEL_153;
          }
          v60 = GetLastError();
          v17 = v60;
          if ( v60 > 0 )
            v17 = (unsigned __int16)v60 | 0x80070000;
          if ( v17 >= 0 )
            goto LABEL_152;
        }
LABEL_153:
        CoTaskMemFree(v59);
        if ( v17 < 0 )
          goto LABEL_100;
        goto LABEL_33;
      }
    }
    return 1;
  }
  return v4;
}
