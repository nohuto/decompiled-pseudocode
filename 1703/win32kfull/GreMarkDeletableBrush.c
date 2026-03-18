/*
 * XREFs of GreMarkDeletableBrush @ 0x1C00EC548
 * Callers:
 *     SetDesktopPattern @ 0x1C00EC3FC (SetDesktopPattern.c)
 *     RecolorDeskPattern @ 0x1C011C450 (RecolorDeskPattern.c)
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00EC988 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00EC9CC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 */

void __fastcall GreMarkDeletableBrush(HBRUSH a1)
{
  __int64 v2; // rdx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v3, a1);
  if ( v3[0] && (*(_DWORD *)(v3[0] + 48LL) & 0x200) == 0 && a1 )
  {
    LOBYTE(v2) = 16;
    HmgMarkDeletable(a1, v2);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v3);
}
