/*
 * XREFs of xxxNotifyShellWindowBorderEnter @ 0x1C01B9360
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00CE354 (xxxTrackMouseMove.c)
 * Callees:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C008502C (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C00CC238 (-GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *__fastcall xxxNotifyShellWindowBorderEnter(
        ShellWindowManagementProperty *this,
        int a2)
{
  __int64 v3; // rsi
  char v4; // di
  unsigned int v5; // ebx
  __int64 v6; // rax
  struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *result; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a2;
  v4 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL) + 228LL);
  v5 = (4 * (v4 & 1)) | 1;
  if ( (v4 & 0x10) == 0 )
    v5 = 4 * (v4 & 1);
  memset(v8, 0, sizeof(v8));
  v8[0] = *(_QWORD *)this;
  v6 = v5 | 2;
  LODWORD(v8[1]) = 5;
  v8[3] = v3;
  if ( (v4 & 4) == 0 )
    v6 = v5;
  v8[2] = v6;
  result = (struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v8);
  if ( (_DWORD)result )
  {
    result = ShellWindowManagementProperty::GetShellWndManagementProperty(this, (struct tagWND *)1);
    if ( result )
      *(_DWORD *)result |= 1u;
  }
  return result;
}
