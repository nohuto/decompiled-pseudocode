/*
 * XREFs of ??_GTrayNotifyCallback@SystemTray@@EEAAPEAXI@Z @ 0x1801BD620
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SystemTray::TrayNotifyCallback *__fastcall SystemTray::TrayNotifyCallback::`scalar deleting destructor'(
        SystemTray::TrayNotifyCallback *this,
        char a2)
{
  HICON v3; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v3 = (HICON)*((_QWORD *)this + 7);
  if ( v3 )
    DestroyIcon(v3);
  v5 = *((_QWORD *)this + 6);
  if ( v5 >= 8 )
  {
    v6 = *((_QWORD *)this + 3);
    v7 = v5 + 1;
    if ( v7 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( 2 * v7 < 0x1000 )
      {
LABEL_10:
        operator delete((void *)v6);
        goto LABEL_11;
      }
      if ( (v6 & 0x1F) == 0 )
      {
        v8 = *(_QWORD *)(v6 - 8);
        if ( v8 < v6 )
        {
          v6 = v6 - v8 - 8;
          if ( v6 <= 0x1F )
          {
            v6 = v8;
            goto LABEL_10;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v6);
    JUMPOUT(0x1801BD6E4LL);
  }
LABEL_11:
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 7LL;
  *((_WORD *)this + 12) = 0;
  WindowsDeleteString(*((HSTRING *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
