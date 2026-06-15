/*
 * XREFs of ?GetModePriorityList@CWindowsPolicyManager@@UEAAJW4SYSTEM_AUDIO_STREAM_TYPE@@KHPEAPEBUModeList@@@Z @ 0x1800056E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::GetModePriorityList(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5)
{
  unsigned int v5; // ecx
  __int64 v7; // r8

  v5 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return (unsigned int)-2147024809;
  }
  else if ( a3 >= 0x15 )
  {
    return (unsigned int)-2147024809;
  }
  if ( a2 == 1 && a3 >= 0x15 )
    return (unsigned int)-2147024809;
  if ( a5 )
  {
    if ( a2 )
      v7 = (__int64)*(&off_18002AD90 + a3);
    else
      v7 = (__int64)*(&off_18002AF90 + a3);
    *a5 = v7;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v5;
}
