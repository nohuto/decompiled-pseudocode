/*
 * XREFs of ??_GCShellEdgyInputTarget@@MEAAPEAXI@Z @ 0x18002C718
 * Callers:
 *     ??_ECShellEdgyInputTarget@@OBA@EAAPEAXI@Z @ 0x18002C950 (--_ECShellEdgyInputTarget@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

CShellEdgyInputTarget *__fastcall CShellEdgyInputTarget::`scalar deleting destructor'(
        CShellEdgyInputTarget *this,
        char a2)
{
  *(_QWORD *)this = &CShellEdgyInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &CShellEdgyInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
