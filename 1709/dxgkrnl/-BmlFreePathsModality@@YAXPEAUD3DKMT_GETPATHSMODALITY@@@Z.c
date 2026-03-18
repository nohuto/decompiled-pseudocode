/*
 * XREFs of ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00D9AF4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DxgkFreePathsModality @ 0x1C00FA7B0 (DxgkFreePathsModality.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

void __fastcall BmlFreePathsModality(struct D3DKMT_GETPATHSMODALITY *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  void *v4; // rcx
  void *v5; // rcx

  if ( a1 && *((_WORD *)a1 + 11) )
  {
    *((_WORD *)a1 + 10) = 0;
    v2 = 0;
    do
    {
      v3 = 264LL * v2;
      v4 = *(void **)((char *)a1 + v3 + 264);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      memset((char *)a1 + v3 + 48, 0, 0x108uLL);
      ++v2;
    }
    while ( v2 < *((unsigned __int16 *)a1 + 11) );
    v5 = (void *)*((_QWORD *)a1 + 5);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *((_QWORD *)a1 + 5) = 0LL;
      *((_DWORD *)a1 + 9) = 0;
    }
  }
}
