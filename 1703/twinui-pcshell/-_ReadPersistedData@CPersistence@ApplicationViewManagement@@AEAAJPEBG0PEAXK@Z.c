/*
 * XREFs of ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x1800816B8
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1800730E0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x18007B60C (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800819B8 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180081924 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall ApplicationViewManagement::CPersistence::_ReadPersistedData(
        HKEY *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        void *pvData,
        DWORD a5)
{
  HKEY v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  DWORD v9; // ebx
  unsigned int ValueW; // eax
  int v11; // ecx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  v5 = *this;
  if ( !v5 )
  {
    v6 = -2144927145;
    v7 = 106LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
      (const char *)v6);
    return v6;
  }
  v9 = a5;
  pcbData = a5;
  ValueW = RegGetValueW(v5, a2, a3, 8u, 0LL, pvData, &pcbData);
  v11 = 0;
  if ( ValueW == 2 )
    v11 = 2;
  if ( v11 )
    return (unsigned __int16)v11 | 0x80070000;
  if ( ValueW )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x78,
             (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
             (const char *)ValueW,
             v12);
  if ( v9 != pcbData )
  {
    v6 = -2147024883;
    v7 = 122LL;
    goto LABEL_3;
  }
  return 0LL;
}
