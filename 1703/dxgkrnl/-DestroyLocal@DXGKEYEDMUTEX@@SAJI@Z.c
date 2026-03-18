/*
 * XREFs of ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C01A5A94
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C0100890 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkDestroyKeyedMutex @ 0x1C01A7570 (DxgkDestroyKeyedMutex.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C01AC258 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01A5944 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01A6614 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::DestroyLocal(__int64 a1)
{
  __int64 v1; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct DXGPROCESS *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  DXGKEYEDMUTEX *v13; // rsi
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v21; // rax
  _BYTE v22[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v7 = Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v22, Current, v5, v6);
  v12 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 >= *((_DWORD *)v7 + 52)
    || (v10 = *((_QWORD *)v7 + 24),
        v11 = (unsigned int)v1 >> 30,
        v9 = *(unsigned int *)(v10 + 16LL * (unsigned int)v12 + 8),
        (_DWORD)v11 != ((*(_DWORD *)(v10 + 16LL * (unsigned int)v12 + 8) >> 4) & 3))
    || (v9 & 0x1000) != 0
    || (v9 & 0xF) == 0
    || (v9 = 2LL * (unsigned int)v12, (*(_BYTE *)(v10 + 16LL * (unsigned int)v12 + 8) & 0xF) != 9)
    || (v13 = *(DXGKEYEDMUTEX **)(v10 + 16LL * (unsigned int)v12)) == 0LL )
  {
    v21 = WdLogNewEntry5_WdWarning(v12, v9, v10, v11);
    *(_QWORD *)(v21 + 24) = v1;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
    return 3221225485LL;
  }
  if ( (unsigned int)v12 < *((_DWORD *)v7 + 52) )
  {
    v14 = *(_DWORD *)(v10 + 16LL * (unsigned int)v12 + 8);
    if ( (_DWORD)v11 == ((v14 >> 4) & 3) && (v14 & 0x1000) == 0 && (v14 & 0xF) != 0 )
      *(_DWORD *)(v10 + 16 * (((unsigned __int64)(unsigned int)v1 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v13, v1, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle((unsigned int)v1) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v19 + 24) = 3176LL;
    WdLogEvent5_WdAssertion(v19);
  }
  return 0LL;
}
