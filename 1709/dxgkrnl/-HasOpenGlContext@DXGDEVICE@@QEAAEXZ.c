/*
 * XREFs of ?HasOpenGlContext@DXGDEVICE@@QEAAEXZ @ 0x1C009E020
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00AD6AC (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::HasOpenGlContext(DXGDEVICE *this)
{
  __int64 v2; // rcx
  _DWORD *i; // rax
  __int64 v5; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v5 + 24) = 4987LL;
    WdLogEvent5_WdAssertion(v5);
  }
  for ( i = (_DWORD *)*((_QWORD *)this + 43); ; i = *(_DWORD **)i )
  {
    if ( i == (_DWORD *)((char *)this + 344) || !i )
      return 0;
    if ( i[36] == 1 )
      break;
  }
  return 1;
}
