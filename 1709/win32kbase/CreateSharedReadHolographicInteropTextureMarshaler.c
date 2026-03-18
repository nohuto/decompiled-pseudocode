/*
 * XREFs of CreateSharedReadHolographicInteropTextureMarshaler @ 0x1C01511B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadHolographicInteropTextureMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0151024 (-Create@CSharedReadHolographicInteropTextureMarshaler@DirectComposition@@SAJPEBVCSharedSystemRes.c)
 */

__int64 __fastcall CreateSharedReadHolographicInteropTextureMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        __int64 a2,
        struct DirectComposition::CSharedReadHolographicInteropTextureMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedReadHolographicInteropTextureMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != 66 )
    return 3221225485LL;
  result = DirectComposition::CSharedReadHolographicInteropTextureMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
