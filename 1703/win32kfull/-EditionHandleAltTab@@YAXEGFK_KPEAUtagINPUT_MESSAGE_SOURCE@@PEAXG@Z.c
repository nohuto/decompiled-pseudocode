/*
 * XREFs of ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C0117400
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     HasHidTable @ 0x1C004A4F0 (HasHidTable.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     SetNewForegroundQueue @ 0x1C00B6AD0 (SetNewForegroundQueue.c)
 *     xxxCancelCoolSwitch @ 0x1C010B1D4 (xxxCancelCoolSwitch.c)
 */

void __fastcall EditionHandleAltTab(
        unsigned __int8 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        int a4,
        unsigned __int64 a5,
        struct tagINPUT_MESSAGE_SOURCE *a6,
        void *a7,
        unsigned __int16 a8)
{
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  struct tagWND *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[4]; // [rsp+60h] [rbp-38h] BYREF

  if ( gspwndAltTab )
  {
    if ( gpqForeground )
    {
      v12 = *(_QWORD *)(gpqForeground + 88LL);
      v13 = v12 ? *(_QWORD *)(v12 + 16) : *(_QWORD *)(gpqForeground + 64LL);
      if ( !(unsigned int)HasHidTable(v13)
        || ((v14 = *(_QWORD *)(gpqForeground + 88LL)) == 0
          ? (v15 = *(_QWORD *)(gpqForeground + 64LL))
          : (v15 = *(_QWORD *)(v14 + 16)),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 376) + 776LL) + 100LL) & 0x20) == 0) )
      {
        *(_DWORD *)(gpqForeground + 340LL) |= 0x80u;
        PostInputMessage(gpqForeground, 0LL, a8, a1, ((a3 | a2) << 16) | 1, a4, 0LL, a5, 0, a6, (__int64)a7, 0LL);
      }
    }
    xxxCancelCoolSwitch();
    v16 = gspwndActivate;
    if ( gspwndActivate )
    {
      if ( gpqForeground == *(_QWORD *)(*((_QWORD *)gspwndActivate + 2) + 384LL) )
        SetNewForegroundQueue(0LL);
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *((struct tagTHREADINFO **)v16 + 2), 0);
      v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v19;
      v19[1] = v16;
      ++*((_DWORD *)v16 + 2);
      xxxSetForegroundWindow2((LARGE_INTEGER *)v16, 0LL, 0x12u, 0);
      if ( (*((_BYTE *)v16 + 71) & 0x40) != 0 )
        xxxSetWindowPos(v16, 0LL, 0LL, 0LL, 0, 0, 16387);
      ThreadUnlock1(v18, v17);
      HMAssignmentUnlock(&gspwndActivate);
    }
  }
}
