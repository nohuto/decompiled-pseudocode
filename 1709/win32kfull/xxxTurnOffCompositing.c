/*
 * XREFs of xxxTurnOffCompositing @ 0x1C01C56BC
 * Callers:
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 * Callees:
 *     xxxInternalEnumWindow @ 0x1C0054338 (xxxInternalEnumWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxTurnOffCompositing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = 1;
  if ( (_DWORD)a2 )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( !v5 )
      return;
    v6 = 3;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v10;
    v10[1] = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  }
  xxxInternalEnumWindow(v5, (__int64 (__fastcall *)(__int64, __int64))xxxEnumTurnOffCompositing, 0LL, v6);
  if ( v4 )
    ThreadUnlock1(v9, v8);
}
