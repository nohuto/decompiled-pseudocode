/*
 * XREFs of ?CheckRuntimeBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01E9474
 * Callers:
 *     ?CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01E9174 (-CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C01E9568 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C01E9778 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 *     DxgkFreeUnicodeString @ 0x1C01F03D8 (DxgkFreeUnicodeString.c)
 */

__int64 __fastcall DXGADAPTER::CheckRuntimeBlockList(
        unsigned __int16 **this,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5)
{
  int BlockListStrings; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // rax
  struct _UNICODE_STRING *v11; // rdi
  unsigned int v13[4]; // [rsp+40h] [rbp-178h] BYREF
  struct _UNICODE_STRING v14; // [rsp+50h] [rbp-168h] BYREF

  v13[0] = 0;
  BlockListStrings = FindBlockListStrings(
                       L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BlockList\\Runtime",
                       a2,
                       a3,
                       a4,
                       a5,
                       v13,
                       &v14);
  v8 = v13[0];
  v9 = BlockListStrings;
  if ( v13[0] >= 0x14 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v10 + 24) = 753LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( (_DWORD)v8 )
  {
    v13[0] = 0;
    v9 = ConvertStringsToOneMultiString(&v14, v8, this + 508, v13);
    if ( v9 >= 0 )
      *((_DWORD *)this + 1018) = 2 * v13[0];
    if ( v9 == -1073741637 )
      *((_BYTE *)this + 4076) = 1;
    v11 = &v14;
    do
    {
      DxgkFreeUnicodeString(v11++);
      --v8;
    }
    while ( v8 );
  }
  return (unsigned int)v9;
}
