/*
 * XREFs of RtlSetUserValueHeap @ 0x180077230
 * Callers:
 *     sub_180101E60 @ 0x180101E60 (sub_180101E60.c)
 * Callees:
 *     sub_18001F5E8 @ 0x18001F5E8 (sub_18001F5E8.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180077158 @ 0x180077158 (sub_180077158.c)
 *     sub_1800774AC @ 0x1800774AC (sub_1800774AC.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_180101E60 @ 0x180101E60 (sub_180101E60.c)
 */

char __fastcall RtlSetUserValueHeap(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  __int16 v6; // r14
  char v8; // r12
  char v9; // r15
  char v10; // si
  int v11; // ecx
  char v12; // al
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  unsigned __int64 v19; // rax
  unsigned int v21; // r14d
  unsigned __int8 *v22; // rbx
  struct _TEB *v23; // rbx
  struct _TEB *v25; // rbx
  int v26; // ecx
  struct _TEB *v27; // rbx
  char v28; // [rsp+30h] [rbp-38h]
  int v29; // [rsp+34h] [rbp-34h]

  v5 = a3;
  v6 = a2;
  v8 = 0;
  v9 = 0;
  v28 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v10 = 1;
    v11 = a2 & 1 | 2;
    if ( (a2 & 8) == 0 )
      v11 = a2 & 1;
    v12 = a2;
    v13 = v11 | 0x80000000;
    if ( (v12 & 4) == 0 )
      v13 = v11;
    v14 = v13 | 0x100;
    if ( (v6 & 0x100) == 0 )
      v14 = v13;
    v15 = v6 & 0xE00 | v14;
    if ( (v6 & 0xE00) == 0 )
      v15 = v14;
    v16 = v15 | 0x2000000;
    if ( (v6 & 0x10) == 0 )
      v16 = v15;
    v17 = v16 | 0x1000000;
    if ( (v6 & 2) == 0 )
      v17 = v16;
    v29 = v17;
    v18 = *(_DWORD *)(a1 + 40);
    if ( v18 && v18 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v29 = v17 | 1;
    if ( (dword_180158684 & 2) != 0 && a3 && !((_WORD)a3 ? 0 : sub_1800588D4((__int64)&qword_180159600, a3 >> 16, 1uLL)) )
      v5 -= 16LL;
    v19 = sub_18001F5E8(a1, v5, (unsigned int)v29 | *(_DWORD *)(a1 + 20), 0LL);
    if ( v19 )
      *(_QWORD *)(v19 + 8) = a4;
    else
      v10 = 0;
    if ( !v10 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v25 = NtCurrentTeb();
      v25->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    }
    return v10;
  }
  v21 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v21 & 0x61000000) != 0 && (v21 & 0x10000000) == 0 )
    return sub_180101E60(a1, v21);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v22 = sub_180077158(a1, a3);
    goto LABEL_29;
  }
  if ( (a3 & 0xF) != 0 )
  {
    v26 = 9;
    goto LABEL_57;
  }
  v22 = (unsigned __int8 *)(a3 - 16);
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v22 -= 16 * v22[14];
  if ( (v22[15] & 0x3F) == 0 )
  {
    LODWORD(a3) = (_DWORD)v22;
    v26 = 8;
LABEL_57:
    sub_1800A4DFC(v26, a1, a3, 0, 0LL, 0LL);
    v22 = 0LL;
  }
LABEL_29:
  if ( !v22 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v27 = NtCurrentTeb();
    v27->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( (v21 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v9 = 1;
    v28 = 1;
  }
  if ( (v22[15] & 0x3F) != 0 )
  {
    if ( (v22[15] & 0x80u) == 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_DWORD *)v22 + 2) ^= *(_DWORD *)(a1 + 136);
        if ( v22[11] != (v22[8] ^ (unsigned __int8)(v22[9] ^ v22[10])) )
          sub_1800FDA30(a1, v22);
      }
      if ( (v22[10] & 2) != 0 )
      {
        *(_QWORD *)(sub_1800774AC(v22) + 8) = a4;
        v8 = 1;
      }
      goto LABEL_41;
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v23 = NtCurrentTeb();
    v23->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    v9 = v28;
    v8 = 0;
  }
  v22 = 0LL;
LABEL_41:
  if ( v22 && *(_DWORD *)(a1 + 124) )
  {
    v22[11] = v22[8] ^ v22[9] ^ v22[10];
    *((_DWORD *)v22 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v8;
}
