/*
 * XREFs of CreateSharedReadDesktopTargetMarshaler @ 0x1C0150C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0150B88 (-Create@CSharedReadDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAP.c)
 */

__int64 __fastcall CreateSharedReadDesktopTargetMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedReadDesktopTargetMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedReadDesktopTargetMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  result = DirectComposition::CSharedReadDesktopTargetMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
