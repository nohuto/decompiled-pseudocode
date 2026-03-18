/*
 * XREFs of DereferenceClass @ 0x1C0060640
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 * Callees:
 *     DestroyClass @ 0x1C00F2194 (DestroyClass.c)
 */

__int64 __fastcall DereferenceClass(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _QWORD *i; // rcx

  result = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 168) = 0LL;
  --*(_DWORD *)(result + 96);
  v4 = *(_QWORD *)(result + 64);
  if ( result != v4 )
  {
    --*(_DWORD *)(v4 + 96);
    if ( !*(_DWORD *)(result + 96) )
    {
      for ( i = *(_QWORD **)(*(_QWORD *)(result + 64) + 72LL); i != (_QWORD *)result; i = (_QWORD *)*i )
        ;
      return DestroyClass(a1);
    }
  }
  return result;
}
