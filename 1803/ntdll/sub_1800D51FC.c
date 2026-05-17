/*
 * XREFs of sub_1800D51FC @ 0x1800D51FC
 * Callers:
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlImageNtHeader @ 0x18002DC30 (RtlImageNtHeader.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003B7AC @ 0x18003B7AC (sub_18003B7AC.c)
 *     RtlGetNtSystemRoot @ 0x18003FAD0 (RtlGetNtSystemRoot.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

char __fastcall sub_1800D51FC(__int64 a1)
{
  char v2; // si
  unsigned int v3; // edx
  unsigned int v4; // ecx
  _WORD *v5; // rax
  _WORD *NtSystemRoot; // rax
  void *v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  void *v16; // [rsp+50h] [rbp-B8h]
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18[16]; // [rsp+60h] [rbp-A8h] BYREF

  v2 = 0;
  if ( (dword_18015D498 & 1) != 0 )
    DbgPrint("AVRF: verifier dll `%ws' \n", *(_QWORD *)(a1 + 24));
  v3 = *(unsigned __int16 *)(a1 + 16) >> 1;
  v4 = 0;
  if ( v3 )
  {
    v5 = *(_WORD **)(a1 + 24);
    while ( *v5 != 92 && *v5 != 47 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_10;
    }
    v2 = 1;
  }
LABEL_10:
  if ( v2 == 1 )
  {
    DbgPrint("AVRF: Cannot load %ws from arbitrary location\n", *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 24));
  }
  else
  {
    v16 = &unk_18015D4E0;
    v15 = 34078720;
    NtSystemRoot = (_WORD *)RtlGetNtSystemRoot();
    RtlAppendUnicodeToString((unsigned __int16 *)&v15, NtSystemRoot);
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v15, word_180110350);
    v7 = v16;
    sub_180042054(0LL, (__int64)v16, v18);
    v8 = sub_18003B7AC(a1 + 16, (int)v18, 0, 0, &v17);
    if ( v8 >= 0 )
    {
      v9 = v17;
      *(_QWORD *)(a1 + 32) = v17;
      v10 = RtlImageNtHeader(*(_QWORD *)(v9 + 48));
      if ( v10 )
      {
        if ( (*(_WORD *)(v10 + 22) & 0x2000) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 104LL) |= 0x400u;
          v12 = *(_QWORD *)(a1 + 32);
          v13 = *(_QWORD *)(v12 + 56);
          if ( v13 )
          {
            sub_18003B518(v13, *(_QWORD *)(v12 + 48), 4);
            DbgPrint("AVRF: provider %ws did not initialize correctly \n", *(_QWORD *)(a1 + 24));
          }
          else
          {
            DbgPrint("AVRF: cannot find an entry point for provider %ws \n", *(_QWORD *)(a1 + 24), v11);
          }
        }
        else
        {
          DbgPrint("AVRF: provider %ws is not a DLL image \n", *(_QWORD *)(a1 + 24));
        }
      }
    }
    else
    {
      DbgPrint(
        "AVRF: %ws: failed to load provider `%ws' (status %08X) from %ws\n",
        *(_QWORD *)(qword_18015C370 + 96),
        *(_QWORD *)(a1 + 24),
        (unsigned int)v8,
        v7);
    }
  }
  return 0;
}
