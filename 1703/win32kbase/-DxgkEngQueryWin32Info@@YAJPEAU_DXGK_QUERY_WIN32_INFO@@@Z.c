/*
 * XREFs of ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C008C1E0
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngQueryWin32Info(struct _DXGK_QUERY_WIN32_INFO *a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  int v5; // ecx
  _DWORD *v6; // rax
  __int64 result; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rax

  v3 = 0;
  v4 = *(unsigned int *)a1;
  if ( !(_DWORD)v4 )
  {
    v8 = (_DWORD *)*((_QWORD *)a1 + 1);
    if ( *((_DWORD *)a1 + 1) != 4 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v4, a2);
      WdLogEvent5_WdAssertion(v9);
    }
    if ( gDrvDpiWin8Style )
      v3 = gdmLogPixels;
    *v8 = v3;
    return 0LL;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    if ( *((_DWORD *)a1 + 1) == 4 )
    {
      if ( gProtocolType )
      {
        v6 = (_DWORD *)*((_QWORD *)a1 + 1);
        if ( gProtocolType == -1 )
          *v6 = 0xFFFF;
        else
          *v6 = 2;
      }
      else
      {
        **((_DWORD **)a1 + 1) = 0;
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( v5 == 1 )
  {
    if ( *((_DWORD *)a1 + 1) == 1 )
    {
      **((_BYTE **)a1 + 1) = gbTtmEnabled;
      return 0LL;
    }
    return 3221225485LL;
  }
  result = IsDxgkEngQueryWin32InfoPlatformSupported();
  if ( (int)result >= 0 )
    return DxgkEngQueryWin32InfoPlatform(a1);
  return result;
}
