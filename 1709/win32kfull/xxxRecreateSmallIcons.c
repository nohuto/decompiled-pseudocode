/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C020F19C
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00538FC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     xxxCreateWindowSmIcon @ 0x1C0051CA4 (xxxCreateWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1C00534E4 (xxxCreateClassSmIcon.c)
 *     DestroyWindowSmIcon @ 0x1C005D7C8 (DestroyWindowSmIcon.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     ClassLock @ 0x1C0073454 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0073710 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     SendDwmIconChange @ 0x1C008B294 (SendDwmIconChange.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     DestroyClassSmIcon @ 0x1C00F238C (DestroyClassSmIcon.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(ULONG_PTR a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct tagCLS *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax
  char v9; // bl
  __int64 Prop; // rax
  int v11; // r8d
  __int64 result; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)DestroyClassSmIcon(*(_QWORD *)(a1 + 168))
    && (unsigned int)ClassLock(*(_QWORD *)(a1 + 168), v13, v2, v3) )
  {
    xxxCreateClassSmIcon(*(_QWORD *)(a1 + 168));
    v4 = *(struct tagCLS **)(a1 + 168);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
    *(_QWORD *)(ThreadWin32Thread + 16) = v13[0];
    ClassUnlockWorker(v4);
  }
  v9 = *(_BYTE *)(a1 + 63) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon(a1) && !v9 )
  {
    Prop = GetProp(a1, *(_WORD *)(gpsi + 1358LL), 1);
    xxxCreateWindowSmIcon(a1, Prop, v11);
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
