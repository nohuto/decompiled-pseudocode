/*
 * XREFs of ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x180147434
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180146FE0 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall VirtualTouchpadUriHandler::GetPrimaryTouchEnabledMonitorIfAny(HMONITOR *a1)
{
  unsigned int v1; // edi
  signed int v3; // ebx
  signed int LastError; // eax
  SIZE_T v6; // rsi
  char *v7; // rax
  _DWORD *v8; // rbx
  char *v9; // rbp
  char *i; // rsi
  const char *v11; // r9
  int v12; // edx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v14 = 0;
  v3 = 0;
  if ( !(unsigned int)GetPointerDevices(&v14, 0LL) )
  {
    LastError = GetLastError();
    v3 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v3 = LastError;
    if ( v3 >= 0 )
      v3 = -2147467259;
    if ( ((v3 + 0x80000000) & 0x80000000) == 0 && v3 != -2147024774 )
      goto LABEL_9;
  }
  if ( v14 )
  {
    v6 = 1080LL * v14;
    v7 = (char *)LocalAlloc(0, v6);
    v8 = v7;
    if ( v7 )
    {
      v9 = &v7[v6];
      for ( i = v7; i != v9; i += 1080 )
      {
        if ( i )
          memset(i, 0, 0x438uLL);
      }
      if ( (unsigned int)GetPointerDevices(&v14, v8) )
      {
        v12 = 0;
        if ( v14 )
        {
          while ( v8[270 * v12 + 4] != 3 )
          {
            if ( ++v12 >= v14 )
              goto LABEL_25;
          }
          *a1 = *(HMONITOR *)&v8[270 * v12 + 6];
        }
      }
      else
      {
        v1 = wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x49,
               (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
               v11);
      }
    }
    else
    {
      v1 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)0x8007000ELL);
    }
LABEL_25:
    LocalFree(v8);
    return v1;
  }
  else
  {
LABEL_9:
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
}
