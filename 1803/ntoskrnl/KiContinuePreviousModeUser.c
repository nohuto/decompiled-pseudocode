/*
 * XREFs of KiContinuePreviousModeUser @ 0x1401321E0
 * Callers:
 *     KiContinueEx @ 0x1401323B0 (KiContinueEx.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140131758 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140131818 (RtlInitializeExtendedContext.c)
 *     KeVerifyContextRecord @ 0x1401322F4 (KeVerifyContextRecord.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x1401AB000 (KeContextToKframes.c)
 *     _alloca_probe @ 0x1401B3450 (_alloca_probe.c)
 *     RtlpSanitizeContextFlags @ 0x1405B8358 (RtlpSanitizeContextFlags.c)
 *     RtlpReadExtendedContext @ 0x1405B8618 (RtlpReadExtendedContext.c)
 */

NTSTATUS __fastcall KiContinuePreviousModeUser(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // r15d
  NTSTATUS result; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  void *v12; // rsp
  int v13; // edx
  int v14; // ecx
  __int64 v15; // [rsp+20h] [rbp-10h]
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength[2]; // [rsp+38h] [rbp+8h] BYREF

  v6 = a2;
  ContextFlags = *(_DWORD *)(a1 + 48);
  LOBYTE(a2) = 1;
  result = RtlpSanitizeContextFlags(&ContextFlags, a2);
  if ( result >= 0 )
  {
    result = RtlGetExtendedContextLength(ContextFlags, ContextLength);
    if ( result >= 0 )
    {
      v9 = ContextLength[0] + 15LL;
      if ( v9 <= ContextLength[0] )
        v9 = 0xFFFFFFFFFFFFFF0LL;
      v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = alloca(v10);
      v12 = alloca(v10);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, ContextFlags, (PCONTEXT_EX *)ContextLength);
      if ( result >= 0 )
      {
        LOBYTE(v13) = 1;
        result = RtlpReadExtendedContext(v14, v13, ContextLength[0], ContextFlags, a1, 0LL);
        if ( result >= 0 )
        {
          result = KeVerifyContextRecord(a4, &ContextFlags);
          if ( result >= 0 )
          {
            LOBYTE(v15) = 1;
            KeContextToKframes(a3, v6, (unsigned int)&ContextFlags, ContextFlags, v15);
            return 0;
          }
        }
      }
    }
  }
  return result;
}
