/*
 * XREFs of ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01D7B1C
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01DBAC0 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01D8484 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 */

__int64 __fastcall ComputeMoveOutcome(unsigned __int64 a1, __int64 a2, struct tagMONITOR **a3, _DWORD *a4)
{
  int v8; // eax
  struct tagMONITOR *v9; // rcx
  bool v10; // zf
  int v11; // edx
  int v12; // eax
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  int v16; // [rsp+50h] [rbp+18h] BYREF
  struct tagMONITOR *v17; // [rsp+58h] [rbp+20h] BYREF

  v8 = HitTargetAndMonitorFromPoint(
         (struct tagPOINT)a1,
         (const struct _MOVESIZEDATA *const)a2,
         &v17,
         (enum eTHRESHOLD_MARGIN_DIRECTION *)&v16);
  v9 = v17;
  v10 = v8 == 0;
  v11 = v16;
  v12 = *(_DWORD *)(a2 + 240);
  *a3 = v17;
  *a4 = v11;
  if ( v10 )
  {
    if ( v12 == 4 )
      return 5LL;
    else
      return 4LL;
  }
  else if ( v11 == 3 )
  {
    *a4 = 4;
    return 5 - (unsigned int)(v12 != 4);
  }
  else if ( v12 == 4 )
  {
    return 6LL;
  }
  else if ( v9 == *(struct tagMONITOR **)(a2 + 232) && v11 == v12 )
  {
    v14 = 1;
    if ( (*(_DWORD *)(a2 + 280) & 2) != 0
      && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL) + 328LL)
      && (unsigned int)(v11 - 1) <= 1
      && !PtInRect((_DWORD *)(a2 + 264), a1) )
    {
      return v15;
    }
    return v14;
  }
  else if ( v9 == *(struct tagMONITOR **)(a2 + 232) && v11 == v12 )
  {
    return 0LL;
  }
  else
  {
    return 3LL;
  }
}
