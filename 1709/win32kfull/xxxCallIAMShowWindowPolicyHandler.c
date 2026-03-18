/*
 * XREFs of xxxCallIAMShowWindowPolicyHandler @ 0x1C01B8DFC
 * Callers:
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01B8260 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 */

__int64 __fastcall xxxCallIAMShowWindowPolicyHandler(_QWORD *a1, int a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  int v12; // ecx
  _QWORD v13[8]; // [rsp+20h] [rbp-78h] BYREF

  *a4 = 0LL;
  a4[1] = 0LL;
  *a3 = 0;
  memset(v13, 0, sizeof(v13));
  v13[0] = *a1;
  LODWORD(v13[1]) = 1;
  HIDWORD(v13[1]) = a2;
  result = xxxCallIAMWindowManagementHandler((struct _LARGE_STRING *)v13, v8, v9, v10);
  if ( (_DWORD)result )
  {
    v12 = v13[2];
    *a3 = v13[2];
    if ( v12 == 3 )
      *(_OWORD *)a4 = *(_OWORD *)((char *)&v13[2] + 4);
  }
  return result;
}
