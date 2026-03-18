/*
 * XREFs of _anonymous_namespace_::Encoder::AppendIndexSet @ 0x180006F44
 * Callers:
 *     _anonymous_namespace_::Encoder::Serialize_1 @ 0x180006624 (_anonymous_namespace_--Encoder--Serialize_1.c)
 * Callees:
 *     _anonymous_namespace_::Encoder::AppendValue @ 0x180007020 (_anonymous_namespace_--Encoder--AppendValue.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall anonymous_namespace_::Encoder::AppendIndexSet(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v5; // rsi
  __int64 v6; // rbx
  unsigned int v7; // r8d
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  __int64 *v10; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_QWORD *)(a2 + 8) )
    return anonymous_namespace_::Encoder::AppendValue(a1, 0LL);
  result = anonymous_namespace_::Encoder::AppendValue(a1, *(unsigned int *)(a2 + 8));
  v5 = *(__int64 **)a2;
  v6 = **(_QWORD **)a2;
  while ( (__int64 *)v6 != v5 )
  {
    v7 = *(_DWORD *)(v6 + 28);
    v8 = **(__int64 ***)(a1 + 24);
    v9 = v8;
    v10 = (__int64 *)v8[1];
    while ( !*((_BYTE *)v10 + 25) )
    {
      if ( *((_DWORD *)v10 + 7) >= v7 )
      {
        v9 = v10;
        v10 = (__int64 *)*v10;
      }
      else
      {
        v10 = (__int64 *)v10[2];
      }
    }
    if ( v9 == v8 || v7 < *((_DWORD *)v9 + 7) )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    result = anonymous_namespace_::Encoder::AppendValue(a1, *((unsigned int *)v9 + 8));
    if ( !*(_BYTE *)(v6 + 25) )
    {
      result = *(_QWORD *)(v6 + 16);
      if ( *(_BYTE *)(result + 25) )
      {
        for ( result = *(_QWORD *)(v6 + 8);
              !*(_BYTE *)(result + 25) && v6 == *(_QWORD *)(result + 16);
              result = *(_QWORD *)(result + 8) )
        {
          v6 = result;
        }
        v6 = result;
      }
      else
      {
        do
        {
          v6 = result;
          result = *(_QWORD *)result;
        }
        while ( !*(_BYTE *)(result + 25) );
      }
    }
  }
  return result;
}
