/*
 * XREFs of ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180070FC0
 * Callers:
 *     ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z @ 0x1800C7894 (-ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z.c)
 *     ?ReplaceWith@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x180151F50 (-ReplaceWith@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<0>::DetachData(__int64 a1, unsigned int a2, _QWORD *a3)
{
  void *v3; // rsi
  int v4; // edi
  unsigned __int64 v9; // rcx
  SIZE_T v10; // r8
  int v11; // eax

  v3 = *(void **)a1;
  v4 = 0;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
  {
    v3 = 0LL;
    v9 = *(unsigned int *)(a1 + 20);
    if ( v9 && a2 && a2 < 0xFFFFFFFFFFFFFFFFuLL / v9 )
    {
      v10 = v9 * a2;
      if ( !v10 )
        v10 = 1LL;
      v3 = HeapAlloc(WPF::g_processHeap, 0, v10);
      if ( !v3 )
        v4 = -2147024882;
    }
    else
    {
      v4 = -2147024809;
    }
    if ( v4 < 0 )
    {
      *a3 = 0LL;
      return (unsigned int)v4;
    }
    v11 = *(_DWORD *)(a1 + 24);
    if ( v11 )
      memcpy_0(v3, *(const void **)a1, a2 * v11);
  }
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *a3 = v3;
  return (unsigned int)v4;
}
