/*
 * XREFs of NtUserChangeClipboardChain @ 0x1C00C51E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxChangeClipboardChain @ 0x1C00C52C0 (xxxChangeClipboardChain.c)
 */

__int64 __fastcall NtUserChangeClipboardChain(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v14;
    v14[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( a2 )
    {
      v9 = ValidateHwnd(a2);
      if ( !v9 )
      {
LABEL_7:
        ThreadUnlock1(v12, v9);
        goto LABEL_8;
      }
    }
    else
    {
      v9 = 0LL;
    }
    v15[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v15;
    v15[1] = v9;
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v7 = xxxChangeClipboardChain(v8);
    ThreadUnlock1(v11, v10);
    goto LABEL_7;
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
