/*
 * XREFs of ??_GCThreadRefHost@@UEAAPEAXI@Z @ 0x18018AB20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CThreadRefHost *__fastcall CThreadRefHost::`scalar deleting destructor'(CThreadRefHost *this, char a2)
{
  struct tagMSG Msg; // [rsp+28h] [rbp-40h] BYREF

  *(_QWORD *)this = &CThreadRefHost::`vftable';
  SHSetThreadRef(0LL);
  SafeRelease<IShellItemArray>((char *)this + 16);
  while ( *((_DWORD *)this + 2) )
  {
    if ( GetMessageW(&Msg, 0LL, 0, 0) )
    {
      TranslateMessage(&Msg);
      DispatchMessageW(&Msg);
    }
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
