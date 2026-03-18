/*
 * XREFs of ProcessCommandTrace @ 0x1C0010904
 * Callers:
 *     ProcessCommandInSpecificQueue @ 0x1C0010688 (ProcessCommandInSpecificQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessCommandTrace(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  unsigned int v5; // edx
  unsigned int v6; // ecx
  __int64 *v7; // rax
  __int64 v8; // rsi

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v3 = *(_QWORD *)(a2 + 104);
  else
    v3 = *(_QWORD *)(a2 + 56);
  if ( (v3 & 0xFFF) != 0 )
    v3 = v3 - (v3 & 0xFFF) + 4096;
  v4 = *(_QWORD *)(v3 + 4096);
  if ( HIDWORD(v4) == -1 || (v5 = *(_DWORD *)(a1 + 156), v6 = 0, !v5) )
  {
LABEL_12:
    v8 = 0LL;
  }
  else
  {
    v7 = (__int64 *)(a1 + 1224);
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 )
      {
        if ( *(_DWORD *)(v8 + 16) == HIDWORD(*(_QWORD *)(v3 + 4096)) )
          break;
      }
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_12;
    }
  }
  StorPortExtendedFunction(60LL, a1, v8, 4LL);
  if ( (*(_BYTE *)(v3 + 4253) & 1) != 0 )
  {
    if ( (unsigned __int8)v4 <= 0x10u )
    {
      if ( (unsigned __int8)v4 != 16 )
      {
        if ( (unsigned __int8)v4 == 6 )
          return StorPortExtendedFunction(58LL, a1, v8, 4LL);
        return StorPortExtendedFunction(60LL, a1, v8, 4LL);
      }
      return StorPortExtendedFunction(59LL, a1, v8, 4LL);
    }
    if ( (unsigned __int8)v4 == 17
      || (unsigned __int8)v4 != 25
      && (unsigned __int8)v4 != 26
      && (unsigned __int8)v4 != 128
      && ((unsigned __int8)v4 == 129 || (unsigned __int8)v4 == 130) )
    {
      return StorPortExtendedFunction(59LL, a1, v8, 4LL);
    }
  }
  return StorPortExtendedFunction(60LL, a1, v8, 4LL);
}
