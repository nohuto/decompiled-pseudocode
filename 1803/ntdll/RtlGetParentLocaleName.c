/*
 * XREFs of RtlGetParentLocaleName @ 0x180031240
 * Callers:
 *     sub_180032408 @ 0x180032408 (sub_180032408.c)
 *     sub_18006FC80 @ 0x18006FC80 (sub_18006FC80.c)
 *     sub_18007EC88 @ 0x18007EC88 (sub_18007EC88.c)
 * Callees:
 *     sub_180035D8C @ 0x180035D8C (sub_180035D8C.c)
 *     sub_180036B64 @ 0x180036B64 (sub_180036B64.c)
 *     sub_1800378F0 @ 0x1800378F0 (sub_1800378F0.c)
 *     sub_18007C3E8 @ 0x18007C3E8 (sub_18007C3E8.c)
 *     sub_180085FA8 @ 0x180085FA8 (sub_180085FA8.c)
 *     sub_1800F2694 @ 0x1800F2694 (sub_1800F2694.c)
 */

NTSTATUS __cdecl RtlGetParentLocaleName(
        PCWSTR LocaleName,
        PUNICODE_STRING ParentLocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  ULONG v8; // ebp
  int v9; // eax
  ULONG v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r11
  NTSTATUS result; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // [rsp+40h] [rbp+8h] BYREF

  if ( !LocaleName )
    return -1073741585;
  if ( !ParentLocaleName || !ParentLocaleName->Buffer )
    return -1073741584;
  if ( (Flags & 0xFFFFFFF9) != 0 )
    return -1073741583;
  v8 = Flags & 4;
  if ( (Flags & 4) != 0
    || !(unsigned __int8)sub_180085FA8(LocaleName)
    || (v17 = Flags >> 1,
        LOBYTE(v16) = AllocateDestinationString,
        LOBYTE(v17) = (Flags & 2) != 0,
        result = sub_1800F2694(LocaleName, v17, v16, ParentLocaleName),
        result < 0) )
  {
    if ( !qword_18015D2B8 && !(unsigned __int8)sub_18007C3E8() )
      return -1073741823;
    v9 = sub_1800378F0(LocaleName);
    v10 = Flags & 2;
    if ( v9 >= 0 )
    {
      if ( !v10 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(*(unsigned __int16 *)(qword_18015D2B8 + 56)
                       * *(unsigned __int16 *)(*(_QWORD *)(qword_18015D2B8 + 32) + 8LL * v9 + 2)
                       + *(_QWORD *)(qword_18015D2B8 + 16)
                       + 24LL) & 1) == 0 )
          return -1073741585;
      }
      _mm_lfence();
      v11 = *(unsigned __int16 *)(qword_18015D2B8 + 56)
          * *(unsigned __int16 *)(*(_QWORD *)(qword_18015D2B8 + 32) + 8LL * v9 + 2);
      v12 = *(_QWORD *)(qword_18015D2B8 + 40) + 2LL;
      if ( v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(qword_18015D2B8 + 16) + 184) )
      {
        if ( (int)sub_180035D8C(
                    v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(qword_18015D2B8 + 16) + 184),
                    85LL,
                    &v20) < 0 )
          return -1073741823;
        LOBYTE(v13) = AllocateDestinationString;
        return sub_180036B64(v13, v14, v20, ParentLocaleName);
      }
    }
    if ( v8 && (unsigned __int8)sub_180085FA8(LocaleName) )
    {
      LOBYTE(v19) = AllocateDestinationString;
      LOBYTE(v18) = v10 != 0;
      return sub_1800F2694(LocaleName, v18, v19, ParentLocaleName);
    }
    return -1073741585;
  }
  return result;
}
