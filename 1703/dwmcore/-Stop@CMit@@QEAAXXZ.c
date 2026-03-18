/*
 * XREFs of ?Stop@CMit@@QEAAXXZ @ 0x180191D54
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x1801899C0 (--1CInputManager@@MEAA@XZ.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x180189AD0 (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
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
