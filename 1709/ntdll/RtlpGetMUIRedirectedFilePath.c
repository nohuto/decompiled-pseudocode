/*
 * XREFs of RtlpGetMUIRedirectedFilePath @ 0x18001BBFC
 * Callers:
 *     RtlGetFileMUIPath @ 0x18001B6F0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlDoesFileExists_UEx @ 0x18001BE04 (RtlDoesFileExists_UEx.c)
 *     RtlAppendUnicodeToString @ 0x18002C120 (RtlAppendUnicodeToString.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x18004D9D0 (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

char __fastcall RtlpGetMUIRedirectedFilePath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        char a5,
        void *a6,
        _BYTE *a7)
{
  void *v11; // rdi
  unsigned __int64 v12; // rax
  void *Heap; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  char v17; // [rsp+20h] [rbp-38h]
  int v18; // [rsp+28h] [rbp-30h] BYREF
  void *Src; // [rsp+30h] [rbp-28h]

  v17 = 0;
  v11 = 0LL;
  if ( a7 )
    *a7 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)(a2 + 2 * v12) );
      if ( v12 < 0x104 )
      {
        Heap = (void *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 520LL);
        v11 = Heap;
        if ( Heap )
        {
          v18 = 34078720;
          Src = Heap;
          if ( (int)RtlAppendUnicodeToString(&v18, a2) >= 0
            && (int)RtlAppendUnicodeToString(&v18, L"\\") >= 0
            && (int)RtlAppendUnicodeStringToString(&v18, a1) >= 0
            && (int)RtlAppendUnicodeToString(&v18, L"\\") >= 0
            && (int)RtlAppendUnicodeToString(&v18, a3) >= 0
            && (!a5 || (int)RtlAppendUnicodeToString(&v18, L".mui") >= 0) )
          {
            LOBYTE(v14) = 1;
            if ( (unsigned __int8)RtlDoesFileExists_UEx(Src, v14) )
            {
              if ( a6 )
              {
                v15 = (unsigned __int64)(unsigned __int16)v18 >> 1;
                if ( (unsigned int)*a4 < v15 + 1 )
                {
                  if ( a7 )
                    *a7 = 1;
                }
                else
                {
                  memmove(a6, Src, (unsigned __int16)v18);
                  *((_WORD *)a6 + v15) = 0;
                }
                goto LABEL_19;
              }
              if ( a4 )
              {
                *a4 = ((unsigned __int16)v18 >> 1) + 1;
LABEL_19:
                v17 = 1;
              }
            }
          }
        }
      }
    }
  }
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v11);
  return v17;
}
