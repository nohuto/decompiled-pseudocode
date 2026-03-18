/*
 * XREFs of zzzUpdateShadowAlpha @ 0x1C012AEE8
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C008F740 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C010A6A4 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     _GetLayeredWindowAttributes @ 0x1C012B134 (_GetLayeredWindowAttributes.c)
 */

struct tagSHADOW *__fastcall zzzUpdateShadowAlpha(__int64 a1)
{
  struct tagSHADOW *result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct tagSHADOW *v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _BYTE v16[8]; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v17[3]; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v18[6]; // [rsp+70h] [rbp+27h] BYREF
  BYTE v19; // [rsp+B8h] [rbp+6Fh] BYREF
  struct _BLENDFUNCTION v20; // [rsp+C0h] [rbp+77h] BYREF
  char v21; // [rsp+C8h] [rbp+7Fh] BYREF

  result = FindShadow((struct tagWND *)a1);
  v6 = result;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5);
    v17[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v17;
    v17[1] = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    if ( (unsigned int)GetLayeredWindowAttributes(a1, v16, &v19, &v21) && (v21 & 2) != 0 )
    {
      *(_WORD *)&v20.BlendOp = 0;
      v20.SourceConstantAlpha = v19;
      v20.AlphaFormat = 1;
      v12 = *((_QWORD *)v6 + 1);
      v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11);
      v18[0] = *(_QWORD *)(v13 + 392);
      *(_QWORD *)(v13 + 392) = v18;
      v18[1] = v12;
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      zzzUpdateLayeredWindow(*((__m128i **)v6 + 1), 0LL, 0LL, 0LL, 0LL, 0LL, 0, &v20, 2u, 0LL);
      ThreadUnlock1(v15, v14);
    }
    return (struct tagSHADOW *)ThreadUnlock1(v9, v8);
  }
  return result;
}
