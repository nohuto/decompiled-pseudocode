/*
 * XREFs of SetSysColor @ 0x1C0063380
 * Callers:
 *     xxxSetSysColors @ 0x1C0063184 (xxxSetSysColors.c)
 * Callees:
 *     hCreateSolidBrushInternal @ 0x1C001E170 (hCreateSolidBrushInternal.c)
 *     GreSetBrushOwner @ 0x1C00484E0 (GreSetBrushOwner.c)
 *     GreGetNearestColor @ 0x1C00634D0 (GreGetNearestColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00635C4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00636F8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006373C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     HmgMarkUndeletable @ 0x1C0063790 (HmgMarkUndeletable.c)
 *     GreSetMagicColors @ 0x1C00FB5EC (GreSetMagicColors.c)
 */

__int64 __fastcall SetSysColor(__int64 a1, unsigned int NearestColor, char a3)
{
  __int64 v4; // rdi
  HBRUSH v6; // rcx
  struct HOBJ__ *SolidBrushInternal; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned int)a1;
  PsEnterPriorityRegion(a1);
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresRender);
  *((_DWORD *)gpsi + v4 + 1107) = NearestColor;
  if ( (a3 & 4) != 0
    && (*(_DWORD *)(gpDispInfo + 124) & 2) != 0
    && ((_DWORD)v4 == 1 || (_DWORD)v4 == 15 || (_DWORD)v4 == 16 || (_DWORD)v4 == 20) )
  {
    GreSetMagicColors(*(HDC *)(gpDispInfo + 48));
  }
  if ( (a3 & 8) != 0
    || (a3 & 2) != 0
    && (_DWORD)v4 != 1
    && ((unsigned int)v4 <= 9
     || (unsigned int)v4 > 0xC && (_DWORD)v4 != 24 && ((unsigned int)v4 <= 0x1A || (unsigned int)v4 > 0x1C)) )
  {
    NearestColor = GreGetNearestColor(*(HDC *)(gpDispInfo + 48));
  }
  *((_DWORD *)gpsi + v4 + 1138) = NearestColor;
  v6 = (HBRUSH)*((_QWORD *)gpsi + v4 + 585);
  if ( v6 )
  {
    GreSetSolidBrushInternal(v6, NearestColor, 0, 1);
  }
  else
  {
    SolidBrushInternal = (struct HOBJ__ *)hCreateSolidBrushInternal(NearestColor, 0, 0LL, 0);
    *((_QWORD *)gpsi + v4 + 585) = SolidBrushInternal;
    if ( SolidBrushInternal )
      HmgMarkUndeletable(SolidBrushInternal);
    GreSetBrushOwner(*((struct HOBJ__ **)gpsi + v4 + 585), 0);
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v9, *((HBRUSH *)gpsi + v4 + 585));
    if ( v9[0] )
      *(_DWORD *)(v9[0] + 48LL) |= 0x40200u;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v9);
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresRender);
  return PsLeavePriorityRegion();
}
