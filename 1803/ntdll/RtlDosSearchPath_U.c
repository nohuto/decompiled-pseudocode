/*
 * XREFs of RtlDosSearchPath_U @ 0x180087400
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlGetFullPathName_UEx @ 0x18003C1A0 (RtlGetFullPathName_UEx.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_18004F794 @ 0x18004F794 (sub_18004F794.c)
 *     RtlDetermineDosPathNameType_U @ 0x18007A0F0 (RtlDetermineDosPathNameType_U.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_U(__int64 a1, _WORD *a2, const void *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  int v10; // eax
  _WORD *v11; // rcx
  unsigned int v12; // ebx
  __int16 v14; // ax
  unsigned int v15; // r15d
  int v16; // ebp
  unsigned int v17; // esi
  __int64 Heap; // rbp
  size_t v19; // r13
  __int16 v20; // ax
  _WORD *v21; // rsi
  unsigned int v22; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-44h] BYREF
  _WORD v24[12]; // [rsp+38h] [rbp-40h] BYREF

  v10 = RtlDetermineDosPathNameType_U(a2);
  v11 = a2;
  if ( v10 == 5 )
  {
    v14 = *a2;
    v12 = 0;
    while ( v14 )
    {
      if ( v14 == 46 )
        goto LABEL_10;
      v14 = *++v11;
    }
    if ( !a3 )
    {
LABEL_10:
      v15 = 0;
      goto LABEL_11;
    }
    if ( (int)RtlInitUnicodeStringEx((__int64)v24, (__int64)a3) < 0 )
      return 0LL;
    v15 = v24[0];
LABEL_11:
    if ( (int)RtlInitUnicodeStringEx((__int64)v24, a1) >= 0 )
    {
      v16 = v24[0];
      if ( (int)RtlInitUnicodeStringEx((__int64)v24, (__int64)a2) >= 0 )
      {
        v17 = v24[0];
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16 + v24[0] + v15 + 6LL);
        if ( Heap )
        {
          v19 = v17;
          while ( 1 )
          {
            v20 = *(_WORD *)a1;
            v21 = (_WORD *)Heap;
            if ( *(_WORD *)a1 )
            {
              do
              {
                a1 += 2LL;
                if ( v20 == 59 )
                  break;
                *v21++ = v20;
                v20 = *(_WORD *)a1;
              }
              while ( *(_WORD *)a1 );
              if ( v21 != (_WORD *)Heap && *(v21 - 1) != 92 )
                *v21++ = 92;
            }
            a1 &= -(__int64)(*(_WORD *)a1 != 0);
            memmove(v21, a2, v19);
            if ( v15 )
              memmove((char *)v21 + v19, a3, v15 + 2LL);
            else
              *(_WORD *)((char *)v21 + v19) = 0;
            if ( sub_18004F794(Heap, 0) )
              break;
            if ( !a1 )
              goto LABEL_26;
          }
          if ( (int)RtlGetFullPathName_UEx(Heap, a4, a5, a6, &v23) >= 0 )
            v12 = v23;
LABEL_26:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
          return v12;
        }
      }
    }
  }
  else
  {
    v12 = 0;
    if ( sub_18004F794((__int64)a2, 1) )
    {
      if ( (int)RtlGetFullPathName_UEx((__int64)a2, a4, a5, a6, &v22) >= 0 )
        return v22;
      return v12;
    }
  }
  return 0LL;
}
