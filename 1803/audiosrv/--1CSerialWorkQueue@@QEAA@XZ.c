/*
 * XREFs of ??1CSerialWorkQueue@@QEAA@XZ @ 0x18009CAF0
 * Callers:
 *     ??1AudioJournal@@QEAA@XZ @ 0x18005FFD8 (--1AudioJournal@@QEAA@XZ.c)
 *     _AudioJournal::AudioJournal_::_1_::dtor$1 @ 0x1800698DC (_AudioJournal--AudioJournal_--_1_--dtor$1.c)
 *     ??_GCAudioSrv@@UEAAPEAXI@Z @ 0x18009CBA0 (--_GCAudioSrv@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::~CSerialWorkQueue(struct _TP_POOL **this)
{
  struct _TP_POOL *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseThreadpool(v2);
    *this = 0LL;
  }
  _Mtx_destroy_in_situ((_Mtx_t)(this + 11));
}
