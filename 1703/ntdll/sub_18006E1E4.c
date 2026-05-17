/*
 * XREFs of sub_18006E1E4 @ 0x18006E1E4
 * Callers:
 *     sub_18006C31C @ 0x18006C31C (sub_18006C31C.c)
 *     sub_18006DDE4 @ 0x18006DDE4 (sub_18006DDE4.c)
 *     sub_18008F0E0 @ 0x18008F0E0 (sub_18008F0E0.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F9FF0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     sub_1800FA340 @ 0x1800FA340 (sub_1800FA340.c)
 *     sub_1800FA3D4 @ 0x1800FA3D4 (sub_1800FA3D4.c)
 *     sub_1800FA598 @ 0x1800FA598 (sub_1800FA598.c)
 *     sub_1800FC568 @ 0x1800FC568 (sub_1800FC568.c)
 *     sub_1800FC800 @ 0x1800FC800 (sub_1800FC800.c)
 *     sub_1800FCB2C @ 0x1800FCB2C (sub_1800FCB2C.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18006E1E4(__int64 a1, __int64 a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  unsigned int *v5; // rbx
  unsigned int v10; // ebp
  unsigned int v11; // ebp
  _DWORD *Heap; // rsi
  int v13; // eax
  int v14; // edi
  unsigned int v15; // eax
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      v10 = 0;
LABEL_4:
      v17 = 0;
      v11 = v10 + 12;
      if ( v11 )
        Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v11);
      else
        Heap = 0LL;
      if ( !Heap )
        return (unsigned int)-1073741670;
      v13 = ZwQueryValueKey(a1, a2, 2LL, Heap, v11, &v17);
      v14 = v13;
      if ( v13 != -1073741772 )
      {
        if ( v13 < 0 )
        {
LABEL_15:
          if ( v14 != -2147483643 )
          {
LABEL_20:
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
            return (unsigned int)v14;
          }
LABEL_16:
          if ( v5 )
            *v5 = Heap[2];
          if ( a3 )
            *a3 = Heap[1];
          goto LABEL_20;
        }
        if ( a4 && v5 )
        {
          v15 = Heap[2];
          if ( v15 > *v5 )
          {
            v14 = -2147483643;
            goto LABEL_16;
          }
          if ( v15 <= v11 )
            memmove(a4, Heap + 3, v15);
        }
      }
      if ( v14 >= 0 )
        goto LABEL_16;
      goto LABEL_15;
    }
LABEL_3:
    v10 = *a5;
    goto LABEL_4;
  }
  if ( a5 )
    goto LABEL_3;
  return 3221225485LL;
}
