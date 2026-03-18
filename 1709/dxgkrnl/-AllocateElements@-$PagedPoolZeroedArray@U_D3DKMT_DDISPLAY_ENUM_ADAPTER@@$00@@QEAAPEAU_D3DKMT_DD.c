/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_ADAPTER@@I@Z @ 0x1C01C3590
 * Callers:
 *     DxgkDDisplayEnum @ 0x1C01C4CA0 (DxgkDDisplayEnum.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  void *v5; // rcx

  v2 = a2;
  if ( a2 <= 1 )
  {
    *(_QWORD *)a1 = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x21C )
      return 0LL;
    *(_QWORD *)a1 = ExAllocatePoolWithTag(PagedPool, 540LL * a2, 0x4B677844u);
  }
  v5 = *(void **)a1;
  a1[137] = v2;
  if ( v5 )
    memset(v5, 0, 540 * v2);
  return *(_QWORD *)a1;
}
