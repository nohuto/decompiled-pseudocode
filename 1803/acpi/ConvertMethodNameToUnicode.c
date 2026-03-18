/*
 * XREFs of ConvertMethodNameToUnicode @ 0x1C00035A8
 * Callers:
 *     AsyncEvalObject @ 0x1C0002BD8 (AsyncEvalObject.c)
 * Callees:
 *     RtlStringCchLengthA @ 0x1C0003684 (RtlStringCchLengthA.c)
 */

__int64 __fastcall ConvertMethodNameToUnicode(const char *a1, __int64 a2)
{
  unsigned int v2; // ebx
  const char *v4; // rdi
  POOL_TYPE v5; // r11d
  unsigned __int16 v6; // si
  _WORD *PoolWithTag; // rax
  _WORD *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int16 v11; // cx
  size_t v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v4 = a1;
  if ( a1 && *a1 )
  {
    if ( RtlStringCchLengthA(a1, 0x200uLL, &v13) < 0 )
      v6 = v5;
    else
      v6 = v13;
    PoolWithTag = ExAllocatePoolWithTag(v5, 2LL * ((unsigned int)v6 + 1), 0x53706341u);
    *(_QWORD *)(a2 + 8) = PoolWithTag;
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_WORD *)a2 = 2 * v6;
      *(_WORD *)(a2 + 2) = 2 * v6 + 2;
      if ( v6 )
      {
        v9 = 0LL;
        v10 = v6;
        do
        {
          v11 = *v4++;
          *(_WORD *)(v9 + *(_QWORD *)(a2 + 8)) = v11;
          v9 += 2LL;
          --v10;
        }
        while ( v10 );
        v8 = *(_WORD **)(a2 + 8);
      }
      v8[v6] = 0;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
