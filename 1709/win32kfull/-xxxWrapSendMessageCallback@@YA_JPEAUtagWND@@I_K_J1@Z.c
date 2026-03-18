/*
 * XREFs of ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C009E2F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxSendMessageCallback @ 0x1C009F334 (xxxSendMessageCallback.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxWrapSendMessageCallback(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, ULONG64 a5)
{
  unsigned int v5; // edi
  _BYTE *v7; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int128 v13; // [rsp+60h] [rbp-58h]
  _QWORD v14[9]; // [rsp+70h] [rbp-48h] BYREF

  v5 = a2;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, a2);
    return 0LL;
  }
  else
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[15] = v7[15];
    v13 = *(_OWORD *)a5;
    if ( a1 != (struct tagWND *)-1LL )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v14[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v14;
      v14[1] = a1;
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    }
    v11 = (int)xxxSendMessageCallback(a1, v5, v13, *((__int64 *)&v13 + 1), 1, 0, 1);
    if ( a1 != (struct tagWND *)-1LL )
      ThreadUnlock1(v10, v9);
    return v11;
  }
}
