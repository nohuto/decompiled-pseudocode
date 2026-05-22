/*
 * XREFs of ?GetDesktopUniqueName@@YAXPEBGPEAGK@Z @ 0x1800819DC
 * Callers:
 *     ?RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x18007DE40 (-RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1.c)
 *     CreateInputServiceProxy @ 0x1800ADA0C (CreateInputServiceProxy.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001DC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x1800C025C (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall GetDesktopUniqueName(char *a1, char *a2)
{
  unsigned int v4; // edx
  int v5; // edi
  __int64 v6; // rcx
  signed __int64 v7; // rsi
  unsigned __int16 v8; // ax
  unsigned __int16 *v9; // rax
  int v10; // [rsp+28h] [rbp-280h]
  ULONG ReturnLength; // [rsp+30h] [rbp-278h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+38h] [rbp-270h] BYREF
  __int64 v13; // [rsp+40h] [rbp-268h]
  wchar_t v14[264]; // [rsp+70h] [rbp-238h] BYREF

  v14[0] = 0;
  if ( NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessBasicInformation,
         ProcessInformation,
         0x30u,
         &ReturnLength) )
  {
    v5 = -1;
  }
  else
  {
    v5 = *(_DWORD *)(v13 + 704);
  }
  if ( v5 == -1 || !(unsigned int)GetThreadDesktopName(v14, v4) )
  {
    v6 = 260LL;
    v7 = a1 - a2;
    do
    {
      if ( v6 == -2147483386 )
        break;
      v8 = *(_WORD *)&a2[v7];
      if ( !v8 )
        break;
      *(_WORD *)a2 = v8;
      a2 += 2;
      --v6;
    }
    while ( v6 );
    v9 = (unsigned __int16 *)(a2 - 2);
    if ( v6 )
      v9 = (unsigned __int16 *)a2;
    *v9 = 0;
  }
  else
  {
    v10 = v5;
    StringCchPrintfW((wchar_t *)a2, 260LL, L"%s%s%d", a1, v14, v10);
  }
}
