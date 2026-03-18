/*
 * XREFs of FreeInputContext @ 0x1C00FEE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeInputContext(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rax

  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 760LL);
    if ( v3 )
    {
      do
      {
        v4 = *(_QWORD *)(v3 + 56);
        if ( v4 == a1 )
          break;
        v3 = *(_QWORD *)(v3 + 56);
      }
      while ( v4 );
      if ( v3 )
        *(_QWORD *)(v3 + 56) = *(_QWORD *)(a1 + 56);
    }
    return HMFreeObject(a1);
  }
  return result;
}
