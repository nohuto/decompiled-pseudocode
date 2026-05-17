/*
 * XREFs of sub_180070AAC @ 0x180070AAC
 * Callers:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 *     sub_180020E70 @ 0x180020E70 (sub_180020E70.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_180027E0C @ 0x180027E0C (sub_180027E0C.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_180070A54 @ 0x180070A54 (sub_180070A54.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x1800839A0 (RtlConvertSRWLockExclusiveToShared.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009B890 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall sub_180070AAC(volatile signed __int64 *a1, signed __int64 a2, char a3)
{
  _QWORD *v4; // r10
  __int64 v5; // r8
  __int64 result; // rax
  bool v7; // zf
  __int64 v8; // rbx
  _QWORD *v9; // rax

  while ( a3 || (a2 & 1) == 0 )
  {
LABEL_3:
    v4 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v5 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    if ( !v5 )
    {
      do
      {
        v9 = v4;
        v4 = (_QWORD *)*v4;
        v4[2] = v9;
        v5 = v4[1];
      }
      while ( !v5 );
      if ( v4 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v5;
    }
    result = *(unsigned int *)(v5 + 36);
    if ( (result & 1) != 0 )
    {
      if ( a3 )
      {
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        return result;
      }
      result = *(_QWORD *)(v5 + 16);
      if ( result )
      {
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = result;
        *(_QWORD *)(v5 + 16) = 0LL;
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_8:
          v8 = *(_QWORD *)(v5 + 16);
          _interlockedbittestandset((volatile signed __int32 *)(v5 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v5 + 36), 1u) )
            result = ZwAlertThreadByThreadId(*(_QWORD *)(v5 + 24));
          v5 = v8;
        }
        while ( v8 );
        return result;
      }
    }
    result = _InterlockedCompareExchange64(a1, a3 != 0 ? 0x11 : 0, a2);
    v7 = a2 == result;
    a2 = result;
    if ( v7 )
      goto LABEL_8;
  }
  while ( 1 )
  {
    result = _InterlockedCompareExchange64(a1, a2 - 4, a2);
    v7 = a2 == result;
    a2 = result;
    if ( v7 )
      return result;
    if ( (result & 1) == 0 )
      goto LABEL_3;
  }
}
