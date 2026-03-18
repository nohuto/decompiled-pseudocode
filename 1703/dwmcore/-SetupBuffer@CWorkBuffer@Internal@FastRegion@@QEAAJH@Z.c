/*
 * XREFs of ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x1800C3BF8
 * Callers:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180025700 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075A88 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075C28 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CWorkBuffer::SetupBuffer(
        FastRegion::Internal::CWorkBuffer *this,
        unsigned int a2)
{
  LPVOID v4; // rax

  if ( *(_DWORD *)this )
    return 2147500037LL;
  *(_DWORD *)this = a2;
  if ( a2 <= 0x100 )
    return 0LL;
  v4 = HeapAlloc(WPF::g_processHeap, 0, (int)a2);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = v4;
    return 0LL;
  }
  return 2147942414LL;
}
