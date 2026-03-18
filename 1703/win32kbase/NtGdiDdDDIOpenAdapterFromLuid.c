/*
 * XREFs of NtGdiDdDDIOpenAdapterFromLuid @ 0x1C0084380
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromLuid(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CTouchProcessor *v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int16 SuiteMask; // ax
  __int64 v11; // [rsp+20h] [rbp-18h]
  enum _NT_PRODUCT_TYPE ProductType; // [rsp+48h] [rbp+10h] BYREF

  v5 = (CTouchProcessor *)a1;
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    v5 = W32UserProbeAddress;
  v11 = *(_QWORD *)v5;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_1C018B7B8)(a1);
  if ( !qword_1C018C350 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_1C018B7B8)(a1);
  if ( (PVOID)PsGetCurrentProcess(65533LL, v5, a3, a4) == gpepCSRSS )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C018B7B8)(a1);
  if ( UserIsCurrentProcessDwm() )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C018B7B8)(a1);
  RtlGetNtProductType(&ProductType);
  SuiteMask = RtlGetSuiteMask(v8, v7, v9);
  if ( ProductType != NtProductServer || (SuiteMask & 0x110) != 0x10 || v11 == qword_1C018C344 )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C018B7B8)(a1);
  else
    return 3221225485LL;
}
