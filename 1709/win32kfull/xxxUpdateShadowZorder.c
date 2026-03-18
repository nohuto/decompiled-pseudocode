/*
 * XREFs of xxxUpdateShadowZorder @ 0x1C020CC84
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     SetWindowGroupBand @ 0x1C0056C00 (SetWindowGroupBand.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C010A6A4 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall xxxUpdateShadowZorder(__int64 a1)
{
  struct tagSHADOW *result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF

  result = FindShadow((struct tagWND *)a1);
  if ( !result )
    return result;
  v5 = *((_QWORD *)result + 1);
  if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    if ( (*(_BYTE *)(v5 + 64) & 8) == 0 )
    {
      v6 = 1;
LABEL_7:
      SetOrClrWF(v6, *((_DWORD **)result + 1), 0x808u, 1);
    }
  }
  else if ( (*(_BYTE *)(v5 + 64) & 8) != 0 )
  {
    v6 = 0;
    goto LABEL_7;
  }
  v7 = *(unsigned int *)(a1 + 320);
  if ( *(_DWORD *)(v5 + 320) != (_DWORD)v7 )
    SetWindowGroupBand((struct tagWND *)v5, v7, 0);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v3, v4);
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v11;
  v11[1] = v5;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  xxxSetWindowPos((struct tagWND *)v5, a1, 0LL, 0LL, 0, 0, 19);
  return (struct tagSHADOW *)ThreadUnlock1(v10, v9);
}
