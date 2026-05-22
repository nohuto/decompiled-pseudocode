/*
 * XREFs of ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x1800ACC54
 * Callers:
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800AC8A4 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800AC908 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800ACB7C (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 * Callees:
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800AD6DC (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 */

void __fastcall ManipulationInjector::EndManipulationInternal(ManipulationInjector *this, char a2, char a3)
{
  char v5; // cl
  __int64 v6; // r9
  __int64 v7; // rdx
  bool v8; // zf

  if ( *((_DWORD *)this + 12) )
  {
    v5 = 0;
    v6 = 0LL;
    do
    {
      v7 = 152LL * (unsigned int)v6;
      if ( !a3 && *(_DWORD *)((char *)this + v7 + 124) == 2
        || ((*(_DWORD *)((char *)this + v7 + 124) - 65542) & 0xFFFEFFFF) == 0 )
      {
        *(_DWORD *)((char *)this + v7 + 124) = a2 != 0 ? 0x8000 : 0x40000;
        v5 = 1;
      }
      *((_DWORD *)this + v6 + 178) = 0;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *((_DWORD *)this + 12) );
    if ( v5 )
      ManipulationInjector::InjectAndScrub(this);
  }
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 10) = 0;
  v8 = *((_BYTE *)this + 13) == 0;
  *((_BYTE *)this + 740) = 0;
  if ( !v8 )
    DbgPrint("EndManipulation\n");
}
