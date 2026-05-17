/*
 * XREFs of RtlDosSearchPath_U @ 0x18008DA50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlGetFullPathName_UEx @ 0x18003BAA0 (RtlGetFullPathName_UEx.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlDetermineDosPathNameType_U @ 0x18004FB50 (RtlDetermineDosPathNameType_U.c)
 *     sub_180058280 @ 0x180058280 (sub_180058280.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_U(__int64 a1, _WORD *a2, const void *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  int v10; // eax
  _WORD *v11; // rcx
  __int16 v12; // ax
  unsigned int v13; // ebx
  _WORD *v14; // rdi
  unsigned int v16; // r15d
  int v17; // ebp
  unsigned int v18; // edi
  __int64 Heap; // rbp
  size_t v20; // r12
  __int16 v21; // ax
  unsigned int v22; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-44h] BYREF
  _WORD v24[12]; // [rsp+38h] [rbp-40h] BYREF

  v10 = RtlDetermineDosPathNameType_U(a2);
  v11 = a2;
  if ( v10 == 5 )
  {
    v12 = *a2;
    v13 = 0;
    while ( v12 )
    {
      if ( v12 == 46 )
        goto LABEL_20;
      v12 = *++v11;
    }
    if ( !a3 )
    {
LABEL_20:
      v16 = 0;
      goto LABEL_21;
    }
    if ( (int)RtlInitUnicodeStringEx((__int64)v24, (__int64)a3) < 0 )
      return 0LL;
    v16 = v24[0];
LABEL_21:
    if ( (int)RtlInitUnicodeStringEx((__int64)v24, a1) >= 0 )
    {
      v17 = v24[0];
      if ( (int)RtlInitUnicodeStringEx((__int64)v24, (__int64)a2) >= 0 )
      {
        v18 = v24[0];
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17 + v24[0] + v16 + 6LL);
        if ( Heap )
        {
          v20 = v18;
          while ( 1 )
          {
            v21 = *(_WORD *)a1;
            v14 = (_WORD *)Heap;
            if ( *(_WORD *)a1 )
            {
              do
              {
                a1 += 2LL;
                if ( v21 == 59 )
                  break;
                *v14++ = v21;
                v21 = *(_WORD *)a1;
              }
              while ( *(_WORD *)a1 );
              if ( v14 != (_WORD *)Heap && *(v14 - 1) != 92 )
                *v14++ = 92;
            }
            a1 &= -(__int64)(*(_WORD *)a1 != 0);
            memmove(v14, a2, v20);
            if ( v16 )
              memmove((char *)v14 + v20, a3, v16 + 2LL);
            else
              *(_WORD *)((char *)v14 + v20) = 0;
            if ( sub_180058280(Heap, 0) )
              break;
            if ( !a1 )
              goto LABEL_18;
          }
          if ( (int)RtlGetFullPathName_UEx(Heap, a4, a5, a6, &v23) >= 0 )
            v13 = v23;
LABEL_18:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
          return v13;
        }
      }
    }
  }
  else
  {
    v13 = 0;
    if ( sub_180058280((__int64)a2, 1) )
    {
      if ( (int)RtlGetFullPathName_UEx((__int64)a2, a4, a5, a6, &v22) >= 0 )
        return v22;
      return v13;
    }
  }
  return 0LL;
}
