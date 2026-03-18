/*
 * XREFs of NtGdiGetDeviceCapsAll @ 0x1C00825B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00423CC (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00423D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0082638 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAll(HDC a1, struct _DEVCAPS *a2)
{
  CTouchProcessor *v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v6 = *(_QWORD *)(v5[0] + 48LL);
    v3 = a2;
    if ( a2 >= W32UserProbeAddress )
      v3 = W32UserProbeAddress;
    *(_BYTE *)v3 = *(_BYTE *)v3;
    *((_BYTE *)v3 + 143) = *((_BYTE *)v3 + 143);
    vGetDeviceCaps((struct PDEVOBJ *)&v6, a2);
    DCOBJ::~DCOBJ((DCOBJ *)v5);
    return 1LL;
  }
  else
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v5);
    return 0LL;
  }
}
