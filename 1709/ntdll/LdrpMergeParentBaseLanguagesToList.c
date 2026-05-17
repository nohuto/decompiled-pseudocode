/*
 * XREFs of LdrpMergeParentBaseLanguagesToList @ 0x1800EB470
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180005240 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180005620 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x180051168 (LdrpMergeLangFallbackLists.c)
 * Callees:
 *     RtlpFreeTraverseNodes @ 0x18001BF18 (RtlpFreeTraverseNodes.c)
 *     RtlpTraverseParents @ 0x18001BF4C (RtlpTraverseParents.c)
 *     RtlpCreateTraverseNodes @ 0x18001BFDC (RtlpCreateTraverseNodes.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     LdrpLangFallbackListAppendNode @ 0x180052170 (LdrpLangFallbackListAppendNode.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 */

__int64 LdrpMergeParentBaseLanguagesToList(__int64 *a1, _WORD *a2, __int64 a3, __int64 a4, ...)
{
  wchar_t *Heap; // rsi
  int appended; // ebx
  __int16 v10; // di
  unsigned __int16 v11; // dx
  __int16 v12; // dx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  va_list va; // [rsp+90h] [rbp+50h] BYREF

  va_start(va, a4);
  v15 = 0LL;
  Heap = 0LL;
  if ( !a1 || !*a1 || !a2 || !a3 )
  {
    appended = -1073741811;
    goto LABEL_22;
  }
  appended = RtlpCreateTraverseNodes(&v15);
  if ( appended >= 0 )
  {
    if ( !RtlpTraverseParents(a2, v15, a3, a4, 0, 42) )
    {
      appended = -1073741823;
      goto LABEL_24;
    }
    Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
    if ( !Heap )
    {
      appended = -1073741801;
      goto LABEL_24;
    }
    v10 = 0;
    while ( 1 )
    {
      if ( v10 && *(_DWORD *)(v15 + 8LL * v10 + 4) )
      {
        v11 = *(_WORD *)(v15 + 8LL * v10);
        if ( v11 )
        {
          DestinationString.Buffer = Heap;
          *(_DWORD *)&DestinationString.Length = 11141120;
          if ( !RtlLCIDToCultureName(v11, (__int64)&DestinationString) )
            goto LABEL_15;
        }
        else
        {
          v12 = *(_WORD *)(v15 + 8LL * v10 + 2);
          if ( v12 < 0 )
          {
LABEL_15:
            appended = -1073741595;
LABEL_22:
            if ( Heap )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
            break;
          }
          RtlInitUnicodeString(
            &DestinationString,
            (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 24LL)
                   + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL) + 2LL * v12)));
        }
        appended = LdrpLangFallbackListAppendNode(a1, a3, 0, (__int16 *)va, DestinationString.Buffer);
        if ( appended < 0 )
          goto LABEL_22;
      }
      if ( ++v10 >= 42 )
        goto LABEL_22;
    }
  }
LABEL_24:
  if ( v15 )
    RtlpFreeTraverseNodes(v15);
  return (unsigned int)appended;
}
