/*
 * XREFs of xxxCallIAMGetArrangementRectangleHandler @ 0x1C01B8CFC
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01DA9AC (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01B8260 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 */

__int64 __fastcall xxxCallIAMGetArrangementRectangleHandler(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // r9
  unsigned int v9; // ecx
  __int64 v10; // r8
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  int v13; // eax
  __int64 result; // rax
  __int128 v15; // xmm1
  _OWORD v16[4]; // [rsp+20h] [rbp-58h] BYREF

  *a3 = 0LL;
  a3[1] = 0LL;
  *a4 = 0LL;
  a4[1] = 0LL;
  memset(v16, 0, sizeof(v16));
  DWORD2(v16[0]) = 0;
  *(_QWORD *)&v16[0] = a1;
  *(_QWORD *)((char *)v16 + 12) = a2;
  v9 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL);
  if ( (v9 & 0x800000) != 0 )
    DWORD2(v16[1]) = 2;
  else
    DWORD2(v16[1]) = HIBYTE(v9) & 1;
  HIDWORD(v16[1]) = *(_DWORD *)(gptiCurrent + 1188LL);
  v11 = *(_BYTE *)(*(_QWORD *)(gptiCurrent + 408LL) + 228LL);
  v10 = v11;
  v12 = (4 * (v11 & 1)) | 1u;
  if ( (v11 & 0x10) == 0 )
    v12 = 4 * (v11 & 1u);
  v13 = v12 | 2;
  LOBYTE(v10) = v10 & 4;
  if ( !(_BYTE)v10 )
    v13 = v12;
  DWORD1(v16[1]) = v13;
  result = xxxCallIAMWindowManagementHandler((struct _LARGE_STRING *)v16, v12, v10, v8);
  if ( (_DWORD)result )
  {
    v15 = v16[3];
    *(_OWORD *)a3 = v16[2];
    *(_OWORD *)a4 = v15;
  }
  return result;
}
