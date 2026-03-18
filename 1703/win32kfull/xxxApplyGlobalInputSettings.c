/*
 * XREFs of xxxApplyGlobalInputSettings @ 0x1C00B5774
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C00B5394 (xxxSendFocusMessages.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 */

__int64 xxxApplyGlobalInputSettings()
{
  __int64 v0; // rcx
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD v4[5]; // [rsp+40h] [rbp-28h] BYREF

  v0 = *(_QWORD *)(*(_QWORD *)(gpqForeground + 80LL) + 16LL);
  result = *(unsigned int *)(v0 + 440);
  if ( (result & 1) == 0 && *(_QWORD *)(v0 + 696) )
  {
    result = gptiCurrent;
    if ( v0 == gptiCurrent )
    {
      if ( gspklGlobalActive )
      {
        if ( gspklGlobalActive != *(_QWORD *)(gptiCurrent + 392LL) )
        {
          v4[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v4;
          v4[1] = gspklGlobalActive;
          ++*(_DWORD *)(gspklGlobalActive + 8LL);
          xxxInternalActivateKeyboardLayout(gspklGlobalActive, 0LL);
          return ThreadUnlock1(v3, v2);
        }
      }
    }
    else
    {
      return PostEventMessageEx(v0, gpqForeground, 0x12u, 0LL, 0, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
