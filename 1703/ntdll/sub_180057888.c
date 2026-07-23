/*
 * XREFs of sub_180057888 @ 0x180057888
 * Callers:
 *     RtlGetFileMUIPath @ 0x180056E50 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     sub_180058280 @ 0x180058280 (sub_180058280.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

char __fastcall sub_180057888(
        PCUNICODE_STRING Source,
        PCWSTR a2,
        PCWSTR a3,
        _DWORD *a4,
        char a5,
        void *a6,
        _BYTE *BaseAddress)
{
  WCHAR *v11; // rdi
  unsigned __int64 v12; // rax
  WCHAR *Heap; // rax
  unsigned __int64 v14; // r15
  char v16; // [rsp+20h] [rbp-38h]
  _UNICODE_STRING Destination; // [rsp+28h] [rbp-30h] BYREF

  v16 = 0;
  v11 = 0LL;
  if ( BaseAddress )
    *BaseAddress = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a2[v12] );
      if ( v12 < 0x104 )
      {
        Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
        v11 = Heap;
        if ( Heap )
        {
          *(_DWORD *)&Destination.Length = 34078720;
          Destination.Buffer = Heap;
          if ( RtlAppendUnicodeToString(&Destination, a2) >= 0
            && RtlAppendUnicodeToString(&Destination, L"\\") >= 0
            && RtlAppendUnicodeStringToString(&Destination, Source) >= 0
            && RtlAppendUnicodeToString(&Destination, L"\\") >= 0
            && RtlAppendUnicodeToString(&Destination, a3) >= 0
            && (!a5 || RtlAppendUnicodeToString(&Destination, L".mui") >= 0) )
          {
            if ( (unsigned __int8)sub_180058280(Destination.Buffer) )
            {
              if ( a6 )
              {
                v14 = (unsigned __int64)Destination.Length >> 1;
                if ( (unsigned int)*a4 < v14 + 1 )
                {
                  if ( BaseAddress )
                    *BaseAddress = 1;
                }
                else
                {
                  memmove(a6, Destination.Buffer, Destination.Length);
                  *((_WORD *)a6 + v14) = 0;
                }
                goto LABEL_19;
              }
              if ( a4 )
              {
                *a4 = (Destination.Length >> 1) + 1;
LABEL_19:
                v16 = 1;
              }
            }
          }
        }
      }
    }
  }
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  return v16;
}
