/*
 * XREFs of ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C006CF80
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CD344 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngQueryWin32Info(struct _DXGK_QUERY_WIN32_INFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v6; // rcx
  int v7; // ecx
  _DWORD *v8; // rax
  _DWORD *v9; // rsi
  __int64 result; // rax
  __int64 v11; // rax

  v5 = 0;
  v6 = *(unsigned int *)a1;
  if ( !(_DWORD)v6 )
  {
    v9 = (_DWORD *)*((_QWORD *)a1 + 1);
    if ( *((_DWORD *)a1 + 1) != 4 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
      WdLogEvent5_WdAssertion(v11);
    }
    if ( gDrvDpiWin8Style )
      v5 = gdmLogPixels;
    *v9 = v5;
    return 0LL;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    if ( *((_DWORD *)a1 + 1) == 4 )
    {
      if ( gProtocolType )
      {
        v8 = (_DWORD *)*((_QWORD *)a1 + 1);
        if ( gProtocolType == -1 )
          *v8 = 0xFFFF;
        else
          *v8 = 2;
      }
      else
      {
        **((_DWORD **)a1 + 1) = 0;
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( v7 == 1 )
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
