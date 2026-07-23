/*
 * XREFs of sub_1800103FC @ 0x1800103FC
 * Callers:
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 * Callees:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     sub_18000FA60 @ 0x18000FA60 (sub_18000FA60.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     RtlCharToInteger @ 0x180076E50 (RtlCharToInteger.c)
 *     strrchr @ 0x180090220 (strrchr.c)
 */

__int64 __fastcall sub_1800103FC(char *Str, __int64 a2, __int64 a3, char **a4)
{
  int v4; // r14d
  const char *v6; // r15
  PCHAR Buffer; // rsi
  char *v9; // rax
  bool v10; // zf
  int v11; // ebx
  __int64 v12; // rdi
  int v13; // eax
  PCHAR v14; // rdi
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-28h] BYREF
  ANSI_STRING SourceString; // [rsp+40h] [rbp-20h] BYREF
  const char *Value; // [rsp+A0h] [rbp+40h] BYREF

  v4 = 0;
  v17 = 0LL;
  BaseAddress = 0LL;
  v6 = Value;
  Buffer = SourceString.Buffer;
  while ( 1 )
  {
    v9 = strrchr(Str, 46);
    if ( v9 && (unsigned __int64)(v9 - Str) <= 0xFFFF )
    {
      v10 = v9[1] == 35;
      Buffer = Str;
      SourceString.Buffer = Str;
      SourceString.Length = (_WORD)v9 - (_WORD)Str;
      SourceString.MaximumLength = (_WORD)v9 - (_WORD)Str;
      if ( !v10 )
      {
        v6 = v9 + 1;
LABEL_6:
        v11 = 0;
        goto LABEL_7;
      }
      if ( RtlCharToInteger(v9 + 2, 0, (PULONG)&Value) >= 0 )
      {
        v6 = 0LL;
        goto LABEL_6;
      }
    }
    v11 = -1073741701;
LABEL_7:
    if ( v11 < 0 )
      goto LABEL_20;
    if ( SourceString.Length == 5
      && (*(_DWORD *)Buffer | 0x20202020) == 0x6C64746E
      && ((unsigned __int8)Buffer[4] | 0x20) == 0x6C )
    {
      v12 = qword_18015C348;
      v17 = qword_18015C348;
    }
    else
    {
      v16 = sub_180039360(&SourceString, (__int64)&v17, (__int64)&BaseAddress);
      v11 = v16;
      if ( v16 < 0 || v16 == 259 )
        goto LABEL_20;
      v12 = v17;
      Buffer = SourceString.Buffer;
    }
    v13 = sub_18000FA60(*(_QWORD *)(v12 + 48), v6, (int)Value, a4);
    v11 = v13;
    if ( v13 != -1073741267 )
      break;
    if ( ++v4 == 32 )
    {
      v11 = -1073741701;
      goto LABEL_20;
    }
    Str = *a4;
  }
  if ( v13 >= 0 )
  {
    v14 = *(PCHAR *)(v12 + 48);
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    {
      if ( (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        if ( (unsigned __int64)v14 < *((_QWORD *)&xmmword_18016F4E0 + 1)
          || (unsigned __int64)v14 >= *((_QWORD *)&xmmword_18016F4E0 + 1)
                                    + (unsigned __int64)(unsigned int)qword_18016F4F0 )
        {
          sub_18000EF10(v14, (__int64)&SourceString);
        }
        else
        {
          SourceString = (ANSI_STRING)xmmword_18016F4E0;
        }
        if ( SourceString.Buffer != v14 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_20:
  if ( BaseAddress )
    RtlFreeHeap(HeapHandle, 0, BaseAddress);
  return (unsigned int)v11;
}
