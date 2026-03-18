/*
 * XREFs of CreateSharedReadTransformMarshaler @ 0x1C000C460
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C000C4B4 (-Create@CSharedReadTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV1.c)
 */

__int64 __fastcall CreateSharedReadTransformMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedReadTransformMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedReadTransformMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  switch ( *((_DWORD *)a1 + 3) )
  {
    case 0x1B:
      if ( a2 == 23 )
      {
LABEL_4:
        result = DirectComposition::CSharedReadTransformMarshaler::Create(a1, &v5);
        *a3 = v5;
        return result;
      }
      result = 3221225485LL;
      break;
    case 0x44:
      result = 3221225485LL;
      if ( a2 != 69 )
        result = 0LL;
      break;
    case 0x45:
      goto LABEL_4;
    default:
      return 3221225485LL;
  }
  if ( (int)result >= 0 )
    goto LABEL_4;
  return result;
}
