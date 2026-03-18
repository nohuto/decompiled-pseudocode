/*
 * XREFs of PiCMCreateObject @ 0x1406CF784
 * Callers:
 *     PiCMHandleIoctl @ 0x140525E40 (PiCMHandleIoctl.c)
 * Callees:
 *     _PnpCreateObject @ 0x140450FF0 (_PnpCreateObject.c)
 *     PiCMReturnBasicResultData @ 0x14052FF90 (PiCMReturnBasicResultData.c)
 *     PiCMReleaseObjectInputData @ 0x140530DB0 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140531014 (PiCMCaptureObjectInputData.c)
 *     PiAuDoesClientHaveAccess @ 0x140574D38 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMCreateObject(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int Object; // ebx
  unsigned int v9; // r8d
  __int64 v10; // rcx
  char v12[4]; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+44h] [rbp-34h]
  int v14; // [rsp+48h] [rbp-30h]
  __int64 v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-1Ch]
  int v17; // [rsp+60h] [rbp-18h]

  *a6 = 0;
  Object = PiCMCaptureObjectInputData(a1, a2, a5, v12);
  if ( Object >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      Object = -1073741790;
LABEL_28:
      Object = PiCMReturnBasicResultData(Object, v17, a3, a4, a6);
      goto LABEL_29;
    }
    if ( !v15 || v13 || v16 || !a3 || a4 < 8 || (v14 & 0x7FFF0000) != 0 )
      goto LABEL_27;
    if ( v14 >= 0 )
    {
      if ( (unsigned __int16)v14 != 1 )
      {
        switch ( (unsigned __int16)v14 )
        {
          case 2u:
            v9 = 2;
            goto LABEL_21;
          case 3u:
            v9 = 4;
            goto LABEL_21;
          case 4u:
            v9 = 3;
            goto LABEL_21;
        }
LABEL_27:
        Object = -1073741811;
        goto LABEL_28;
      }
      v9 = 1;
    }
    else
    {
      v9 = (unsigned __int16)v14 < 0xBu ? (unsigned __int16)v14 : 0;
    }
    if ( v9 )
    {
LABEL_21:
      v10 = v9 - 1;
      if ( v9 == 1 || (v10 = v9 - 3, v9 == 3) || v9 == 5 )
        Object = -1073741637;
      if ( Object >= 0 )
        Object = PnpCreateObject(v10, v15, v9, 0, 0LL);
      goto LABEL_28;
    }
    goto LABEL_27;
  }
LABEL_29:
  PiCMReleaseObjectInputData((__int64)v12);
  return (unsigned int)Object;
}
