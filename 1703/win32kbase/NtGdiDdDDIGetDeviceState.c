/*
 * XREFs of NtGdiDdDDIGetDeviceState @ 0x1C0076950
 * Callers:
 *     <none>
 * Callees:
 *     UserSurfaceAccessCheck @ 0x1C0076A00 (UserSurfaceAccessCheck.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIGetDeviceState(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CTouchProcessor *v5; // rdx
  int v7; // ebx
  __int64 v8; // rcx

  v5 = (CTouchProcessor *)a1;
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    v5 = W32UserProbeAddress;
  if ( HIDWORD(*(_QWORD *)v5) != 3 )
    return ((__int64 (__fastcall *)(unsigned __int64, CTouchProcessor *, __int64, __int64, _QWORD, _QWORD, _QWORD))qword_1C018B910)(
             a1,
             v5,
             a3,
             a4,
             *(_QWORD *)v5,
             *((_QWORD *)v5 + 1),
             *((_QWORD *)v5 + 2));
  v7 = 0;
  v8 = 0LL;
  if ( grpdeskRitInput )
    v8 = ***((_QWORD ***)grpdeskRitInput + 1);
  if ( !(unsigned int)UserSurfaceAccessCheck(v8) )
    v7 = 1;
  *(_DWORD *)(a1 + 8) = v7;
  return 0LL;
}
