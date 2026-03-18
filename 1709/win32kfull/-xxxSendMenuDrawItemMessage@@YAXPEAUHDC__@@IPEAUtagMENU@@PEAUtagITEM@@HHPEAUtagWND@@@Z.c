/*
 * XREFs of ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C007FD30
 * Callers:
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNInitUAHMenuItem @ 0x1C007FEA0 (MNInitUAHMenuItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C007FEF4 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0097A28 (MNIsUAHMenu.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall xxxSendMenuDrawItemMessage(
        HDC a1,
        unsigned int a2,
        struct tagMENU *a3,
        struct tagITEM *a4,
        int a5,
        int a6,
        struct tagWND *a7)
{
  struct tagWND *v7; // rdi
  int v12; // r15d
  int v13; // r12d
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+40h] [rbp-B1h] BYREF
  struct tagWND *v22; // [rsp+48h] [rbp-A9h]
  _QWORD v23[18]; // [rsp+60h] [rbp-91h] BYREF

  v7 = a7;
  memset(v23, 0, sizeof(v23));
  v12 = 1;
  v13 = MNIsUAHMenu(a3);
  MNInitDrawItemStruct(a1, a2, a3, a4, a5, a6, (struct tagDRAWITEMSTRUCT *)v23);
  v14 = *((_QWORD *)a3 + 11);
  if ( v14 && ((*(_DWORD *)a4 & 0x100) != 0 || *((_QWORD *)a4 + 13) == -1LL) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v21 = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = &v21;
    v22 = (struct tagWND *)v14;
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    xxxSendMessage(*((_QWORD *)a3 + 11), 43LL, 0LL, v23);
    ThreadUnlock1(v20, v19);
    if ( (unsigned int)MNGetpItemIndex(a3, a4) == -1 )
      v12 = 0;
  }
  if ( v13 )
  {
    if ( a7 || (v7 = (struct tagWND *)*((_QWORD *)a3 + 11)) != 0LL )
    {
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000 )
        LODWORD(v23[2]) &= ~0x100u;
      v23[8] = *(_QWORD *)a3;
      LODWORD(v23[10]) = *((_DWORD *)a3 + 14);
      v23[9] = a1;
      if ( v12 )
        MNInitUAHMenuItem(a3, a4, &v23[11]);
      v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v21 = *(_QWORD *)(v15 + 392);
      *(_QWORD *)(v15 + 392) = &v21;
      v22 = v7;
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
      xxxSendMessage(v7, 146LL, 0LL, v23);
      ThreadUnlock1(v17, v16);
    }
  }
}
