/*
 * XREFs of ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140031114
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400081D0 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14000ADE0 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140030D24 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x1400310AC (--_GCInPlaceBuffer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CInPlaceBuffer::Release(CInPlaceBuffer *this)
{
  bool v1; // zf
  unsigned int v2; // ebx

  v1 = (*((_DWORD *)this + 4))-- == 1;
  v2 = *((_DWORD *)this + 4);
  if ( v1 )
    CInPlaceBuffer::`scalar deleting destructor'(this);
  return v2;
}
