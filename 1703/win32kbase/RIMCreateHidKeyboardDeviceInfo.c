/*
 * XREFs of RIMCreateHidKeyboardDeviceInfo @ 0x1C0114064
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     rimRegQueryRegistryDWord @ 0x1C0090F10 (rimRegQueryRegistryDWord.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C0114344 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C01147D4 (rimHidKeyboardIsButtonDevice.c)
 *     rimReadHidKeyboardFlags @ 0x1C0114CC8 (rimReadHidKeyboardFlags.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C0114ED8 (rimValidateCustomHidKeyboardUsages.c)
 */

__int64 __fastcall RIMCreateHidKeyboardDeviceInfo(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  char *v8; // rdi
  int IsButtonDevice; // ebx
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  _DWORD *v15; // r14
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  int v31; // [rsp+70h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 76) & 0x20) == 0 || (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
    return (unsigned int)-1073741668;
  v8 = (char *)Win32AllocPoolZInit(0x1C0uLL, 1651198034LL);
  if ( !v8 )
    goto LABEL_4;
  v10 = Win32AllocPool(a4[2], 0x626B4852u);
  *((_QWORD *)v8 + 55) = v10;
  if ( !v10 )
  {
    Win32FreePool((__int64)v8);
LABEL_4:
    IsButtonDevice = -1073741801;
    goto LABEL_22;
  }
  v31 = 0;
  *(_QWORD *)(a2 + 480) = v8;
  IsButtonDevice = rimContainsCustomHidKeyboardUsages(v12, v11, a3, (_DWORD)a4, (__int64)&v31);
  if ( IsButtonDevice < 0 )
    goto LABEL_22;
  if ( !v31 )
  {
    *((_DWORD *)v8 + 93) = 1;
    IsButtonDevice = rimHidKeyboardIsButtonDevice(v14, v13, a3, (_DWORD)a4, (__int64)(v8 + 372));
    if ( IsButtonDevice >= 0 )
      goto LABEL_15;
LABEL_22:
    v24 = *(_QWORD **)(a2 + 480);
    if ( v24 )
    {
      --*(_BYTE *)(a1 + 960);
      v25 = v24[43];
      if ( v25 )
      {
        Win32FreePool(v25);
        v24[43] = 0LL;
      }
      v26 = v24[49];
      if ( v26 )
      {
        Win32FreePool(v26);
        v24[49] = 0LL;
      }
      v27 = v24[51];
      if ( v27 )
      {
        Win32FreePool(v27);
        v24[51] = 0LL;
      }
      v28 = v24[55];
      if ( v28 )
      {
        Win32FreePool(v28);
        v24[55] = 0LL;
      }
      Win32FreePool((__int64)v24);
      *(_QWORD *)(a2 + 480) = 0LL;
    }
    return (unsigned int)IsButtonDevice;
  }
  v15 = v8 + 368;
  IsButtonDevice = rimReadHidKeyboardFlags(v8 + 368);
  if ( IsButtonDevice < 0 )
    goto LABEL_22;
  IsButtonDevice = rimValidateCustomHidKeyboardUsages(v16, a2, a3, a4);
  if ( IsButtonDevice < 0 )
    goto LABEL_22;
  *((_DWORD *)v8 + 93) = 0;
  if ( (*v15 & 0x400) == 0 )
  {
    LOBYTE(v17) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      18,
      20,
      (__int64)&WPP_c744f49e6dab323e720a14bebb6445e2_Traceguids);
    *v15 |= 0x400u;
  }
  ++*((_DWORD *)v8 + 90);
LABEL_15:
  v18 = a4[23];
  *((_DWORD *)v8 + 88) = a4[23];
  v19 = (void *)Win32AllocPoolNonPaged(2 * v18, 0x626B4852u);
  *((_QWORD *)v8 + 43) = v19;
  if ( !v19 )
    goto LABEL_4;
  memset(v19, 0, 2LL * *((unsigned int *)v8 + 88));
  if ( (*((_DWORD *)v8 + 92) & 0x400) != 0 )
  {
    v20 = a4[3];
    *((_DWORD *)v8 + 100) = a4[3];
    v21 = Win32AllocPoolNonPaged(v20, 0x626B4852u);
    *((_QWORD *)v8 + 49) = v21;
    if ( !v21 )
      goto LABEL_4;
    v22 = a4[26];
    *((_DWORD *)v8 + 104) = a4[26];
    v23 = Win32AllocPoolNonPaged(2 * v22, 0x626B4852u);
    *((_QWORD *)v8 + 51) = v23;
    if ( !v23 )
      goto LABEL_4;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\KEYBOARD");
  if ( (unsigned int)rimRegQueryRegistryDWord(&DestinationString, L"EnableStartOnIdle", 0) )
    *((_DWORD *)v8 + 108) = 1;
  return (unsigned int)IsButtonDevice;
}
