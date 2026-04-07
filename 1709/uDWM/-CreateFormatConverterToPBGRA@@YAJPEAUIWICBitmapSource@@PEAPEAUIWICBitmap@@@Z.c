/*
 * XREFs of ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x180036BCC
 * Callers:
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x180025260 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateFormatConverterToPBGRA(struct IWICBitmapSource *a1, struct IWICBitmap **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 34)
                                                    + 80LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34),
         &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 27;
LABEL_10:
    v7 = v4;
    goto LABEL_13;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v9 + 64LL))(
         v9,
         a1,
         &GUID_WICPixelFormat32bppPBGRA,
         0LL,
         0LL,
         0LL,
         0);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 36;
    goto LABEL_10;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 34)
                                                                                 + 144LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34),
         v9,
         2LL,
         a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 38;
    goto LABEL_10;
  }
  if ( *a2 )
    goto LABEL_5;
  v5 = -2147024890;
  v8 = 39;
  v7 = -2147024890;
LABEL_13:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v8);
LABEL_5:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v5;
}
