/*
 * XREFs of ?Stop@CMit@@QEAAXXZ @ 0x1801D9908
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x1801CDA44 (--1CInputManager@@MEAA@XZ.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x1801CDB98 (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 *     ??_GCMit@@QEAAPEAXI@Z @ 0x1801CDC44 (--_GCMit@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMit::Stop(CMit *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 1) == 0LL;
  *((_BYTE *)this + 24) = 1;
  if ( !v1 )
  {
    SetEvent(*((HANDLE *)this + 2));
    WaitForSingleObject(*((HANDLE *)this + 1), 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
}
