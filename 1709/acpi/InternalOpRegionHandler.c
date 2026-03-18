/*
 * XREFs of InternalOpRegionHandler @ 0x1C0017700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InternalOpRegionHandler(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(_QWORD, __int64, _QWORD); // rax
  unsigned int v7; // ebx
  int v8; // edx

  if ( a6 && (v6 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a6 + 16)) != 0LL )
  {
    v7 = v6(a1, a2, a3);
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      3,
      12,
      (__int64)&WPP_db840bf6d90e33f77fa26caded1be1bf_Traceguids,
      v7);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v7;
}
