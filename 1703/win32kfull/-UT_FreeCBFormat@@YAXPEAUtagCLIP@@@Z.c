/*
 * XREFs of ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00AE880
 * Callers:
 *     xxxEmptyClipboard @ 0x1C00AE73C (xxxEmptyClipboard.c)
 *     InternalSetClipboardData @ 0x1C00AF078 (InternalSetClipboardData.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0137CF8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E8320 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E84A0 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E8664 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 */

void __fastcall UT_FreeCBFormat(struct tagCLIP *a1)
{
  unsigned __int64 v1; // r8
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rax

  v1 = *((_QWORD *)a1 + 1);
  if ( !v1 )
    return;
  switch ( *(_DWORD *)a1 )
  {
    case 2:
      goto LABEL_19;
    case 3:
LABEL_18:
      v3 = 3;
      goto LABEL_12;
    case 9:
LABEL_19:
      v3 = 1;
      goto LABEL_12;
    case 0xE:
      goto LABEL_18;
  }
  if ( *(_DWORD *)a1 != 128 )
  {
    if ( *(_DWORD *)a1 != 130 )
    {
      if ( *(_DWORD *)a1 != 131 && *(_DWORD *)a1 != 142 )
      {
        v3 = 2;
        goto LABEL_12;
      }
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  v3 = 0;
LABEL_12:
  if ( !v3 )
  {
    if ( !*((_DWORD *)a1 + 4) )
      return;
    goto LABEL_16;
  }
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      if ( v1 - 1 <= 1 )
        return;
LABEL_16:
      v6 = HMValidateHandleNoSecure(v1, 6);
      if ( v6 )
        HMUnlockDestroyObject(v6);
      return;
    }
    if ( v5 == 1 && v1 - 3 > 1 )
      GreDeleteServerMetaFile(v1);
  }
  else if ( v1 != 2 )
  {
    GreDeleteObject(v1);
  }
}
