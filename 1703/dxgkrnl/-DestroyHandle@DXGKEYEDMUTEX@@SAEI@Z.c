/*
 * XREFs of ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01A5944
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C01A5A94 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     DxgkCreateKeyedMutex @ 0x1C01A6F90 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1C01A7260 (DxgkCreateKeyedMutex2.c)
 *     DxgkOpenKeyedMutex @ 0x1C01A7640 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C01A78B0 (DxgkOpenKeyedMutex2.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C01AC258 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00385A8 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00D7240 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  HMGRTABLE *v8; // r9
  unsigned int v9; // edx
  __int64 v10; // rbx
  DXGKEYEDMUTEX *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3, v2, v5, v6);
    *(_QWORD *)(v7 + 24) = 3318LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v16, Current, v5, v6);
  v8 = (struct DXGPROCESS *)((char *)Current + 192);
  v9 = (v1 >> 6) & 0xFFFFFF;
  if ( v9 < *((_DWORD *)Current + 52)
    && (v10 = *(_QWORD *)v8, ((v1 >> 26) & 0x30) == (*(_BYTE *)(*(_QWORD *)v8 + 16LL * v9 + 8) & 0x30))
    && (*(_DWORD *)(*(_QWORD *)v8 + 16LL * v9 + 8) & 0xF) != 0
    && (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0xF) == 9
    && (v11 = *(DXGKEYEDMUTEX **)(v10 + 16LL * v9)) != 0LL )
  {
    HMGRTABLE::FreeHandle(v8, v1, 2LL * v9, (__int64)v8);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
    DXGKEYEDMUTEX::ReleaseReference(v11, v12, v13, v14);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
    return 0;
  }
}
