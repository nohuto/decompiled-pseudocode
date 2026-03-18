/*
 * XREFs of ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x1C0170598
 * Callers:
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXXZ @ 0x1C00E90F8 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXXZ.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C0172EE0 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 * Callees:
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C00A6D3C (-GetNextConfigIndex@@YAHH@Z.c)
 */

void __fastcall DISPLAY_SOURCE::CreateNewPostCompositionConfig(
        DISPLAY_SOURCE *this,
        __int64 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  char v6; // bp
  __int64 v8; // rax
  int NextConfigIndex; // eax
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx

  v6 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 7969LL;
    WdLogEvent5_WdAssertion(v8);
  }
  NextConfigIndex = GetNextConfigIndex(*((_DWORD *)this + 606));
  v10 = *((_DWORD *)this + 607);
  v11 = NextConfigIndex;
  *((_DWORD *)this + 606) = NextConfigIndex;
  if ( NextConfigIndex == v10 || v10 == -1 )
    *((_DWORD *)this + 607) = GetNextConfigIndex(v10);
  v12 = 9 * v11;
  *((_BYTE *)this + 4 * v12 + 2432) = v6;
  *(struct tagRECT *)((char *)this + 4 * v12 + 2436) = *a3;
  *(struct tagRECT *)((char *)this + 4 * v12 + 2452) = *a4;
}
