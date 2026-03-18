/*
 * XREFs of ?PublishFocusChange@@YAXPEAUtagWND@@@Z @ 0x1C00860D8
 * Callers:
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00859CC (xxxSetForegroundThreadWithWindowHint.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall PublishFocusChange(struct tagWND *a1)
{
  int v2; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v3[4]; // [rsp+48h] [rbp-30h] BYREF

  if ( gSessionId != gServiceSessionId && !gProtocolType )
  {
    if ( (gdwMitConfig & 4) != 0 || (gdwMitConfig & 3) != 0 )
    {
      if ( gInputFocusConnectionHandle )
      {
        memset(v3, 0, sizeof(v3));
        if ( gptiForeground )
        {
          LODWORD(v3[0]) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 400LL) + 56LL);
          HIDWORD(v3[0]) = (unsigned int)PsGetThreadId((PETHREAD)*gptiForeground);
          if ( a1 )
            v3[2] = *(_QWORD *)a1;
          else
            v3[2] = 0LL;
        }
        UserCoreMsgSend(gInputFocusConnectionHandle, 0LL, v3, 32LL);
      }
    }
    else
    {
      v2 = 0;
      if ( gptiForeground )
        v2 = *(_DWORD *)(*(_QWORD *)(gptiForeground + 400LL) + 56LL);
      ZwUpdateWnfStateData(&WNF_SHEL_FOCUS_CHANGE, &v2, 4LL, 0LL, 0LL, 0, 0);
    }
  }
}
