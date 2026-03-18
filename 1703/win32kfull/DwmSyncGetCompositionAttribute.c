/*
 * XREFs of DwmSyncGetCompositionAttribute @ 0x1C00E9738
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C0037F20 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00E9870 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmSyncGetCompositionAttribute(PVOID Object, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // r15
  signed int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int16 v11; // ax
  int v12; // eax
  _OWORD v14[43]; // [rsp+20h] [rbp-E0h] BYREF

  v4 = a3;
  v8 = -1073741823;
  if ( Object )
  {
    v8 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset((char *)v14 + 2, 0, 0x2AEuLL);
      v9 = *(_OWORD *)a4;
      v10 = a4[2];
      *(_DWORD *)((char *)v14 + 2) = -2147483560;
      *((_QWORD *)&v14[2] + 1) = 0x14000002BLL;
      *(_QWORD *)&v14[3] = a2;
      v11 = qword_1C02E56B8[2 * v4];
      DWORD2(v14[3]) = v4;
      LOWORD(v14[0]) = v11 + 24;
      HIDWORD(v14[3]) = qword_1C02E56B8[2 * v4];
      v14[4] = v9;
      *(_QWORD *)&v14[5] = v10;
      v12 = LpcRequestWaitReplyPortEx(Object, v14, v14);
      v8 = SyncLpcCheckNtStatus(v12, (struct _PORT_MESSAGE *)v14);
      if ( v8 >= 0 )
        memmove(a4, &v14[4], qword_1C02E56B8[2 * v4]);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}
