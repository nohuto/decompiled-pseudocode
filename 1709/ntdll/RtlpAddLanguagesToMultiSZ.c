/*
 * XREFs of RtlpAddLanguagesToMultiSZ @ 0x1800EBE60
 * Callers:
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EBE60 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800ED438 (RtlpMUIGetAllInstalledLang.c)
 * Callees:
 *     LdrpCalcAllocSize @ 0x18001C10C (LdrpCalcAllocSize.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlpLangNameInMultiSzString @ 0x180050DA0 (RtlpLangNameInMultiSzString.c)
 *     RtlpGetNameFromLangInfoNode @ 0x180084520 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EBE60 (RtlpAddLanguagesToMultiSZ.c)
 */

char __fastcall RtlpAddLanguagesToMultiSZ(
        const void **a1,
        unsigned int *a2,
        unsigned int *a3,
        _WORD *a4,
        __int64 a5,
        _QWORD *a6,
        unsigned __int16 a7)
{
  PVOID Heap; // rax
  unsigned __int16 Length; // bx
  unsigned int v12; // eax
  SIZE_T v13; // rax
  PVOID v14; // rbx
  char *v15; // rsi
  __int64 v16; // r8
  int v17; // esi
  unsigned __int16 v18; // bx
  int v19; // edx
  _QWORD *v20; // r9
  char v21; // [rsp+40h] [rbp-61h]
  int v23; // [rsp+50h] [rbp-51h]
  _UNICODE_STRING v25; // [rsp+68h] [rbp-39h] BYREF
  unsigned int *v26; // [rsp+78h] [rbp-29h]
  __int64 v27; // [rsp+80h] [rbp-21h]
  PVOID BaseAddress; // [rsp+88h] [rbp-19h]
  _QWORD v29[3]; // [rsp+90h] [rbp-11h] BYREF
  int v30; // [rsp+A8h] [rbp+7h]

  v26 = a2;
  v27 = a5;
  v21 = 1;
  memset(v29, 0, sizeof(v29));
  v30 = 0;
  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    if ( a7 > 2u )
      return 1;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
    BaseAddress = Heap;
    if ( !Heap )
      return v21;
    v25.Buffer = (wchar_t *)Heap;
    *(_DWORD *)&v25.Length = 11141120;
    if ( (int)RtlpGetNameFromLangInfoNode(a5, (__int64)a4, &v25) >= 0 )
    {
      Length = v25.Length;
      v23 = v25.Length;
      v12 = *a2 + v25.Length + 2;
      if ( v12 >= v25.Length && v12 >= *a2 )
      {
        if ( v12 <= *a3 )
          goto LABEL_17;
        v13 = LdrpCalcAllocSize(*a3, 2uLL);
        if ( v13 )
        {
          v14 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v13);
          if ( v14 )
          {
            memmove(v14, *a1, *a2);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)*a1);
            *a1 = v14;
            Length = v25.Length;
            *a3 *= 2;
LABEL_17:
            v15 = (char *)*a1 + *a2;
            if ( RtlpLangNameInMultiSzString((wchar_t *)*a1, v25.Buffer) )
            {
              v17 = (int)v26;
              v16 = (__int64)a6;
            }
            else
            {
              memmove(v15, v25.Buffer, Length);
              v16 = (__int64)a6;
              *(_WORD *)&v15[Length] = 0;
              v17 = (int)v26;
              *v26 += v23 + 2;
              ++*a6;
            }
            if ( (*a4 & 0x402) != 0 )
            {
              v18 = 0;
              while ( 1 )
              {
                v19 = ((unsigned __int16)a4[4] >> (2 * v18)) & 3;
                if ( v19 == 2 )
                  break;
                if ( v19 == 1 )
                {
                  WORD2(v29[0]) = a4[v18 + 6];
                  goto LABEL_28;
                }
                if ( v19 == 3 )
                {
                  HIWORD(v29[0]) = a4[v18 + 6];
LABEL_28:
                  v20 = v29;
LABEL_30:
                  v21 = RtlpAddLanguagesToMultiSZ((_DWORD)a1, v17, (_DWORD)a3, (_DWORD)v20, v27, v16, a7 + 1);
                  if ( !v21 )
                    goto LABEL_32;
                }
                v16 = (__int64)a6;
                if ( ++v18 >= 4u )
                  goto LABEL_32;
              }
              v20 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 24) + 16LL) + 28LL * (__int16)a4[v18 + 6]);
              goto LABEL_30;
            }
            goto LABEL_32;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, 0LL);
        }
      }
    }
LABEL_32:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return v21;
  }
  return 0;
}
