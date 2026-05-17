/*
 * XREFs of LdrpCheckForRetryLoading @ 0x1800208D8
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180020A44 (LdrpMapDllNtFileName.c)
 *     LdrpMinimalMapModule @ 0x180022288 (LdrpMinimalMapModule.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18003A130 (RtlRbInsertNodeEx.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     LdrpCompareModuleName @ 0x180088114 (LdrpCompareModuleName.c)
 */

char __fastcall LdrpCheckForRetryLoading(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v5; // r13
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  int v9; // r14d
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax

  v2 = 0;
  if ( *(_QWORD *)(a1 + 168) || (*(_DWORD *)(a1 + 32) & 0x4100000) != 0 )
    return v2;
  v5 = *(_QWORD *)(a1 + 56);
  RtlEnterCriticalSection(&LdrpWorkQueueLock);
  v7 = LdrpRetryingModuleIndex;
  v8 = LdrpRetryingModuleIndex;
  v9 = BYTE8(LdrpRetryingModuleIndex) & 1;
  if ( (_QWORD)LdrpRetryingModuleIndex )
  {
    do
    {
      v13 = LdrpCompareModuleName(v5, v8);
      if ( v13 >= 0 )
      {
        if ( v13 <= 0 )
          break;
        v14 = *(_QWORD *)(v8 + 8);
      }
      else
      {
        v14 = *(_QWORD *)v8;
      }
      if ( v9 && v14 )
        v8 ^= v14;
      else
        v8 = v14;
    }
    while ( v8 );
    if ( v8 )
      goto LABEL_9;
  }
  if ( !a2 )
    goto LABEL_5;
  if ( !v7 )
    goto LABEL_8;
  while ( 1 )
  {
    if ( (int)LdrpCompareModuleName(v5, v7) < 0 )
    {
      v15 = *(_QWORD *)v7;
      if ( v9 )
      {
        if ( !v15 )
          goto LABEL_8;
        v15 ^= v7;
      }
      if ( !v15 )
        goto LABEL_8;
      goto LABEL_23;
    }
    v15 = *(_QWORD *)(v7 + 8);
    if ( v9 )
      break;
LABEL_25:
    if ( !v15 )
      goto LABEL_26;
LABEL_23:
    v7 = v15;
  }
  if ( v15 )
  {
    v15 ^= v7;
    goto LABEL_25;
  }
LABEL_26:
  v2 = 1;
LABEL_8:
  LOBYTE(v6) = v2;
  RtlRbInsertNodeEx(&LdrpRetryingModuleIndex, v7, v6, v5 + 224);
LABEL_9:
  *(_DWORD *)(a1 + 32) |= 0x100000u;
  v11 = (_QWORD *)qword_18015F258;
  v12 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_18015F258 != &LdrpRetryQueue )
    __fastfail(3u);
  *v12 = &LdrpRetryQueue;
  v2 = 1;
  *(_QWORD *)(a1 + 72) = v11;
  *v11 = v12;
  qword_18015F258 = a1 + 64;
LABEL_5:
  RtlLeaveCriticalSection(&LdrpWorkQueueLock);
  return v2;
}
