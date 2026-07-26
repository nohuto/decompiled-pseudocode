/*
 * XREFs of ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00AFDF0
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00AF8C0 (ndisPnPAddDevice.c)
 * Callees:
 *     WPP_SF_S @ 0x1C0061AA8 (WPP_SF_S.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B1994 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00B4154 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsFullMigration(__int64 a1, __int64 a2, _BYTE *a3)
{
  void *v3; // rbx
  const wchar_t *v5; // rax
  __int64 v7; // r9
  unsigned int v8; // edi
  unsigned int v9; // eax
  int v11; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v12; // [rsp+28h] [rbp-10h]
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v13 = 0LL;
  v11 = 0;
  v5 = L"RetiredNetCfgInstanceId";
  v12 = 0LL;
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
  v12 = L"RetiredNetCfgInstanceId";
  LOWORD(v11) = 2 * (0x7FFF - v7);
  HIWORD(v11) = v11 + 2;
  v9 = KRegKey::QueryValueString(a1, &v11, &v13);
  v8 = v9;
  if ( v9 == -1073741772 )
  {
    *a3 = 0;
  }
  else
  {
    if ( v9 || !ndisIsInNetSetupMode() )
      goto LABEL_8;
    if ( (unsigned __int8)byte_1C0098754 >= 3u )
      WPP_SF_S(0x39u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, *(const wchar_t **)(*(_QWORD *)a2 + 8LL));
    *a3 = 1;
  }
  v8 = 0;
LABEL_8:
  v3 = v13;
LABEL_9:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x7274534Bu);
  return v8;
}
