/*
 * XREFs of ndisIfReadInterfaceAddDeviceParametersForLWMiniport @ 0x1C00DDA04
 * Callers:
 *     ndisLWMCreateMiniport @ 0x1C00EC7B8 (ndisLWMCreateMiniport.c)
 * Callees:
 *     ndisIfOpenInterfacePersistedStorage @ 0x1C00B6F6C (ndisIfOpenInterfacePersistedStorage.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00BADAC (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C00BAED8 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 */

__int64 __fastcall ndisIfReadInterfaceAddDeviceParametersForLWMiniport(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  const wchar_t *v4; // rax
  int v5; // ebx
  int v6; // edx
  __int16 v7; // ax
  const wchar_t *v8; // rax
  __int64 v9; // rcx
  __int16 v10; // di
  struct _UNICODE_STRING v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v13; // [rsp+50h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF

  Handle = 0LL;
  v2 = ndisIfOpenInterfacePersistedStorage((unsigned int *)a1, (KRegKey *)&Handle, 1u);
  if ( v2 >= 0 )
  {
    *(_DWORD *)&v12.Length = 0;
    v12.Buffer = 0LL;
    v3 = 0x7FFFLL;
    v4 = L"IfDescr";
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v3;
    }
    while ( v3 );
    v5 = -1073741811;
    v6 = -1073741811;
    if ( v3 )
    {
      v6 = 0;
      v7 = 0x7FFF - v3;
    }
    else
    {
      v7 = 0;
    }
    if ( v3 )
    {
      v12.Buffer = L"IfDescr";
      v12.Length = 2 * v7;
      v12.MaximumLength = 2 * v7 + 2;
      v6 = KRegKey::QueryValueString(&Handle, &v12, (void **)(a1 + 88));
    }
    if ( v6 >= 0 )
    {
      *(_DWORD *)&v12.Length = 0;
      v8 = L"IsLightWeight";
      v12.Buffer = 0LL;
      v9 = 0x7FFFLL;
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v9;
      }
      while ( v9 );
      if ( v9 )
        v5 = 0;
      v10 = 0x7FFF - v9;
      if ( v9 )
      {
        v12.Buffer = L"IsLightWeight";
        v12.Length = 2 * v10;
        v12.MaximumLength = 2 * v10 + 2;
        v5 = KRegKey::QueryValueBoolean((KRegKey *)&Handle, &v12, &v13, DefaultToFalse);
      }
      if ( v5 >= 0 )
      {
        v2 = 0;
        *(_BYTE *)(a1 + 73) = v13 != 0;
      }
      else
      {
        v2 = -1073741491;
      }
    }
    else
    {
      v2 = -1073741491;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v2;
}
