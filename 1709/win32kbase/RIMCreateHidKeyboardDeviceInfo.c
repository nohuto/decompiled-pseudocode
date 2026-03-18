/*
 * XREFs of RIMCreateHidKeyboardDeviceInfo @ 0x1C0112B38
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000D844 (RIMAllocateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     rimRegQueryRegistryDWord @ 0x1C008CEA4 (rimRegQueryRegistryDWord.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C0112E18 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C01132A8 (rimHidKeyboardIsButtonDevice.c)
 *     rimReadHidKeyboardFlags @ 0x1C011379C (rimReadHidKeyboardFlags.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C01139AC (rimValidateCustomHidKeyboardUsages.c)
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
  __int64 v17; // rcx
  void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  int v30; // [rsp+70h] [rbp+8h] BYREF

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
  v30 = 0;
  *(_QWORD *)(a2 + 480) = v8;
  IsButtonDevice = rimContainsCustomHidKeyboardUsages(v12, v11, a3, (_DWORD)a4, (__int64)&v30);
  if ( IsButtonDevice < 0 )
    goto LABEL_22;
  if ( !v30 )
  {
    *((_DWORD *)v8 + 93) = 1;
    IsButtonDevice = rimHidKeyboardIsButtonDevice(v14, v13, a3, (_DWORD)a4, (__int64)(v8 + 372));
    if ( IsButtonDevice >= 0 )
      goto LABEL_15;
LABEL_22:
    v23 = *(_QWORD **)(a2 + 480);
    if ( v23 )
    {
      --*(_BYTE *)(a1 + 960);
      v24 = v23[43];
      if ( v24 )
      {
        Win32FreePool(v24);
        v23[43] = 0LL;
      }
      v25 = v23[49];
      if ( v25 )
      {
        Win32FreePool(v25);
        v23[49] = 0LL;
      }
      v26 = v23[51];
      if ( v26 )
      {
        Win32FreePool(v26);
        v23[51] = 0LL;
      }
      v27 = v23[55];
      if ( v27 )
      {
        Win32FreePool(v27);
        v23[55] = 0LL;
      }
      Win32FreePool((__int64)v23);
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
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0x14u,
      (__int64)&WPP_c744f49e6dab323e720a14bebb6445e2_Traceguids);
    *v15 |= 0x400u;
  }
  ++*((_DWORD *)v8 + 90);
LABEL_15:
  v17 = a4[23];
  *((_DWORD *)v8 + 88) = a4[23];
  v18 = (void *)Win32AllocPoolNonPaged(2 * v17, 0x626B4852u);
  *((_QWORD *)v8 + 43) = v18;
  if ( !v18 )
    goto LABEL_4;
  memset(v18, 0, 2LL * *((unsigned int *)v8 + 88));
  if ( (*((_DWORD *)v8 + 92) & 0x400) != 0 )
  {
    v19 = a4[3];
    *((_DWORD *)v8 + 100) = a4[3];
    v20 = Win32AllocPoolNonPaged(v19, 0x626B4852u);
    *((_QWORD *)v8 + 49) = v20;
    if ( !v20 )
      goto LABEL_4;
    v21 = a4[26];
    *((_DWORD *)v8 + 104) = a4[26];
    v22 = Win32AllocPoolNonPaged(2 * v21, 0x626B4852u);
    *((_QWORD *)v8 + 51) = v22;
    if ( !v22 )
      goto LABEL_4;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\KEYBOARD");
  if ( (unsigned int)rimRegQueryRegistryDWord(&DestinationString, L"EnableStartOnIdle", 0) )
    *((_DWORD *)v8 + 108) = 1;
  return (unsigned int)IsButtonDevice;
}
