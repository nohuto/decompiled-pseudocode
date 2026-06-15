/*
 * XREFs of ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18000BF44
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x1800150E4 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x18001F710 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CApplication::UpdateAppState(CApplication *this, int a2, int *a3)
{
  int v4; // r8d
  int v6; // ecx
  int v7; // esi

  v4 = *((_DWORD *)this + 42);
  if ( a2 )
    *((_DWORD *)this + 42) |= 2u;
  else
    *((_DWORD *)this + 42) &= ~2u;
  v6 = *((_DWORD *)this + 42);
  v7 = ((v4 & 0xFFFFFFF7) != 0) ^ ((v6 & 0xFFFFFFF7) != 0);
  if ( (((unsigned __int8)v4 ^ (unsigned __int8)v6) & 2) != 0 && !a2 )
    *((_QWORD *)this + 70) = GetTickCount64();
  if ( a3 )
    *a3 = v7;
}
