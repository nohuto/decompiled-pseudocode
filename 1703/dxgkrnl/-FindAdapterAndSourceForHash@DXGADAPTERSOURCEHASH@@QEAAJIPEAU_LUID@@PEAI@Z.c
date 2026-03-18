/*
 * XREFs of ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C019578C
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00AA7F4 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AC7A0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00ECDC8 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C00A648C (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
        DXGADAPTERSOURCEHASH *this,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int ActualBufferSize; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rax
  struct _LUID *v15; // rcx
  unsigned int v16; // ebx
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, this, (__int64)a3, (__int64)a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  ActualBufferSize = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 40));
  v11 = *((unsigned int *)this + 15);
  v12 = ActualBufferSize >> 4;
  v13 = (unsigned int)(1 << v11);
  if ( ActualBufferSize >> 4 > (unsigned int)v13 )
    v12 = 1 << v11;
  if ( (unsigned int)v4 >= v12 )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v13, v9, v10);
    *(_QWORD *)(v14 + 32) = v12;
LABEL_7:
    *(_QWORD *)(v14 + 24) = v4;
    WdLogEvent5_WdWarning(v14);
    v16 = -1073741811;
    goto LABEL_9;
  }
  v15 = (struct _LUID *)(*((_QWORD *)this + 5) + 16 * v4);
  if ( (v15[1].HighPart & 1) == 0 )
  {
    v14 = WdLogNewEntry5_WdWarning(v15, v13, v9, v10);
    goto LABEL_7;
  }
  v16 = 0;
  *a3 = *v15;
  *a4 = v15[1].LowPart;
LABEL_9:
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18, v13, v9, v10);
  return v16;
}
