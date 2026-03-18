/*
 * XREFs of ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C010CD90
 * Callers:
 *     DxgkOpmTranslateHandle @ 0x1C010920C (DxgkOpmTranslateHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C010CD14 (-OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmTranslateHandle(DXGADAPTER **this, _QWORD *a2, void **a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v10 + 24) = 6058LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( this[26] != KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v9 + 24) = 6059LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( ADAPTER_DISPLAY::OpmValidateAdapterHandle(this, (DXGADAPTER **)a2) )
  {
    if ( *((_BYTE *)a2 + 24) )
    {
      return 3221225473LL;
    }
    else
    {
      *a3 = (void *)a2[2];
      return 0LL;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v11 + 24) = 6067LL;
    WdLogEvent5_WdAssertion(v11);
    return 3223192844LL;
  }
}
