/*
 * XREFs of ?InitializeForUserSession@CVolumeLimitTrackerImpl@@UEAAJXZ @ 0x1800220E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 */

__int64 __fastcall CVolumeLimitTrackerImpl::InitializeForUserSession(CVolumeLimitTrackerImpl *this)
{
  unsigned int v1; // ebx
  int v2; // ebp
  RPC_STATUS v5; // eax
  __int64 v6; // rcx
  RPC_STATUS v7; // esi
  LSTATUS v8; // eax
  __int64 v9; // rcx
  HKEY *v10; // rsi
  LSTATUS Key; // eax
  __int64 v12; // rcx
  HKEY v13; // rcx
  LSTATUS v14; // eax
  __int64 v15; // rcx
  DWORD cbData; // [rsp+70h] [rbp+8h] BYREF
  int Data; // [rsp+78h] [rbp+10h] BYREF
  HKEY phkResult; // [rsp+80h] [rbp+18h] BYREF

  v1 = 0;
  v2 = 0;
  phkResult = 0LL;
  if ( *((_DWORD *)this + 30) )
    return 0LL;
  v5 = RpcImpersonateClient(0LL);
  v7 = v5;
  if ( !v5 || v5 == 1725 )
  {
    v2 = 1;
    v8 = RegOpenCurrentUser(0x20019u, &phkResult);
    if ( v8 )
    {
      v1 = (unsigned __int16)v8 | 0x80070000;
      if ( v8 <= 0 )
        v1 = v8;
      if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
        McTemplateU0dsdp(
          v9,
          &EUVolumePolicy_Error_Origination,
          v1,
          "CVolumeLimitTrackerImpl::InitializeForUserSession",
          245,
          (char)this);
    }
    else
    {
      v10 = (HKEY *)((char *)this + 112);
      if ( RegOpenKeyExW(
             phkResult,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\VolumeLimit",
             0,
             0x2001Fu,
             (PHKEY)this + 14)
        && (Key = RegCreateKeyExW(
                    phkResult,
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\VolumeLimit",
                    0,
                    0LL,
                    0,
                    0xA001Fu,
                    0LL,
                    (PHKEY)this + 14,
                    0LL)) != 0 )
      {
        v1 = (unsigned __int16)Key | 0x80070000;
        if ( Key <= 0 )
          v1 = Key;
        if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
          McTemplateU0dsdp(
            v12,
            &EUVolumePolicy_Error_Origination,
            v1,
            "CVolumeLimitTrackerImpl::InitializeForUserSession",
            5,
            (char)this);
      }
      else
      {
        cbData = 4;
        if ( RegQueryValueExW(*v10, L"VolumeWarningAccepted", 0LL, 0LL, (LPBYTE)this + 124, &cbData)
          && (v13 = *v10,
              Data = 0,
              (v14 = RegSetValueExW(v13, L"VolumeWarningAccepted", 0, 4u, (const BYTE *)&Data, 4u)) != 0) )
        {
          v1 = (unsigned __int16)v14 | 0x80070000;
          if ( v14 <= 0 )
            v1 = v14;
          if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
            McTemplateU0dsdp(
              v15,
              &EUVolumePolicy_Error_Origination,
              v1,
              "CVolumeLimitTrackerImpl::InitializeForUserSession",
              21,
              (char)this);
        }
        else
        {
          *((_DWORD *)this + 30) = 1;
        }
      }
    }
  }
  else
  {
    if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      McTemplateU0dsdp(
        v6,
        &EUVolumePolicy_Error_Origination,
        v5,
        "CVolumeLimitTrackerImpl::InitializeForUserSession",
        236,
        (char)this);
    v1 = v7;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_b0ca754e0f2d3c7c76d04bc667a3e56e_Traceguids, v1);
  }
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( v2 )
    RpcRevertToSelf();
  return v1;
}
