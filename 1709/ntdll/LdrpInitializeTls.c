/*
 * XREFs of LdrpInitializeTls @ 0x18001C128
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlClearBits @ 0x18001C050 (RtlClearBits.c)
 *     LdrpAllocateTls @ 0x18001C850 (LdrpAllocateTls.c)
 *     LdrpAllocateTlsEntry @ 0x18001CAE4 (LdrpAllocateTlsEntry.c)
 *     RtlSetBits @ 0x18001D2C0 (RtlSetBits.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 LdrpInitializeTls()
{
  __int64 *v0; // rbx
  __int64 *v1; // rdi
  int v2; // eax
  __int64 v3; // rsi
  ULONG v4; // ebx
  __int64 result; // rax
  unsigned int v6; // edi
  unsigned int *Heap; // rax
  ULONG NumberToSet; // [rsp+70h] [rbp+8h] BYREF
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+88h] [rbp+20h] BYREF

  v0 = (__int64 *)qword_18015F3B0;
  NumberToSet = 0;
  if ( (__int64 *)qword_18015F3B0 == &qword_18015F3B0 )
    goto LABEL_8;
  do
  {
    v1 = v0;
    v0 = (__int64 *)*v0;
    RtlImageNtHeaderEx(3u, (PVOID)v1[6], 0LL, &OutHeaders);
    if ( OutHeaders->OptionalHeader.Magic == 523 )
    {
      v2 = RtlpImageDirectoryEntryToDataEx(v1[6], (__int64)&v9);
      v3 = v9;
      if ( v2 < 0 )
        v3 = 0LL;
      v9 = v3;
      if ( v3 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            577,
            (unsigned int)"LdrpInitializeTls",
            2,
            "DLL \"%wZ\" has TLS information at %p\n",
            v1 + 9,
            v3);
        result = LdrpAllocateTlsEntry(v3, (_DWORD)v1, (unsigned int)&NumberToSet, 0, 0LL);
        if ( (int)result < 0 )
          return result;
        *((_WORD *)v1 + 55) = -1;
      }
    }
  }
  while ( v0 != &qword_18015F3B0 );
  v4 = NumberToSet;
  if ( NumberToSet )
  {
    v6 = NumberToSet + 8;
    if ( NumberToSet + 8 > 0x20 )
    {
      Heap = (unsigned int *)RtlAllocateHeap(
                               NtCurrentPeb()->ProcessHeap,
                               NtdllBaseTag + 786432,
                               4 * (((unsigned __int64)v6 + 31) >> 5));
      if ( !Heap )
        return 3221225495LL;
      LdrpActualBitmapSize = ((unsigned __int64)v6 + 31) >> 5;
      v4 = NumberToSet;
    }
    else
    {
      Heap = (unsigned int *)&LdrpStaticTlsBitmapVector;
      LdrpActualBitmapSize = 1LL;
    }
    LdrpTlsBitmap.SizeOfBitMap = v6;
    LdrpTlsBitmap.Buffer = Heap;
    RtlSetBits(&LdrpTlsBitmap, 0, v4);
    RtlClearBits(&LdrpTlsBitmap, v4, 8u);
  }
  else
  {
LABEL_8:
    LdrpTlsBitmap.SizeOfBitMap = 0;
    LdrpTlsBitmap.Buffer = 0LL;
  }
  return LdrpAllocateTls();
}
