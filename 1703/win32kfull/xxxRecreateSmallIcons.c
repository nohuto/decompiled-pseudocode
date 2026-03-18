/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C020DA24
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00C352C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     SendDwmIconChange @ 0x1C001D7AC (SendDwmIconChange.c)
 *     DestroyClassSmIcon @ 0x1C003949C (DestroyClassSmIcon.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     xxxCreateWindowSmIcon @ 0x1C00C1950 (xxxCreateWindowSmIcon.c)
 *     DestroyWindowSmIcon @ 0x1C00C1AA4 (DestroyWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1C00C3454 (xxxCreateClassSmIcon.c)
 *     ClassLock @ 0x1C00EB620 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F9260 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(__int64 a1)
{
  struct tagCLS *v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  char v5; // bl
  __int64 Prop; // rax
  int v7; // r8d
  __int64 result; // rax
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)DestroyClassSmIcon(*(_QWORD *)(a1 + 168)) && (unsigned int)ClassLock(*(_QWORD *)(a1 + 168), v9) )
  {
    xxxCreateClassSmIcon(*(_QWORD *)(a1 + 168));
    v2 = *(struct tagCLS **)(a1 + 168);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v4 = v9[0];
    *(_QWORD *)(ThreadWin32Thread + 16) = v9[0];
    ClassUnlockWorker(v2, v4);
  }
  v5 = *(_BYTE *)(a1 + 63) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon((_DWORD *)a1) && !v5 )
  {
    Prop = GetProp(a1, *(_WORD *)(gpsi + 1358LL), 1);
    xxxCreateWindowSmIcon((_DWORD *)a1, Prop, v7);
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
