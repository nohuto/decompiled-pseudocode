/*
 * XREFs of EditionIsUsermodeRIMAccessAllowed @ 0x1C01236D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 EditionIsUsermodeRIMAccessAllowed()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  v5 = IsProcessDwm(CurrentProcess);
  if ( !v7 )
    UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
