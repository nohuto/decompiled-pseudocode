/*
 * XREFs of ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01C052C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkOpenKeyedMutexFromNtHandle @ 0x1C01AB9B0 (DxgkOpenKeyedMutexFromNtHandle.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C01C0674 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     DxgkCreateKeyedMutex @ 0x1C01C1FE0 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1C01C22F0 (DxgkCreateKeyedMutex2.c)
 *     DxgkOpenKeyedMutex @ 0x1C01C2750 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C01C2A10 (DxgkOpenKeyedMutex2.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C01C8750 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00333A4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00F8670 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v5; // rax
  HMGRTABLE *v6; // r8
  __int64 v7; // rax
  DXGKEYEDMUTEX *v8; // rbx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v5 + 24) = 3585LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v10,
    (struct _KTHREAD **)Current);
  v6 = (struct DXGPROCESS *)((char *)Current + 232);
  v7 = (v2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 < *((_DWORD *)Current + 62)
    && ((v2 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v6 + 16 * v7 + 8) & 0x60)
    && (*(_DWORD *)(*(_QWORD *)v6 + 16 * v7 + 8) & 0x1F) == 9
    && (v8 = *(DXGKEYEDMUTEX **)(*(_QWORD *)v6 + 16LL * (unsigned int)v7)) != 0LL )
  {
    HMGRTABLE::FreeHandle(v6, v2);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    DXGKEYEDMUTEX::ReleaseReference(v8);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    return 0;
  }
}
