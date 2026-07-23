/*
 * XREFs of RtlSetUserFlagsHeap @ 0x1800EB820
 * Callers:
 *     sub_180100B78 @ 0x180100B78 (sub_180100B78.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     sub_18001BD60 @ 0x18001BD60 (sub_18001BD60.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18006377C @ 0x18006377C (sub_18006377C.c)
 *     sub_180063A64 @ 0x180063A64 (sub_180063A64.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_180100B78 @ 0x180100B78 (sub_180100B78.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

BOOLEAN __cdecl RtlSetUserFlagsHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        ULONG UserFlagsReset,
        ULONG UserFlagsSet)
{
  char *v6; // rbx
  int v8; // ecx
  BOOLEAN v9; // di
  unsigned __int64 v10; // rax
  struct _TEB *v11; // rbx
  ULONG v12; // eax
  ULONG v13; // r12d
  unsigned __int8 *v14; // rcx
  int v15; // ecx
  char *v16; // rbx
  int v17; // edx
  struct _TEB *v18; // rbx
  char v19; // r15
  char v21; // [rsp+31h] [rbp-37h]
  char *v22; // [rsp+38h] [rbp-30h]
  unsigned int v23; // [rsp+88h] [rbp+20h]

  v6 = (char *)BaseAddress;
  v21 = 0;
  if ( ((UserFlagsSet | UserFlagsReset) & 0xFFFFF1FF) != 0 )
    goto LABEL_41;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v13 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v13 & 0x61000000) != 0 && (v13 & 0x10000000) == 0 )
      return sub_180100B78(HeapHandle, UserFlagsSet);
    v9 = 1;
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v14 = sub_18006377C((int)HeapHandle, (__int64)BaseAddress);
      goto LABEL_25;
    }
    if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      v15 = 9;
    }
    else
    {
      v14 = (unsigned __int8 *)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v14 -= 16 * v14[14];
      if ( (v14[15] & 0x3F) != 0 )
      {
LABEL_25:
        if ( v14 && (v14[15] & 0x80u) == 0 )
        {
          if ( (v13 & 1) == 0 )
          {
            RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
            v21 = 1;
          }
          v16 = v6 - 16;
          _m_prefetchw(v16);
          if ( v16[15] == 5 )
            v16 -= 16 * (unsigned __int8)v16[14];
          v22 = v16;
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v17 = *((_DWORD *)v16 + 2) ^ *((_DWORD *)HeapHandle + 34);
            *((_DWORD *)v16 + 2) = v17;
            if ( HIBYTE(v17) != ((unsigned __int8)v17 ^ (unsigned __int8)(BYTE1(v17) ^ BYTE2(v17))) )
              sub_1800FC010(HeapHandle, v16);
          }
          if ( (v16[15] & 0x3F) != 0 )
          {
            v19 = v16[10] & ~(unsigned __int8)(UserFlagsReset >> 4);
            v16[10] = v19;
            v16[10] = v19 | (UserFlagsSet >> 4);
          }
          else
          {
            NtCurrentTeb()->LastStatusValue = -1073741811;
            v18 = NtCurrentTeb();
            v18->LastErrorValue = RtlNtStatusToDosError(-1073741811);
            v9 = 0;
            v16 = v22;
          }
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v16[11] = v16[8] ^ v16[9] ^ v16[10];
            *((_DWORD *)v16 + 2) ^= *((_DWORD *)HeapHandle + 34);
          }
          if ( v21 )
            RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
          return v9;
        }
LABEL_41:
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v11 = NtCurrentTeb();
        v12 = RtlNtStatusToDosError(-1073741811);
        v9 = 0;
        goto LABEL_42;
      }
      BaseAddress = v14;
      v15 = 8;
    }
    sub_18009A5F0(v15, (__int64)HeapHandle, (__int64)BaseAddress, 0LL, 0LL, 0LL);
    v14 = 0LL;
    goto LABEL_25;
  }
  v23 = sub_18001BD60(Flags);
  v8 = *((_DWORD *)HeapHandle + 16);
  v9 = 1;
  if ( v8 && v8 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v23 |= 1u;
  if ( !v6 )
    goto LABEL_41;
  if ( (dword_180159760 & 2) != 0 )
    v6 -= *((_QWORD *)v6 - 2);
  v10 = sub_180063A64((__int64)HeapHandle, (__int64)v6, v23 | *((_DWORD *)HeapHandle + 5), 0LL);
  if ( v10 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    v9 = 0;
  else
    *(_BYTE *)(v10 + 2) = *(_BYTE *)(v10 + 2) & ((16 * ~BYTE1(UserFlagsReset)) | 0xF) | (16 * BYTE1(UserFlagsSet));
  if ( !v9 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v11 = NtCurrentTeb();
    v12 = RtlNtStatusToDosError(-1073741811);
LABEL_42:
    v11->LastErrorValue = v12;
  }
  return v9;
}
