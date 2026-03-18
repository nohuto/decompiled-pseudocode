/*
 * XREFs of sub_1400035B0 @ 0x1400035B0
 * Callers:
 *     <none>
 * Callees:
 *     _get_image_app_type @ 0x140004024 (_get_image_app_type.c)
 *     _matherr @ 0x140004070 (_matherr.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 sub_1400035B0()
{
  int v0; // eax
  int v1; // eax
  bool v2; // zf
  _crt_app_type image_app_type; // eax

  if ( LOWORD(_ImageBase.unused) != 23117 || *(int *)((char *)&_ImageBase.unused + (int)off_14000003C) != 17744 )
    goto LABEL_2;
  v1 = *(unsigned __int16 *)((char *)&word_140000018 + (int)off_14000003C);
  if ( v1 != 267 )
  {
    if ( v1 == 523 )
    {
      v0 = 0;
      if ( *(_DWORD *)&byte_140000040[(int)off_14000003C + 68] <= 0xEu )
        goto LABEL_11;
      v2 = *(int *)((char *)&dword_1400000F8 + (int)off_14000003C) == 0;
      goto LABEL_10;
    }
LABEL_2:
    v0 = 0;
    goto LABEL_11;
  }
  v0 = 0;
  if ( *(_DWORD *)&byte_140000040[(int)off_14000003C + 52] <= 0xEu )
    goto LABEL_11;
  v2 = *(int *)((char *)&dword_1400000E8 + (int)off_14000003C) == 0;
LABEL_10:
  LOBYTE(v0) = !v2;
LABEL_11:
  dword_14000F2B0 = v0;
  image_app_type = (unsigned int)get_image_app_type(2LL);
  __set_app_type(image_app_type);
  _onexitend = -1LL;
  _onexitbegin = -1LL;
  _fmode = fmode;
  _commode = commode;
  matherr(*(struct _exception **)&_commode);
  if ( !_defaultmatherr )
    __setusermatherr(matherr);
  return 0LL;
}
