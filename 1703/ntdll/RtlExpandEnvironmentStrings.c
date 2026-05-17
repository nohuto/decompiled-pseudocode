/*
 * XREFs of RtlExpandEnvironmentStrings @ 0x18003AFF0
 * Callers:
 *     RtlExpandEnvironmentStrings_U @ 0x18005DF10 (RtlExpandEnvironmentStrings_U.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18003B180 (RtlQueryEnvironmentVariable.c)
 */

__int64 __fastcall RtlExpandEnvironmentStrings(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r15
  int v10; // edi
  __int64 v11; // rsi
  _WORD *v12; // r13
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  int v16; // ecx
  __int64 v17; // [rsp+70h] [rbp+8h]
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  v17 = a1;
  v6 = a5;
  v7 = a3;
  v10 = 0;
  v11 = 0LL;
  if ( !a3 )
    goto LABEL_9;
  do
  {
    if ( *a2 != 37 )
      goto LABEL_3;
    v14 = v7 - 1;
    v15 = 0LL;
    v12 = a2 + 1;
    if ( v7 == 1 )
      goto LABEL_3;
    do
    {
      if ( *v12 == 37 )
        break;
      ++v12;
      ++v15;
    }
    while ( v15 < v14 );
    if ( v15
      && v15 < v14
      && ((v16 = RtlQueryEnvironmentVariable(a1, a2 + 1, v15, a4, v6, &v18), (int)(v16 + 0x80000000) < 0)
       || v16 == -1073741789) )
    {
      v11 += v18;
      if ( v16 == -1073741789 )
        --v11;
      v7 += -2LL - v15;
      if ( v16 < 0 )
      {
        v10 = v16;
      }
      else
      {
        v6 -= v18;
        a4 += v18;
      }
    }
    else
    {
LABEL_3:
      if ( v10 >= 0 )
      {
        if ( v6 <= 1 )
        {
          v10 = -1073741789;
        }
        else
        {
          --v6;
          *a4++ = *a2;
        }
      }
      ++v11;
      v12 = a2;
      --v7;
    }
    a1 = v17;
    a2 = v12 + 1;
  }
  while ( v7 );
  if ( v10 >= 0 )
  {
LABEL_9:
    if ( v6 )
      *a4 = 0;
    else
      v10 = -1073741789;
  }
  if ( a6 )
    *a6 = v11 + 1;
  return (unsigned int)v10;
}
