/*
 * XREFs of xxxSetClassIcon @ 0x1C020C114
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01C5B38 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 * Callees:
 *     xxxCreateClassSmIcon @ 0x1C00534E4 (xxxCreateClassSmIcon.c)
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     xxxInternalEnumWindow @ 0x1C0054338 (xxxInternalEnumWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     DestroyClassSmIcon @ 0x1C00F238C (DestroyClassSmIcon.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020C0A0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 */

__int64 *__fastcall xxxSetClassIcon(struct tagWND *a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 *result; // rax
  __int64 v8; // rdi
  BOOL v9; // r14d
  _QWORD *v10; // rsi
  __int128 *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-60h]
  __int128 v21; // [rsp+30h] [rbp-50h]
  __int128 v22; // [rsp+40h] [rbp-40h] BYREF
  __int128 v23; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v24[4]; // [rsp+60h] [rbp-20h] BYREF

  if ( a4 == -14 )
    result = *(__int64 **)(a2 + 128);
  else
    result = *(__int64 **)(a2 + 168);
  if ( result != a3 )
  {
    v8 = 0LL;
    v9 = 1;
    if ( result )
      v8 = *result;
    if ( a4 == -14 )
    {
      v10 = (_QWORD *)(a2 + 168);
      if ( *(_QWORD *)(a2 + 168) )
        v9 = DestroyClassSmIcon(a2) != 0;
      *((_QWORD *)&v20 + 1) = a3;
      *(_QWORD *)&v20 = a2 + 128;
      v11 = &v22;
      v22 = v20;
    }
    else
    {
      v12 = DestroyClassSmIcon(a2);
      *((_QWORD *)&v21 + 1) = a3;
      v11 = &v23;
      if ( v12 )
        v8 = 0LL;
      v10 = (_QWORD *)(a2 + 168);
      *(_QWORD *)&v21 = a2 + 168;
      v23 = v21;
    }
    HMAssignmentLock(v11);
    if ( *(_QWORD *)(a2 + 128) && !*v10 )
      xxxCreateClassSmIcon(a2);
    if ( v9 )
    {
      if ( *(int *)(a2 + 96) <= 1 )
      {
        xxxSetClassIconEnum(a1, a2);
      }
      else
      {
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL) + 112LL);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
        v24[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v24;
        v24[1] = v16;
        if ( v16 )
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
        xxxInternalEnumWindow(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL) + 112LL),
          (__int64 (__fastcall *)(__int64, __int64))xxxSetClassIconEnum,
          a2,
          2u);
        ThreadUnlock1(v19, v18);
      }
    }
    if ( v8 )
      return (__int64 *)HMValidateHandleNoRip(v8, 3);
    else
      return 0LL;
  }
  return result;
}
