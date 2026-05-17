/*
 * XREFs of LdrQueryImageFileKeyOption @ 0x18007C560
 * Callers:
 *     sub_180038D24 @ 0x180038D24 (sub_180038D24.c)
 *     sub_18007C1E0 @ 0x18007C1E0 (sub_18007C1E0.c)
 *     LdrQueryImageFileExecutionOptionsEx @ 0x18007C2C0 (LdrQueryImageFileExecutionOptionsEx.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_1800D79F0 @ 0x1800D79F0 (sub_1800D79F0.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall LdrQueryImageFileKeyOption(
        __int64 a1,
        __int64 a2,
        int a3,
        int *a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 result; // rax
  unsigned int v10; // r14d
  _DWORD *v11; // rsi
  unsigned int v12; // ebx
  unsigned __int64 v13; // r13
  unsigned int v14; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v17; // eax
  unsigned int v18; // edi
  int v19; // ecx
  size_t v20; // r8
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v22[4]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v23; // [rsp+40h] [rbp-C0h]
  unsigned int *v24; // [rsp+48h] [rbp-B8h]
  _BYTE v25[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v24 = a6;
  result = RtlInitUnicodeStringEx((__int64)v22, a2);
  if ( (int)result < 0 )
    return result;
  v10 = a5;
  if ( a5 >= 0x3F4 )
  {
    v14 = a5 + 12;
    goto LABEL_9;
  }
  v11 = v25;
  result = ZwQueryValueKey(a1, v22, 2LL, v25, 1024, &v21);
  v12 = result;
  if ( (int)result >= 0 )
  {
    v13 = 0LL;
LABEL_14:
    if ( !a3 )
    {
      v18 = v11[2];
      if ( v18 > a5 )
      {
        v21 = v11[2];
        goto LABEL_17;
      }
      a3 = v11[1];
      v10 = v11[2];
    }
    v19 = v11[1];
    if ( ((v19 - 3) & 0xFFFFFFFB) != 0 )
    {
      v18 = 4;
      if ( v19 == 4 )
      {
        if ( a3 == 4 )
        {
          if ( v10 == 4 && v11[2] == 4 )
          {
            v21 = 4;
            if ( a4 )
            {
              *a4 = v11[3];
              goto LABEL_18;
            }
LABEL_17:
            v12 = -2147483643;
LABEL_18:
            if ( v24 && ((int)(v12 + 0x80000000) < 0 || v12 == -2147483643) )
              *v24 = v18;
            goto LABEL_22;
          }
          goto LABEL_33;
        }
LABEL_56:
        v12 = -1073741788;
        goto LABEL_22;
      }
      if ( v19 == 11 )
      {
        if ( a3 != 11 )
          goto LABEL_56;
        v18 = 8;
        if ( v10 == 8 && v11[2] == 8 )
        {
          v21 = 8;
          if ( a4 )
          {
            *(_QWORD *)a4 = *(_QWORD *)(v11 + 3);
            goto LABEL_18;
          }
          goto LABEL_17;
        }
LABEL_33:
        v12 = -1073741820;
LABEL_22:
        if ( v13 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
        return v12;
      }
      if ( v19 != 1 )
      {
        v12 = -1073741788;
        goto LABEL_42;
      }
      if ( a3 == 4 )
      {
        if ( v10 != 4 )
          goto LABEL_33;
        if ( ((unsigned __int8)a4 & 3) != 0 )
        {
          v12 = -2147483646;
          goto LABEL_22;
        }
        v21 = 4;
        if ( !a4 )
          goto LABEL_17;
        v23 = v11 + 3;
        v22[0] = *((_WORD *)v11 + 4);
        v22[1] = *((_WORD *)v11 + 4);
        v12 = RtlUnicodeStringToInteger(v22, 0, a4);
LABEL_42:
        v18 = v21;
        goto LABEL_18;
      }
      v18 = v11[2];
      v21 = v18;
      if ( v18 > v10 )
        goto LABEL_17;
      v20 = v18;
    }
    else
    {
      if ( a3 != v19 )
        goto LABEL_56;
      v18 = v11[2];
      v21 = v18;
      if ( !a4 || v11[2] > v10 )
        goto LABEL_17;
      v20 = (unsigned int)v11[2];
    }
    memmove(a4, v11 + 3, v20);
    goto LABEL_18;
  }
  if ( (_DWORD)result == -2147483643 )
  {
    while ( 1 )
    {
      v14 = v21;
LABEL_9:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return 3221225495LL;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1572864, v14);
      v13 = Heap;
      if ( !Heap )
        return 3221225495LL;
      v11 = (_DWORD *)Heap;
      v17 = ZwQueryValueKey(a1, v22, 2LL, Heap, v14, &v21);
      v12 = v17;
      if ( v17 >= 0 )
        goto LABEL_14;
      if ( v17 != -2147483643 )
        goto LABEL_22;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v11);
    }
  }
  return result;
}
