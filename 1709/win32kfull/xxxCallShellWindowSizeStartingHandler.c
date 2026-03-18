/*
 * XREFs of xxxCallShellWindowSizeStartingHandler @ 0x1C01B8E90
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01DB8B0 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01B8260 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 */

__int64 __fastcall xxxCallShellWindowSizeStartingHandler(_QWORD *a1, int a2)
{
  __int64 v2; // rdi
  char v5; // r8
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v12[8]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a1[2];
  memset(v12, 0, sizeof(v12));
  v12[0] = *a1;
  LODWORD(v12[1]) = 2;
  HIDWORD(v12[3]) = a2;
  v5 = *(_BYTE *)(*(_QWORD *)(v2 + 408) + 228LL);
  v6 = (4 * (v5 & 1)) | 1;
  if ( (v5 & 0x10) == 0 )
    v6 = 4 * (v5 & 1);
  v7 = v6 | 2;
  if ( (v5 & 4) == 0 )
    v7 = v6;
  LODWORD(v12[4]) = v7;
  TransformRectBetweenCoordinateSpaces((char *)&v12[1] + 4, a1 + 16, *(_QWORD *)(*(_QWORD *)(v2 + 432) + 328LL), a1);
  return xxxCallIAMWindowManagementHandler((struct _LARGE_STRING *)v12, v8, v9, v10);
}
