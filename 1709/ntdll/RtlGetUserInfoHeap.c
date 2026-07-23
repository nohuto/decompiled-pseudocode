/*
 * XREFs of RtlGetUserInfoHeap @ 0x180077630
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x180103D5C (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpProbeUserBufferSafe @ 0x180077930 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpGetUserInfo @ 0x1800779A0 (RtlpHpGetUserInfo.c)
 *     RtlpGetExtraStuffPointer @ 0x180077C6C (RtlpGetExtraStuffPointer.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugGetUserInfoHeap @ 0x180103D5C (RtlDebugGetUserInfoHeap.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl RtlGetUserInfoHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        PVOID *UserValue,
        PULONG UserFlags)
{
  unsigned __int64 v6; // rbx
  __int16 v7; // r15
  int v9; // edi
  ULONG v10; // r15d
  char *v11; // rcx
  BOOLEAN v12; // r14
  char *v14; // rbx
  __int64 ExtraStuffPointer; // rax
  struct _TEB *v16; // rbx
  ULONG v17; // ecx
  unsigned int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rcx
  int v25; // r15d
  __int64 v26; // rax
  int v27; // ecx
  struct _TEB *v28; // rbx
  char v29; // [rsp+31h] [rbp-27h]
  char *v30; // [rsp+38h] [rbp-20h]

  v6 = (unsigned __int64)BaseAddress;
  v7 = Flags;
  v9 = 0;
  v29 = 0;
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
    v20 = v19 | v7 & 0xE00;
    if ( (v7 & 0xE00) == 0 )
      v20 = v19;
    v21 = v20 | 0x2000000;
    if ( (v7 & 0x10) == 0 )
      v21 = v20;
    v22 = v21 | 0x1000000;
    if ( (v7 & 2) == 0 )
      v22 = v21;
    v23 = *((_DWORD *)HeapHandle + 16);
    v24 = 0LL;
    if ( v23 )
      LOBYTE(v24) = v23 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v25 = v22 | 1;
    if ( !(_DWORD)v24 )
      v25 = v22;
    if ( (RtlpHpAppCompatFlags & 2) == 0 || !v6 )
      return RtlpHpGetUserInfo((_DWORD)HeapHandle, v6, v25, (_DWORD)UserValue, (__int64)UserFlags);
    if ( !(_WORD)v6 )
    {
      v26 = RtlCSparseBitmapBitmaskRead(v24, 2 * (v6 >> 20));
      if ( !v26 )
        return RtlpHpGetUserInfo((_DWORD)HeapHandle, v6, v25, (_DWORD)UserValue, (__int64)UserFlags);
      v9 = v26 - 1;
    }
    if ( v9 != 2 )
      LODWORD(v6) = v6 - 16;
    return RtlpHpGetUserInfo((_DWORD)HeapHandle, v6, v25, (_DWORD)UserValue, (__int64)UserFlags);
  }
  v10 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v10 & 0x61000000) != 0 && (v10 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap((int)HeapHandle, UserFlags);
  if ( (v10 & 0x800) != 0 )
  {
    v11 = (char *)RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    v12 = 1;
    goto LABEL_5;
  }
  v12 = 1;
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v11 = (char *)RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    goto LABEL_5;
  }
  if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
  {
    v27 = 9;
    goto LABEL_65;
  }
  v11 = (char *)BaseAddress - 16;
  _m_prefetchw((char *)BaseAddress - 16);
  if ( *((char *)BaseAddress - 1) == 5 )
    v11 -= 16 * (unsigned __int8)v11[14];
  if ( (v11[15] & 0x3F) == 0 )
  {
    LODWORD(BaseAddress) = (_DWORD)v11;
    v27 = 8;
LABEL_65:
    RtlpLogHeapFailure(v27, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    v11 = 0LL;
  }
LABEL_5:
  if ( v11 )
  {
    if ( v11[15] >= 0 )
    {
      v14 = (char *)(v6 - 16);
      _m_prefetchw(v14);
      if ( v14[15] == 5 )
        v14 -= 16 * (unsigned __int8)v14[14];
      v30 = v14;
      if ( (v10 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v29 = 1;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *((_DWORD *)v14 + 2) ^= *((_DWORD *)HeapHandle + 34);
        if ( v14[11] != ((unsigned __int8)v14[8] ^ (unsigned __int8)(v14[9] ^ v14[10])) )
          RtlpAnalyzeHeapFailure(HeapHandle, v14);
      }
      if ( (v14[15] & 0x3F) != 0 )
      {
        if ( (v14[10] & 2) != 0 )
        {
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v14, *(_QWORD *)&Flags);
          if ( UserValue )
            *UserValue = *(PVOID *)(ExtraStuffPointer + 8);
        }
        if ( UserFlags )
          *UserFlags = 16 * (v14[10] & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v16 = NtCurrentTeb();
        v16->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v14 = v30;
        v12 = 0;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v14[11] = v14[8] ^ v14[9] ^ v14[10];
        *((_DWORD *)v14 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( v29 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v12;
    }
    if ( (v11[15] & 0x3F) != 0 )
    {
      if ( UserFlags )
        *UserFlags = 0;
      return v12;
    }
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v28 = NtCurrentTeb();
  v28->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
