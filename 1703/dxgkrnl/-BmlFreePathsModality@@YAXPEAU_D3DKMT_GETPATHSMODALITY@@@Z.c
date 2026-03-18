/*
 * XREFs of ?BmlFreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00EE464
 * Callers:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DxgkFreePathsModality @ 0x1C00F0740 (DxgkFreePathsModality.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00F0750 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

void __fastcall BmlFreePathsModality(struct _D3DKMT_GETPATHSMODALITY *a1)
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
      v4 = *(void **)((char *)a1 + v3 + 232);
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
