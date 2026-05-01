/*
 * XREFs of ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x180057500
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x180059BFC (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005A958 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

void __fastcall CImmersiveApp::HandleNewProcess(CImmersiveApp *this, void *a2)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax

  if ( *((_BYTE *)this + 632) )
  {
    if ( !CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 152))
      && ((*((_QWORD *)this + 80) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      CurrentProcess = GetCurrentProcess();
      v5 = GetCurrentProcess();
      if ( DuplicateHandle(v5, a2, CurrentProcess, (LPHANDLE)this + 80, 0x1200u, 0, 0) )
      {
        if ( (*((_DWORD *)this + 106) & 2) != 0 )
          CImmersiveApp::_SetApplicationForegroundPriority((char *)this - 112, 0LL);
      }
    }
  }
}
