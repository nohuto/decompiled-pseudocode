/*
 * XREFs of GreGetAspectRatioFilter @ 0x1C026B740
 * Callers:
 *     <none>
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003177C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0031818 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetAspectRatioFilter(HDC a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v5, a1);
    if ( v5[0] )
    {
      v6 = *(_QWORD *)(v5[0] + 48LL);
      if ( (*(_DWORD *)(*(_QWORD *)(v5[0] + 80LL) + 104LL) & 1) != 0 )
      {
        *a2 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v6);
        a2[1] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v6);
      }
      else
      {
        *(_QWORD *)a2 = 0LL;
      }
      v2 = 1;
    }
    else
    {
      EngSetLastError(6u);
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
    return v2;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
