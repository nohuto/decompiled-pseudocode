/*
 * XREFs of sub_1800D0488 @ 0x1800D0488
 * Callers:
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     RtlUnicodeStringToInteger @ 0x180074BF0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1800D0488(__int64 a1)
{
  char *v1; // rdi
  int ValueKey; // eax
  int v3; // ebx
  unsigned __int64 v4; // rsi
  int v5; // ecx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v8; // eax
  unsigned int v9; // eax
  __int64 result; // rax
  unsigned int v11; // [rsp+30h] [rbp-448h]
  int v12[3]; // [rsp+34h] [rbp-444h] BYREF
  unsigned __int16 v13[4]; // [rsp+40h] [rbp-438h] BYREF
  _DWORD *v14; // [rsp+48h] [rbp-430h]
  char v15; // [rsp+50h] [rbp-428h] BYREF

  if ( a1 && (int)RtlInitUnicodeStringEx((__int64)v13, (__int64)L"CWDIllegalInDLLSearch") >= 0 )
  {
    v1 = &v15;
    ValueKey = ZwQueryValueKey();
    v3 = ValueKey;
    if ( ValueKey >= 0 )
    {
      v4 = 0LL;
LABEL_5:
      v5 = *((_DWORD *)v1 + 1);
      if ( ((v5 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v5 )
        {
          case 4:
            if ( *((_DWORD *)v1 + 2) == 4 )
              v12[0] = *((_DWORD *)v1 + 3);
            else
              v3 = -1073741820;
            break;
          case 11:
            v3 = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)v12 & 3) != 0 )
            {
              v3 = -2147483646;
            }
            else
            {
              v14 = v1 + 12;
              v13[0] = *((_WORD *)v1 + 4);
              v13[1] = *((_WORD *)v1 + 4);
              v3 = RtlUnicodeStringToInteger(v13, 0, v12);
            }
            break;
          default:
            v3 = -1073741788;
            break;
        }
      }
      else if ( v5 == 4 )
      {
        v9 = *((_DWORD *)v1 + 2);
        if ( v9 > 4 )
          v3 = -2147483643;
        else
          memmove(v12, v1 + 12, v9);
      }
      else
      {
        v3 = -1073741788;
      }
LABEL_28:
      if ( v4 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
LABEL_30:
      if ( v3 >= 0 )
      {
        result = (unsigned int)(v12[0] + 1);
        if ( (unsigned int)result <= 3 )
          goto LABEL_33;
      }
      goto LABEL_32;
    }
    if ( ValueKey != -2147483643 )
      goto LABEL_30;
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 1572864, v11);
      v4 = Heap;
      if ( !Heap )
        break;
      v1 = (char *)Heap;
      v8 = ZwQueryValueKey();
      v3 = v8;
      if ( v8 >= 0 )
        goto LABEL_5;
      if ( v8 != -2147483643 )
        goto LABEL_28;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v1);
    }
  }
LABEL_32:
  result = (MEMORY[0x7FFE02D5] >> 4) & 3;
  v12[0] = result;
  if ( (_DWORD)result == 3 )
  {
LABEL_39:
    dword_18015D400 = -1;
    return result;
  }
LABEL_33:
  if ( v12[0] == -1 )
    goto LABEL_39;
  if ( v12[0] == 1 )
  {
    dword_18015D400 = 0x2000;
  }
  else
  {
    result = 16LL;
    if ( v12[0] != 2 )
      result = 0LL;
    dword_18015D400 = result;
  }
  return result;
}
