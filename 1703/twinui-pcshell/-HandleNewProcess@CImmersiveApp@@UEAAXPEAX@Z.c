/*
 * XREFs of ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x1800550B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x1800575B4 (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180058298 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

void __fastcall CImmersiveApp::HandleNewProcess(CImmersiveApp *this, void *a2)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax

  if ( *((_BYTE *)this + 616) )
  {
    if ( !CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 136))
      && ((*((_QWORD *)this + 78) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      CurrentProcess = GetCurrentProcess();
      v5 = GetCurrentProcess();
      if ( DuplicateHandle(v5, a2, CurrentProcess, (LPHANDLE)this + 78, 0x1200u, 0, 0) )
      {
        if ( (*((_DWORD *)this + 102) & 2) != 0 )
          CImmersiveApp::_SetApplicationForegroundPriority((char *)this - 88, 0LL);
      }
    }
  }
}
