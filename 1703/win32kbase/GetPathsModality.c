/*
 * XREFs of GetPathsModality @ 0x1C0057970
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00F6AEC (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00F95B0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0057940 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0057A4C (-AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPathsModality(
        __int64 a1,
        struct _D3DKMT_GETPATHSMODALITY **a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  unsigned __int16 v7; // ax
  struct _D3DKMT_GETPATHSMODALITY *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  int v13; // edi
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // [rsp+30h] [rbp+8h] BYREF

  v18 = a1;
  if ( a3 == 32 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v16);
  }
  v7 = 8;
  LOWORD(v18) = 8;
  do
  {
    if ( !*a2 )
    {
      v8 = AllocPathsModality(v7);
      *a2 = v8;
      if ( !v8 )
      {
        v17 = WdLogNewEntry5_WdError(v10, v9, v11);
        *(_QWORD *)(v17 + 24) = (unsigned __int16)v18;
        WdLogEvent5_WdError(v17);
        return 3221225495LL;
      }
    }
    v12 = ((__int64 (__fastcall *)(_QWORD, struct _D3DKMT_GETPATHSMODALITY *, int *))qword_1C018B9B8)(a3, *a2, &v18);
    v13 = v12;
    if ( v12 == -1073741789
      || v12 >= 0 && a4 + (unsigned int)*((unsigned __int16 *)*a2 + 10) > *((unsigned __int16 *)*a2 + 11) )
    {
      FreePathsModality(*a2);
      v15 = v18;
      v13 = -1073741789;
      *a2 = 0LL;
      v7 = a4 + v15;
      LOWORD(v18) = v7;
    }
    else
    {
      v7 = v18;
    }
  }
  while ( v13 == -1073741789 );
  if ( v13 < 0 )
  {
    FreePathsModality(*a2);
    *a2 = 0LL;
  }
  return (unsigned int)v13;
}
