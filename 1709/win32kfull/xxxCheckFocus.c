/*
 * XREFs of xxxCheckFocus @ 0x1C005F708
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C005F5B0 (xxxDW_SendDestroyMessages.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 * Callees:
 *     zzzDestroyCaret @ 0x1C0084510 (zzzDestroyCaret.c)
 *     xxxSetFocus @ 0x1C0085260 (xxxSetFocus.c)
 */

__int64 __fastcall xxxCheckFocus(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 112LL) )
  {
    if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 )
    {
      v4 = *(_QWORD *)(a1 + 104);
      v7[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v7;
      v7[1] = v4;
      if ( v4 )
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      xxxSetFocus(*(struct tagWND **)(a1 + 104));
      ThreadUnlock1(v6, v5);
    }
    else
    {
      xxxSetFocus(0LL);
    }
  }
  result = *(_QWORD *)(gptiCurrent + 408LL);
  if ( a1 == *(_QWORD *)(result + 288) )
    return zzzDestroyCaret(a1, a2);
  return result;
}
