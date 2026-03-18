/*
 * XREFs of SiGetFirmwareBootDeviceName @ 0x14057DBD8
 * Callers:
 *     SiGetSystemPartition @ 0x14057DB70 (SiGetSystemPartition.c)
 *     SiGetSystemDisk @ 0x1405D3510 (SiGetSystemDisk.c)
 * Callees:
 *     SiValidateSystemPartition @ 0x140122A54 (SiValidateSystemPartition.c)
 *     wcsstr @ 0x1401606A0 (wcsstr.c)
 *     swprintf_s @ 0x140163370 (swprintf_s.c)
 *     _snwscanf_s @ 0x140163D40 (_snwscanf_s.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SiTranslateSymbolicLink @ 0x14057DDF8 (SiTranslateSymbolicLink.c)
 *     SiGetFirmwareBootDeviceNameFromRegistry @ 0x14057E068 (SiGetFirmwareBootDeviceNameFromRegistry.c)
 */

__int64 __fastcall SiGetFirmwareBootDeviceName(int a1, _DWORD *a2, char a3, _QWORD *a4)
{
  WCHAR *v4; // r14
  WCHAR *v5; // rsi
  PVOID v6; // rdi
  int FirmwareBootDeviceNameFromRegistry; // eax
  wchar_t *v9; // r12
  int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // rbx
  size_t v13; // rbx
  wchar_t *PoolWithTag; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  wchar_t *v18; // rax
  SIZE_T v19; // r15
  WCHAR *v20; // rax
  int v21; // [rsp+40h] [rbp-28h] BYREF
  char v22; // [rsp+44h] [rbp-24h] BYREF
  char v23; // [rsp+48h] [rbp-20h] BYREF
  PVOID P; // [rsp+50h] [rbp-18h]
  wchar_t *Src; // [rsp+58h] [rbp-10h] BYREF
  int v29; // [rsp+C8h] [rbp+60h] BYREF

  v4 = 0LL;
  P = 0LL;
  v5 = 0LL;
  Src = 0LL;
  v6 = 0LL;
  *a4 = 0LL;
  FirmwareBootDeviceNameFromRegistry = SiGetFirmwareBootDeviceNameFromRegistry(&Src);
  v9 = Src;
  v10 = FirmwareBootDeviceNameFromRegistry;
  if ( FirmwareBootDeviceNameFromRegistry < 0 )
    goto LABEL_16;
  v11 = -1LL;
  v12 = -1LL;
  do
    ++v12;
  while ( Src[v12] );
  if ( snwscanf_s(Src, v12 + 1, L"multi(%d)disk(%d)rdisk(%d)partition(%d)", &v29, &v21, &v23, &v22) != 4 )
  {
    v10 = -1073741823;
    goto LABEL_16;
  }
  if ( !v29 && !v21 )
  {
    v13 = v12 + 11;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v13, 0x4B505953u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v10 = -1073741670;
      goto LABEL_16;
    }
    swprintf_s(PoolWithTag, v13, L"%s%s", L"\\ArcName\\", v9);
    v10 = SiTranslateSymbolicLink(v5);
    if ( v10 >= 0 )
    {
      v6 = P;
      v10 = SiValidateSystemPartition((PCWSTR)P, a2, v15, v16, a3);
      if ( v10 < 0 )
        goto LABEL_10;
      if ( a1 )
        goto LABEL_20;
      v18 = wcsstr(v5, L"partition");
      if ( v18 )
        *v18 = 0;
      do
        ++v11;
      while ( v5[v11] );
      v19 = 2 * v11 + 2;
      v20 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v19, 0x4B505953u);
      v4 = v20;
      if ( !v20 )
      {
        v10 = -1073741670;
        goto LABEL_10;
      }
      memmove(v20, v5, v19);
      ExFreePoolWithTag(v6, 0);
      P = 0LL;
      v10 = SiTranslateSymbolicLink(v4);
      if ( v10 >= 0 )
      {
        v6 = P;
LABEL_20:
        *a4 = v6;
        goto LABEL_21;
      }
    }
    v6 = P;
    goto LABEL_10;
  }
  v10 = -1073741823;
LABEL_21:
  if ( v10 < 0 )
  {
LABEL_10:
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_16:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v10;
}
