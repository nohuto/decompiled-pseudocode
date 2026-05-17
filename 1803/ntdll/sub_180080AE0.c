/*
 * XREFs of sub_180080AE0 @ 0x180080AE0
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwSetInformationObject @ 0x18009B630 (ZwSetInformationObject.c)
 */

__int64 __fastcall sub_180080AE0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int16 v3; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    v2 = a1;
    ZwSetInformationThread(-2LL, 5LL, &v2);
    v4 = 0;
    ZwSetInformationThread(-2LL, 18LL, &v4);
    v3 = 0;
    ZwSetInformationObject(v2, 4LL, &v3, 2LL);
    ZwClose(v2);
    v2 = 0LL;
    return ZwSetInformationThread(-2LL, 5LL, &v2);
  }
  return result;
}
