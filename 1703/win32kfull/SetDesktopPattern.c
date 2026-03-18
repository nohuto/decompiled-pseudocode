/*
 * XREFs of SetDesktopPattern @ 0x1C00EC3FC
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C003CF20 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     GreMarkDeletableBrush @ 0x1C00EC548 (GreMarkDeletableBrush.c)
 *     RecolorDeskPattern @ 0x1C011C450 (RecolorDeskPattern.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z @ 0x1C01EDB34 (-SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall SetDesktopPattern(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // ebx
  __int64 SolidBrush; // rdi
  HBRUSH v6; // rcx
  _WORD *v8; // rdx
  __int64 v9; // r9
  wchar_t v10; // ax
  __int16 v11; // cx
  HBITMAP Bitmap; // rax
  _QWORD v13[2]; // [rsp+40h] [rbp-268h] BYREF
  wchar_t Str2[24]; // [rsp+50h] [rbp-258h] BYREF
  _WORD v15[264]; // [rsp+80h] [rbp-228h] BYREF

  v4 = 0;
  memset(v15, 0, 0x208uLL);
  if ( !a2 )
  {
    if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 2LL, &word_1C02E2588, v15, 260, 0) )
      return v4;
    a2 = v15;
  }
  RtlLoadStringOrError(82LL, Str2, 20LL);
  if ( v15[0] && _wcsicmp(a2, Str2) )
  {
    v8 = v13;
    v13[0] = 0LL;
    v13[1] = 0LL;
    v9 = 8LL;
    v10 = *a2;
    do
    {
      v11 = 0;
      while ( v10 && (unsigned __int16)(v10 - 48) > 9u )
        v10 = *++a2;
      while ( 1 )
      {
        v10 = *a2;
        if ( *a2 < 0x30u || v10 > 0x39u )
          break;
        ++a2;
        v11 = v10 + 2 * (5 * v11 - 24);
      }
      *v8++ = v11;
      --v9;
    }
    while ( v9 );
    Bitmap = (HBITMAP)GreCreateBitmap(8LL, 8LL, 1LL, 1LL, v13);
    if ( Bitmap )
    {
      SetGlobalDesktopPattern(Bitmap);
      return (unsigned int)RecolorDeskPattern();
    }
  }
  else
  {
    SolidBrush = GreCreateSolidBrush(*(unsigned int *)(gpsi + 4964LL));
    if ( SolidBrush )
    {
      v6 = *(HBRUSH *)(gpsi + 5096LL);
      if ( v6 )
      {
        GreMarkDeletableBrush(v6);
        GreDeleteObject(*(_QWORD *)(gpsi + 5096LL));
      }
      GreMarkUndeletableBrush(SolidBrush);
      GreSetBrushOwner(SolidBrush, 0LL);
      *(_QWORD *)(gpsi + 5096LL) = SolidBrush;
    }
  }
  return v4;
}
