/*
 * XREFs of Template_zqq @ 0x180146694
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18006BF08 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800CD9A0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ?SignalSEB@CHwndRenderTarget@@AEAAX_NI0@Z @ 0x180128DC8 (-SignalSEB@CHwndRenderTarget@@AEAAX_NI0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_zqq(__int64 a1, __int64 a2, const wchar_t *a3, int a4, char a5)
{
  __int64 v5; // rax
  ULONG v6; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-40h] BYREF
  int *v9; // [rsp+30h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-28h]
  char *v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+88h] [rbp+28h] BYREF

  v13 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  UserData.Size = v6;
  if ( !a3 )
    a3 = L"NULL";
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)a3;
  v9 = &v13;
  v10 = 4LL;
  v11 = &a5;
  v12 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_PUBLISH_SEB_NOTIFICATION, 3u, &UserData);
}
