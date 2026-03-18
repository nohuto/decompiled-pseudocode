/*
 * XREFs of SetSysColor @ 0x1C0058E00
 * Callers:
 *     xxxSetSysColors @ 0x1C0058C04 (xxxSetSysColors.c)
 * Callees:
 *     GreSetBrushOwner @ 0x1C002E550 (GreSetBrushOwner.c)
 *     GreGetNearestColor @ 0x1C0058F50 (GreGetNearestColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0059040 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0059178 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00591BC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     hCreateSolidBrushInternal @ 0x1C0059510 (hCreateSolidBrushInternal.c)
 *     HmgMarkUndeletable @ 0x1C005A5D0 (HmgMarkUndeletable.c)
 *     GreSetMagicColors @ 0x1C00FB1FC (GreSetMagicColors.c)
 */

__int64 __fastcall SetSysColor(__int64 a1, unsigned int NearestColor, char a3)
{
  __int64 v4; // rdi
  CCursorClip *v6; // rcx
  HBRUSH v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 SolidBrushInternal; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned int)a1;
  PsEnterPriorityRegion(a1);
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresRender);
  *((_DWORD *)gpsi + v4 + 1209) = NearestColor;
  v6 = gpDispInfo;
  if ( (a3 & 4) != 0
    && (*((_DWORD *)gpDispInfo + 37) & 2) != 0
    && ((_DWORD)v4 == 1 || (_DWORD)v4 == 15 || (_DWORD)v4 == 16 || (_DWORD)v4 == 20) )
  {
    GreSetMagicColors(*((HDC *)gpDispInfo + 6));
    v6 = gpDispInfo;
  }
  if ( (a3 & 8) != 0
    || (a3 & 2) != 0
    && (_DWORD)v4 != 1
    && ((unsigned int)v4 <= 9
     || (unsigned int)v4 > 0xC && (_DWORD)v4 != 24 && ((unsigned int)v4 <= 0x1A || (unsigned int)v4 > 0x1C)) )
  {
    NearestColor = GreGetNearestColor(*((HDC *)v6 + 6));
  }
  *((_DWORD *)gpsi + v4 + 1240) = NearestColor;
  v7 = (HBRUSH)*((_QWORD *)gpsi + v4 + 636);
  if ( v7 )
  {
    GreSetSolidBrushInternal(v7, NearestColor, 0, 1);
  }
  else
  {
    SolidBrushInternal = hCreateSolidBrushInternal(NearestColor, 0, 0LL, 0);
    *((_QWORD *)gpsi + v4 + 636) = SolidBrushInternal;
    if ( SolidBrushInternal )
    {
      LOBYTE(v10) = 16;
      HmgMarkUndeletable(SolidBrushInternal, v10);
    }
    GreSetBrushOwner(*((HBRUSH *)gpsi + v4 + 636), 0);
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v12, *((HBRUSH *)gpsi + v4 + 636));
    if ( v12[0] )
      *(_DWORD *)(v12[0] + 48LL) |= 0x40200u;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v12);
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresRender);
  return PsLeavePriorityRegion(v8);
}
