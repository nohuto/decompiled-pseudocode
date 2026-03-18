/*
 * XREFs of GetBoundMonitorForType @ 0x1C012EB84
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI@Z @ 0x1C006F03C (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C007772C (HMValidateSharedHandleNoRip.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 GetBoundMonitorForType()
{
  __int64 v0; // rbx
  __int64 v1; // rax

  v0 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018[0] + 8LL))(qword_1C0186018[0]);
  if ( *(_DWORD *)(v1 + 32) )
    return HMValidateSharedHandleNoRip(**(_QWORD **)(v1 + 24));
  return v0;
}
