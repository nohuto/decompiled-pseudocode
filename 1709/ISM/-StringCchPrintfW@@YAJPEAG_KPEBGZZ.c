/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001DC0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180004DAC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     CreateEventForWin32kInteropInitialization @ 0x18000EA50 (CreateEventForWin32kInteropInitialization.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180011610 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Describe@PropertyTypeInfo@Input@@QEBAKPEAGKK@Z @ 0x180033B3C (-Describe@PropertyTypeInfo@Input@@QEBAKPEAGKK@Z.c)
 *     ?Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z @ 0x180033DC4 (-Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z.c)
 *     ?Boolean_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034D10 (-Boolean_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Byte_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034D80 (-Byte_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?WideString_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034DE0 (-WideString_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Double_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034E30 (-Double_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Int16_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034F00 (-Int16_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Int32_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034F60 (-Int32_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Int64_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034FC0 (-Int64_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Single_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180035020 (-Single_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?UInt16_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180035090 (-UInt16_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?UInt32_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x1800350F0 (-UInt32_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?UInt64_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180035150 (-UInt64_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Void_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x1800351B0 (-Void_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180063724 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z @ 0x18006ABE8 (-Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z.c)
 *     ?GetDesktopUniqueName@@YAXPEBGPEAGK@Z @ 0x1800819DC (-GetDesktopUniqueName@@YAXPEBGPEAGK@Z.c)
 *     ?RuntimeClassInitialize@InputQueue@@UEAAJPEAUIInputQueueHost@@I@Z @ 0x1800820C0 (-RuntimeClassInitialize@InputQueue@@UEAAJPEAUIInputQueueHost@@I@Z.c)
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x1800CC392 (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x1800CC44E (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x1800CC518 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x1800CC566 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 * Callees:
 *     _vsnwprintf @ 0x1800CAD44 (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnwprintf(Buffer, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v4;
}
