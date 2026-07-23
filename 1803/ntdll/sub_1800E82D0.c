/*
 * XREFs of sub_1800E82D0 @ 0x1800E82D0
 * Callers:
 *     sub_1800E82D0 @ 0x1800E82D0 (sub_1800E82D0.c)
 *     sub_1800E94D4 @ 0x1800E94D4 (sub_1800E94D4.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180030EF0 @ 0x180030EF0 (sub_180030EF0.c)
 *     sub_18004F9D8 @ 0x18004F9D8 (sub_18004F9D8.c)
 *     RtlpGetNameFromLangInfoNode @ 0x18007F9D0 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800E82D0 @ 0x1800E82D0 (sub_1800E82D0.c)
 */

char __fastcall sub_1800E82D0(
        const void **a1,
        unsigned int *a2,
        unsigned int *a3,
        _WORD *a4,
        __int64 a5,
        _QWORD *a6,
        unsigned __int16 a7)
{
  PVOID Heap; // rax
  USHORT Length; // bx
  unsigned int v12; // r8d
  unsigned int v13; // eax
  SIZE_T v14; // rax
  PVOID v15; // rbx
  char *v16; // rsi
  __int64 v17; // r8
  int v18; // esi
  unsigned __int16 v19; // bx
  int v20; // edx
  _QWORD *v21; // r9
  char v22; // [rsp+40h] [rbp-61h]
  int v24; // [rsp+50h] [rbp-51h]
  _UNICODE_STRING v26; // [rsp+68h] [rbp-39h] BYREF
  _DWORD *v27; // [rsp+78h] [rbp-29h]
  __int64 v28; // [rsp+80h] [rbp-21h]
  PVOID BaseAddress; // [rsp+88h] [rbp-19h]
  _QWORD v30[3]; // [rsp+90h] [rbp-11h] BYREF
  int v31; // [rsp+A8h] [rbp+7h]

  v27 = a2;
  v28 = a5;
  v22 = 1;
  memset(v30, 0, sizeof(v30));
  v31 = 0;
  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    if ( a7 > 2u )
      return 1;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
    BaseAddress = Heap;
    if ( !Heap )
      return v22;
    v26.Buffer = (PWCH)Heap;
    *(_DWORD *)&v26.Length = 11141120;
    if ( (int)RtlpGetNameFromLangInfoNode(a5, (__int64)a4, &v26) >= 0 )
    {
      Length = v26.Length;
      v12 = *a2;
      v24 = v26.Length;
      v13 = *a2 + v26.Length + 2;
      if ( v13 >= v26.Length && v13 >= v12 )
      {
        if ( v13 <= *a3 )
          goto LABEL_17;
        v14 = sub_18004F9D8(*a3, 2uLL);
        if ( v14 )
        {
          v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v14);
          if ( v15 )
          {
            memmove(v15, *a1, *a2);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)*a1);
            *a1 = v15;
            Length = v26.Length;
            *a3 *= 2;
            v12 = *a2;
LABEL_17:
            v16 = (char *)*a1 + v12;
            if ( sub_180030EF0((wchar_t *)*a1, v26.Buffer) )
            {
              v18 = (int)v27;
              v17 = (__int64)a6;
            }
            else
            {
              memmove(v16, v26.Buffer, Length);
              v17 = (__int64)a6;
              *(_WORD *)&v16[Length] = 0;
              v18 = (int)v27;
              *v27 += v24 + 2;
              ++*a6;
            }
            if ( (*a4 & 0x402) != 0 )
            {
              v19 = 0;
              while ( 1 )
              {
                v20 = ((unsigned __int16)a4[4] >> (2 * v19)) & 3;
                if ( v20 == 2 )
                  break;
                if ( v20 == 1 )
                {
                  WORD2(v30[0]) = a4[v19 + 6];
                  goto LABEL_28;
                }
                if ( v20 == 3 )
                {
                  HIWORD(v30[0]) = a4[v19 + 6];
LABEL_28:
                  v21 = v30;
LABEL_30:
                  v22 = sub_1800E82D0((_DWORD)a1, v18, (_DWORD)a3, (_DWORD)v21, v28, v17, a7 + 1);
                  if ( !v22 )
                    goto LABEL_32;
                }
                v17 = (__int64)a6;
                if ( ++v19 >= 4u )
                  goto LABEL_32;
              }
              v21 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 24) + 16LL) + 28LL * (__int16)a4[v19 + 6]);
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
    return v22;
  }
  return 0;
}
