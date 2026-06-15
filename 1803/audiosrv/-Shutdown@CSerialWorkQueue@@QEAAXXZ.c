/*
 * XREFs of ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x18009E4C8
 * Callers:
 *     ??1AudioJournal@@QEAA@XZ @ 0x18005FFD8 (--1AudioJournal@@QEAA@XZ.c)
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x18009CE00 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::Shutdown(CSerialWorkQueue *this)
{
  int v2; // eax
  int v3; // eax

  v2 = _Mtx_lock((CSerialWorkQueue *)((char *)this + 88));
  if ( v2 )
    std::_Throw_C_error(v2);
  *((_BYTE *)this + 80) = 1;
  v3 = _Mtx_unlock((CSerialWorkQueue *)((char *)this + 88));
  if ( v3 )
    std::_Throw_C_error(v3);
}
