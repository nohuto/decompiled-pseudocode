/*
 * XREFs of ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140030BA0
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140007B50 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x14003072C (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140031280 (--1-$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x140030B38 (--_GCInPlaceBuffer@@QEAAPEAXI@Z.c)
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
