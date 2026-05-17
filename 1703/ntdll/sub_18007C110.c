/*
 * XREFs of sub_18007C110 @ 0x18007C110
 * Callers:
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

void __fastcall sub_18007C110(__int64 a1)
{
  _DWORD *v2; // rsi
  int v3; // eax
  int v4; // ebx
  unsigned __int64 v5; // r14
  unsigned int v6; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v15[4]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v16; // [rsp+40h] [rbp-C0h]
  _BYTE v17[1024]; // [rsp+50h] [rbp-B0h] BYREF

  if ( a1 && (int)RtlInitUnicodeStringEx((__int64)v15, (__int64)L"CWDIllegalInDLLSearch") >= 0 )
  {
    v2 = v17;
    v3 = ZwQueryValueKey(a1, v15, 2LL, v17, 1024, &v13);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = 0LL;
LABEL_15:
      v10 = v2[1];
      if ( ((v10 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v10 )
        {
          case 4:
            if ( v2[2] == 4 )
            {
              v13 = 4;
              v14 = v2[3];
            }
            else
            {
              v4 = -1073741820;
            }
            break;
          case 11:
            v4 = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)&v14 & 3) != 0 )
            {
              v4 = -2147483646;
            }
            else
            {
              v13 = 4;
              v16 = v2 + 3;
              v15[0] = *((_WORD *)v2 + 4);
              v15[1] = *((_WORD *)v2 + 4);
              v4 = RtlUnicodeStringToInteger(v15, 0, &v14);
            }
            break;
          default:
            v4 = -1073741788;
            break;
        }
      }
      else if ( v10 == 4 )
      {
        v13 = v2[2];
        v11 = v2[2];
        if ( v11 > 4 )
          v4 = -2147483643;
        else
          memmove(&v14, v2 + 3, v11);
      }
      else
      {
        v4 = -1073741788;
      }
LABEL_32:
      if ( v5 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
LABEL_5:
      if ( v4 >= 0 && (unsigned int)(v14 + 1) <= 3 )
        goto LABEL_34;
      goto LABEL_7;
    }
    if ( v3 != -2147483643 )
      goto LABEL_5;
    while ( 1 )
    {
      v6 = v13;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1572864, v13);
      v5 = Heap;
      if ( !Heap )
        break;
      v2 = (_DWORD *)Heap;
      v9 = ZwQueryValueKey(a1, v15, 2LL, Heap, v6, &v13);
      v4 = v9;
      if ( v9 >= 0 )
        goto LABEL_15;
      if ( v9 != -2147483643 )
        goto LABEL_32;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v2);
    }
  }
LABEL_7:
  v14 = (MEMORY[0x7FFE02D5] >> 4) & 3;
  if ( v14 == 3 )
  {
LABEL_40:
    dword_18015C448 = -1;
    return;
  }
LABEL_34:
  if ( v14 == -1 )
    goto LABEL_40;
  if ( v14 == 1 )
  {
    dword_18015C448 = 0x2000;
  }
  else
  {
    v12 = 16;
    if ( v14 != 2 )
      v12 = 0;
    dword_18015C448 = v12;
  }
}
