/*
 * XREFs of RtlGetUserInfoHeap @ 0x1800634E0
 * Callers:
 *     sub_180100300 @ 0x180100300 (sub_180100300.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     sub_18001BD60 @ 0x18001BD60 (sub_18001BD60.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18006377C @ 0x18006377C (sub_18006377C.c)
 *     sub_1800637EC @ 0x1800637EC (sub_1800637EC.c)
 *     sub_180063B6C @ 0x180063B6C (sub_180063B6C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_180100300 @ 0x180100300 (sub_180100300.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl RtlGetUserInfoHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        PVOID *UserValue,
        PULONG UserFlags)
{
  char *v6; // rbx
  ULONG v8; // r15d
  char *v9; // rcx
  BOOLEAN v10; // r14
  char *v11; // rbx
  unsigned int v12; // edx
  char v13; // cl
  __int64 v14; // rax
  struct _TEB *v15; // rbx
  int v17; // r9d
  int v18; // ecx
  int v19; // ecx
  struct _TEB *v20; // rbx
  char v21; // [rsp+31h] [rbp-27h]
  int v22; // [rsp+34h] [rbp-24h]
  char *v23; // [rsp+38h] [rbp-20h]

  v6 = (char *)BaseAddress;
  v21 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v22 = sub_18001BD60(Flags);
    v18 = *((_DWORD *)HeapHandle + 16);
    if ( v18 && v18 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v22 |= 1u;
    if ( (dword_180159760 & 2) != 0 && v6 )
      v6 -= *((_QWORD *)v6 - 2);
    return sub_1800637EC((_DWORD)HeapHandle, (_DWORD)v6, v22, v17, (__int64)UserFlags);
  }
  v8 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
    return sub_180100300(HeapHandle, UserFlags);
  if ( (v8 & 0x800) != 0 )
  {
    v9 = (char *)sub_18006377C(HeapHandle, BaseAddress);
    v10 = 1;
  }
  else
  {
    v10 = 1;
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v9 = (char *)sub_18006377C(HeapHandle, BaseAddress);
    }
    else
    {
      if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
      {
        v19 = 9;
      }
      else
      {
        v9 = (char *)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v9 -= 16 * (unsigned __int8)v9[14];
        if ( (v9[15] & 0x3F) != 0 )
          goto LABEL_5;
        LODWORD(BaseAddress) = (_DWORD)v9;
        v19 = 8;
      }
      sub_18009A5F0(v19, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
      v9 = 0LL;
    }
  }
LABEL_5:
  if ( v9 )
  {
    if ( v9[15] >= 0 )
    {
      v11 = v6 - 16;
      _m_prefetchw(v11);
      if ( v11[15] == 5 )
        v11 -= 16 * (unsigned __int8)v11[14];
      v23 = v11;
      if ( (v8 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v21 = 1;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v12 = *((_DWORD *)v11 + 2) ^ *((_DWORD *)HeapHandle + 34);
        *((_DWORD *)v11 + 2) = v12;
        v13 = v12 ^ BYTE1(v12) ^ BYTE2(v12);
        *(_QWORD *)&Flags = HIBYTE(v12);
        if ( (_BYTE)Flags != v13 )
          sub_1800FC010(HeapHandle, v11);
      }
      if ( (v11[15] & 0x3F) != 0 )
      {
        if ( (v11[10] & 2) != 0 )
        {
          v14 = sub_180063B6C(v11, *(_QWORD *)&Flags);
          if ( UserValue )
            *UserValue = *(PVOID *)(v14 + 8);
        }
        if ( UserFlags )
          *UserFlags = 16 * (v11[10] & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v15 = NtCurrentTeb();
        v15->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v11 = v23;
        v10 = 0;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v11[11] = v11[8] ^ v11[9] ^ v11[10];
        *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( v21 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v10;
    }
    if ( (v9[15] & 0x3F) != 0 )
    {
      if ( UserFlags )
        *UserFlags = 0;
      return v10;
    }
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v20 = NtCurrentTeb();
  v20->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
