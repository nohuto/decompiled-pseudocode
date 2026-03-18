/*
 * XREFs of ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C0166AD0
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1C0166BB4 (-TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00026C0 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?GenerateUmdFileName@@YAJQEAGPEBG1@Z @ 0x1C01662C4 (-GenerateUmdFileName@@YAJQEAGPEBG1@Z.c)
 */

__int64 __fastcall TranslateUmdFileNameToVm(unsigned __int16 *a1, unsigned int a2, unsigned int *a3)
{
  wchar_t *v6; // rax
  const unsigned __int16 *v7; // rdx
  int UmdFileName; // ebx
  __int64 v9; // rdx
  unsigned __int16 *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int16 v15[4]; // [rsp+20h] [rbp-248h] BYREF
  unsigned __int16 v16[260]; // [rsp+28h] [rbp-240h] BYREF

  a1[a2 - 1] = 0;
  _wcslwr(a1);
  v6 = wcsstr(a1, L"\\filerepository\\");
  UmdFileName = 0;
  if ( v6 )
  {
    UmdFileName = GenerateUmdFileName((char *)v15, v7, (size_t *)v6);
    if ( UmdFileName < 0 )
      goto LABEL_9;
    UmdFileName = RtlStringCbCopyW((char *)a1, 2LL * a2, (char *)v16);
    if ( UmdFileName < 0 )
    {
      if ( a3 )
      {
        UmdFileName = -2147483643;
        v10 = v15;
        v12 = -1LL;
        do
          ++v12;
        while ( v15[v12] );
        *a3 = 2 * v12 + 2;
      }
      if ( UmdFileName < 0 )
      {
LABEL_9:
        v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
        *(_QWORD *)(v13 + 24) = UmdFileName;
        WdLogEvent5_WdWarning(v13);
      }
    }
  }
  return (unsigned int)UmdFileName;
}
