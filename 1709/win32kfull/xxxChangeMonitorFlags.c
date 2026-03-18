/*
 * XREFs of xxxChangeMonitorFlags @ 0x1C0118BE0
 * Callers:
 *     xxxEventWndProc @ 0x1C0053E10 (xxxEventWndProc.c)
 *     xxxCsDdeInitialize @ 0x1C01189A4 (xxxCsDdeInitialize.c)
 *     NtUserUpdateInstance @ 0x1C01ED1B0 (NtUserUpdateInstance.c)
 * Callees:
 *     xxxCsEvent @ 0x1C000C874 (xxxCsEvent.c)
 */

__int64 __fastcall xxxChangeMonitorFlags(__int64 a1, int a2)
{
  unsigned int v2; // r10d
  _DWORD *v3; // rax
  int v4; // r9d
  __int64 v5; // r8
  int v6; // ecx
  __int64 result; // rax
  _DWORD Src[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = MonitorFlags;
  v3 = &aMonitorCount;
  v4 = *(_DWORD *)(a1 + 40) ^ a2;
  *(_DWORD *)(a1 + 40) = a2;
  MonitorFlags = 0;
  v5 = 10LL;
  do
  {
    v6 = v3[1];
    if ( (v6 & v4) != 0 )
    {
      if ( (v6 & a2) != 0 )
        ++*v3;
      else
        --*v3;
    }
    if ( *v3 )
      MonitorFlags |= v6;
    v3 += 2;
    --v5;
  }
  while ( v5 );
  result = MonitorFlags;
  if ( v2 != MonitorFlags )
  {
    Src[0] = 0;
    Src[1] = 0x40000;
    Src[2] = MonitorFlags;
    return xxxCsEvent(Src, 4u);
  }
  return result;
}
