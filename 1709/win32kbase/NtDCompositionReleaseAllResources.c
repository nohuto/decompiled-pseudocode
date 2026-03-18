/*
 * XREFs of NtDCompositionReleaseAllResources @ 0x1C008D8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0023924 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C0032D18 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionReleaseAllResources(unsigned int a1, bool *a2)
{
  bool *v2; // rsi
  int v3; // edi
  struct DirectComposition::CApplicationChannel *v4; // rbx
  bool v6; // [rsp+50h] [rbp+18h] BYREF
  struct DirectComposition::CApplicationChannel *v7; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  v3 = 0;
  v7 = 0LL;
  v6 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (bool *)MmUserProbeAddress;
    *a2 = *a2;
  }
  else
  {
    v3 = -1073741811;
  }
  if ( v3 >= 0 )
  {
    v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
    if ( v3 >= 0 )
    {
      v4 = v7;
      DirectComposition::CApplicationChannel::ReleaseAllResources(v7, &v6);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
      *v2 = v6;
    }
  }
  return (unsigned int)v3;
}
