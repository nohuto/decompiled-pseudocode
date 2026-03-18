/*
 * XREFs of xxxCallIAMShowWindowPolicyHandler @ 0x1C01B5B6C
 * Callers:
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01B501C (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 */

__int64 __fastcall xxxCallIAMShowWindowPolicyHandler(_QWORD *a1, int a2, _DWORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  int v9; // ecx
  _QWORD v10[8]; // [rsp+20h] [rbp-78h] BYREF

  *a4 = 0LL;
  a4[1] = 0LL;
  *a3 = 0;
  memset(v10, 0, sizeof(v10));
  v10[0] = *a1;
  LODWORD(v10[1]) = 1;
  HIDWORD(v10[1]) = a2;
  result = xxxCallIAMWindowManagementHandler((struct _LARGE_STRING *)v10);
  if ( (_DWORD)result )
  {
    v9 = v10[2];
    *a3 = v10[2];
    if ( v9 == 3 )
      *(_OWORD *)a4 = *(_OWORD *)((char *)&v10[2] + 4);
  }
  return result;
}
