/*
 * XREFs of ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x18006E540
 * Callers:
 *     ?HampSystemReportActivationHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z @ 0x180041C2C (-HampSystemReportActivationHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     GetTickCount_0 @ 0x18003EE1C (GetTickCount_0.c)
 *     CloseHandle_0 @ 0x18003EE4C (CloseHandle_0.c)
 *     WaitForMultipleObjects_0 @ 0x18003F5EC (WaitForMultipleObjects_0.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z @ 0x18006DFF0 (-WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z.c)
 *     ?GetApplicationName@@YAJKPEAGI@Z @ 0x18006E380 (-GetApplicationName@@YAJKPEAGI@Z.c)
 *     ?GetCurrentDesktopName@@YAHPEAGI@Z @ 0x18006E4D0 (-GetCurrentDesktopName@@YAHPEAGI@Z.c)
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x18006E83C (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 */

__int64 __fastcall ReportHangInternal(HWND a1, unsigned int *a2, unsigned int a3)
{
  __int64 v3; // rbx
  int v5; // ebx
  DWORD v6; // edx
  const unsigned __int16 *v7; // rcx
  char *v8; // rdi
  __int64 v9; // rsi
  unsigned int *v10; // r8
  DWORD v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int16 *v14; // rcx
  DWORD dwProcessId; // [rsp+20h] [rbp-E0h]
  HANDLE Handles[3]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v18[40]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+6Ch] [rbp-94h]
  HWND hwnd; // [rsp+70h] [rbp-90h]
  void *v22; // [rsp+5A8h] [rbp+4A8h]
  HANDLE hObject; // [rsp+5B0h] [rbp+4B0h]
  _DWORD v24[12]; // [rsp+5C0h] [rbp+4C0h] BYREF
  _BYTE v25[64]; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v26; // [rsp+630h] [rbp+530h]
  char v27; // [rsp+638h] [rbp+538h] BYREF
  int v28; // [rsp+6C8h] [rbp+5C8h]
  __int64 v29; // [rsp+708h] [rbp+608h]
  _WORD pvInfo[520]; // [rsp+710h] [rbp+610h] BYREF
  int v31; // [rsp+B20h] [rbp+A20h]
  DWORD TickCount_0; // [rsp+B24h] [rbp+A24h]
  char v33[528]; // [rsp+B40h] [rbp+A40h] BYREF

  v3 = a3;
  dwProcessId = 0;
  memset_0(v33, 0, 0x208uLL);
  memset_0(v24, 0, 0x578uLL);
  memset_0(v18, 0, 0x578uLL);
  if ( !a2 || !(_DWORD)v3 )
  {
    v5 = -1073741811;
    goto LABEL_31;
  }
  dwProcessId = *a2;
  if ( (unsigned int)v3 > 0x10 )
  {
    v5 = -1073740757;
    goto LABEL_31;
  }
  memset_0(v24, 0, 0x578uLL);
  v24[0] = 91751760;
  v24[10] = 0x10000000;
  v26 = 0;
  v29 = 0LL;
  TickCount_0 = GetTickCount_0();
  memcpy_0(v25, a2, 4 * v3);
  if ( !(unsigned int)GetCurrentDesktopName(pvInfo, v6) )
    pvInfo[0] = 0;
  v31 = 114876;
  v28 = -1073741822;
  v5 = WersvcSendMessage(v7, (struct _WERSVC_MSG *)v24, (struct _WERSVC_MSG *)v18);
  v8 = &v27;
  v9 = 16LL;
  do
  {
    if ( *(_QWORD *)v8 )
      PssNtFreeSnapshot();
    v8 += 8;
    --v9;
  }
  while ( v9 );
  if ( v5 >= 0 )
  {
    if ( v5 == 258 )
    {
      v5 = -1073741248;
      goto LABEL_31;
    }
    v10 = (unsigned int *)v19;
    if ( v19 == 268435457 )
    {
LABEL_20:
      v11 = 0;
      if ( v22 )
      {
        Handles[0] = v22;
        v11 = 1;
      }
      if ( hObject )
      {
        v12 = v11++;
        Handles[v12] = hObject;
      }
      if ( v11 )
      {
        WaitForMultipleObjects_0(v11, Handles, 0, 0xFFFFFFFF);
        v10 = (unsigned int *)v19;
      }
      if ( hwnd && (_DWORD)v10 == 268435461 )
        UtilRegisterErrorReportingDialog(hwnd, dwProcessId, v10);
      v5 = 0;
      goto LABEL_31;
    }
    if ( v19 != 268435458 )
    {
      if ( v19 != 268435461 )
      {
        v5 = -1073741823;
        goto LABEL_31;
      }
      goto LABEL_20;
    }
    v5 = v20;
    if ( v20 >= 0 )
      v5 = -1073741823;
  }
LABEL_31:
  if ( hObject )
    CloseHandle_0(hObject);
  if ( !dwProcessId || (int)GetApplicationName(dwProcessId, v33) < 0 )
  {
    v13 = 260LL;
    v14 = (unsigned __int16 *)v33;
    do
    {
      if ( v13 == -2147483386 )
        break;
      if ( !*(unsigned __int16 *)((char *)v14 + (char *)L"Unknown" - v33) )
        break;
      ++v14;
      --v13;
    }
    while ( v13 );
  }
  return (unsigned int)v5;
}
