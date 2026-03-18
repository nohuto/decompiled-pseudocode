/*
 * XREFs of xxxEndMenuLoop @ 0x1C0203090
 * Callers:
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C0205D10 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxDWP_DoNCActivate @ 0x1C007B494 (xxxDWP_DoNCActivate.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C0214754 (xxxEndMenu.c)
 */

_QWORD *__fastcall xxxEndMenuLoop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v21[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v22[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, a2, a3, a4);
  v7 = 0;
  v8 = *(_QWORD *)v21[0];
  if ( (**(_DWORD **)v21[0] & 8) != 0 )
  {
    if ( (**(_DWORD **)v21[0] & 0x80000) == 0 )
      xxxMNCancel(a1, 0LL, 0LL, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20) != 0 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)v21[0] + 8LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v5, v6);
      v22[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v22;
      v22[1] = v9;
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      xxxDrawMenuBarUnderlines(*(_QWORD *)(*(_QWORD *)v21[0] + 8LL), 0LL, v11, v12);
      ThreadUnlock1(v14, v13);
    }
    if ( (*(_DWORD *)(a1 + 8) & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x100) != 0 && *(_QWORD *)(*(_QWORD *)v21[0] + 8LL) )
  {
    v15 = *(_QWORD *)(*(_QWORD *)v21[0] + 8LL);
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 408LL);
    if ( v16 == gpqForeground && *(_QWORD *)(v16 + 120) == v15 )
      v7 = 1;
    if ( ((*(unsigned __int8 *)(v15 + 56) >> 6) & 1) != v7 )
    {
      v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v5, v6);
      v23[0] = *(_QWORD *)(v17 + 392);
      *(_QWORD *)(v17 + 392) = v23;
      v23[1] = v15;
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      xxxDWP_DoNCActivate(v15, (v7 ^ 1) + 1, 1LL);
      ThreadUnlock1(v19, v18);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21, v8, v5, v6);
}
