/*
 * XREFs of RtlStringCbPrintfW @ 0x1C000EF90
 * Callers:
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0016298 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0052A50 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C0070EA0 (VidSchiOpenProcessAdapterInfo.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0079DD8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C007A540 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = _vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      pszDest[v6] = 0;
      return -2147483643;
    }
    else if ( v7 == v6 )
    {
      pszDest[v6] = 0;
    }
  }
  return v5;
}
