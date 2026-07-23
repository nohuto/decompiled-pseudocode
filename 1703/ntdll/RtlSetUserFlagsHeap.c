/*
 * XREFs of RtlSetUserFlagsHeap @ 0x1800EF7D0
 * Callers:
 *     sub_180101C9C @ 0x180101C9C (sub_180101C9C.c)
 * Callees:
 *     sub_18001F5E8 @ 0x18001F5E8 (sub_18001F5E8.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180077158 @ 0x180077158 (sub_180077158.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_180101C9C @ 0x180101C9C (sub_180101C9C.c)
 */

BOOLEAN __cdecl RtlSetUserFlagsHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        ULONG UserFlagsReset,
        ULONG UserFlagsSet)
{
  unsigned __int64 v6; // rbx
  __int16 v7; // r13
  BOOLEAN v9; // si
  ULONG v10; // ecx
  char v11; // al
  int v12; // edx
  unsigned int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  unsigned __int64 v20; // rax
  struct _TEB *v21; // rbx
  ULONG v22; // eax
  ULONG v23; // r13d
  unsigned __int8 *v24; // rcx
  int v25; // ecx
  unsigned __int64 v26; // rbx
  struct _TEB *v27; // rbx
  ULONG v28; // r15d
  char v30; // [rsp+31h] [rbp-37h]
  unsigned __int64 v31; // [rsp+38h] [rbp-30h]
  int v32; // [rsp+88h] [rbp+20h]

  v6 = (unsigned __int64)BaseAddress;
  v7 = Flags;
  v30 = 0;
  if ( ((UserFlagsSet | UserFlagsReset) & 0xFFFFF1FF) != 0 )
    goto LABEL_58;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v23 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v23 & 0x61000000) != 0 && (v23 & 0x10000000) == 0 )
      return sub_180101C9C(HeapHandle, UserFlagsSet);
    v9 = 1;
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v24 = sub_180077158((int)HeapHandle, (__int64)BaseAddress);
    }
    else
    {
      if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
      {
        v25 = 9;
        goto LABEL_39;
      }
      v24 = (unsigned __int8 *)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v24 -= 16 * v24[14];
      if ( (v24[15] & 0x3F) == 0 )
      {
        BaseAddress = v24;
        v25 = 8;
LABEL_39:
        sub_1800A4DFC(v25, (__int64)HeapHandle, (__int64)BaseAddress, 0LL, 0LL, 0LL);
        v24 = 0LL;
      }
    }
    if ( v24 && (v24[15] & 0x80u) == 0 )
    {
      if ( (v23 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v30 = 1;
      }
      v26 = v6 - 16;
      _m_prefetchw((const void *)v26);
      if ( *(_BYTE *)(v26 + 15) == 5 )
        v26 -= 16LL * *(unsigned __int8 *)(v26 + 14);
      v31 = v26;
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *(_DWORD *)(v26 + 8) ^= *((_DWORD *)HeapHandle + 34);
        if ( *(_BYTE *)(v26 + 11) != (*(_BYTE *)(v26 + 8) ^ (unsigned __int8)(*(_BYTE *)(v26 + 9) ^ *(_BYTE *)(v26 + 10))) )
          sub_1800FDA30(HeapHandle, v26);
      }
      if ( (*(_BYTE *)(v26 + 15) & 0x3F) != 0 )
      {
        v28 = *(unsigned __int8 *)(v26 + 10) & ~(UserFlagsReset >> 4);
        *(_BYTE *)(v26 + 10) = v28;
        *(_BYTE *)(v26 + 10) = v28 | (UserFlagsSet >> 4);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v27 = NtCurrentTeb();
        v27->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v9 = 0;
        v26 = v31;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *(_BYTE *)(v26 + 11) = *(_BYTE *)(v26 + 8) ^ *(_BYTE *)(v26 + 9) ^ *(_BYTE *)(v26 + 10);
        *(_DWORD *)(v26 + 8) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( v30 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v9;
    }
LABEL_58:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v21 = NtCurrentTeb();
    v22 = RtlNtStatusToDosError(-1073741811);
    v9 = 0;
    goto LABEL_59;
  }
  v9 = 1;
  v10 = Flags & 1;
  v11 = Flags;
  v12 = v10 | 2;
  if ( (v11 & 8) == 0 )
    v12 = v10;
  v13 = v12 | 0x80000000;
  if ( (v7 & 4) == 0 )
    v13 = v12;
  v14 = v13 | 0x100;
  if ( (v7 & 0x100) == 0 )
    v14 = v13;
  v15 = v14 | v7 & 0xE00;
  if ( (v7 & 0xE00) == 0 )
    v15 = v14;
  v16 = v15 | 0x2000000;
  if ( (v7 & 0x10) == 0 )
    v16 = v15;
  v17 = v16 | 0x1000000;
  if ( (v7 & 2) == 0 )
    v17 = v16;
  v32 = v17;
  v18 = *((_DWORD *)HeapHandle + 10);
  if ( v18 && v18 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v32 = v17 | 1;
  if ( !v6 )
    goto LABEL_58;
  if ( (dword_180158684 & 2) != 0 && !((_WORD)v6 ? 0 : sub_1800588D4(&stru_180159600, v6 >> 16, 1uLL)) )
    v6 -= 16LL;
  v20 = sub_18001F5E8((_RTL_SRWLOCK *)HeapHandle, v6, (unsigned int)v32 | *((_DWORD *)HeapHandle + 5), 0LL);
  if ( v20 )
    *(_BYTE *)(v20 + 2) = *(_BYTE *)(v20 + 2) & ((16 * ~BYTE1(UserFlagsReset)) | 0xF) | (16 * BYTE1(UserFlagsSet));
  else
    v9 = 0;
  if ( !v9 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v21 = NtCurrentTeb();
    v22 = RtlNtStatusToDosError(-1073741811);
LABEL_59:
    v21->LastErrorValue = v22;
  }
  return v9;
}
