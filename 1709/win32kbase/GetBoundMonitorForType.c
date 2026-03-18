/*
 * XREFs of GetBoundMonitorForType @ 0x1C012E090
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C0070E54 (HMValidateSharedHandleNoRip.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetBoundMonitorForType(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = 0LL;
  if ( a1 == 4 )
  {
    v2 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
    if ( *(_DWORD *)(v2 + 32) )
      return HMValidateSharedHandleNoRip(**(_QWORD **)(v2 + 24));
  }
  return v1;
}
