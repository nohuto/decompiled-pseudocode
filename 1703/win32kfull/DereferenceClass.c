/*
 * XREFs of DereferenceClass @ 0x1C005D600
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DereferenceClass(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _QWORD **v5; // rdx
  _QWORD *i; // rcx

  result = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 168) = 0LL;
  --*(_DWORD *)(result + 88);
  v4 = *(_QWORD *)(result + 64);
  if ( result != v4 )
  {
    --*(_DWORD *)(v4 + 88);
    if ( !*(_DWORD *)(result + 88) )
    {
      v5 = (_QWORD **)(*(_QWORD *)(result + 64) + 72LL);
      for ( i = *v5; i != (_QWORD *)result; i = (_QWORD *)*i )
        v5 = (_QWORD **)i;
      return DestroyClass(a1, v5);
    }
  }
  return result;
}
