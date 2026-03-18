/*
 * XREFs of DxgkUpdateDpiInfoForNewOverride @ 0x1C01BC220
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C003C1A4 (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00A5188 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C00AD4B0 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C01BC07C (-WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateDpiInfoForNewOverride(
        struct _LUID *a1,
        unsigned int a2,
        unsigned int a3,
        struct _DPI_INFORMATION *a4)
{
  int Win32DpiValues; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // ecx
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  memset(v16, 0, 0x20uLL);
  Win32DpiValues = QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v16);
  v11 = Win32DpiValues;
  if ( Win32DpiValues >= 0 )
  {
    UpdateScaleFactorForOverride(a4, a3, (const struct _DPI_SCALE_FACTOR_COLLECTION *)v16);
    LODWORD(v11) = WriteDpiToRegistry(a1, a2, a3);
    if ( (int)v11 >= 0 )
    {
      v14 = dword_1C006F954;
      if ( (*((_BYTE *)a4 + 92) & 0x20) != 0 )
        v14 = a3;
      dword_1C006F954 = v14;
    }
    LogScaleFactor(*a1, a2, 0, a4);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v13);
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v11;
}
