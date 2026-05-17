/*
 * XREFs of RtlReplaceSystemDirectoryInPath @ 0x1800E4CA0
 * Callers:
 *     sub_180077824 @ 0x180077824 (sub_180077824.c)
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 *     RtlFindUnicodeSubstring @ 0x1800E4B20 (RtlFindUnicodeSubstring.c)
 *     sub_1800E5100 @ 0x1800E5100 (sub_1800E5100.c)
 */

__int64 __fastcall RtlReplaceSystemDirectoryInPath(unsigned __int16 *a1, __int64 a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // di
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned __int16 v10; // di
  char *UnicodeSubstring; // rax
  unsigned __int16 v12[8]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int16 v13; // [rsp+30h] [rbp-18h] BYREF
  void *Src; // [rsp+38h] [rbp-10h]

  v5 = a2;
  if ( (_WORD)a2 == a3 )
    return 0LL;
  LOBYTE(a2) = a4;
  result = sub_1800E5100(a3, a2, &v13);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    LOBYTE(v8) = a4;
    result = sub_1800E5100(v5, v8, v12);
    if ( (int)result >= 0 )
    {
      v10 = v13;
      if ( v12[0] == v13 )
      {
        UnicodeSubstring = RtlFindUnicodeSubstring(a1, v12, 1);
        if ( UnicodeSubstring )
          memmove(UnicodeSubstring, Src, v10);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
      return v9;
    }
  }
  return result;
}
