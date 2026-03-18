/*
 * XREFs of CreateSharedReadTransformMarshaler @ 0x1C007F470
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C007F4B0 (-Create@CSharedReadTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV1.c)
 */

__int64 __fastcall CreateSharedReadTransformMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedReadTransformMarshaler **a3)
{
  unsigned int v4; // edx
  struct DirectComposition::CSharedReadTransformMarshaler *v6; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) == 86 )
    goto LABEL_2;
  if ( *((_DWORD *)a1 + 3) != 89 )
  {
    if ( *((_DWORD *)a1 + 3) != 90 )
      return (unsigned int)-1073741811;
    v4 = a2 != 128 ? 0xC000000D : 0;
    goto LABEL_10;
  }
  if ( a2 == 86 )
  {
    v4 = -1073741811;
LABEL_10:
    if ( (v4 & 0x80000000) != 0 )
      return v4;
  }
LABEL_2:
  v4 = DirectComposition::CSharedReadTransformMarshaler::Create(a1, &v6);
  *a3 = v6;
  return v4;
}
