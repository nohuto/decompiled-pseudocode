/*
 * XREFs of sub_1800426E8 @ 0x1800426E8
 * Callers:
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_180042660 @ 0x180042660 (sub_180042660.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 * Callees:
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 *     sub_180042450 @ 0x180042450 (sub_180042450.c)
 *     sub_1800429E8 @ 0x1800429E8 (sub_1800429E8.c)
 *     sub_180043A08 @ 0x180043A08 (sub_180043A08.c)
 *     sub_180043AA8 @ 0x180043AA8 (sub_180043AA8.c)
 *     sub_180043B30 @ 0x180043B30 (sub_180043B30.c)
 *     sub_180070650 @ 0x180070650 (sub_180070650.c)
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

void __fastcall sub_1800426E8(__int64 a1, char a2)
{
  int v4; // edi
  int v5; // eax
  char v6; // al
  int v7; // eax
  char v8; // bl
  int v9; // [rsp+20h] [rbp-48h]

  if ( **(int **)(a1 + 40) < 0 )
    goto LABEL_21;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL) + 56LL) )
  {
    v4 = sub_18000FC70(a1);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 32) & 0x100000) != 0 )
    {
      v4 = sub_180070650(a1);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x200) != 0 )
        v5 = sub_1800429E8(a1);
      else
        v5 = sub_18004213C(a1);
      v4 = v5;
    }
    if ( ((v4 + 0x80000000) & 0x80000000) != 0 || v4 == -1073741267 )
      goto LABEL_21;
    v6 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        1780,
        (unsigned int)"LdrpProcessWork",
        0,
        "Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
        a1,
        (*(_QWORD *)(a1 + 48) + 72LL) & (unsigned __int64)((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 48) >> 64),
        v4);
      v6 = dword_180156A70;
    }
    if ( (v6 & 0x10) != 0 )
      __debugbreak();
    if ( v4 == -1073741515 )
    {
      sub_180043B30(3221225781LL, 25LL, 0LL, a1);
      sub_180043AA8(a1);
      LOBYTE(v9) = 0;
      sub_180043A08(
        a1,
        (*(_QWORD *)(a1 + 48) + 72LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 48) >> 64),
        3221225781LL,
        &unk_1801146E8,
        v9);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 104LL) & 0x20) != 0 )
        sub_180042450((_UNICODE_STRING *)a1, 0LL, -1073741515);
    }
  }
  if ( v4 < 0 )
    **(_DWORD **)(a1 + 40) = v4;
LABEL_21:
  if ( !a2 )
  {
    RtlEnterCriticalSection(&stru_18015C240);
    v7 = --dword_18015C268;
    if ( (__int64 *)qword_18015C270 != &qword_18015C270 || (v8 = 1, v7 != 1) )
      v8 = 0;
    RtlLeaveCriticalSection(&stru_18015C240);
    if ( v8 )
      ZwSetEvent(EventHandle, 0LL);
  }
}
