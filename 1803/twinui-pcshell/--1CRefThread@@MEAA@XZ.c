/*
 * XREFs of ??1CRefThread@@MEAA@XZ @ 0x18018A974
 * Callers:
 *     ??_GCDuiRefThread@@MEAAPEAXI@Z @ 0x18018A9D0 (--_GCDuiRefThread@@MEAAPEAXI@Z.c)
 *     ??_ECRefThread@@MEAAPEAXI@Z @ 0x18018AAE0 (--_ECRefThread@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

void __fastcall CRefThread::~CRefThread(CRefThread *this)
{
  CRefThread *v2; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CRefThread::`vftable';
  **((_DWORD **)this + 1) = 1000;
  GetProcessReference(&v2);
  if ( v2 == this )
    SetProcessReference(0LL);
  SafeRelease<IShellItemArray>(&v2);
  **((_DWORD **)this + 1) = 0;
}
