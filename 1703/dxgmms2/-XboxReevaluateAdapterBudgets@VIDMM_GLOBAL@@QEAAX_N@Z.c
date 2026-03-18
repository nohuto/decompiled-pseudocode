/*
 * XREFs of ?XboxReevaluateAdapterBudgets@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00476EC
 * Callers:
 *     ?AddExpandedResourceAppReference@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0047008 (-AddExpandedResourceAppReference@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReleaseExpandedResourceAppReference@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0047694 (-ReleaseExpandedResourceAppReference@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?QuerySystemMemorySize@VIDMM_GLOBAL@@KA_KPEAX@Z @ 0x1C0047934 (-QuerySystemMemorySize@VIDMM_GLOBAL@@KA_KPEAX@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C005E164 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::XboxReevaluateAdapterBudgets(VIDMM_GLOBAL *this, char a2)
{
  unsigned __int64 SystemMemorySize; // rbx
  bool v5; // r8
  __int64 v6; // rcx
  _QWORD v7[12]; // [rsp+20h] [rbp-68h] BYREF

  SystemMemorySize = qword_1C003C138;
  if ( !qword_1C003C138 )
  {
    SystemMemorySize = VIDMM_GLOBAL::QuerySystemMemorySize((void *)0xFFFFFFFFFFFFFFFFLL);
    qword_1C003C138 = SystemMemorySize;
  }
  memset(v7, 0, 0x58uLL);
  v6 = qword_1C003C130;
  LODWORD(v7[0]) = 130;
  LOBYTE(v7[5]) = a2;
  if ( a2 )
    v6 = SystemMemorySize;
  v7[6] = v6;
  VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v7, v5);
}
