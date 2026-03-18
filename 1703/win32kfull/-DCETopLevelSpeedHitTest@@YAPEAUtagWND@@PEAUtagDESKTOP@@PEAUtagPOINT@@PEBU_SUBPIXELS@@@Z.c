/*
 * XREFs of ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00619D0
 * Callers:
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C005F9CC (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0069314 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     DCELayerHitTest @ 0x1C009CC6C (DCELayerHitTest.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01BF8F0 (DCEHitTestWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagWND *__fastcall DCETopLevelSpeedHitTest(
        struct tagDESKTOP *a1,
        struct tagPOINT *a2,
        const struct _SUBPIXELS *a3)
{
  __int64 v3; // r14
  __int64 v7; // rdi
  bool v8; // zf
  struct tagPOINT v9; // rbx
  PVOID v10; // rcx
  __int64 v11; // rcx
  unsigned int y; // ebp
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // eax
  _QWORD *v17; // rcx
  struct tagPOINT v18; // [rsp+20h] [rbp-58h] BYREF
  char v19[8]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-48h] BYREF

  v3 = 0LL;
  ++gdwInAtomicOperation;
  v19[0] = 0;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)v19);
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) + 112LL);
  if ( !v7 )
    goto LABEL_22;
  while ( 1 )
  {
    v8 = (*(_BYTE *)(v7 + 71) & 0x10) == 0;
    v9 = *a2;
    v18 = *a2;
    if ( v8 )
      goto LABEL_3;
    if ( (unsigned int)GetWindowCloakState(v7) )
      goto LABEL_3;
    v10 = *(PVOID *)(v7 + 24);
    if ( v10 )
    {
      if ( gbLockScreenActive )
      {
        if ( grpdeskLogon != v10 )
        {
          v16 = *(_DWORD *)(v7 + 320);
          if ( v16 != 17 && (v16 < 2 || v16 > 3 && v16 != 14 && v16 != 18) )
            goto LABEL_3;
        }
      }
    }
    v11 = *(_QWORD *)(v7 + 224);
    if ( *(_QWORD *)(v7 + 288) )
    {
      v20[0] = 0LL;
      v20[1] = 0LL;
      if ( v11 )
        GreGetRgnBox(v11, v20);
      v17 = v20;
      if ( !*(_QWORD *)(v7 + 224) )
        v17 = (_QWORD *)(v7 + 128);
      if ( !(unsigned int)DCEHitTestWindow(v17, *(_QWORD *)(v7 + 288), &v18, a3) )
        goto LABEL_3;
      v9 = v18;
      y = v18.y;
    }
    else if ( v11 )
    {
      y = v18.y;
      if ( !(unsigned int)GrePtInRegion(v11, (unsigned int)v9.x, (unsigned int)v18.y) )
        goto LABEL_3;
    }
    else
    {
      if ( v9.x < *(_DWORD *)(v7 + 128) )
        goto LABEL_3;
      if ( v9.x >= *(_DWORD *)(v7 + 136) )
        goto LABEL_3;
      y = v18.y;
      if ( v18.y < *(_DWORD *)(v7 + 132) || v18.y >= *(_DWORD *)(v7 + 140) )
        goto LABEL_3;
    }
    v13 = *(_QWORD *)(v7 + 216);
    if ( !v13 )
      break;
    if ( (unsigned int)GrePtInRegion(v13, (unsigned int)v9.x, y) )
      goto LABEL_16;
LABEL_3:
    v7 = *(_QWORD *)(v7 + 88);
    if ( !v7 )
      goto LABEL_22;
  }
  v14 = *(_QWORD *)(v7 + 224);
  if ( v14 && !(unsigned int)GrePtInRegion(v14, (unsigned int)v9.x, y) )
    goto LABEL_3;
LABEL_16:
  if ( (*(_BYTE *)(v7 + 66) & 8) != 0
    && (*(_DWORD *)(v7 + 304) & 0x20) == 0
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))DCELayerHitTest)(v7, v9) )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v7 + 288) )
    *a2 = v9;
  v3 = v7;
  if ( *(char *)(v7 + 59) < 0 )
    v3 = 0LL;
LABEL_22:
  if ( !v19[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v19);
  }
  return (struct tagWND *)v3;
}
