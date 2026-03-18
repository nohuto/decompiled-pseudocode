/*
 * XREFs of IoGetDumpHiberRanges @ 0x14013EE44
 * Callers:
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 */

void __fastcall IoGetDumpHiberRanges(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  void *v4; // r8
  PIMAGE_NT_HEADERS v5; // rax
  __int64 ***v6; // rdi
  __int64 **j; // rbx
  __int64 *v8; // rsi
  __int64 *i; // rbx
  PVOID *v10; // r14
  __int64 v11; // rbp
  ULONG_PTR v12; // r9

  if ( !a2 )
    return;
  v2 = *(_QWORD *)(a2 + 272);
  if ( !v2 )
    return;
  if ( *(_BYTE *)(a2 + 280) )
  {
    v8 = (__int64 *)(v2 + 32);
    for ( i = *(__int64 **)(v2 + 32); i != v8; i = (__int64 *)*i )
    {
      v10 = (PVOID *)(i + 13);
      v11 = 2LL;
      do
      {
        if ( *v10 )
          PoSetHiberRange(0LL, 0x10000u, *v10, *((unsigned int *)i + 24), 0x66756263u);
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    goto LABEL_7;
  }
  if ( (unsigned int)(*(_DWORD *)v2 - 2) > 2 || (unsigned int)(*(_DWORD *)(v2 + 4) - 48) > 0x38 )
  {
    v4 = *(void **)(v2 + 24);
    if ( !v4 )
      goto LABEL_7;
    v12 = *(unsigned int *)(v2 + 40);
LABEL_24:
    PoSetHiberRange(0LL, 0x10000u, v4, v12, 0x66756263u);
    goto LABEL_7;
  }
  v4 = *(void **)(v2 + 16);
  if ( v4 )
  {
    v12 = *(unsigned int *)(v2 + 24);
    goto LABEL_24;
  }
LABEL_7:
  if ( CrashdmpImageBase )
  {
    v5 = RtlImageNtHeader(CrashdmpImageBase);
    PoSetHiberRange(0LL, 0x10000u, CrashdmpImageBase, v5->OptionalHeader.SizeOfImage, 0x676D4944u);
  }
  v6 = (__int64 ***)(a2 + 296);
  for ( j = *v6; j != (__int64 **)v6; j = (__int64 **)*j )
    PoSetHiberRange(0LL, 0x10000u, j[3], *((unsigned int *)j + 8), 0x676D4944u);
}
