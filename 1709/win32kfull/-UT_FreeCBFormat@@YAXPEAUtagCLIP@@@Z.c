/*
 * XREFs of ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00C5738
 * Callers:
 *     xxxEmptyClipboard @ 0x1C00C55F4 (xxxEmptyClipboard.c)
 *     InternalSetClipboardData @ 0x1C00C5D58 (InternalSetClipboardData.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C013EB70 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F4338 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F44C0 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F4684 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     HMUnlockDestroyObject @ 0x1C00C5804 (HMUnlockDestroyObject.c)
 *     GreDeleteServerMetaFile @ 0x1C0140878 (GreDeleteServerMetaFile.c)
 */

void __fastcall UT_FreeCBFormat(struct tagCLIP *a1)
{
  unsigned __int64 v1; // r8
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rax

  v1 = *((_QWORD *)a1 + 1);
  if ( !v1 )
    return;
  v3 = (unsigned int)(*(_DWORD *)a1 - 2);
  if ( *(_DWORD *)a1 == 2 )
    goto LABEL_19;
  v3 = (unsigned int)(*(_DWORD *)a1 - 3);
  if ( *(_DWORD *)a1 == 3 )
  {
LABEL_18:
    v4 = 3;
    goto LABEL_12;
  }
  v3 = (unsigned int)(*(_DWORD *)a1 - 9);
  if ( *(_DWORD *)a1 == 9 )
  {
LABEL_19:
    v4 = 1;
    goto LABEL_12;
  }
  v3 = (unsigned int)(*(_DWORD *)a1 - 14);
  if ( *(_DWORD *)a1 == 14 )
    goto LABEL_18;
  v3 = (unsigned int)(*(_DWORD *)a1 - 128);
  if ( *(_DWORD *)a1 != 128 )
  {
    v3 = (unsigned int)(*(_DWORD *)a1 - 130);
    if ( *(_DWORD *)a1 != 130 )
    {
      v3 = (unsigned int)(*(_DWORD *)a1 - 131);
      if ( *(_DWORD *)a1 != 131 && *(_DWORD *)a1 != 142 )
      {
        v4 = 2;
        goto LABEL_12;
      }
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  v4 = 0;
LABEL_12:
  if ( !v4 )
  {
    if ( !*((_DWORD *)a1 + 4) )
      return;
    goto LABEL_16;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
      if ( v1 - 1 <= 1 )
        return;
LABEL_16:
      LOBYTE(v3) = 6;
      v7 = HMValidateHandleNoSecure(v1, v3, v1, (__int64)a1);
      if ( v7 )
        HMUnlockDestroyObject(v7);
      return;
    }
    if ( v6 == 1 && v1 - 3 > 1 )
      GreDeleteServerMetaFile(v1);
  }
  else if ( v1 != 2 )
  {
    GreDeleteObject(v1);
  }
}
