/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18000C7EC
 * Callers:
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18000C6F4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x18008ED98 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18000C374 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x18000C8F8 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 *     ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x18000CB04 (-OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z.c)
 *     ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x18000CB54 (-Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x180084060 (--1-$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ.c)
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180087020 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180142830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(CallerIdentity *this, unsigned int **a2, unsigned __int16 **a3)
{
  signed int v4; // ebx
  const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **v5; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int *v10; // rbx
  unsigned int AppUserModelId; // eax
  __int64 v12; // rdx
  bool *v13; // [rsp+20h] [rbp-20h]
  unsigned __int16 *v14; // [rsp+20h] [rbp-20h]
  unsigned int v15; // [rsp+20h] [rbp-20h]
  ARI::ProcessToken::SysAppId *v16[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  HANDLE hObject; // [rsp+58h] [rbp+18h] BYREF
  unsigned int *v19; // [rsp+60h] [rbp+20h] BYREF

  *a2 = 0LL;
  *(_OWORD *)v16 = 0LL;
  v4 = ARI::ProcessToken::SysAppId::OpenTokenForProcess(this, &hObject, (void **)a3);
  if ( !v4 )
  {
    v4 = ARI::ProcessToken::SysAppId::Open(hObject, v16, &v16[1], v5, v13);
    if ( hObject != (HANDLE)-4LL )
      CloseHandle(hObject);
  }
  if ( v4 > 0 )
    v4 = (unsigned __int16)v4 | 0x80070000;
  if ( v4 != -2147023728 )
  {
    if ( v4 < 0 )
    {
      v12 = 171LL;
    }
    else
    {
      if ( (unsigned int)ARI::ProcessToken::SysAppId::GetAppUserModelId(
                           v16[1],
                           0LL,
                           (unsigned int)&hObject,
                           0LL,
                           (unsigned __int16 *)v13) == 122 )
      {
        v19 = 0LL;
        CoTaskMemFree(0LL);
        v9 = _AllocStringWorker<CTCoAllocPolicy>(v8, v7, 0LL, (unsigned int)hObject, (__int64)v13, (void **)&v19);
        v4 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB1,
            (unsigned int)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
            (const char *)(unsigned int)v9,
            (int)v14);
        }
        else
        {
          v10 = v19;
          AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                             v16[1],
                             (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(unsigned int)hObject,
                             (unsigned int)&hObject,
                             v19,
                             v14);
          if ( AppUserModelId )
          {
            v4 = wil::details::in1diag3::Return_Win32(
                   retaddr,
                   (void *)0xB2,
                   (unsigned int)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
                   (const char *)AppUserModelId,
                   v15);
          }
          else
          {
            v19 = 0LL;
            *a2 = v10;
            v4 = 0;
          }
        }
        CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(&v19);
        goto LABEL_7;
      }
      v4 = -2147418113;
      v12 = 174LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)(unsigned int)v4,
      (int)v13);
  }
LABEL_7:
  ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)v16);
  return (unsigned int)v4;
}
