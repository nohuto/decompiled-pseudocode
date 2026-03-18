/*
 * XREFs of ViXdvDriverLoadImage @ 0x140767714
 * Callers:
 *     VfDriverLoadImage @ 0x140761DB4 (VfDriverLoadImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14008B8F0 (RtlImageDirectoryEntryToData.c)
 *     strcmp @ 0x14016B2C0 (strcmp.c)
 *     VfUtilDbgPrint @ 0x14024FF14 (VfUtilDbgPrint.c)
 *     ViXdvSetXdvKernelUtilities @ 0x1402503B0 (ViXdvSetXdvKernelUtilities.c)
 *     ViXdvBindXdvDDIWrappers @ 0x140767500 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x1407675EC (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvGetFuncAddress @ 0x1407678F8 (ViXdvGetFuncAddress.c)
 */

char __fastcall ViXdvDriverLoadImage(__int64 a1)
{
  char *v1; // rsi
  char v2; // r14
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  char v6; // r12
  char *v7; // r13
  char v8; // r15
  __int64 v9; // rdi
  const char *v10; // rbp
  __int64 (__fastcall *FuncAddress)(_QWORD); // rax
  __int64 (*v12)(void); // rax
  void (__fastcall *v13)(__int64 (__fastcall **)(PCONTEXT)); // rax
  ULONG v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(char **)(a1 + 48);
  v2 = 1;
  v3 = RtlImageDirectoryEntryToData(v1, 1u, 0, &v14);
  v4 = v3;
  if ( !v3 || !v3[6] )
    return 0;
  v6 = 0;
  v7 = &v1[v3[8]];
  v8 = 0;
  v9 = 0LL;
  do
  {
    v10 = &v1[*(unsigned int *)&v7[4 * v9]];
    if ( !strcmp("GetXdvDDIWrappers", v10) )
    {
      FuncAddress = (__int64 (__fastcall *)(_QWORD))ViXdvGetFuncAddress(v1, v4, (unsigned int)v9);
      v6 = ViXdvBindXdvDDIWrappers(FuncAddress);
      if ( v6 != 1 )
        VfUtilDbgPrint("Error on Verifier Extention DDI bound process\n");
    }
    else if ( !strcmp("GetXdvDriverEntryWrappers", v10) )
    {
      v12 = (__int64 (*)(void))ViXdvGetFuncAddress(v1, v4, (unsigned int)v9);
      v8 = ViXdvBindXdvDriverEntryWrappers(v12);
      if ( v8 != 1 )
        VfUtilDbgPrint("Error on Verifier Extention entry point bound process\n");
    }
    else if ( !strcmp("SetXdvKernelUtilities", v10) )
    {
      v13 = (void (__fastcall *)(__int64 (__fastcall **)(PCONTEXT)))ViXdvGetFuncAddress(v1, v4, (unsigned int)v9);
      if ( !ViXdvSetXdvKernelUtilities(v13) )
        VfUtilDbgPrint("Error on providing kernel utilities to  XDV.\n");
    }
    else if ( !strcmp("XdvHibernationNotification", v10) )
    {
      ViFnExtensionHiberFunc = (PVOID)ViXdvGetFuncAddress(v1, v4, (unsigned int)v9);
    }
    else if ( !strcmp("XdvNotifyExtensions", v10) )
    {
      ViFnXdvNotifyExtensions = ViXdvGetFuncAddress(v1, v4, (unsigned int)v9);
    }
    else if ( !strcmp("XdvQueryDispatchTable", v10) )
    {
      ViFnXdvQueryDispatchTable = (__int64 (__fastcall *)(_QWORD))ViXdvGetFuncAddress(v1, v4, (unsigned int)v9);
    }
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < v4[6] );
  if ( !v6 || !v8 )
    return 0;
  return v2;
}
