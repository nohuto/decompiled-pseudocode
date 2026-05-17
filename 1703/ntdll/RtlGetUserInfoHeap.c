/*
 * XREFs of RtlGetUserInfoHeap @ 0x180076E40
 * Callers:
 *     sub_18010144C @ 0x18010144C (sub_18010144C.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180077158 @ 0x180077158 (sub_180077158.c)
 *     sub_1800771D8 @ 0x1800771D8 (sub_1800771D8.c)
 *     sub_1800774AC @ 0x1800774AC (sub_1800774AC.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_18010144C @ 0x18010144C (sub_18010144C.c)
 */

char __fastcall RtlGetUserInfoHeap(__int64 a1, int a2, unsigned __int64 a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int64 v6; // rbx
  __int16 v7; // r15
  int v9; // r15d
  __int64 v10; // rax
  char v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  struct _TEB *v15; // rbx
  int v17; // ecx
  unsigned int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v25; // ecx
  struct _TEB *v26; // rbx
  char v27; // [rsp+31h] [rbp-27h]
  int v28; // [rsp+34h] [rbp-24h]
  unsigned __int64 v29; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v7 = a2;
  v27 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v17 = a2 & 1 | 2;
    if ( (a2 & 8) == 0 )
      v17 = a2 & 1;
    v18 = v17 | 0x80000000;
    if ( (v7 & 4) == 0 )
      v18 = v17;
    v19 = v18 | 0x100;
    if ( (v7 & 0x100) == 0 )
      v19 = v18;
    v20 = v7 & 0xE00 | v19;
    if ( (v7 & 0xE00) == 0 )
      v20 = v19;
    v21 = v20 | 0x2000000;
    if ( (v7 & 0x10) == 0 )
      v21 = v20;
    v22 = v21 | 0x1000000;
    if ( (v7 & 2) == 0 )
      v22 = v21;
    v28 = v22;
    v23 = *(_DWORD *)(a1 + 40);
    if ( v23 && v23 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v28 = v22 | 1;
    if ( (dword_180158684 & 2) != 0 && a3 && !((_WORD)a3 ? 0 : sub_1800588D4((__int64)&qword_180159600, a3 >> 16, 1uLL)) )
      LODWORD(v6) = v6 - 16;
    return sub_1800771D8(a1, v6, v28, (_DWORD)a4, (__int64)a5);
  }
  v9 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v9 & 0x61000000) != 0 && (v9 & 0x10000000) == 0 )
    return sub_18010144C(a1, v9, a3, (_DWORD)a4, (__int64)a5);
  if ( (v9 & 0x800) != 0 )
  {
    v10 = sub_180077158(a1, a3);
    v11 = 1;
LABEL_5:
    v12 = v10;
    goto LABEL_6;
  }
  v11 = 1;
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v10 = sub_180077158(a1, a3);
    goto LABEL_5;
  }
  if ( (a3 & 0xF) != 0 )
  {
    v25 = 9;
  }
  else
  {
    v12 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
    if ( (*(_BYTE *)(v12 + 15) & 0x3F) != 0 )
      goto LABEL_6;
    LODWORD(a3) = v12;
    v25 = 8;
  }
  sub_1800A4DFC(v25, a1, a3, 0, 0LL, 0LL);
  v12 = 0LL;
LABEL_6:
  if ( v12 )
  {
    if ( *(char *)(v12 + 15) >= 0 )
    {
      v13 = v6 - 16;
      _m_prefetchw((const void *)v13);
      if ( *(_BYTE *)(v13 + 15) == 5 )
        v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
      v29 = v13;
      if ( (v9 & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v27 = 1;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
          sub_1800FDA30(a1, v13);
      }
      if ( (*(_BYTE *)(v13 + 15) & 0x3F) != 0 )
      {
        if ( (*(_BYTE *)(v13 + 10) & 2) != 0 )
        {
          v14 = sub_1800774AC(v13);
          if ( a4 )
            *a4 = *(_QWORD *)(v14 + 8);
        }
        if ( a5 )
          *a5 = 16 * (*(_BYTE *)(v13 + 10) & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v15 = NtCurrentTeb();
        v15->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v13 = v29;
        v11 = 0;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      if ( v27 )
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      return v11;
    }
    if ( (*(_BYTE *)(v12 + 15) & 0x3F) != 0 )
    {
      if ( a5 )
        *a5 = 0;
      return v11;
    }
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v26 = NtCurrentTeb();
  v26->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
