/*
 * XREFs of ??1AudioJournal@@QEAA@XZ @ 0x18005FFD8
 * Callers:
 *     _dynamic_atexit_destructor_for__g_AudioJournal__ @ 0x18006B610 (_dynamic_atexit_destructor_for__g_AudioJournal__.c)
 * Callees:
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x18009CAF0 (--1CSerialWorkQueue@@QEAA@XZ.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x18009E4C8 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     ??_G_RecurringTask@@QEAAPEAXI@Z @ 0x1800CFC44 (--_G_RecurringTask@@QEAAPEAXI@Z.c)
 */

void __fastcall AudioJournal::~AudioJournal(AudioJournal *this)
{
  unsigned int v1; // edx

  CSerialWorkQueue::Shutdown((CSerialWorkQueue *)&qword_18018A3C0);
  if ( qword_18018A468 )
    _RecurringTask::`scalar deleting destructor'(qword_18018A468, v1);
  CSerialWorkQueue::~CSerialWorkQueue((CSerialWorkQueue *)&qword_18018A3C0);
  DeleteCriticalSection(&stru_18018A398);
}
