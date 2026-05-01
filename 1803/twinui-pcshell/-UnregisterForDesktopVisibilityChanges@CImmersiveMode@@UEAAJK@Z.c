/*
 * XREFs of ?UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z @ 0x180118030
 * Callers:
 *     <none>
 * Callees:
 *     ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x1801174E4 (--_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CImmersiveMode::UnregisterForDesktopVisibilityChanges(CImmersiveMode *this, int a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  CImmersiveMode::DesktopVisibilityChangeListener *v7; // rdi
  _DWORD **v8; // rcx
  CImmersiveMode::DesktopVisibilityChangeListener **v9; // rcx
  __int64 v10; // rdx

  v4 = -2147023728;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = *((_QWORD *)this + 33);
  v6 = 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    v8 = (_DWORD **)*((_QWORD *)this + 32);
    while ( **v8 != a2 )
    {
      ++v6;
      ++v8;
      if ( v6 >= v5 )
        goto LABEL_10;
    }
    v4 = 0;
    v9 = (CImmersiveMode::DesktopVisibilityChangeListener **)(*((_QWORD *)this + 32) + 8 * v6);
    v7 = *v9;
    v10 = *((_QWORD *)this + 33);
    if ( v6 < v5 )
    {
      if ( v6 != v5 - 1 )
      {
        memmove(v9, v9 + 1, 8 * (v5 - v6) - 8);
        v10 = *((_QWORD *)this + 33);
      }
      *((_QWORD *)this + 33) = v10 - 1;
    }
  }
LABEL_10:
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v7 )
    CImmersiveMode::DesktopVisibilityChangeListener::`scalar deleting destructor'(v7);
  return v4;
}
