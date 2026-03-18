/*
 * XREFs of PiCMSetDeviceProblem @ 0x1406D0C14
 * Callers:
 *     PiCMHandleIoctl @ 0x140525E40 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PiCMSetProblem @ 0x14044E740 (PiCMSetProblem.c)
 *     _CmValidateDeviceName @ 0x140521BB0 (_CmValidateDeviceName.c)
 *     PiCMReturnBasicResultData @ 0x14052FF90 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHavePrivilege @ 0x140574928 (PiAuDoesClientHavePrivilege.c)
 *     PiAuDoesClientHaveAccess @ 0x140574D38 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureProblemInputData @ 0x1406CEC08 (PiCMCaptureProblemInputData.c)
 */

__int64 __fastcall PiCMSetDeviceProblem(
        _OWORD *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // eax
  int v12; // r11d
  _OWORD v13[25]; // [rsp+30h] [rbp-1D8h] BYREF
  int v14; // [rsp+1C8h] [rbp-40h]
  int v15; // [rsp+1CCh] [rbp-3Ch]

  *a6 = 0;
  result = PiCMCaptureProblemInputData(a1, a2, (__int64)a3, v13);
  if ( (int)result >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(4u) && PiAuDoesClientHavePrivilege(0xAu) )
    {
      v10 = v14;
      if ( WORD4(v13[0]) && a3 && a4 >= 8 && (unsigned int)(DWORD1(v13[0]) - 1) <= 1 )
      {
        v11 = CmValidateDeviceName(v9, (_WORD *)v13 + 4);
        if ( v11 >= 0 )
          v11 = PiCMSetProblem((PCWSTR)v13 + 4, v10, v12);
      }
      else
      {
        v11 = -1073741811;
      }
    }
    else
    {
      v11 = -1073741790;
    }
    return PiCMReturnBasicResultData(v11, v15, a3, a4, a6);
  }
  return result;
}
