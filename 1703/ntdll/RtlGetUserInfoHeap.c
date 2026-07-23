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

BOOLEAN __cdecl RtlGetUserInfoHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        PVOID *UserValue,
        PULONG UserFlags)
{
  char *v6; // rbx
  __int16 v7; // r15
  ULONG v9; // r15d
  __int64 v10; // rax
  BOOLEAN v11; // r14
  char *v12; // rcx
  char *v13; // rbx
  __int64 v14; // rax
  struct _TEB *v15; // rbx
  ULONG v17; // ecx
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
  char *v29; // [rsp+38h] [rbp-20h]

  v6 = (char *)BaseAddress;
  v7 = Flags;
  v27 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v17 = Flags & 1 | 2;
    if ( (Flags & 8) == 0 )
      v17 = Flags & 1;
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
    v23 = *((_DWORD *)HeapHandle + 10);
    if ( v23 && v23 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v28 = v22 | 1;
    if ( (dword_180158684 & 2) != 0
      && BaseAddress
      && !((_WORD)BaseAddress ? 0 : sub_1800588D4(&stru_180159600, (unsigned __int64)BaseAddress >> 16, 1uLL)) )
    {
      LODWORD(v6) = (_DWORD)v6 - 16;
    }
    return sub_1800771D8((_DWORD)HeapHandle, (_DWORD)v6, v28, (_DWORD)UserValue, (__int64)UserFlags);
  }
  v9 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v9 & 0x61000000) != 0 && (v9 & 0x10000000) == 0 )
    return sub_18010144C(HeapHandle, UserFlags);
  if ( (v9 & 0x800) != 0 )
  {
    v10 = sub_180077158(HeapHandle, BaseAddress);
    v11 = 1;
LABEL_5:
    v12 = (char *)v10;
    goto LABEL_6;
  }
  v11 = 1;
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v10 = sub_180077158(HeapHandle, BaseAddress);
    goto LABEL_5;
  }
  if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
  {
    v25 = 9;
  }
  else
  {
    v12 = (char *)BaseAddress - 16;
    _m_prefetchw((char *)BaseAddress - 16);
    if ( *((char *)BaseAddress - 1) == 5 )
      v12 -= 16 * (unsigned __int8)v12[14];
    if ( (v12[15] & 0x3F) != 0 )
      goto LABEL_6;
    LODWORD(BaseAddress) = (_DWORD)v12;
    v25 = 8;
  }
  sub_1800A4DFC(v25, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  v12 = 0LL;
LABEL_6:
  if ( v12 )
  {
    if ( v12[15] >= 0 )
    {
      v13 = v6 - 16;
      _m_prefetchw(v13);
      if ( v13[15] == 5 )
        v13 -= 16 * (unsigned __int8)v13[14];
      v29 = v13;
      if ( (v9 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v27 = 1;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *((_DWORD *)v13 + 2) ^= *((_DWORD *)HeapHandle + 34);
        if ( v13[11] != ((unsigned __int8)v13[8] ^ (unsigned __int8)(v13[9] ^ v13[10])) )
          sub_1800FDA30(HeapHandle, v13);
      }
      if ( (v13[15] & 0x3F) != 0 )
      {
        if ( (v13[10] & 2) != 0 )
        {
          v14 = sub_1800774AC(v13);
          if ( UserValue )
            *UserValue = *(PVOID *)(v14 + 8);
        }
        if ( UserFlags )
          *UserFlags = 16 * (v13[10] & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v15 = NtCurrentTeb();
        v15->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v13 = v29;
        v11 = 0;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v13[11] = v13[8] ^ v13[9] ^ v13[10];
        *((_DWORD *)v13 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( v27 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v11;
    }
    if ( (v12[15] & 0x3F) != 0 )
    {
      if ( UserFlags )
        *UserFlags = 0;
      return v11;
    }
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v26 = NtCurrentTeb();
  v26->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
