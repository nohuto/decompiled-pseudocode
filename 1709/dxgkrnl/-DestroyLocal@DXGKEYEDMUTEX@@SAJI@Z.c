/*
 * XREFs of ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C01BF588
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F0AC0 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkDestroyKeyedMutex @ 0x1C01C12C0 (DxgkDestroyKeyedMutex.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C01C5CB0 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01BF438 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01C0354 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::DestroyLocal(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rcx
  struct DXGPROCESS *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // esi
  __int64 v10; // rcx
  int v11; // r11d
  DXGKEYEDMUTEX *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v5 = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v18, Current);
  v9 = *((_DWORD *)v5 + 60);
  v10 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 >= v9
    || (v7 = *((_QWORD *)v5 + 28),
        v8 = *(unsigned int *)(v7 + 16LL * (unsigned int)v10 + 8),
        v11 = (*(_DWORD *)(v7 + 16LL * (unsigned int)v10 + 8) >> 5) & 3,
        (unsigned int)v2 >> 30 != v11)
    || (v8 & 0x2000) != 0
    || (v8 &= 0x1Fu, !(_DWORD)v8)
    || (*(_BYTE *)(v7 + 16LL * (unsigned int)v10 + 8) & 0x1F) != 9
    || (v12 = *(DXGKEYEDMUTEX **)(v7 + 16LL * (unsigned int)v10)) == 0LL )
  {
    v17 = WdLogNewEntry5_WdWarning(v10, v7, v8);
    *(_QWORD *)(v17 + 24) = v2;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    return 3221225485LL;
  }
  if ( (unsigned int)v10 < v9
    && (unsigned int)v2 >> 30 == v11
    && (*(_DWORD *)(v7 + 16LL * (unsigned int)v10 + 8) & 0x2000) == 0 )
  {
    *(_DWORD *)(v7 + 16LL * (((unsigned int)v2 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v12, v2, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle((unsigned int)v2, v13) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v15 + 24) = 3281LL;
    WdLogEvent5_WdAssertion(v15);
  }
  return 0LL;
}
