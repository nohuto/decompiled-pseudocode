/*
 * XREFs of xxxLW_LoadFonts @ 0x1C000A1A0
 * Callers:
 *     UserOnGreTextReady @ 0x1C000A0E0 (UserOnGreTextReady.c)
 * Callees:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C000A2C0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C000A460 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     CloseFNTCache @ 0x1C000A6DC (CloseFNTCache.c)
 *     ClientLoadLocalT1Fonts @ 0x1C000A7AC (ClientLoadLocalT1Fonts.c)
 *     xxxAddFontResourceW @ 0x1C003B590 (xxxAddFontResourceW.c)
 *     GreWaitForTextReady @ 0x1C011C7C0 (GreWaitForTextReady.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C019533C (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C019535C (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 __fastcall xxxLW_LoadFonts(int a1)
{
  LeaveEnterCrit *v2; // rcx
  unsigned int v4; // edi
  bool i; // zf
  LeaveEnterCrit *v6; // rcx
  char v7; // [rsp+48h] [rbp+10h] BYREF
  _LARGE_INTEGER Interval; // [rsp+50h] [rbp+18h] BYREF

  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v7);
  if ( (int)GreWaitForTextReady() >= 0 )
  {
    LeaveEnterCrit::~LeaveEnterCrit(v2);
    if ( a1 )
    {
      v4 = 0;
      for ( i = gbPermanentFontsLoaded == 0; i; i = gbPermanentFontsLoaded == 0 )
      {
        if ( gbRemoteSession && v4 >= 0x960 )
          goto LABEL_13;
        if ( gdwInAtomicOperation )
        {
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v7);
        Interval.QuadPart = -2500000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        LeaveEnterCrit::~LeaveEnterCrit(v6);
        ++v4;
      }
      xxxLoadUserAndNetworkFonts();
LABEL_13:
      gbNetworkFontsLoaded = 1;
    }
    else
    {
      xxxAddFontResourceW(L"marlett.ttf");
      if ( (unsigned int)xxxLoadPermanentFonts() && gbPermanentFontsLoaded && !gbPermanentT1FontsLoaded )
      {
        ClientLoadLocalT1Fonts();
        gbPermanentT1FontsLoaded = 1;
        CloseFNTCache();
      }
    }
    return 1LL;
  }
  else
  {
    LeaveEnterCrit::~LeaveEnterCrit(v2);
    return 0LL;
  }
}
