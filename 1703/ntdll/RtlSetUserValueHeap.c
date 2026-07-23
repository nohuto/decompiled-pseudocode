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

BOOLEAN __cdecl RtlSetUserValueHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, PVOID UserValue)
{
  char *v5; // rbx
  __int16 v6; // r14
  BOOLEAN v8; // r12
  char v9; // r15
  BOOLEAN v10; // si
  ULONG v11; // ecx
  char v12; // al
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  unsigned __int64 v19; // rax
  ULONG v21; // r14d
  unsigned __int8 *v22; // rbx
  struct _TEB *v23; // rbx
  struct _TEB *v25; // rbx
  int v26; // ecx
  struct _TEB *v27; // rbx
  char v28; // [rsp+30h] [rbp-38h]
  int v29; // [rsp+34h] [rbp-34h]

  v5 = (char *)BaseAddress;
  v6 = Flags;
  v8 = 0;
  v9 = 0;
  v28 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v10 = 1;
    v11 = Flags & 1 | 2;
    if ( (Flags & 8) == 0 )
      v11 = Flags & 1;
    v12 = Flags;
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
    v18 = *((_DWORD *)HeapHandle + 10);
    if ( v18 && v18 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v29 = v17 | 1;
    if ( (dword_180158684 & 2) != 0
      && BaseAddress
      && !((_WORD)BaseAddress ? 0 : sub_1800588D4(&stru_180159600, (unsigned __int64)BaseAddress >> 16, 1uLL)) )
    {
      v5 -= 16;
    }
    v19 = sub_18001F5E8((_RTL_SRWLOCK *)HeapHandle, (__int64)v5, (unsigned int)v29 | *((_DWORD *)HeapHandle + 5), 0LL);
    if ( v19 )
      *(_QWORD *)(v19 + 8) = UserValue;
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
  v21 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v21 & 0x61000000) != 0 && (v21 & 0x10000000) == 0 )
    return sub_180101E60(HeapHandle);
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v22 = sub_180077158((int)HeapHandle, (__int64)BaseAddress);
    goto LABEL_29;
  }
  if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
  {
    v26 = 9;
    goto LABEL_57;
  }
  v22 = (unsigned __int8 *)BaseAddress - 16;
  _m_prefetchw((char *)BaseAddress - 16);
  if ( *((char *)BaseAddress - 1) == 5 )
    v22 -= 16 * v22[14];
  if ( (v22[15] & 0x3F) == 0 )
  {
    LODWORD(BaseAddress) = (_DWORD)v22;
    v26 = 8;
LABEL_57:
    sub_1800A4DFC(v26, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
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
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v9 = 1;
    v28 = 1;
  }
  if ( (v22[15] & 0x3F) != 0 )
  {
    if ( (v22[15] & 0x80u) == 0 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *((_DWORD *)v22 + 2) ^= *((_DWORD *)HeapHandle + 34);
        if ( v22[11] != (v22[8] ^ (unsigned __int8)(v22[9] ^ v22[10])) )
          sub_1800FDA30(HeapHandle, v22);
      }
      if ( (v22[10] & 2) != 0 )
      {
        *(_QWORD *)(sub_1800774AC(v22) + 8) = UserValue;
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
  if ( v22 && *((_DWORD *)HeapHandle + 31) )
  {
    v22[11] = v22[8] ^ v22[9] ^ v22[10];
    *((_DWORD *)v22 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v9 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return v8;
}
