/*
 * XREFs of ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14002FBD4
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140009F30 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x14002F76C (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140030250 (--1-$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x14002FB7C (--_GCInPlaceBuffer@@QEAAPEAXI@Z.c)
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
