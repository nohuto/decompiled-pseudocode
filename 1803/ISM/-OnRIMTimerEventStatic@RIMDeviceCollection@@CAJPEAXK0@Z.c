/*
 * XREFs of ?OnRIMTimerEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x18006DF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RIMDeviceCollection::OnRIMTimerEventStatic(_QWORD *a1, __int64 a2, void *a3)
{
  int v4; // ecx
  int result; // eax

  if ( (_DWORD)a2 )
    return -2147418113;
  v4 = RIMOnTimerNotification(a1[10], a2, a3);
  result = a1 == 0LL ? 0x57 : 0;
  if ( v4 < 0 )
    return v4 | 0x10000000;
  return result;
}
