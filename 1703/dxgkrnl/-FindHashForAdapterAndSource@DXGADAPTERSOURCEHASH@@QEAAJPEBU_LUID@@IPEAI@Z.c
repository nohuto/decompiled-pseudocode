/*
 * XREFs of ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C0195960
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00AA3B8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00AA7F4 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C0118290 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1C0195864 (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
        DXGADAPTERSOURCEHASH *this,
        const struct _LUID *a2,
        __int64 a3,
        unsigned int *a4)
{
  int v7; // ebp
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned int v18; // ebx
  _BYTE v20[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+60h] [rbp+18h] BYREF

  v21 = a3;
  v7 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, this, a3, (__int64)a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, 0, 1LL, a2, &v21);
  if ( Entry )
    goto LABEL_6;
  v12 = DXGADAPTERSOURCEHASH::FindEntry(this, 0, 1LL, a2, 0LL);
  if ( !v12 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = a2->HighPart;
    *(_QWORD *)(v17 + 32) = a2->LowPart;
    WdLogEvent5_WdAssertion(v17);
    v18 = -1073741811;
    goto LABEL_7;
  }
  Entry = DXGADAPTERSOURCEHASH::AddEntry(this, a2, v7, (*((_DWORD *)v12 + 3) >> 1) & 1);
  if ( Entry )
  {
LABEL_6:
    *a4 = ((__int64)Entry - *((_QWORD *)this + 5)) >> 4;
    v18 = 0;
  }
  else
  {
    v18 = -1073741801;
  }
LABEL_7:
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v9, v10, v11);
  return v18;
}
