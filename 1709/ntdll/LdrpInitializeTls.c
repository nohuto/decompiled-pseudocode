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
  int v2; // edx
  int v3; // r8d
  int v4; // eax
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 result; // rax
  unsigned int v8; // edi
  void *Heap; // rax
  unsigned int v10; // [rsp+70h] [rbp+8h] BYREF
  char v11; // [rsp+78h] [rbp+10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v0 = (__int64 *)qword_18015F3B0;
  v10 = 0;
  if ( (__int64 *)qword_18015F3B0 == &qword_18015F3B0 )
    goto LABEL_8;
  do
  {
    v1 = v0;
    v0 = (__int64 *)*v0;
    RtlImageNtHeaderEx(3LL, v1[6], 0LL, &v13);
    if ( *(_WORD *)(v13 + 24) == 523 )
    {
      LOWORD(v3) = 9;
      LOBYTE(v2) = 1;
      v4 = RtlpImageDirectoryEntryToDataEx(v1[6], v2, v3, (unsigned int)&v11, (__int64)&v12);
      v5 = v12;
      if ( v4 < 0 )
        v5 = 0LL;
      v12 = v5;
      if ( v5 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            577,
            (unsigned int)"LdrpInitializeTls",
            2,
            "DLL \"%wZ\" has TLS information at %p\n",
            v1 + 9,
            v5);
        result = LdrpAllocateTlsEntry(v5, (_DWORD)v1, (unsigned int)&v10, 0, 0LL);
        if ( (int)result < 0 )
          return result;
        *((_WORD *)v1 + 55) = -1;
      }
    }
  }
  while ( v0 != &qword_18015F3B0 );
  v6 = v10;
  if ( v10 )
  {
    v8 = v10 + 8;
    if ( v10 + 8 > 0x20 )
    {
      Heap = (void *)RtlAllocateHeap(
                       NtCurrentPeb()->ProcessHeap,
                       (unsigned int)(NtdllBaseTag + 786432),
                       4 * (((unsigned __int64)v8 + 31) >> 5));
      if ( !Heap )
        return 3221225495LL;
      LdrpActualBitmapSize = ((unsigned __int64)v8 + 31) >> 5;
      v6 = v10;
    }
    else
    {
      Heap = &LdrpStaticTlsBitmapVector;
      LdrpActualBitmapSize = 1LL;
    }
    LdrpTlsBitmap = v8;
    Src = Heap;
    RtlSetBits(&LdrpTlsBitmap, 0LL, v6);
    RtlClearBits((__int64)&LdrpTlsBitmap, v6, 8u);
  }
  else
  {
LABEL_8:
    LdrpTlsBitmap = 0;
    Src = 0LL;
  }
  return LdrpAllocateTls();
}
