/*
 * XREFs of UsbhValidateSerialNumberString @ 0x1C00548E0
 * Callers:
 *     UsbhGetSerialNumber @ 0x1C0022228 (UsbhGetSerialNumber.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

char __fastcall UsbhValidateSerialNumberString(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  _DWORD *v9; // rax
  unsigned __int16 *v10; // r9
  _DWORD *v11; // r10
  unsigned __int16 v13; // ax
  _WORD *v14; // rcx

  FdoExt(a1);
  v9 = PdoExt(a2);
  v10 = *(unsigned __int16 **)(a3 + 8);
  v11 = v9;
  if ( *v10 )
  {
    v13 = *v10;
    v14 = *(_WORD **)(a3 + 8);
    while ( v13 )
    {
      if ( v13 < 0x20u || v13 > 0x7Fu || v13 == 44 )
      {
        UsbhException(
          a1,
          *((_WORD *)v11 + 710),
          0x27u,
          v10,
          *(_DWORD *)(a3 + 4),
          -1073741811,
          -1072693248,
          usbfile_dq_c,
          283,
          0);
        goto LABEL_3;
      }
      v13 = *++v14;
    }
    if ( a4 )
      *a4 = 0;
    return 1;
  }
  else
  {
    *a5 = 1;
    UsbhException(
      a1,
      *((_WORD *)v9 + 710),
      0x27u,
      v10,
      *(_DWORD *)(a3 + 4),
      -1073741811,
      -1072693248,
      usbfile_dq_c,
      270,
      0);
LABEL_3:
    if ( a4 )
      *a4 = -1072693248;
    return 0;
  }
}
