/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1801C1AD0
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z @ 0x1800E8E48 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801C0F4C (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1801C1C7C (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180084890 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1801C12E8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z @ 0x1801C1384 (-GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x1801C14EC (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 *     CoTaskMemFree_0 @ 0x1801E31C1 (CoTaskMemFree_0.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, _QWORD *a2, unsigned __int16 **a3)
{
  const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **v5; // r9
  signed int LastError; // ebx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  void *v11; // rbx
  unsigned int AppUserModelId; // eax
  void *v13; // rax
  __int64 v15; // [rsp+20h] [rbp-20h]
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v18; // [rsp+60h] [rbp+20h] BYREF
  void *TokenHandle; // [rsp+68h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+30h] BYREF

  *a2 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
    goto LABEL_5;
  }
  if ( OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
LABEL_5:
    LastError = 0;
    goto LABEL_6;
  }
  LastError = GetLastError();
LABEL_6:
  if ( !LastError )
  {
    LastError = ARI::ProcessToken::SysAppId::Open(TokenHandle, P, (const UNICODE_STRING **)&P[1], v5);
    if ( TokenHandle != (void *)-4LL )
      CloseHandle(TokenHandle);
  }
  v7 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v7 = LastError;
  if ( v7 != -2147023728 )
  {
    if ( v7 >= 0 )
    {
      if ( (unsigned int)ARI::ProcessToken::AutoSysAppId::GetAppUserModelId(
                           (ARI::ProcessToken::AutoSysAppId *)P,
                           0,
                           &v18,
                           0LL) == 122 )
      {
        pv = 0LL;
        CoTaskMemFree_0(0LL);
        v10 = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, 0LL, v18, v15, &pv);
        v11 = pv;
        v7 = v10;
        if ( v10 >= 0 )
        {
          AppUserModelId = ARI::ProcessToken::AutoSysAppId::GetAppUserModelId(
                             (ARI::ProcessToken::AutoSysAppId *)P,
                             v18,
                             &v18,
                             (unsigned __int16 *)pv);
          if ( AppUserModelId )
          {
            v7 = wil::details::in1diag3::Return_Win32(
                   retaddr,
                   (void *)0xAF,
                   (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
                   (const char *)AppUserModelId);
          }
          else
          {
            v13 = v11;
            v11 = 0LL;
            v7 = 0;
            *a2 = v13;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xAE,
            (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
            (const char *)(unsigned int)v10);
        }
        CoTaskMemFree_0(v11);
      }
      else
      {
        v7 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAB,
          (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
          (const char *)0x8000FFFFLL);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xA8,
        (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  if ( P[0] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
  return (unsigned int)v7;
}
