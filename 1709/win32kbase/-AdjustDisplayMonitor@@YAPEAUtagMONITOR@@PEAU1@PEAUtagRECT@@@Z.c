/*
 * XREFs of ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C009A848
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GetMonitorRect @ 0x1C005955C (GetMonitorRect.c)
 *     IntersectRect @ 0x1C005C860 (IntersectRect.c)
 */

struct tagMONITOR *__fastcall AdjustDisplayMonitor(struct tagMONITOR *a1, struct tagRECT *a2)
{
  __int64 i; // rbx
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v8[6]; // [rsp+40h] [rbp-18h] BYREF

  for ( i = *(_QWORD *)(gpDispInfo + 96); i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) == 0 )
    {
      v6 = *GetMonitorRect(&v7, i);
      if ( (unsigned int)IntersectRect(v8, &a2->left, (int *)&v6) )
        return (struct tagMONITOR *)i;
    }
  }
  return a1;
}
