/*
 * XREFs of ?PublishFocusChange@@YAXXZ @ 0x1C00B5E9C
 * Callers:
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00B57FC (xxxSetForegroundThreadWithWindowHint.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void PublishFocusChange(void)
{
  _QWORD *v0; // rbx
  int v1; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v2[8]; // [rsp+48h] [rbp-30h] BYREF

  if ( gSessionId != gServiceSessionId && !gProtocolType )
  {
    if ( (gdwMitConfig & 7) != 0 )
    {
      v0 = gInputFocusConnectionHandle;
      if ( gInputFocusConnectionHandle )
      {
        memset(v2, 0, sizeof(v2));
        if ( gptiForeground )
        {
          v2[0] = *(_DWORD *)(*(_QWORD *)(gptiForeground + 376LL) + 56LL);
          v0 = gInputFocusConnectionHandle;
          v2[1] = (unsigned int)PsGetThreadId((PETHREAD)*gptiForeground);
        }
        UserCoreMsgSend(*v0, 0LL, v2, 32LL);
      }
    }
    else
    {
      v1 = 0;
      if ( gptiForeground )
        v1 = *(_DWORD *)(*(_QWORD *)(gptiForeground + 376LL) + 56LL);
      ZwUpdateWnfStateData(&WNF_SHEL_FOCUS_CHANGE, &v1, 4LL, 0LL, 0LL, 0, 0);
    }
  }
}
