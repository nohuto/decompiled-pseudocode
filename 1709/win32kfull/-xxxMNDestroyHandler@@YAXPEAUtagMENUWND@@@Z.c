/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0204C3C
 * Callers:
 *     xxxMNCloseHierarchy @ 0x1C0206910 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     MNFreePopup @ 0x1C01F6E14 (MNFreePopup.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  ULONG_PTR v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  ULONG_PTR v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD v18[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v19[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR v21; // [rsp+58h] [rbp-18h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, 0LL, a3, a4);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v18, *((_QWORD *)a1 + 1));
  if ( *(_QWORD *)v18[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)v18[0] + 24LL) )
    {
      v8 = *(_QWORD *)v18[0];
      if ( *(_QWORD *)(*(_QWORD *)v18[0] + 16LL) )
        v9 = *(_QWORD *)(v8 + 16);
      else
        v9 = *(_QWORD *)(v8 + 24);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
      v20 = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = &v20;
      v21 = v9;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      xxxSendMessage(v9);
      ThreadUnlock1(v12, v11);
    }
    if ( *(_QWORD *)(*(_QWORD *)v18[0] + 40LL) )
    {
      if ( *(int *)(*(_QWORD *)v18[0] + 80LL) >= 0 )
      {
        v5 = *(_QWORD *)v18[0];
        if ( *(_DWORD *)(*(_QWORD *)v18[0] + 80LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 40LL) + 68LL) )
        {
          v5 = *(_QWORD *)v18[0];
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 40LL) + 96LL)
                    + 152LL * *(unsigned int *)(*(_QWORD *)v18[0] + 80LL)
                    + 4) &= ~0x80u;
        }
      }
    }
    if ( (**(_DWORD **)v18[0] & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v18[0] + 16LL), 65534LL, 0, 1, 0LL);
    if ( (**(_DWORD **)v18[0] & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v18[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
    if ( (**(_DWORD **)v18[0] & 0x200000) != 0 && *(_QWORD *)(*(_QWORD *)v18[0] + 8LL) )
    {
      v13 = *(_QWORD *)(*(_QWORD *)v18[0] + 8LL);
      v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
      v20 = *(_QWORD *)(v14 + 392);
      *(_QWORD *)(v14 + 392) = &v20;
      v21 = v13;
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      xxxSendMessage(*(_QWORD *)(*(_QWORD *)v18[0] + 8LL));
      ThreadUnlock1(v16, v15);
    }
    **(_DWORD **)v18[0] |= 0x8000u;
    if ( *(_QWORD *)(*(_QWORD *)v18[0] + 16LL) )
    {
      v17 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v18[0] + 16LL));
      if ( v17 )
      {
        *(_QWORD *)(v17 + 8) = 0LL;
        v5 = *(_QWORD *)v18[0];
        *(_QWORD *)(v17 + 16) = *(_QWORD *)v18[0];
      }
    }
    if ( (**(_DWORD **)v18[0] & 0x10000) != 0 )
    {
      **(_DWORD **)(*(_QWORD *)v18[0] + 64LL) |= 0x20000u;
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, *(_QWORD *)v18[0], v6, v7);
      MNFreePopup(v19);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18, v5, v6, v7);
}
