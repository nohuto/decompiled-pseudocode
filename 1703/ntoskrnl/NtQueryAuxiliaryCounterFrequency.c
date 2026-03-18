/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x140720B7C
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryAuxiliaryCounterFrequency(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  if ( !KeGetCurrentThread()->PreviousMode )
    return off_14033B640[0]();
  ProbeForWrite(a1, 8uLL, 4u);
  result = ((__int64 (__fastcall *)(__int64 *))off_14033B640[0])(&v3);
  if ( (int)result >= 0 )
    *a1 = v3;
  return result;
}
