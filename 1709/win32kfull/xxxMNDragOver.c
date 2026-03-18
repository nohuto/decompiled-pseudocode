/*
 * XREFs of xxxMNDragOver @ 0x1C0214184
 * Callers:
 *     NtUserMNDragOver @ 0x1C01E8DC0 (NtUserMNDragOver.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F6A78 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     GetMenuStateWindow @ 0x1C0205758 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C0205788 (IsMFMWFPWindow.c)
 *     xxxCallHandleMenuMessages @ 0x1C0205D10 (xxxCallHandleMenuMessages.c)
 */

__int64 __fastcall xxxMNDragOver(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // eax
  _QWORD *v12; // rcx
  __int64 MenuStateWindow; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  _QWORD v23[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v24[4]; // [rsp+40h] [rbp-28h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v23, 0LL, a3, a4);
  v8 = 0LL;
  v9 = gptiCurrent;
  v10 = *(_QWORD *)(gptiCurrent + 584LL);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 8);
    if ( (v11 & 0x400) != 0 )
    {
      v12 = *(_QWORD **)(gptiCurrent + 584LL);
      *(_DWORD *)(v10 + 8) = v11 | 0x8000;
      MenuStateWindow = GetMenuStateWindow(v12);
      if ( MenuStateWindow )
      {
        ++*(_DWORD *)(v10 + 40);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v9, v7);
        v24[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v24;
        v24[1] = MenuStateWindow;
        _InterlockedIncrement((volatile signed __int32 *)(MenuStateWindow + 8));
        xxxCallHandleMenuMessages(v10, MenuStateWindow, 160, 0LL, (a1[2] << 16) | *a1);
        ThreadUnlock1(v16, v15);
        if ( IsMFMWFPWindow(*(_QWORD *)(v10 + 80)) )
        {
          v18 = safe_cast_fnid_to_PMENUWND(v17);
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 8);
            if ( v19 )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::operator=(v23, v19);
              if ( *(_QWORD *)(*(_QWORD *)v23[0] + 40LL) )
                v20 = **(_QWORD **)(*(_QWORD *)v23[0] + 40LL);
              else
                v20 = 0LL;
              *(_QWORD *)(a2 + 8) = v20;
              *(_DWORD *)(a2 + 16) = *(_DWORD *)(v10 + 88);
              if ( *(_QWORD *)(*(_QWORD *)v23[0] + 8LL) )
                v8 = **(_QWORD **)(*(_QWORD *)v23[0] + 8LL);
              *(_QWORD *)(a2 + 24) = v8;
              v21 = *(_DWORD *)(v10 + 92);
              *(_DWORD *)a2 = v21;
              if ( (v21 & 2) != 0 )
                ++*(_DWORD *)(a2 + 16);
              LODWORD(v8) = 1;
            }
          }
        }
        xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v10, 1);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23, v6, v9, v7);
  return (unsigned int)v8;
}
