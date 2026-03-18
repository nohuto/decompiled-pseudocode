/*
 * XREFs of UsbhPdoCheckBootDeviceReady @ 0x1C0055780
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C0013A80 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 */

char __fastcall UsbhPdoCheckBootDeviceReady(__int64 a1)
{
  char v1; // di
  _DWORD *v2; // rsi
  __int64 v3; // rbx
  int v4; // ecx
  int v5; // edx
  bool v6; // zf
  int v8; // [rsp+20h] [rbp-40h]
  int v9; // [rsp+30h] [rbp-30h] BYREF
  __int16 v10; // [rsp+34h] [rbp-2Ch]
  __int16 v11; // [rsp+36h] [rbp-2Ah]
  int v12; // [rsp+38h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-20h] BYREF
  _WORD v14[2]; // [rsp+44h] [rbp-1Ch] BYREF
  char v15; // [rsp+48h] [rbp-18h]

  v1 = 0;
  v2 = PdoExt(a1);
  v3 = *((_QWORD *)v2 + 147);
  FdoExt(v3);
  v14[0] = 4;
  v14[1] = *((_WORD *)v2 + 710);
  v9 = 163;
  v15 = 0;
  v10 = *((_WORD *)v2 + 710);
  v11 = 4;
  v13 = 0;
  if ( (int)UsbhSyncSendCommand(v3, (__int64)&v9, (__int64)&v13, v14, v8, &v12) < 0 )
    goto LABEL_9;
  v4 = v2[680];
  if ( v4 == -1 || (v5 = v2[681], v5 == -1) )
  {
    if ( (BYTE2(v13) & 1) == v4 )
    {
LABEL_9:
      v1 = 1;
      KeSetEvent((PRKEVENT)v2 + 114, 0, 0);
      return v1;
    }
    v6 = (v13 & 1) == v2[681];
  }
  else
  {
    if ( (BYTE2(v13) & 1) != v4 )
      return v1;
    v6 = (v13 & 1) == v5;
  }
  if ( v6 )
    goto LABEL_9;
  return v1;
}
