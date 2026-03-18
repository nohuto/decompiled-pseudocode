/*
 * XREFs of ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01BF438
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C01BF588 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     DxgkCreateKeyedMutex @ 0x1C01C0CE0 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1C01C0FB0 (DxgkCreateKeyedMutex2.c)
 *     DxgkOpenKeyedMutex @ 0x1C01C1390 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C01C1610 (DxgkOpenKeyedMutex2.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C01C5CB0 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0028764 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C008A250 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v5; // rax
  HMGRTABLE *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  DXGKEYEDMUTEX *v9; // rbx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v5 + 24) = 3423LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v11, Current);
  v6 = (struct DXGPROCESS *)((char *)Current + 224);
  v7 = (v2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 < *((_DWORD *)Current + 60)
    && (v8 = *(_QWORD *)v6, ((v2 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v6 + 16 * v7 + 8) & 0x60))
    && (*(_DWORD *)(*(_QWORD *)v6 + 16 * v7 + 8) & 0x1F) != 0
    && (*(_BYTE *)(v8 + 16LL * (unsigned int)v7 + 8) & 0x1F) == 9
    && (v9 = *(DXGKEYEDMUTEX **)(v8 + 16LL * (unsigned int)v7)) != 0LL )
  {
    HMGRTABLE::FreeHandle(v6, v2);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    DXGKEYEDMUTEX::ReleaseReference(v9);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    return 0;
  }
}
