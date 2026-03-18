/*
 * XREFs of UsbhValidateSerialNumberString @ 0x1C0028B2C
 * Callers:
 *     UsbhGetSerialNumber @ 0x1C00234F4 (UsbhGetSerialNumber.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

char __fastcall UsbhValidateSerialNumberString(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  int v8; // ebp
  _DWORD *v9; // rax
  __int16 *v10; // r9
  __int16 v11; // cx
  _WORD *v12; // rdx
  int v14; // [rsp+48h] [rbp-10h]

  v8 = a1;
  FdoExt(a1);
  v9 = PdoExt(a2);
  v10 = *(__int16 **)(a3 + 8);
  if ( *v10 )
  {
    v11 = *v10;
    v12 = *(_WORD **)(a3 + 8);
    while ( v11 )
    {
      if ( (unsigned __int16)(v11 - 32) > 0x5Fu || v11 == 44 )
      {
        LOBYTE(v14) = 0;
        UsbhException(
          v8,
          *((unsigned __int16 *)v9 + 710),
          39,
          (int)v10,
          *(_DWORD *)(a3 + 4),
          -1073741811,
          -1072693248,
          usbfile_dq_c,
          283,
          v14);
        goto LABEL_12;
      }
      v11 = *++v12;
    }
    if ( a4 )
      *a4 = 0;
    return 1;
  }
  else
  {
    LOBYTE(v14) = 0;
    *a5 = 1;
    UsbhException(
      v8,
      *((unsigned __int16 *)v9 + 710),
      39,
      (int)v10,
      *(_DWORD *)(a3 + 4),
      -1073741811,
      -1072693248,
      usbfile_dq_c,
      270,
      v14);
LABEL_12:
    if ( a4 )
      *a4 = -1072693248;
    return 0;
  }
}
