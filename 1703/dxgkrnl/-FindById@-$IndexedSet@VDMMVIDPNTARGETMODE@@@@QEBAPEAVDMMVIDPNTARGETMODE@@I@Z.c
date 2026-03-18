/*
 * XREFs of ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C000CB50
 * Callers:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0007DE0 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00DE21C (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00DE500 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     BmlGetNextBestTargetMode @ 0x1C00F4168 (BmlGetNextBestTargetMode.c)
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00F5210 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IndexedSet<DMMVIDPNTARGETMODE>::FindById(__int64 a1, int a2)
{
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 == a1 + 24 )
    return 0LL;
  result = v3 - 8;
  while ( result && *(_DWORD *)(result + 24) != a2 )
  {
    v5 = *(_QWORD *)(result + 8);
    result = v5 - 8;
    if ( v5 == a1 + 24 )
      result = 0LL;
  }
  return result;
}
