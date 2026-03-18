/*
 * XREFs of GetPathsModality @ 0x1C0066F68
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00F7B70 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00F9720 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0066F38 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0067044 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPathsModality(__int64 a1, struct D3DKMT_GETPATHSMODALITY **a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // si
  unsigned int v5; // ebp
  unsigned __int16 v7; // ax
  struct D3DKMT_GETPATHSMODALITY *v8; // rax
  int v9; // eax
  int v10; // edi
  __int16 v12; // ax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1;
  v4 = a4;
  v5 = a3;
  if ( (_DWORD)a3 == 32 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  v7 = 8;
  LOWORD(v15) = 8;
  do
  {
    if ( !*a2 )
    {
      v8 = AllocPathsModality(v7);
      *a2 = v8;
      if ( !v8 )
      {
        v14 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v14 + 24) = (unsigned __int16)v15;
        WdLogEvent5_WdError(v14);
        return 3221225495LL;
      }
    }
    v9 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, int *))qword_1C0190620)(v5, *a2, &v15);
    v10 = v9;
    if ( v9 == -1073741789
      || v9 >= 0 && v4 + (unsigned int)*((unsigned __int16 *)*a2 + 10) > *((unsigned __int16 *)*a2 + 11) )
    {
      FreePathsModality(*a2);
      v12 = v15;
      v10 = -1073741789;
      *a2 = 0LL;
      v7 = v4 + v12;
      LOWORD(v15) = v7;
    }
    else
    {
      v7 = v15;
    }
  }
  while ( v10 == -1073741789 );
  if ( v10 < 0 )
  {
    FreePathsModality(*a2);
    *a2 = 0LL;
  }
  return (unsigned int)v10;
}
