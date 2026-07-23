/*
 * XREFs of sub_18005F1CC @ 0x18005F1CC
 * Callers:
 *     sub_18005EE74 @ 0x18005EE74 (sub_18005EE74.c)
 * Callees:
 *     sub_18005F2B4 @ 0x18005F2B4 (sub_18005F2B4.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18005F1CC(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  size_t v6; // rsi
  __int64 v7; // r8
  void *v8; // rax
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v11 = 0LL;
  v5 = 0;
  if ( *(_WORD *)a2 < 0x58u )
    return 87;
  if ( (*(_DWORD *)(a1 + 324) & 0x1000) != 0 )
    v5 = *(unsigned __int16 *)(a2 + 86);
  v6 = *(unsigned int *)(a2 + 80);
  if ( !(_DWORD)v6 )
  {
    ++*(_DWORD *)(a1 + 384);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 512) + 12LL * v5 + 4);
    return 87;
  }
  v7 = *(_WORD *)(a2 + 84) & 0x7FF;
  if ( (*(_DWORD *)(a1 + 324) & 0x1000) != 0 )
    v7 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 504) + 8LL * v5) + 2 * v7);
  v8 = (void *)sub_18005F2B4(a1, (unsigned int)v6, v7, 0LL, &v11);
  if ( v8 )
  {
    memmove(v8, *(const void **)(a2 + 72), v6);
    _InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
  }
  else if ( (unsigned int)v6 <= 0xFFF8 )
  {
    return (unsigned int)(*(_DWORD *)(a1 + 212) < (unsigned int)v6 ? 234 : 8);
  }
  else
  {
    return 534;
  }
  return v4;
}
