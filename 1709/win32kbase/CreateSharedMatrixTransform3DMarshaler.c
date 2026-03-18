/*
 * XREFs of CreateSharedMatrixTransform3DMarshaler @ 0x1C0150480
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01502CC (-Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAP.c)
 */

__int64 __fastcall CreateSharedMatrixTransform3DMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedMatrixTransform3DMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedMatrixTransform3DMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  result = DirectComposition::CSharedMatrixTransform3DMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
