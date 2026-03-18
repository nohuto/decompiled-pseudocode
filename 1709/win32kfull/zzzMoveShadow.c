/*
 * XREFs of zzzMoveShadow @ 0x1C020CDE0
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C010A6A4 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall zzzMoveShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  struct tagSHADOW *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+50h] [rbp-28h] BYREF
  struct tagPOINT v12; // [rsp+88h] [rbp+10h] BYREF

  result = FindShadow(a1);
  v5 = result;
  if ( result )
  {
    v6 = *(unsigned int *)(v2 + 128);
    v12.y = *(_DWORD *)(v2 + 132);
    v12.x = v6;
    v7 = *((_QWORD *)result + 1);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v3, v4);
    v11[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v11;
    v11[1] = v7;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    zzzUpdateLayeredWindow(*((__m128i **)v5 + 1), 0LL, &v12, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
    return (struct tagSHADOW *)ThreadUnlock1(v10, v9);
  }
  return result;
}
