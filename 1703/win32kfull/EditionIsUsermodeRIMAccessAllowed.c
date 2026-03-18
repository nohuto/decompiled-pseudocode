/*
 * XREFs of EditionIsUsermodeRIMAccessAllowed @ 0x1C011A530
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B528 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 EditionIsUsermodeRIMAccessAllowed()
{
  __int64 v0; // rcx
  __int64 CurrentProcess; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
  CurrentProcess = PsGetCurrentProcess(v0);
  v4 = IsProcessDwm(CurrentProcess);
  if ( !v8 )
    UserSessionSwitchLeaveCrit(v3, v2, v5, v6);
  return v4;
}
