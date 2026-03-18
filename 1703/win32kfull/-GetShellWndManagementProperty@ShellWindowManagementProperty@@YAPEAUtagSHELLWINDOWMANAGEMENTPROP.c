/*
 * XREFs of ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C00C8990
 * Callers:
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01B60CC (xxxNotifyShellWindowBorderEnter.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0042C20 (DesktopAlloc.c)
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *__fastcall ShellWindowManagementProperty::GetShellWndManagementProperty(
        ShellWindowManagementProperty *this,
        struct tagWND *a2)
{
  void *Prop; // rbx
  int v4; // r10d
  PVOID v6; // rax

  Prop = (void *)GetProp((__int64)this, gatomShellWindowManagement, 1);
  if ( Prop || !v4 )
    return (struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *)Prop;
  v6 = DesktopAlloc(*((_QWORD *)this + 3), 4u);
  Prop = v6;
  if ( v6 )
  {
    if ( (unsigned int)InternalSetProp((__int64)this, (unsigned __int16)gatomShellWindowManagement, (__int64)v6, 9) )
      return (struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *)Prop;
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)this + 3) + 128LL), 0, Prop);
  }
  return 0LL;
}
