/*
 * XREFs of ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C00DFE5C
 * Callers:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x1C00DFD18 (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C00DFDC4 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DX_MD5Final@@YAXPEAUMD5_CTX@@@Z @ 0x1C00DFF28 (-DX_MD5Final@@YAXPEAUMD5_CTX@@@Z.c)
 *     ?DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z @ 0x1C00E0918 (-DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z.c)
 */

__int64 __fastcall CcdCreateMd5Checksum(const unsigned __int8 *a1, unsigned int a2, unsigned __int8 *a3)
{
  char *v6; // rax
  __int64 v7; // rcx
  char *v8; // rbx
  __int64 v10; // rax

  if ( !a1 || !a3 )
    return 3221225485LL;
  v6 = (char *)operator new(0x68uLL, 0x63644356u, PagedPool);
  v8 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x68uLL);
    *(_QWORD *)a3 = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
    *((_DWORD *)v8 + 1) = 0;
    *(_DWORD *)v8 = 0;
    *((_DWORD *)v8 + 2) = 1732584193;
    *((_DWORD *)v8 + 3) = -271733879;
    *((_DWORD *)v8 + 4) = -1732584194;
    *((_DWORD *)v8 + 5) = 271733878;
    DX_MD5Update((struct MD5_CTX *)v8, a1, a2);
    DX_MD5Final((struct MD5_CTX *)v8);
    *(_OWORD *)a3 = *(_OWORD *)(v8 + 88);
    ExFreePoolWithTag(v8, 0);
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v7);
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
}
