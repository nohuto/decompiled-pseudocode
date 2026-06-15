/*
 * XREFs of ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x180010EE0
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001DBA4 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180028CB0 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CApplication::UpdateAppState(CApplication *this, int a2, int *a3)
{
  int v4; // r8d
  unsigned int v5; // r9d
  int v6; // esi

  v4 = *((_DWORD *)this + 42);
  if ( a2 )
    v5 = v4 | 2;
  else
    v5 = v4 & 0xFFFFFFFD;
  *((_DWORD *)this + 42) = v5;
  v6 = ((v4 & 6) != 0) ^ ((v5 & 6) != 0);
  if ( (((unsigned __int8)v4 ^ (unsigned __int8)v5) & 2) != 0 && !a2 )
    *((_QWORD *)this + 70) = GetTickCount64();
  if ( a3 )
    *a3 = v6;
}
