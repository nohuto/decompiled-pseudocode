/*
 * XREFs of ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C01E62E4
 * Callers:
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C01E6A58 (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 *     ?ObjectInit@DXGVAILOBJECT@@SAJPEAUDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C01E6C10 (-ObjectInit@DXGVAILOBJECT@@SAJPEAUDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z.c)
 * Callees:
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1EPEAPEAV1@@Z @ 0x1C01E4D60 (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1EPEAPEAV1@@Z.c)
 */

__int64 __fastcall CreateVmBusChannel(void *a1, struct _GUID *a2, const struct _GUID *a3)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax

  v3 = DXGVMBUSCHANNEL::Create(a1, a2, a3, a1 != 0LL, (struct DXGVMBUSCHANNEL **)a2);
  v7 = v3;
  if ( v3 < 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdWarning(v8);
  }
  return (unsigned int)v7;
}
