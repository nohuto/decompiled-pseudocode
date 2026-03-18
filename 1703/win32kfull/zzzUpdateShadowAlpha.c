/*
 * XREFs of zzzUpdateShadowAlpha @ 0x1C011E960
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C00212F0 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0021428 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     _GetLayeredWindowAttributes @ 0x1C011F04C (_GetLayeredWindowAttributes.c)
 */

struct tagSHADOW *__fastcall zzzUpdateShadowAlpha(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v2; // rcx
  struct tagSHADOW *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE v9[8]; // [rsp+50h] [rbp+17h] BYREF
  _QWORD v10[3]; // [rsp+58h] [rbp+1Fh] BYREF
  _QWORD v11[4]; // [rsp+70h] [rbp+37h] BYREF
  BYTE v12; // [rsp+A8h] [rbp+6Fh] BYREF
  struct _BLENDFUNCTION v13; // [rsp+B0h] [rbp+77h] BYREF
  char v14; // [rsp+B8h] [rbp+7Fh] BYREF

  result = FindShadow(a1);
  v3 = result;
  if ( result )
  {
    v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v10;
    v10[1] = v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 8);
    if ( (unsigned int)GetLayeredWindowAttributes(v2, v9, &v12, &v14) && (v14 & 2) != 0 )
    {
      *(_WORD *)&v13.BlendOp = 0;
      v13.SourceConstantAlpha = v12;
      v13.AlphaFormat = 1;
      v6 = *((_QWORD *)v3 + 1);
      v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v11;
      v11[1] = v6;
      if ( v6 )
        ++*(_DWORD *)(v6 + 8);
      zzzUpdateLayeredWindow(*((__m128i **)v3 + 1), 0LL, 0LL, 0LL, 0LL, 0LL, 0, &v13, 2u, 0LL);
      ThreadUnlock1(v8, v7);
    }
    return (struct tagSHADOW *)ThreadUnlock1(v5, v4);
  }
  return result;
}
