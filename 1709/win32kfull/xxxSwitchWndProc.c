/*
 * XREFs of xxxSwitchWndProc @ 0x1C01D1410
 * Callers:
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01C24A0 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxDefWindowProc @ 0x1C0093900 (xxxDefWindowProc.c)
 *     zzzSetCursor @ 0x1C0098174 (zzzSetCursor.c)
 *     xxxCancelCoolSwitch @ 0x1C0115384 (xxxCancelCoolSwitch.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CFD54 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSwitchWndProc(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // r12
  unsigned int v6; // edi
  __int16 v9; // ax
  int v10; // edx
  unsigned int v11; // r8d
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // rcx
  void *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v20[4]; // [rsp+40h] [rbp-48h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( (*((_DWORD *)a1 + 76) & 0x800) != 0 )
    return 0LL;
  v9 = *((_WORD *)a1 + 41);
  if ( v9 == 672 )
  {
LABEL_15:
    **((_QWORD **)a1 + 49) = a1;
    switch ( v6 )
    {
      case 1u:
        zzzSetCursor(*(_QWORD *)(*((_QWORD *)a1 + 21) + 136LL));
        break;
      case 0x10u:
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 151);
        xxxCancelCoolSwitch();
        break;
      case 0x14u:
      case 0x3Au:
        v20[0] = *(_QWORD *)(gptiCurrent + 392LL);
        *(_QWORD *)(gptiCurrent + 392LL) = v20;
        v20[1] = a1;
        _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
        xxxPaintSwitchWindow(a1);
        ThreadUnlock1(v19, v18);
        return 0LL;
    }
    a4 = v4;
    a3 = v5;
    a2 = v6;
    return xxxDefWindowProc(a1, a2, a3, a4);
  }
  if ( v9 )
    return 0LL;
  if ( (_DWORD)a2 == 1 )
  {
    v10 = *((_DWORD *)a1 + 63);
    v11 = *(unsigned __int16 *)(gpsi + 340LL);
    if ( v10 + 400 >= v11 )
    {
      v17 = (void *)*((_QWORD *)a1 + 49);
      if ( v17 )
        memset(v17, 0, *((unsigned int *)a1 + 63));
    }
    else
    {
      if ( *((_DWORD *)a1 + 62) + v10 + 400 < v11 )
        return 0LL;
      v12 = v11 - 400;
      v14 = Win32AllocPoolWithQuotaZInit(v11 - 400, 1937208149LL);
      if ( !v14 )
        return 0LL;
      v16 = *((_QWORD *)a1 + 49);
      if ( v16 )
        Win32FreePool(v16, v13, v15);
      *((_QWORD *)a1 + 49) = v14;
      *((_DWORD *)a1 + 63) = v12;
    }
    *((_WORD *)a1 + 41) = 672;
    goto LABEL_15;
  }
  return xxxDefWindowProc(a1, a2, a3, a4);
}
