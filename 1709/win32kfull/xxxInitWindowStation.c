/*
 * XREFs of xxxInitWindowStation @ 0x1C00DC7B8
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00DB1AC (xxxCreateWindowStation.c)
 * Callees:
 *     SetIconMetrics @ 0x1C0082F1C (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00830F8 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C0083240 (xxxSetWindowNCMetrics.c)
 *     FinalUserInit @ 0x1C00DC870 (FinalUserInit.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00DCF64 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     SetKeyboardRate @ 0x1C00DE1A0 (SetKeyboardRate.c)
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
  if ( !gbGreTextReady || (v1 = xxxSetWindowNCMetrics(ProfileUserName, 0LL, 1LL, -1)) != 0 )
  {
    SetMinMetrics(ProfileUserName, 0LL);
    v1 = SetIconMetrics(ProfileUserName, 0LL);
    if ( v1 )
    {
      v1 = FinalUserInit();
      if ( v1 )
        *(_DWORD *)(gpsi + 6984LL) = 1;
    }
  }
  FreeProfileUserName(ProfileUserName, v3);
  return v1;
}
