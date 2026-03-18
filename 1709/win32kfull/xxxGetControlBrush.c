/*
 * XREFs of xxxGetControlBrush @ 0x1C007D16C
 * Callers:
 *     NtUserGetControlBrush @ 0x1C007D0C0 (NtUserGetControlBrush.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0082D64 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     xxxGetControlColor @ 0x1C007F8A4 (xxxGetControlColor.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxGetControlBrush(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 ControlColor; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  if ( (((*(_BYTE *)(a1 + 71) & 0xC0) + 0x80) & 0xBF) != 0 )
    v6 = *(_QWORD *)(a1 + 104);
  else
    v6 = *(_QWORD *)(a1 + 120);
  CurrentThread = KeGetCurrentThread();
  if ( !v6 )
    v6 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v13 = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = &v13;
  v14 = v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  ControlColor = xxxGetControlColor(v6, a1, a2, a3, v13, v14);
  ThreadUnlock1(v11, v10);
  return ControlColor;
}
