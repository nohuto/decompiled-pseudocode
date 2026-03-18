/*
 * XREFs of ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x1800759C8
 * Callers:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007599C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180075B50 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 * Callees:
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x1800746C8 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::CopyData(void **this, const struct FastRegion::Internal::CRgnData *a2)
{
  int *v2; // rsi
  char *v5; // r10
  int v6; // eax
  int v7; // edi
  SIZE_T v9; // r8
  LPVOID v10; // rbp

  v2 = (int *)(this + 1);
  v5 = (char *)a2 + 8 * *(_DWORD *)a2 - 8;
  v6 = 60;
  v7 = *((_DWORD *)v5 + 4) + 8 * *(_DWORD *)a2 - *((_DWORD *)a2 + 4) - ((_DWORD)a2 + 12) + (_DWORD)v5 + 24;
  if ( this + 1 != *this )
    v6 = *v2;
  if ( v6 >= v7 )
    goto LABEL_4;
  v9 = v7;
  if ( !v7 )
    v9 = 1LL;
  v10 = HeapAlloc(WPF::g_processHeap, 0, v9);
  if ( v10 )
  {
    FastRegion::CRegion::FreeMemory(this);
    *this = v10;
    *v2 = v7;
LABEL_4:
    FastRegion::Internal::CRgnData::Copy((FastRegion::Internal::CRgnData *)*this, a2);
    return 0LL;
  }
  return 2147942414LL;
}
