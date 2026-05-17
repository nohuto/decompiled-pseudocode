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

char __fastcall RtlGetUserInfoHeap(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int64 v6; // rbx
  __int16 v7; // r15
  int v9; // edi
  int v10; // r15d
  __int64 v11; // rcx
  char v12; // r14
  unsigned __int64 v14; // rbx
  __int64 ExtraStuffPointer; // rax
  struct _TEB *v16; // rbx
  unsigned int v17; // ecx
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
  unsigned __int64 v30; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v7 = a2;
  v9 = 0;
  v29 = 0;
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
    v20 = v19 | v7 & 0xE00;
    if ( (v7 & 0xE00) == 0 )
      v20 = v19;
    v21 = v20 | 0x2000000;
    if ( (v7 & 0x10) == 0 )
      v21 = v20;
    v22 = v21 | 0x1000000;
    if ( (v7 & 2) == 0 )
      v22 = v21;
    v23 = *(_DWORD *)(a1 + 64);
    v24 = 0LL;
    if ( v23 )
      LOBYTE(v24) = v23 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v25 = v22 | 1;
    if ( !(_DWORD)v24 )
      v25 = v22;
    if ( (RtlpHpAppCompatFlags & 2) == 0 || !v6 )
      return RtlpHpGetUserInfo(a1, v6, v25, (_DWORD)a4, (__int64)a5);
    if ( !(_WORD)v6 )
    {
      v26 = RtlCSparseBitmapBitmaskRead(v24, 2 * (v6 >> 20));
      if ( !v26 )
        return RtlpHpGetUserInfo(a1, v6, v25, (_DWORD)a4, (__int64)a5);
      v9 = v26 - 1;
    }
    if ( v9 != 2 )
      LODWORD(v6) = v6 - 16;
    return RtlpHpGetUserInfo(a1, v6, v25, (_DWORD)a4, (__int64)a5);
  }
  v10 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v10 & 0x61000000) != 0 && (v10 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(a1, v10, a3, (_DWORD)a4, (__int64)a5);
  if ( (v10 & 0x800) != 0 )
  {
    v11 = RtlpProbeUserBufferSafe(a1, a3);
    v12 = 1;
    goto LABEL_5;
  }
  v12 = 1;
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v11 = RtlpProbeUserBufferSafe(a1, a3);
    goto LABEL_5;
  }
  if ( (a3 & 0xF) != 0 )
  {
    v27 = 9;
    goto LABEL_65;
  }
  v11 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
  if ( (*(_BYTE *)(v11 + 15) & 0x3F) == 0 )
  {
    LODWORD(a3) = v11;
    v27 = 8;
LABEL_65:
    RtlpLogHeapFailure(v27, a1, a3, 0, 0LL, 0LL);
    v11 = 0LL;
  }
LABEL_5:
  if ( v11 )
  {
    if ( *(char *)(v11 + 15) >= 0 )
    {
      v14 = v6 - 16;
      _m_prefetchw((const void *)v14);
      if ( *(_BYTE *)(v14 + 15) == 5 )
        v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
      v30 = v14;
      if ( (v10 & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v29 = 1;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v14);
      }
      if ( (*(_BYTE *)(v14 + 15) & 0x3F) != 0 )
      {
        if ( (*(_BYTE *)(v14 + 10) & 2) != 0 )
        {
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v14, a2);
          if ( a4 )
            *a4 = *(_QWORD *)(ExtraStuffPointer + 8);
        }
        if ( a5 )
          *a5 = 16 * (*(_BYTE *)(v14 + 10) & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v16 = NtCurrentTeb();
        v16->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v14 = v30;
        v12 = 0;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
        *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      if ( v29 )
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      return v12;
    }
    if ( (*(_BYTE *)(v11 + 15) & 0x3F) != 0 )
    {
      if ( a5 )
        *a5 = 0;
      return v12;
    }
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v28 = NtCurrentTeb();
  v28->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
