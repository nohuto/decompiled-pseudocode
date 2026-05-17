/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x180076CB0
 * Callers:
 *     LdrpMinimalMapModule @ 0x180022288 (LdrpMinimalMapModule.c)
 *     RtlQueryApplicationKeyOption @ 0x180076B30 (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x180076C10 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D321C (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D6450 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180070ED0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlQueryImageFileKeyOption(
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
  result = NtQueryValueKey(a1, v22, 2LL, v25, 1024, &v21);
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
      Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v14);
      v13 = Heap;
      if ( !Heap )
        return 3221225495LL;
      v11 = (_DWORD *)Heap;
      v17 = NtQueryValueKey(a1, v22, 2LL, Heap, v14, &v21);
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
