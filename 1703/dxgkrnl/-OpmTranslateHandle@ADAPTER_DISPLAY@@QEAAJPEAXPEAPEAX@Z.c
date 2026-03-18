/*
 * XREFs of ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C017204C
 * Callers:
 *     DxgkOpmTranslateHandle @ 0x1C0174D6C (DxgkOpmTranslateHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C017210C (-OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmTranslateHandle(DXGADAPTER **this, _QWORD *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = 5444LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( this[26] != KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = 5445LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( ADAPTER_DISPLAY::OpmValidateAdapterHandle((ADAPTER_DISPLAY *)this, a2) )
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
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = 5453LL;
    WdLogEvent5_WdAssertion(v16);
    return 3223192844LL;
  }
}
