/*
 * XREFs of ?OnRIMAutoRepeatEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x180089720
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall RIMDeviceCollection::OnRIMAutoRepeatEventStatic(_QWORD *a1, int a2, void *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // r9d

  if ( a2 )
  {
    v5 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 584;
      goto LABEL_7;
    }
  }
  else
  {
    v4 = RIMOnTimerNotification(a1[10], 1LL, a3);
    v5 = a1 == 0LL ? 0x57 : 0;
    if ( v4 < 0 )
    {
      v5 = v4 | 0x10000000;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v6 = 580;
LABEL_7:
        McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 2, v6, v5);
      }
    }
  }
  return v5;
}
