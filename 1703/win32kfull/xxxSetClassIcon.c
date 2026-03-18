/*
 * XREFs of xxxSetClassIcon @ 0x1C020AD74
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01C2E24 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 * Callees:
 *     xxxInternalEnumWindow @ 0x1C001BFCC (xxxInternalEnumWindow.c)
 *     DestroyClassSmIcon @ 0x1C003949C (DestroyClassSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1C00C3454 (xxxCreateClassSmIcon.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020AD00 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 */

__int64 *__fastcall xxxSetClassIcon(struct tagWND *a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 *result; // rax
  __int64 v8; // rdi
  BOOL v9; // r14d
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v15[4]; // [rsp+30h] [rbp-20h] BYREF

  if ( a4 == -14 )
    result = *(__int64 **)(a2 + 120);
  else
    result = *(__int64 **)(a2 + 160);
  if ( result != a3 )
  {
    v8 = 0LL;
    v9 = 1;
    if ( result )
      v8 = *result;
    if ( a4 == -14 )
    {
      v10 = (_QWORD *)(a2 + 160);
      if ( *(_QWORD *)(a2 + 160) )
        v9 = DestroyClassSmIcon(a2) != 0;
      v14[0] = a2 + 120;
    }
    else
    {
      if ( (unsigned int)DestroyClassSmIcon(a2) )
        v8 = 0LL;
      v10 = (_QWORD *)(a2 + 160);
      v14[0] = a2 + 160;
    }
    v14[1] = a3;
    HMAssignmentLock(v14);
    if ( *(_QWORD *)(a2 + 120) && !*v10 )
      xxxCreateClassSmIcon(a2);
    if ( v9 )
    {
      if ( *(int *)(a2 + 88) <= 1 )
      {
        xxxSetClassIconEnum(a1, a2);
      }
      else
      {
        v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL) + 112LL);
        v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v15;
        v15[1] = v11;
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        xxxInternalEnumWindow(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL) + 112LL),
          (__int64 (__fastcall *)(__int64, __int64))xxxSetClassIconEnum,
          a2,
          2u);
        ThreadUnlock1(v13, v12);
      }
    }
    if ( v8 )
      return (__int64 *)HMValidateHandleNoRip(v8, 3);
    else
      return 0LL;
  }
  return result;
}
