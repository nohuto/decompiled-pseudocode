/*
 * XREFs of xxxCalcClientRect @ 0x1C0040AB0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxRedrawHungWindow @ 0x1C0139BCC (xxxRedrawHungWindow.c)
 *     xxxUpdateClientRect @ 0x1C020BD50 (xxxUpdateClientRect.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x1C000E5E4 (xxxMenuBarCompute.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C0040EEC (GetWindowBordersWithDpiAwareness.c)
 *     GetCaptionHeight @ 0x1C0043588 (GetCaptionHeight.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

char __fastcall xxxCalcClientRect(__int64 a1, __int128 *a2, int a3)
{
  __int64 v5; // r13
  int v6; // edi
  int WindowBordersWithDpiAwareness; // eax
  signed int v8; // r15d
  int v9; // esi
  int v10; // edi
  int v11; // r14d
  __int64 v12; // r12
  int v13; // ecx
  char result; // al
  __int64 *v15; // r13
  unsigned int v16; // r11d
  __int64 v17; // rdi
  int v18; // edi
  unsigned int WindowDpiLastNotify; // r11d
  int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int DpiDepSysMetCachePlateauSlot; // eax
  unsigned int v26; // r11d
  int v27; // eax
  unsigned int v28; // r11d
  __int64 v29; // r14
  __int128 v30; // [rsp+30h] [rbp-38h]
  __int64 v32; // [rsp+40h] [rbp-28h] BYREF
  __int64 v33; // [rsp+48h] [rbp-20h]
  char v34; // [rsp+B0h] [rbp+48h]
  int v37; // [rsp+C8h] [rbp+60h]
  __int64 v38; // [rsp+C8h] [rbp+60h]

  v34 = *(_BYTE *)(a1 + 56) & 0xF;
  SetOrClrWF(0, (_DWORD *)a1, 0xFu, 1);
  SetOrClrWF(0, (_DWORD *)a1, 0x410u, 1);
  if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 )
  {
    v5 = HIDWORD(*(_QWORD *)a2);
    v30 = *a2;
    if ( (*(_BYTE *)(a1 + 70) & 0xC0) == 0xC0 )
    {
      SetOrClrWF(1, (_DWORD *)a1, 8u, 1);
      v6 = GetCaptionHeight(a1) + DWORD1(v30);
    }
    else
    {
      v6 = HIDWORD(*(_QWORD *)a2);
    }
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
    v8 = v30 + WindowBordersWithDpiAwareness;
    v37 = WindowBordersWithDpiAwareness;
    v9 = DWORD2(v30) - WindowBordersWithDpiAwareness;
    v10 = v6 + WindowBordersWithDpiAwareness;
    v11 = HIDWORD(v30) - WindowBordersWithDpiAwareness;
    LODWORD(v30) = v30 + WindowBordersWithDpiAwareness;
    DWORD2(v30) -= WindowBordersWithDpiAwareness;
    DWORD1(v30) = v10;
    HIDWORD(v30) -= WindowBordersWithDpiAwareness;
    if ( (*(_BYTE *)(a1 + 71) & 0xC0) != 0x40 )
    {
      v12 = *(_QWORD *)(a1 + 208);
      if ( v12 )
      {
        SetOrClrWF(1, (_DWORD *)a1, 1u, 1);
        if ( !a3 )
        {
          *(_DWORD *)(v12 + 56) |= 0x200u;
          v32 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v32;
          v33 = v12;
          ++*(_DWORD *)(v12 + 8);
          v10 += xxxMenuBarCompute((struct tagMENU *)v12, a1, (unsigned int)(v10 - v5), v37, v9 - v8);
          DWORD1(v30) = v10;
          *(_DWORD *)(v33 + 56) &= ~0x200u;
          ThreadUnlock1(v23, v22);
        }
      }
    }
    v13 = 0;
    if ( v10 >= v11 )
    {
      v11 = v10;
      HIDWORD(v30) = v10;
      v13 = 1;
    }
    if ( (*(_BYTE *)(a1 + 61) & 2) != 0 && v8 >= v9 )
    {
      v9 = v8;
      DWORD2(v30) = v8;
      v13 = 1;
    }
    if ( v13 )
      goto LABEL_12;
    if ( (*(_BYTE *)(a1 + 65) & 2) != 0 && v9 - v8 >= 4 && v11 - v10 >= 4 )
    {
      SetOrClrWF(1, (_DWORD *)a1, 0x410u, 1);
      v8 += 2;
      v9 -= 2;
      v10 += 2;
      *(_QWORD *)&v30 = __PAIR64__(v10, v8);
      v11 -= 2;
      *((_QWORD *)&v30 + 1) = __PAIR64__(v11, v9);
    }
    if ( (*(_BYTE *)(a1 + 70) & 0x10) != 0 )
    {
      v15 = (__int64 *)gpsi;
      if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      }
      else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
             && (v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v21 + 8) + 52LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
      }
      if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        v20 = *(_DWORD *)(gpsi + 1892LL);
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        v20 = *(_DWORD *)(gpsi + 2280LL);
      }
      else
      {
        DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
        if ( DpiDepSysMetCachePlateauSlot == -1 )
        {
          v15 = (__int64 *)gpsi;
          v20 = ScaleSystemMetricForDPIWithoutCache(3LL, v26);
        }
        else
        {
          v38 = 112LL * DpiDepSysMetCachePlateauSlot;
          v20 = *(_DWORD *)(v38 + gpsi + 3048);
          if ( v20 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(v26);
            v15 = (__int64 *)gpsi;
            v20 = *(_DWORD *)(v38 + gpsi + 3048);
            if ( v20 == -1 )
              v20 = 0;
          }
        }
      }
      if ( v11 - v10 <= v20 )
        goto LABEL_18;
      SetOrClrWF(1, (_DWORD *)a1, 4u, 1);
      if ( !a3 )
        HIDWORD(v30) = v11 - v20;
    }
    v15 = (__int64 *)gpsi;
LABEL_18:
    if ( (*(_BYTE *)(a1 + 70) & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
      {
        v16 = GetWindowDpiLastNotify(a1);
      }
      else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
             && (v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v24 + 8) + 52LL) & 1) != 0 )
      {
        v16 = 96;
      }
      else
      {
        v16 = *(unsigned __int16 *)(*v15 + 8678);
      }
      v17 = *v15;
      if ( v16 == *(unsigned __int16 *)(*v15 + 8678) )
      {
        v18 = *(_DWORD *)(v17 + 1888);
      }
      else if ( v16 == 96 )
      {
        v18 = *(_DWORD *)(v17 + 2276);
      }
      else
      {
        v27 = GetDpiDepSysMetCachePlateauSlot(v16);
        if ( v27 == -1 )
        {
          v18 = ScaleSystemMetricForDPIWithoutCache(2LL, v28);
        }
        else
        {
          v29 = 112LL * v27;
          v18 = *(_DWORD *)(v29 + v17 + 3044);
          if ( v18 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(v28);
            v18 = *(_DWORD *)(v29 + gpsi + 3044);
            if ( v18 == -1 )
              v18 = 0;
          }
        }
      }
      if ( v9 - v8 >= v18 )
      {
        SetOrClrWF(1, (_DWORD *)a1, 2u, 1);
        if ( !a3 )
        {
          if ( ((*(_BYTE *)(a1 + 65) ^ *(_BYTE *)(a1 + 66)) & 0x40) != 0 )
            LODWORD(v30) = v18 + v8;
          else
            DWORD2(v30) = v9 - v18;
        }
      }
    }
LABEL_12:
    *a2 = v30;
    goto LABEL_13;
  }
  *((_DWORD *)a2 + 2) = *(_DWORD *)a2;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a2 + 1);
LABEL_13:
  result = *(_BYTE *)(a1 + 56) & 0xF;
  if ( v34 != result && *(char *)(a1 + 63) < 0 )
    return xxxWindowEvent(32772, a1, 0, 0, 1);
  return result;
}
