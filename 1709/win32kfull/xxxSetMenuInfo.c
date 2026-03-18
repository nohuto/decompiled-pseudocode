/*
 * XREFs of xxxSetMenuInfo @ 0x1C007D540
 * Callers:
 *     xxxLoadSysMenu @ 0x1C007C804 (xxxLoadSysMenu.c)
 *     xxxSetMenuInfo @ 0x1C007D540 (xxxSetMenuInfo.c)
 *     NtUserThunkedMenuInfo @ 0x1C013A1C0 (NtUserThunkedMenuInfo.c)
 * Callees:
 *     xxxSetMenuInfo @ 0x1C007D540 (xxxSetMenuInfo.c)
 *     MNGetPopupFromMenu @ 0x1C0097378 (MNGetPopupFromMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxMNUpdateShownMenu @ 0x1C0213EAC (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetMenuInfo(__int64 a1, __int64 a2)
{
  int v4; // ecx
  unsigned int v5; // esi
  int v6; // eax
  unsigned int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // [rsp+20h] [rbp-58h]
  _QWORD v16[2]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v18[6]; // [rsp+48h] [rbp-30h] BYREF
  int v19; // [rsp+88h] [rbp+10h]
  int v20; // [rsp+90h] [rbp+18h]
  int v21; // [rsp+98h] [rbp+20h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v16);
  v19 = 0;
  v4 = 0;
  v21 = 0;
  v20 = 1;
  v5 = 1;
  if ( (*(_DWORD *)(a2 + 4) & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 56) ^= (*(_DWORD *)(a1 + 56) ^ *(_DWORD *)(a2 + 8)) & 0xFC000000;
    v4 = 1;
    v19 = 1;
  }
  if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
  {
    v4 = 1;
    v19 = 1;
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 12);
  }
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
  {
    v14 = (*(_BYTE *)(a1 + 144) & 3) == 0;
    *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 16);
    if ( !v14 )
      v5 = 5;
    v21 = 1;
    v20 = v5;
  }
  if ( (*(_DWORD *)(a2 + 4) & 4) != 0 )
    *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 24);
  if ( (*(_DWORD *)(a2 + 4) & 8) != 0 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 32);
  if ( *(int *)(a2 + 4) < 0 )
  {
    v6 = *(_DWORD *)(a1 + 68);
    v7 = 0;
    if ( v6 )
      v8 = *(_QWORD *)(a1 + 96);
    else
      v8 = 0LL;
    if ( v6 )
    {
      do
      {
        if ( !v8 )
          break;
        v15 = *(_QWORD *)(v8 + 16);
        if ( v15 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v18[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = v18;
          v18[1] = v15;
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
          xxxSetMenuInfo(*(_QWORD *)(v8 + 16), a2);
          ThreadUnlock1(v13, v12);
        }
        if ( ++v7 == -1 || v7 >= *(_DWORD *)(a1 + 68) )
          v8 = 0LL;
        else
          v8 = *(_QWORD *)(a1 + 96) + 152LL * v7;
      }
      while ( v7 < *(_DWORD *)(a1 + 68) );
      v4 = v19;
    }
    v5 = v20;
  }
  if ( v4 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  else if ( !v21 )
  {
    goto LABEL_27;
  }
  v9 = MNGetPopupFromMenu(a1, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v16, v9);
  if ( *(_QWORD *)v16[0] )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v17);
    xxxMNUpdateShownMenu(v17, 0LL, v5);
  }
LABEL_27:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16);
  return 1LL;
}
