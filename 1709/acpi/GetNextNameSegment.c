/*
 * XREFs of GetNextNameSegment @ 0x1C00123A4
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x1C001211C (CreateNativeNameSpaceObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNextNameSegment(__int64 a1, int *a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d
  int *v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rbx
  char v10; // cl
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  int v14; // [rsp+8h] [rbp+8h] BYREF

  v3 = 0;
  if ( a1 )
  {
    v7 = &v14;
    v14 = 1600085855;
    v8 = 0;
    v9 = a1 - (_QWORD)&v14;
    do
    {
      v10 = *((_BYTE *)v7 + v9);
      if ( !v10 || v10 == 46 )
        break;
      if ( (unsigned __int8)(v10 - 48) <= 0x2Fu )
      {
        v11 = 0x87FFFFFE03FFLL;
        if ( _bittest64(&v11, (char)(v10 - 48)) )
          continue;
      }
      if ( (unsigned __int8)(v10 - 97) > 0x19u )
        return (unsigned int)-1073741811;
      *(_BYTE *)v7 = v10;
      ++v8;
      v7 = (int *)((char *)v7 + 1);
    }
    while ( v8 < 4 );
    if ( !v8 )
      return (unsigned int)-1073741197;
    *a2 = v14;
    v12 = a1 + v8;
    if ( *(_BYTE *)v12 == 46 )
      *a3 = v12 + 1;
    else
      *a3 = v12 & -(__int64)(*(_BYTE *)v12 != 0);
  }
  else
  {
    return (unsigned int)-1073741197;
  }
  return v3;
}
