/*
 * XREFs of xxxApplyGlobalInputSettings @ 0x1C0085944
 * Callers:
 *     xxxSendFocusMessages @ 0x1C0085538 (xxxSendFocusMessages.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 */

__int64 xxxApplyGlobalInputSettings()
{
  __int64 v0; // rcx
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD v4[5]; // [rsp+40h] [rbp-28h] BYREF

  v0 = *(_QWORD *)(*(_QWORD *)(gpqForeground + 112LL) + 16LL);
  result = *(unsigned int *)(v0 + 464);
  if ( (result & 1) == 0 && *(_QWORD *)(v0 + 752) )
  {
    if ( v0 == gptiCurrent )
    {
      result = gspklGlobalActive;
      if ( gspklGlobalActive )
      {
        if ( gspklGlobalActive != *(_QWORD *)(gptiCurrent + 416LL) )
        {
          v4[0] = *(_QWORD *)(gptiCurrent + 392LL);
          *(_QWORD *)(gptiCurrent + 392LL) = v4;
          v4[1] = gspklGlobalActive;
          _InterlockedIncrement((volatile signed __int32 *)(gspklGlobalActive + 8LL));
          xxxInternalActivateKeyboardLayout(gspklGlobalActive, 0LL);
          return ThreadUnlock1(v3, v2);
        }
      }
    }
    else
    {
      return PostEventMessageEx((struct tagTHREADINFO *)v0, 0, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
