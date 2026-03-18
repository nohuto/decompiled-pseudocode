/*
 * XREFs of xxxCallShellWindowSizeStartingHandler @ 0x1C01B5C00
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F44F8 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01B501C (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 */

__int64 __fastcall xxxCallShellWindowSizeStartingHandler(_QWORD *a1, int a2)
{
  __int64 v2; // rdi
  char v5; // r8
  int v6; // edx
  int v7; // eax
  _QWORD v9[8]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a1[2];
  memset(v9, 0, sizeof(v9));
  v9[0] = *a1;
  LODWORD(v9[1]) = 2;
  HIDWORD(v9[3]) = a2;
  v5 = *(_BYTE *)(*(_QWORD *)(v2 + 384) + 196LL);
  v6 = (4 * (v5 & 1)) | 1;
  if ( (v5 & 0x10) == 0 )
    v6 = 4 * (v5 & 1);
  v7 = v6 | 2;
  if ( (v5 & 4) == 0 )
    v7 = v6;
  LODWORD(v9[4]) = v7;
  TransformRectBetweenCoordinateSpaces((char *)&v9[1] + 4, a1 + 16, *(_QWORD *)(*(_QWORD *)(v2 + 408) + 328LL), a1);
  return xxxCallIAMWindowManagementHandler((struct _LARGE_STRING *)v9);
}
