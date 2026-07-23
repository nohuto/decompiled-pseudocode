/*
 * XREFs of LdrpReadMemory @ 0x1800175CC
 * Callers:
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x180016C80 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x180016D40 (LdrQueryNextListEntry32.c)
 *     LdrpGetModuleName @ 0x1800170B8 (LdrpGetModuleName.c)
 *     LdrQueryNextListEntry @ 0x1800175C0 (LdrQueryNextListEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x180017650 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x180017870 (LdrQueryInLoadOrderModuleList32.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800D11FC (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     LdrpProtectedCopyMemory @ 0x1800177A0 (LdrpProtectedCopyMemory.c)
 *     RtlpQueryReadVirtualMemory @ 0x180017800 (RtlpQueryReadVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrpReadMemory(__int64 *a1, int a2, int a3, __int64 a4)
{
  __int64 (__fastcall *v4)(int, int, int, int, PSIZE_T); // rax
  __int64 v6; // r10
  __int64 result; // rax
  ULONG_PTR v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))a1[1];
  v6 = *a1;
  if ( (char *)v4 == (char *)LdrpProtectedCopyMemory )
  {
    result = LdrpProtectedCopyMemory(v6);
  }
  else if ( v4 == RtlpQueryReadVirtualMemory )
  {
    result = RtlpQueryReadVirtualMemory(v6, a2, a3, a4, &v8);
  }
  else
  {
    result = ((__int64 (__fastcall *)(__int64))v4)(v6);
  }
  if ( (int)result >= 0 )
    return a4 != v8 ? 0x8000000D : 0;
  return result;
}
