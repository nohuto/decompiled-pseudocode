/*
 * XREFs of xxxInitWindowStation @ 0x1C000F9C0
 * Callers:
 *     xxxCreateWindowStation @ 0x1C0012EC4 (xxxCreateWindowStation.c)
 * Callees:
 *     SetMinMetrics @ 0x1C0009F64 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C000A9D0 (xxxSetWindowNCMetrics.c)
 *     SetIconMetrics @ 0x1C000B568 (SetIconMetrics.c)
 *     FinalUserInit @ 0x1C000EC20 (FinalUserInit.c)
 *     SetKeyboardRate @ 0x1C000FA78 (SetKeyboardRate.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00C4668 (-xxxLoadSomeStrings@@YAXXZ.c)
 */

__int64 xxxInitWindowStation()
{
  struct _UNICODE_STRING *ProfileUserName; // rdi
  unsigned int v1; // ebx
  _BYTE v3[40]; // [rsp+30h] [rbp-28h] BYREF

  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v3);
  FastGetProfileIntFromID(ProfileUserName, 2LL, 606LL, 0LL, &guDdeSendTimeout, 0);
  SetKeyboardRate();
  NlsKbdInitializePerSystem();
  xxxLoadSomeStrings();
  if ( !gbGreTextReady || (v1 = xxxSetWindowNCMetrics((__int64)ProfileUserName, 0LL, 1, -1)) != 0 )
  {
    SetMinMetrics((__int64)ProfileUserName, 0LL);
    v1 = SetIconMetrics(ProfileUserName, 0LL);
    if ( v1 )
    {
      v1 = FinalUserInit();
      if ( v1 )
        *(_DWORD *)(gpsi + 5688LL) = 1;
    }
  }
  FreeProfileUserName(ProfileUserName, v3);
  return v1;
}
