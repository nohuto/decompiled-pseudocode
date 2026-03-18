/*
 * XREFs of ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C008B780
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusSendDestroyNtSharedObject@@YAXI@Z @ 0x1C002FEF8 (-VmBusSendDestroyNtSharedObject@@YAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkSharedSyncObjectObDeleteProcedure(struct DXGSYNCOBJECT **a1)
{
  int v2; // ecx
  DXGGLOBAL *Global; // rax

  v2 = *((_DWORD *)a1 + 2);
  if ( v2 )
    VmBusSendDestroyNtSharedObject(v2);
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::DestroySyncObject(Global, *a1, 0);
}
