/*
 * XREFs of ?EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z @ 0x1800C0EFC
 * Callers:
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800C0B60 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800C0BC0 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800C0E28 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 * Callees:
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800C197C (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 */

void __fastcall ManipulationInjector::EndManipulationInternal(ManipulationInjector *this, char a2)
{
  char v3; // cl
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf

  if ( *((_DWORD *)this + 12) )
  {
    v3 = 0;
    v4 = 0LL;
    do
    {
      v5 = 152LL * (unsigned int)v4;
      v6 = *(_DWORD *)((char *)this + v5 + 124);
      if ( v6 == 2 || v6 == 65542 || v6 == 131078 )
      {
        *(_DWORD *)((char *)this + v5 + 124) = a2 != 0 ? 0x8000 : 0x40000;
        v3 = 1;
      }
      *((_DWORD *)this + v4 + 178) = 0;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 12) );
    if ( v3 )
      ManipulationInjector::InjectAndScrub(this);
  }
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 10) = 0;
  v7 = *((_BYTE *)this + 13) == 0;
  *((_BYTE *)this + 740) = 0;
  if ( !v7 )
    DbgPrint("EndManipulation\n");
}
