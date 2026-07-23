/*
 * XREFs of RtlSetUserValueHeap @ 0x180077A10
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x180104758 (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpHpExtrasGet @ 0x180049278 (RtlpHpExtrasGet.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpProbeUserBufferSafe @ 0x180077930 (RtlpProbeUserBufferSafe.c)
 *     RtlpGetExtraStuffPointer @ 0x180077C6C (RtlpGetExtraStuffPointer.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugSetUserValueHeap @ 0x180104758 (RtlDebugSetUserValueHeap.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl RtlSetUserValueHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, PVOID UserValue)
{
  unsigned __int64 v5; // rbx
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
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // r14d
  unsigned __int64 v21; // rax
  ULONG v23; // r14d
  unsigned __int8 *v24; // rbx
  char v25; // al
  struct _TEB *v26; // rbx
  __int64 v27; // rax
  int v28; // eax
  struct _TEB *v29; // rbx
  int v30; // ecx
  struct _TEB *v31; // rbx
  char v32; // [rsp+30h] [rbp-38h]

  v5 = (unsigned __int64)BaseAddress;
  v6 = Flags;
  v8 = 0;
  v9 = 0;
  v32 = 0;
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
    v18 = *((_DWORD *)HeapHandle + 16);
    v19 = 0LL;
    if ( v18 )
      LOBYTE(v19) = v18 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v20 = v17 | 1;
    if ( !(_DWORD)v19 )
      v20 = v17;
    if ( (RtlpHpAppCompatFlags & 2) == 0 || !v5 )
      goto LABEL_19;
    if ( (_WORD)v5 )
    {
      v28 = 0;
    }
    else
    {
      v27 = RtlCSparseBitmapBitmaskRead(v19, 2 * (v5 >> 20));
      if ( !v27 )
      {
LABEL_19:
        v21 = RtlpHpExtrasGet((__int64)HeapHandle, v5, (unsigned int)v20 | *((_DWORD *)HeapHandle + 5), 0LL);
        if ( v21 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
          v10 = 0;
        else
          *(_QWORD *)(v21 + 8) = UserValue;
        if ( !v10 )
        {
          NtCurrentTeb()->LastStatusValue = -1073741811;
          v29 = NtCurrentTeb();
          v29->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        }
        return v10;
      }
      v28 = v27 - 1;
    }
    if ( v28 != 2 )
      v5 -= 16LL;
    goto LABEL_19;
  }
  v23 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v23 & 0x61000000) != 0 && (v23 & 0x10000000) == 0 )
    return RtlDebugSetUserValueHeap((int)HeapHandle);
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v24 = RtlpProbeUserBufferSafe((int)HeapHandle, (__int64)BaseAddress);
    goto LABEL_30;
  }
  if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
  {
    v30 = 9;
    goto LABEL_61;
  }
  v24 = (unsigned __int8 *)BaseAddress - 16;
  _m_prefetchw((char *)BaseAddress - 16);
  if ( *((char *)BaseAddress - 1) == 5 )
    v24 -= 16 * v24[14];
  if ( (v24[15] & 0x3F) == 0 )
  {
    LODWORD(BaseAddress) = (_DWORD)v24;
    v30 = 8;
LABEL_61:
    RtlpLogHeapFailure(v30, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    v24 = 0LL;
  }
LABEL_30:
  if ( !v24 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v31 = NtCurrentTeb();
    v31->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( (v23 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v9 = 1;
    v32 = 1;
  }
  v25 = v24[15];
  if ( (v25 & 0x3F) != 0 )
  {
    if ( v25 >= 0 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *((_DWORD *)v24 + 2) ^= *((_DWORD *)HeapHandle + 34);
        if ( v24[11] != (v24[8] ^ (unsigned __int8)(v24[9] ^ v24[10])) )
          RtlpAnalyzeHeapFailure(HeapHandle, v24);
      }
      if ( (v24[10] & 2) != 0 )
      {
        *(_QWORD *)(RtlpGetExtraStuffPointer(v24, *(_QWORD *)&Flags) + 8) = UserValue;
        v8 = 1;
      }
      goto LABEL_42;
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v26 = NtCurrentTeb();
    v26->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    v9 = v32;
    v8 = 0;
  }
  v24 = 0LL;
LABEL_42:
  if ( v24 && *((_DWORD *)HeapHandle + 31) )
  {
    v24[11] = v24[8] ^ v24[9] ^ v24[10];
    *((_DWORD *)v24 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v9 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return v8;
}
