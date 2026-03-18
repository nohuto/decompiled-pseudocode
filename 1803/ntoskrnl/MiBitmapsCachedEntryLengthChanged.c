/*
 * XREFs of MiBitmapsCachedEntryLengthChanged @ 0x1400DA49C
 * Callers:
 *     MiInvalidatePageFileBitmapsCache @ 0x14009D014 (MiInvalidatePageFileBitmapsCache.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400D7170 (MiCoalescePageFileBitmapsCache.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 */

__int64 __fastcall MiBitmapsCachedEntryLengthChanged(__int64 a1, __int64 a2, int a3)
{
  char v3; // bl
  __int64 result; // rax
  unsigned __int64 v7; // r9
  _QWORD *v8; // rdx
  __int64 i; // r9
  __int64 j; // r9
  unsigned int v11; // ecx
  unsigned __int64 *v12; // rsi
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // ecx
  unsigned __int64 v17; // rax

  v3 = 0;
  result = a2;
  if ( a3 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    if ( v7 )
    {
      v8 = *(_QWORD **)v7;
      if ( *(_QWORD *)v7 )
      {
        do
        {
          v7 = (unsigned __int64)v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(a2 + 16); ; i = *(_QWORD *)(v7 + 16) )
      {
        v7 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 || *(_QWORD *)v7 == result )
          break;
        result = v7;
      }
    }
  }
  else
  {
    v7 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      for ( result = *(_QWORD *)(v7 + 8); result; result = *(_QWORD *)(result + 8) )
        v7 = result;
    }
    else
    {
      for ( j = *(_QWORD *)(a2 + 16); ; j = *(_QWORD *)(v7 + 16) )
      {
        v7 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 || *(_QWORD *)(v7 + 8) == result )
          break;
        result = v7;
      }
    }
    if ( !v7 )
      return result;
  }
  result = *(unsigned int *)(v7 + 52);
  v11 = *(_DWORD *)(a2 + 52);
  if ( a3 )
  {
    if ( (unsigned int)result > v11 )
      return result;
  }
  else if ( (unsigned int)result < v11 )
  {
    return result;
  }
  v12 = (unsigned __int64 *)(a1 + 144);
  RtlRbRemoveNode(v12, a2);
  v14 = v12[1];
  v15 = *v12;
  if ( (v14 & 1) != 0 )
  {
    if ( v15 )
      v15 ^= (unsigned __int64)v12;
    else
      v15 = 0LL;
  }
  v16 = v14 & 1;
  if ( v15 )
  {
    v13 = *(unsigned int *)(a2 + 52);
    while ( 1 )
    {
      if ( *(_QWORD *)(a2 + 48) < *(_QWORD *)(v15 + 48) )
      {
        v17 = *(_QWORD *)v15;
        if ( v16 )
        {
          if ( !v17 )
            break;
          v17 ^= v15;
        }
        if ( !v17 )
          break;
      }
      else
      {
        v17 = *(_QWORD *)(v15 + 8);
        if ( v16 )
        {
          if ( !v17 )
            goto LABEL_36;
          v17 ^= v15;
        }
        if ( !v17 )
        {
LABEL_36:
          v3 = 1;
          break;
        }
      }
      v15 = v17;
    }
  }
  LOBYTE(v13) = v3;
  return RtlRbInsertNodeEx(v12, v15, v13, a2);
}
