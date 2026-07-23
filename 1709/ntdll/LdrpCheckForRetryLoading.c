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

BOOLEAN __fastcall LdrpCheckForRetryLoading(__int64 a1, char a2)
{
  BOOLEAN v2; // bl
  __int64 v5; // r13
  _RTL_BALANCED_NODE *Root; // rsi
  unsigned __int64 v7; // rdi
  int v8; // r14d
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rax
  _RTL_BALANCED_NODE *v14; // rax

  v2 = 0;
  if ( *(_QWORD *)(a1 + 168) || (*(_DWORD *)(a1 + 32) & 0x4100000) != 0 )
    return v2;
  v5 = *(_QWORD *)(a1 + 56);
  RtlEnterCriticalSection(&LdrpWorkQueueLock);
  Root = LdrpRetryingModuleIndex.Root;
  v7 = (unsigned __int64)LdrpRetryingModuleIndex.Root;
  v8 = *(_BYTE *)&LdrpRetryingModuleIndex.0 & 1;
  if ( LdrpRetryingModuleIndex.Root )
  {
    do
    {
      v12 = LdrpCompareModuleName(v5, v7);
      if ( v12 >= 0 )
      {
        if ( v12 <= 0 )
          break;
        v13 = *(_QWORD *)(v7 + 8);
      }
      else
      {
        v13 = *(_QWORD *)v7;
      }
      if ( v8 && v13 )
        v7 ^= v13;
      else
        v7 = v13;
    }
    while ( v7 );
    if ( v7 )
      goto LABEL_9;
  }
  if ( !a2 )
    goto LABEL_5;
  if ( !Root )
    goto LABEL_8;
  while ( 1 )
  {
    if ( (int)LdrpCompareModuleName(v5, Root) < 0 )
    {
      v14 = Root->Children[0];
      if ( v8 )
      {
        if ( !v14 )
          goto LABEL_8;
        v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v14);
      }
      if ( !v14 )
        goto LABEL_8;
      goto LABEL_23;
    }
    v14 = Root->Children[1];
    if ( v8 )
      break;
LABEL_25:
    if ( !v14 )
      goto LABEL_26;
LABEL_23:
    Root = v14;
  }
  if ( v14 )
  {
    v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v14);
    goto LABEL_25;
  }
LABEL_26:
  v2 = 1;
LABEL_8:
  RtlRbInsertNodeEx(&LdrpRetryingModuleIndex, Root, v2, (PRTL_BALANCED_NODE)(v5 + 224));
LABEL_9:
  *(_DWORD *)(a1 + 32) |= 0x100000u;
  v10 = (_QWORD *)qword_18015F258;
  v11 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_18015F258 != &LdrpRetryQueue )
    __fastfail(3u);
  *v11 = &LdrpRetryQueue;
  v2 = 1;
  *(_QWORD *)(a1 + 72) = v10;
  *v10 = v11;
  qword_18015F258 = a1 + 64;
LABEL_5:
  RtlLeaveCriticalSection(&LdrpWorkQueueLock);
  return v2;
}
