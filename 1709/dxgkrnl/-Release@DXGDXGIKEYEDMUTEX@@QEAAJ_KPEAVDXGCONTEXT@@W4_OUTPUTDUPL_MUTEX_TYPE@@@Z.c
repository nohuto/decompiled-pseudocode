/*
 * XREFs of ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01C87B8
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C01CCDC4 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C01CD7B8 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0086FA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C01BFDB4 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::Release(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rax
  unsigned __int64 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rax
  unsigned int v17[4]; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+18h] BYREF

  v4 = a4;
  if ( a3 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 16LL)) )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v8 + 24) = 724LL;
      WdLogEvent5_WdAssertion(v8);
    }
    if ( a3 != *(_QWORD *)(a1 + 120) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1);
      v9[3] = a3;
      v9[4] = a1;
      v9[5] = *(_QWORD *)(a1 + 120);
LABEL_6:
      WdLogEvent5_WdAssertion(v9);
      return 3221225485LL;
    }
  }
  if ( !*(_DWORD *)(a1 + 128) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1);
    v9[3] = a1;
    goto LABEL_6;
  }
  if ( a3 )
  {
    v11 = ++*(_QWORD *)(a1 + 112);
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 24LL);
    v17[0] = *(_DWORD *)(a1 + 96);
    v13 = *(_QWORD *)(a3 + 16);
    v18 = v12;
    v15 = SignalSynchronizationObjectInternal(
            1LL,
            v17,
            0,
            1u,
            &v18,
            0LL,
            v11,
            0LL,
            *(struct DXGPROCESS **)(v13 + 40),
            0,
            1);
    if ( v15 < 0 )
      goto LABEL_11;
  }
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  v15 = DXGKEYEDMUTEX::ReleaseSync(
          *(DXGKEYEDMUTEX **)(a1 + 24 * v4 + 24),
          *(_DWORD *)(a1 + 24 * v4 + 16),
          a2,
          *(struct _LIST_ENTRY **)(a1 + 112),
          0LL,
          0);
  if ( v15 >= 0 )
    return 0LL;
LABEL_11:
  v16 = WdLogNewEntry5_WdError(v14);
  *(_QWORD *)(v16 + 24) = a1;
  WdLogEvent5_WdError(v16);
  return (unsigned int)v15;
}
