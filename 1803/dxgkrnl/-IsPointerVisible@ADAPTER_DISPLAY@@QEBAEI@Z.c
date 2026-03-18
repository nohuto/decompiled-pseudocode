/*
 * XREFs of ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019CA4
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C01EAC58 (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::IsPointerVisible(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 5127LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return *(_BYTE *)(3760 * v3 + *((_QWORD *)this + 14) + 725);
}
