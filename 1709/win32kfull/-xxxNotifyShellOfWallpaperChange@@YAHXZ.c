/*
 * XREFs of ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C011ECB0
 * Callers:
 *     xxxSetDeskWallpaper @ 0x1C011EB54 (xxxSetDeskWallpaper.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxNotifyShellOfWallpaperChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 160LL);
    if ( v6 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v11[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v11;
      v11[1] = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v4 = xxxSendNotifyMessage((struct tagWND *)v6, 0x34u, 4uLL, 0LL, 1);
      ThreadUnlock1(v9, v8);
    }
  }
  return v4;
}
