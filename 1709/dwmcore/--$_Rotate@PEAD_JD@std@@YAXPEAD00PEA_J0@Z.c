/*
 * XREFs of ??$_Rotate@PEAD_JD@std@@YAXPEAD00PEA_J0@Z @ 0x18012468C
 * Callers:
 *     ??$_Insert@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$vector@DV?$allocator@D@std@@@std@@QEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@D@std@@@std@@@1@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x180006108 (--$_Insert@V-$_String_iterator@V-$_String_val@U-$_Simple_types@D@std@@@std@@@std@@@-$vector@DV-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Rotate<char *,__int64,char>(_BYTE *a1, __int64 a2, char *a3)
{
  __int64 result; // rax
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rt2
  char *v12; // r11
  __int64 v13; // rdx
  char *v14; // r14
  __int64 v15; // r8
  char v16; // cl
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = a3 - a1;
  v5 = a2 - (_QWORD)a1;
  v8 = a3 - a1;
  v9 = v5;
  if ( v5 )
  {
    do
    {
      v10 = v8;
      v8 = v9;
      v11 = v10 % v9;
      result = v10 / v9;
      v9 = v11;
    }
    while ( v11 );
    if ( v8 < v4 && v8 > 0 )
    {
      v12 = &a1[v8];
      do
      {
        v13 = (__int64)&v12[v5];
        v14 = v12;
        if ( &v12[v5] == a3 )
          v13 = (__int64)a1;
        v15 = -v13;
        do
        {
          v16 = *v14;
          *v14 = *(_BYTE *)v13;
          result = (__int64)&a3[v15];
          *(_BYTE *)v13 = v16;
          v14 = (char *)v13;
          if ( v5 >= (__int64)&a3[v15] )
          {
            result = (__int64)&a1[v5 - (_QWORD)a3];
            v13 += result;
            v15 += (__int64)&a3[-v5 - (_QWORD)a1];
          }
          else
          {
            v13 += v5;
            v15 -= v5;
          }
        }
        while ( (char *)v13 != v12 );
        --v12;
        --v8;
      }
      while ( v8 );
    }
  }
  return result;
}
