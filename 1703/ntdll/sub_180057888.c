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

char __fastcall sub_180057888(__int16 *a1, _WORD *a2, _WORD *a3, _DWORD *a4, char a5, void *a6, _BYTE *a7)
{
  unsigned __int64 v11; // rdi
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
      while ( a2[v12] );
      if ( v12 < 0x104 )
      {
        Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 520LL);
        v11 = (unsigned __int64)Heap;
        if ( Heap )
        {
          v18 = 34078720;
          Src = Heap;
          if ( (int)RtlAppendUnicodeToString((unsigned __int16 *)&v18, a2) >= 0
            && (int)RtlAppendUnicodeToString((unsigned __int16 *)&v18, L"\\") >= 0
            && (int)RtlAppendUnicodeStringToString((unsigned __int16 *)&v18, a1) >= 0
            && (int)RtlAppendUnicodeToString((unsigned __int16 *)&v18, L"\\") >= 0
            && (int)RtlAppendUnicodeToString((unsigned __int16 *)&v18, a3) >= 0
            && (!a5 || (int)RtlAppendUnicodeToString((unsigned __int16 *)&v18, L".mui") >= 0) )
          {
            LOBYTE(v14) = 1;
            if ( (unsigned __int8)sub_180058280(Src, v14) )
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
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
  return v17;
}
