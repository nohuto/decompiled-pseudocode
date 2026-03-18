/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C0097F60
 * Callers:
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C0097CB0 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  void *v4; // rcx

  v2 = a2;
  if ( a2 <= 8 )
  {
    *(_QWORD *)a1 = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x14 )
      return 0LL;
    *(_QWORD *)a1 = ExAllocatePoolWithTag(PagedPool, 20LL * a2, 0x4B677844u);
  }
  v4 = *(void **)a1;
  a1[42] = v2;
  if ( v4 )
    memset(v4, 0, 20 * v2);
  return *(_QWORD *)a1;
}
