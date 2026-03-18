/*
 * XREFs of ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CF034
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C004BB3C (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvFunctionalizeBaseVidMode(
        const struct _RETRY_MODE *a1,
        struct D3DKMT_GETPATHSMODALITY *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned int CcdRawmodeFlag; // eax
  __int64 v13; // rcx

  v4 = 0;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_DWORD *)a1 + 1);
  if ( v8 == -1 )
  {
    if ( *((_DWORD *)a1 + 2) == -1 )
    {
      if ( *((_WORD *)a2 + 10) )
      {
        v9 = *((_QWORD *)a2 + 6);
        do
        {
          ++v4;
          v9 &= 0xFFFFFBFFFF7CFE78uLL;
          *((_QWORD *)a2 + 6) = v9;
        }
        while ( v4 < *((unsigned __int16 *)a2 + 10) );
      }
      goto LABEL_14;
    }
  }
  else if ( !v8 )
  {
    goto LABEL_14;
  }
  if ( *((_DWORD *)a1 + 2) )
  {
    if ( *((_WORD *)a2 + 10) != 1 )
    {
      v10 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL, a2, a3, a4);
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = *((_QWORD *)a2 + 6) & 0xFFFFFBFFFF7EFF7CuLL;
    *((_BYTE *)a2 + 176) = 0;
    *((_DWORD *)a2 + 45) = 1;
    *((_QWORD *)a2 + 6) = v11 | 0x20304;
    *((_DWORD *)a2 + 32) = 9;
    *((_DWORD *)a2 + 50) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 51) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 36) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 37) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 38) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 39) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 41) = 21;
    *((_DWORD *)a2 + 40) = 0;
    *((_QWORD *)a2 + 21) = 0LL;
  }
LABEL_14:
  CcdRawmodeFlag = GetCcdRawmodeFlag();
  v13 = CcdRawmodeFlag;
  LODWORD(v13) = CcdRawmodeFlag | 0x8000;
  return ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C01A1A10)(v13, a2);
}
