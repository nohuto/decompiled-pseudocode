/*
 * XREFs of NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0004A90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0023924 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionTelemetryTouchInteractionEnd(unsigned int a1, __int64 *a2)
{
  signed int v2; // ebx
  struct DirectComposition::CApplicationChannel *v3; // rdi
  struct DirectComposition::CApplicationChannel *v4; // rax
  struct DirectComposition::CApplicationChannel **v5; // rdx
  struct DirectComposition::CApplicationChannel *v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h]

  v8 = 0LL;
  v7 = 0LL;
  v2 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v8 = *a2;
  }
  if ( a2 )
  {
    v2 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
    v3 = v7;
    if ( v2 >= 0 )
    {
      v4 = (struct DirectComposition::CApplicationChannel *)Win32AllocPoolWithQuota(24LL, 1869890372LL);
      v2 = v4 == 0LL ? 0xC0000017 : 0;
      if ( v4 )
      {
        *((_QWORD *)v4 + 2) = v8;
        v5 = (struct DirectComposition::CApplicationChannel **)*((_QWORD *)v3 + 71);
        if ( *v5 != (struct DirectComposition::CApplicationChannel *)((char *)v3 + 560) )
          __fastfail(3u);
        *(_QWORD *)v4 = (char *)v3 + 560;
        *((_QWORD *)v4 + 1) = v5;
        *v5 = v4;
        *((_QWORD *)v3 + 71) = v4;
      }
      _guard_dispatch_icall_fptr();
    }
  }
  return (unsigned int)v2;
}
