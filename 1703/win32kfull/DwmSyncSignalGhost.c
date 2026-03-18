/*
 * XREFs of DwmSyncSignalGhost @ 0x1C024C2D8
 * Callers:
 *     ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01D325C (-xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmSyncSignalGhost(PVOID Object, __int128 *a2)
{
  signed int v4; // edi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // eax
  int v8; // edx
  __int128 v9; // xmm1
  _BYTE v11[688]; // [rsp+20h] [rbp-E0h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    v4 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(&v11[2], 0, 0x2AEuLL);
      v5 = *a2;
      v6 = a2[1];
      *(_WORD *)&v11[4] = 0x8000;
      v7 = *((_DWORD *)a2 + 8);
      *(_OWORD *)&v11[44] = v5;
      *(_DWORD *)&v11[76] = v7;
      *(_OWORD *)&v11[60] = v6;
      *(_DWORD *)v11 = 5242920;
      *(_DWORD *)&v11[40] = 1073741877;
      v4 = LpcRequestWaitReplyPort(Object, v11, v11);
      if ( v4 >= 0 )
      {
        v8 = *(_DWORD *)&v11[76];
        v9 = *(_OWORD *)&v11[60];
        *a2 = *(_OWORD *)&v11[44];
        a2[1] = v9;
        *((_DWORD *)a2 + 8) = v8;
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
