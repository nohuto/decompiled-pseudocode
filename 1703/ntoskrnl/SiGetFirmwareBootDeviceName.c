/*
 * XREFs of SiGetFirmwareBootDeviceName @ 0x140569680
 * Callers:
 *     SiGetSystemPartition @ 0x140569620 (SiGetSystemPartition.c)
 *     SiGetSystemDisk @ 0x1405986E0 (SiGetSystemDisk.c)
 * Callees:
 *     SiValidateSystemPartition @ 0x14012FD6C (SiValidateSystemPartition.c)
 *     wcsstr @ 0x14016BDC0 (wcsstr.c)
 *     swprintf_s @ 0x14016EB70 (swprintf_s.c)
 *     _snwscanf_s @ 0x14016F540 (_snwscanf_s.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SiTranslateSymbolicLink @ 0x14056988C (SiTranslateSymbolicLink.c)
 *     SiGetFirmwareBootDeviceNameFromRegistry @ 0x140569AFC (SiGetFirmwareBootDeviceNameFromRegistry.c)
 */

__int64 __fastcall SiGetFirmwareBootDeviceName(int a1, char a2, _QWORD *a3)
{
  WCHAR *v3; // r14
  WCHAR *v4; // rsi
  PVOID v5; // rdi
  int FirmwareBootDeviceNameFromRegistry; // eax
  wchar_t *v8; // r12
  int v9; // ebx
  __int64 v10; // r15
  __int64 v11; // rbx
  size_t v12; // rbx
  wchar_t *PoolWithTag; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  wchar_t *v18; // rax
  SIZE_T v19; // r15
  WCHAR *v20; // rax
  char v21; // [rsp+40h] [rbp-28h] BYREF
  char v22; // [rsp+44h] [rbp-24h] BYREF
  PVOID P; // [rsp+48h] [rbp-20h]
  wchar_t *Src; // [rsp+50h] [rbp-18h] BYREF
  int v27; // [rsp+C0h] [rbp+58h] BYREF
  int v28; // [rsp+C8h] [rbp+60h] BYREF

  v3 = 0LL;
  P = 0LL;
  v4 = 0LL;
  Src = 0LL;
  v5 = 0LL;
  *a3 = 0LL;
  FirmwareBootDeviceNameFromRegistry = SiGetFirmwareBootDeviceNameFromRegistry(&Src);
  v8 = Src;
  v9 = FirmwareBootDeviceNameFromRegistry;
  if ( FirmwareBootDeviceNameFromRegistry < 0 )
    goto LABEL_17;
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( Src[v11] );
  if ( snwscanf_s(Src, v11 + 1, L"multi(%d)disk(%d)rdisk(%d)partition(%d)", &v27, &v28, &v22, &v21) != 4 )
  {
    v9 = -1073741823;
    goto LABEL_17;
  }
  if ( !v27 && !v28 )
  {
    v12 = v11 + 11;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v12, 0x4B505953u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_17;
    }
    swprintf_s(PoolWithTag, v12, L"%s%s", L"\\ArcName\\", v8);
    v9 = SiTranslateSymbolicLink(v4);
    if ( v9 >= 0 )
    {
      v5 = P;
      v9 = SiValidateSystemPartition((PCWSTR)P, v14, v15, v16, a2);
      if ( v9 < 0 )
        goto LABEL_30;
      if ( a1 )
        goto LABEL_11;
      v18 = wcsstr(v4, L"partition");
      if ( v18 )
        *v18 = 0;
      do
        ++v10;
      while ( v4[v10] );
      v19 = 2 * v10 + 2;
      v20 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v19, 0x4B505953u);
      v3 = v20;
      if ( !v20 )
      {
        v9 = -1073741670;
LABEL_30:
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        goto LABEL_13;
      }
      memmove(v20, v4, v19);
      ExFreePoolWithTag(v5, 0);
      P = 0LL;
      v9 = SiTranslateSymbolicLink(v3);
      if ( v9 >= 0 )
      {
        v5 = P;
LABEL_11:
        *a3 = v5;
        goto LABEL_12;
      }
    }
    v5 = P;
    goto LABEL_30;
  }
  v9 = -1073741823;
LABEL_12:
  if ( v9 < 0 )
    goto LABEL_30;
LABEL_13:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
LABEL_17:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v9;
}
