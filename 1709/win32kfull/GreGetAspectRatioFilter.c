/*
 * XREFs of GreGetAspectRatioFilter @ 0x1C026A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003E0AC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C003E0E8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall GreGetAspectRatioFilter(HDC a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v7, a1);
    if ( v7[0] )
    {
      v8 = *(_QWORD *)(v7[0] + 48LL);
      if ( (*(_DWORD *)(*(_QWORD *)(v7[0] + 80LL) + 104LL) & 1) != 0 )
      {
        *a2 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v8, v5);
        a2[1] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v8, v6);
      }
      else
      {
        *(_QWORD *)a2 = 0LL;
      }
      v2 = 1;
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
    }
    else
    {
      EngSetLastError(6u);
    }
    return v2;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
