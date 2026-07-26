/*
 * XREFs of ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00B67B0
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00B6980 (ndisPnPAddDevice.c)
 * Callees:
 *     WPP_SF_S @ 0x1C0062434 (WPP_SF_S.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00B7824 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00BADAC (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsFullMigration(__int64 a1, __int64 a2, char *a3)
{
  void *v3; // rbx
  const wchar_t *v5; // rax
  __int64 v7; // r9
  unsigned int v8; // edi
  unsigned int v9; // eax
  char v10; // al
  int v12; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v13; // [rsp+28h] [rbp-10h]
  void *v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v14 = 0LL;
  v12 = 0;
  v5 = L"RetiredNetCfgInstanceId";
  v13 = 0LL;
  v7 = 0x7FFFLL;
  while ( *v5 )
  {
    ++v5;
    if ( !--v7 )
    {
      v8 = -1073741811;
      goto LABEL_9;
    }
  }
  v13 = L"RetiredNetCfgInstanceId";
  LOWORD(v12) = 2 * (0x7FFF - v7);
  HIWORD(v12) = v12 + 2;
  v9 = KRegKey::QueryValueString(a1, &v12, &v14);
  v8 = v9;
  if ( v9 == -1073741772 )
  {
    v10 = 0;
  }
  else
  {
    if ( v9 || !ndisIsInNetSetupMode() )
      goto LABEL_8;
    if ( (unsigned __int8)byte_1C0099614 >= 3u )
      WPP_SF_S(0x39u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, *(const wchar_t **)(*(_QWORD *)a2 + 8LL));
    v10 = 1;
  }
  *a3 = v10;
  v8 = 0;
LABEL_8:
  v3 = v14;
LABEL_9:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x7274534Bu);
  return v8;
}
