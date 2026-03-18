/*
 * XREFs of CreateTargetVisualMarshaler @ 0x1C000C0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CTargetVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C000C0F0 (-Create@CTargetVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 */

__int64 __fastcall CreateTargetVisualMarshaler(
        __int64 a1,
        __int64 a2,
        struct DirectComposition::CTargetVisualMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CTargetVisualMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *(_DWORD *)(a1 + 12) != 31 )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 28), 1, 0) )
    return 3221225506LL;
  result = DirectComposition::CTargetVisualMarshaler::Create(
             (const struct DirectComposition::CSharedSystemResource *)a1,
             &v5);
  *a3 = v5;
  return result;
}
