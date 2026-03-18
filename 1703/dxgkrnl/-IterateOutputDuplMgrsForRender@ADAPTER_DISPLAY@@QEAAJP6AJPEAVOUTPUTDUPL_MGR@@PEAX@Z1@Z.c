/*
 * XREFs of ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00E6A04
 * Callers:
 *     OutputDuplProcessDestroyDevice @ 0x1C009DAA0 (OutputDuplProcessDestroyDevice.c)
 *     OutputDuplProcessTerminate @ 0x1C00A3D28 (OutputDuplProcessTerminate.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C0EFC (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0172B78 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C00D84B4 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
        ADAPTER_DISPLAY *this,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  __int64 v10; // r9
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *((_QWORD *)this + 13);
  if ( !v6 || (result = a2(v6, a3), (int)result >= 0) )
  {
    v11[0] = *(_QWORD *)(*((_QWORD *)this + 2) + 268LL);
    v11[1] = (__int64)a2;
    v11[2] = a3;
    Global = DXGGLOBAL::GetGlobal(v11[0], (__int64)a2, a3, a4);
    return DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
             Global,
             lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_,
             (__int64)v11,
             v10);
  }
  return result;
}
