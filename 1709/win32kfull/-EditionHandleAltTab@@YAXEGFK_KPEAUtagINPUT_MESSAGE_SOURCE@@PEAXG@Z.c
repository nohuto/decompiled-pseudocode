/*
 * XREFs of ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C0121060
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     HasHidTable @ 0x1C00A0EE0 (HasHidTable.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     SetNewForegroundQueue @ 0x1C00CC1C0 (SetNewForegroundQueue.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxCancelCoolSwitch @ 0x1C0115384 (xxxCancelCoolSwitch.c)
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
  ULONG_PTR v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD v23[4]; // [rsp+60h] [rbp-28h] BYREF

  if ( gspwndAltTab )
  {
    if ( gpqForeground )
    {
      v12 = *(_QWORD *)(gpqForeground + 120LL);
      v13 = v12 ? *(_QWORD *)(v12 + 16) : *(_QWORD *)(gpqForeground + 96LL);
      if ( !(unsigned int)HasHidTable(v13)
        || ((v14 = *(_QWORD *)(gpqForeground + 120LL)) == 0
          ? (v15 = *(_QWORD *)(gpqForeground + 96LL))
          : (v15 = *(_QWORD *)(v14 + 16)),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 400) + 784LL) + 100LL) & 0x20) == 0) )
      {
        *(_DWORD *)(gpqForeground + 380LL) |= 0x80u;
        PostInputMessage(gpqForeground, 0LL, a8, a1, ((a3 | a2) << 16) | 1, a4, 0LL, a5, 0, a6, a7, 0LL);
      }
    }
    xxxCancelCoolSwitch();
    v16 = gspwndActivate;
    if ( gspwndActivate )
    {
      if ( gpqForeground == *(_QWORD *)(*(_QWORD *)(gspwndActivate + 16) + 408LL) )
        SetNewForegroundQueue(0LL);
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v16 + 16), 0);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
      v23[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v23;
      v23[1] = v16;
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      xxxSetForegroundWindow2((LARGE_INTEGER *)v16, 0LL, 0x12u, 0);
      if ( (*(_BYTE *)(v16 + 71) & 0x40) != 0 )
        xxxSetWindowPos((struct tagWND *)v16, 0LL, 0LL, 0LL, 0, 0, 16387);
      ThreadUnlock1(v22, v21);
      HMAssignmentUnlock(&gspwndActivate);
    }
  }
}
