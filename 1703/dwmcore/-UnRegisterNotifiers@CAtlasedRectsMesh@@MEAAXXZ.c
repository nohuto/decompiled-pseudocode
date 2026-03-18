/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x1800C02B0
 * Callers:
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x1800C0348 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 *     ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x1800C03DC (-ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasedRectsMesh::UnRegisterNotifiers(CAtlasedRectsMesh *this)
{
  void *v1; // r8
  void *v3; // r8
  void *v4; // r8

  v1 = (void *)*((_QWORD *)this + 9);
  if ( v1 )
  {
    HeapFree(WPF::g_processHeap, 0, v1);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_DWORD *)this + 16) = 0;
  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    HeapFree(WPF::g_processHeap, 0, v3);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_DWORD *)this + 20) = 0;
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    HeapFree(WPF::g_processHeap, 0, v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_DWORD *)this + 24) = 0;
}
