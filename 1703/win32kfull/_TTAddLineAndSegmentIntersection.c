/*
 * XREFs of _TTAddLineAndSegmentIntersection @ 0x1C023B8D0
 * Callers:
 *     _TTIntersectLine @ 0x1C023BAB4 (_TTIntersectLine.c)
 * Callees:
 *     _TTIntersectSegmentAndLine @ 0x1C023BBF4 (_TTIntersectSegmentAndLine.c)
 */

__int64 __fastcall TTAddLineAndSegmentIntersection(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        _QWORD *a7,
        int *a8)
{
  __int64 result; // rax
  int v9; // r9d
  __int64 v10; // r8
  __int64 v11; // [rsp+40h] [rbp-18h] BYREF

  result = TTIntersectSegmentAndLine(a3, a5, a1, a2, (__int64)&v11);
  if ( (_DWORD)result == 1 )
  {
    result = v11;
    v9 = HIDWORD(v11);
    v10 = *a8;
    if ( !(_DWORD)v10 || *a7 != v11 )
    {
      LODWORD(a7[v10]) = v11;
      result = (unsigned int)(v10 + 1);
      *a8 = result;
      HIDWORD(a7[v10]) = v9;
    }
  }
  return result;
}
