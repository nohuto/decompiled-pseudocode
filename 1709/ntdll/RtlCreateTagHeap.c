/*
 * XREFs of RtlCreateTagHeap @ 0x180003370
 * Callers:
 *     TpInitializePackage @ 0x1800032C0 (TpInitializePackage.c)
 *     CsrClientConnectToServer @ 0x1800067D0 (CsrClientConnectToServer.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     RtlDebugCreateTagHeap @ 0x180103874 (RtlDebugCreateTagHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlStringCbCopyW @ 0x1800528E4 (RtlStringCbCopyW.c)
 *     RtlpAllocateTags @ 0x1800EFC58 (RtlpAllocateTags.c)
 *     RtlDebugCreateTagHeap @ 0x180103874 (RtlDebugCreateTagHeap.c)
 */

ULONG __cdecl RtlCreateTagHeap(PVOID HeapHandle, ULONG Flags, PWSTR TagPrefix, PWSTR TagNames)
{
  ULONG v6; // edx
  ULONG TagHeap; // edi
  int v8; // edi
  int v9; // edx
  PWSTR v10; // rsi
  PWSTR v11; // r15
  PWSTR v13; // rcx
  __int64 Tags; // rax
  __int64 v15; // rbx
  PWSTR v17; // r13
  unsigned __int64 v18; // r15
  __int64 v19; // r12
  char v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+A0h] [rbp+8h]

  v21 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0;
  if ( !RtlpGlobalTagHeap )
  {
    RtlpGlobalTagHeap = (__int64)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x2A0uLL);
    if ( !RtlpGlobalTagHeap )
      return 0;
  }
  if ( HeapHandle && (*((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0) )
    return 0;
  if ( !HeapHandle )
  {
LABEL_13:
    v8 = 0;
    v9 = 0;
    v10 = TagNames;
    if ( *TagNames == 33 )
    {
      v11 = TagNames + 1;
      while ( *v10++ )
        ;
    }
    else
    {
      v11 = 0LL;
    }
    v13 = v10;
    while ( *v13 )
    {
      while ( *v13++ )
        ;
      ++v9;
    }
    if ( !v9 || (Tags = RtlpAllocateTags(HeapHandle), (v15 = Tags) == 0) )
    {
LABEL_44:
      TagHeap = v8 << 18;
      goto LABEL_45;
    }
    v22 = 23LL;
    v8 = *(unsigned __int16 *)(Tags + 16);
    if ( *(_WORD *)(Tags + 16) )
    {
      if ( v8 != 2048 )
        goto LABEL_31;
      RtlStringCbCopyW(Tags + 20, 46LL, L"GlobalTags");
      v15 += 72LL;
    }
    else
    {
      if ( v11 )
        RtlStringCbCopyW(Tags + 20, 46LL, v11);
      v15 += 72LL;
    }
    v8 = *(unsigned __int16 *)(v15 + 16);
LABEL_31:
    v17 = TagPrefix;
    if ( !TagPrefix )
      goto LABEL_37;
    v18 = -1LL;
    do
      ++v18;
    while ( TagPrefix[v18] );
    if ( v18 && v18 < 0x13 )
    {
      v22 = 23 - v18;
    }
    else
    {
LABEL_37:
      v18 = 0LL;
      v17 = 0LL;
    }
    while ( *v10 )
    {
      v19 = v15 + 20;
      if ( v17 )
      {
        RtlStringCbCopyW(v15 + 20, 2 * v22, v17);
        v19 += 2 * v18;
      }
      RtlStringCbCopyW(v19, 2 * (v22 - v18), v10);
      while ( *v10++ )
        ;
      v15 += 72LL;
    }
    goto LABEL_44;
  }
  v6 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v6 & 0x61000000) == 0 || (v6 & 0x10000000) != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v21 = 1;
    }
    goto LABEL_13;
  }
  TagHeap = RtlDebugCreateTagHeap((int)HeapHandle);
LABEL_45:
  if ( v21 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return TagHeap;
}
