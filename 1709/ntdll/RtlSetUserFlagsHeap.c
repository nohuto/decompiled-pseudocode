/*
 * XREFs of RtlSetUserFlagsHeap @ 0x1800EF5E0
 * Callers:
 *     RtlDebugSetUserFlagsHeap @ 0x180104594 (RtlDebugSetUserFlagsHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpHpExtrasGet @ 0x180049278 (RtlpHpExtrasGet.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpProbeUserBufferSafe @ 0x180077930 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180104594 (RtlDebugSetUserFlagsHeap.c)
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
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // r13d
  __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rax
  struct _TEB *v24; // rbx
  ULONG v25; // eax
  ULONG v26; // r13d
  unsigned __int8 *v27; // rcx
  int v28; // ecx
  unsigned __int64 v29; // rbx
  struct _TEB *v30; // rbx
  char v32; // [rsp+31h] [rbp-27h]
  unsigned __int64 v33; // [rsp+38h] [rbp-20h]

  v6 = (unsigned __int64)BaseAddress;
  v7 = Flags;
  v32 = 0;
  if ( ((UserFlagsSet | UserFlagsReset) & 0xFFFFF1FF) != 0 )
    goto LABEL_59;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v26 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v26 & 0x61000000) != 0 && (v26 & 0x10000000) == 0 )
      return RtlDebugSetUserFlagsHeap((int)HeapHandle, UserFlagsSet);
    v9 = 1;
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v27 = RtlpProbeUserBufferSafe((int)HeapHandle, (__int64)BaseAddress);
      goto LABEL_43;
    }
    if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      v28 = 9;
    }
    else
    {
      v27 = (unsigned __int8 *)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v27 -= 16 * v27[14];
      if ( (v27[15] & 0x3F) != 0 )
      {
LABEL_43:
        if ( v27 && (v27[15] & 0x80u) == 0 )
        {
          if ( (v26 & 1) == 0 )
          {
            RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
            v32 = 1;
          }
          v29 = v6 - 16;
          _m_prefetchw((const void *)v29);
          if ( *(_BYTE *)(v29 + 15) == 5 )
            v29 -= 16LL * *(unsigned __int8 *)(v29 + 14);
          v33 = v29;
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            *(_DWORD *)(v29 + 8) ^= *((_DWORD *)HeapHandle + 34);
            if ( *(_BYTE *)(v29 + 11) != (*(_BYTE *)(v29 + 8) ^ (unsigned __int8)(*(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10))) )
              RtlpAnalyzeHeapFailure(HeapHandle, v29);
          }
          if ( (*(_BYTE *)(v29 + 15) & 0x3F) != 0 )
          {
            *(_BYTE *)(v29 + 10) &= ~(unsigned __int8)(UserFlagsReset >> 4);
            *(_BYTE *)(v29 + 10) |= UserFlagsSet >> 4;
          }
          else
          {
            NtCurrentTeb()->LastStatusValue = -1073741811;
            v30 = NtCurrentTeb();
            v30->LastErrorValue = RtlNtStatusToDosError(-1073741811);
            v9 = 0;
            v29 = v33;
          }
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            *(_BYTE *)(v29 + 11) = *(_BYTE *)(v29 + 8) ^ *(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10);
            *(_DWORD *)(v29 + 8) ^= *((_DWORD *)HeapHandle + 34);
          }
          if ( v32 )
            RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
          return v9;
        }
LABEL_59:
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v24 = NtCurrentTeb();
        v25 = RtlNtStatusToDosError(-1073741811);
        v9 = 0;
        goto LABEL_60;
      }
      BaseAddress = v27;
      v28 = 8;
    }
    RtlpLogHeapFailure(v28, (__int64)HeapHandle, (__int64)BaseAddress, 0LL, 0LL, 0LL);
    v27 = 0LL;
    goto LABEL_43;
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
  v18 = *((_DWORD *)HeapHandle + 16);
  v19 = 0LL;
  if ( v18 )
    LOBYTE(v19) = v18 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v20 = v17 | 1;
  if ( !(_DWORD)v19 )
    v20 = v17;
  if ( !v6 )
    goto LABEL_59;
  if ( (RtlpHpAppCompatFlags & 2) == 0 )
    goto LABEL_27;
  if ( (_WORD)v6 )
  {
    v22 = 0;
  }
  else
  {
    v21 = RtlCSparseBitmapBitmaskRead(v19, 2 * (v6 >> 20));
    if ( !v21 )
      goto LABEL_27;
    v22 = v21 - 1;
  }
  if ( v22 != 2 )
    v6 -= 16LL;
LABEL_27:
  v23 = RtlpHpExtrasGet((__int64)HeapHandle, v6, (unsigned int)v20 | *((_DWORD *)HeapHandle + 5), 0LL);
  if ( v23 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    v9 = 0;
  else
    *(_BYTE *)(v23 + 2) = *(_BYTE *)(v23 + 2) & ((16 * ~BYTE1(UserFlagsReset)) | 0xF) | (16 * BYTE1(UserFlagsSet));
  if ( !v9 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v24 = NtCurrentTeb();
    v25 = RtlNtStatusToDosError(-1073741811);
LABEL_60:
    v24->LastErrorValue = v25;
  }
  return v9;
}
