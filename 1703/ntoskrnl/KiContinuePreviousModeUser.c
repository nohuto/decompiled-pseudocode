/*
 * XREFs of KiContinuePreviousModeUser @ 0x140008A84
 * Callers:
 *     KiContinueEx @ 0x140008870 (KiContinueEx.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140008E98 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140008FAC (RtlGetExtendedContextLength.c)
 *     KeVerifyContextRecord @ 0x1400FCA70 (KeVerifyContextRecord.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x1401819C0 (KeContextToKframes.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     RtlpReadExtendedContext @ 0x140425F70 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x140426438 (RtlpSanitizeContextFlags.c)
 */

__int64 __fastcall KiContinuePreviousModeUser(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // r15d
  __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  void *v12; // rsp
  int v13; // edx
  int v14; // ecx
  __int64 v15; // [rsp+20h] [rbp-10h]
  unsigned int v16; // [rsp+30h] [rbp+0h] BYREF
  __int64 v17; // [rsp+38h] [rbp+8h] BYREF

  v6 = a2;
  v16 = *(_DWORD *)(a1 + 48);
  LOBYTE(a2) = 1;
  result = RtlpSanitizeContextFlags(&v16, a2);
  if ( (int)result >= 0 )
  {
    result = RtlGetExtendedContextLength(v16, &v17);
    if ( (int)result >= 0 )
    {
      v9 = (unsigned int)v17 + 15LL;
      if ( v9 <= (unsigned int)v17 )
        v9 = 0xFFFFFFFFFFFFFF0LL;
      v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = alloca(v10);
      v12 = alloca(v10);
      result = RtlInitializeExtendedContext(&v16, v16, &v17);
      if ( (int)result >= 0 )
      {
        LOBYTE(v13) = 1;
        result = RtlpReadExtendedContext(v14, v13, v17, v16, a1, 0LL);
        if ( (int)result >= 0 )
        {
          result = KeVerifyContextRecord(a4, &v16);
          if ( (int)result >= 0 )
          {
            LOBYTE(v15) = 1;
            KeContextToKframes(a3, v6, (unsigned int)&v16, v16, v15);
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
