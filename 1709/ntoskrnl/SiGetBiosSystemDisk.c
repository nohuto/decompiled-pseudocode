/*
 * XREFs of SiGetBiosSystemDisk @ 0x1405D35B4
 * Callers:
 *     SiGetSystemDisk @ 0x1405D3510 (SiGetSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x14077E0A0 (SiGetBiosSystemPartition.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _snwscanf_s @ 0x140163D40 (_snwscanf_s.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwQuerySymbolicLinkObject @ 0x140180340 (ZwQuerySymbolicLinkObject.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SiTranslateSymbolicLink @ 0x14057DDF8 (SiTranslateSymbolicLink.c)
 *     SiGetFirmwareBootDeviceNameFromRegistry @ 0x14057E068 (SiGetFirmwareBootDeviceNameFromRegistry.c)
 *     SiIsWinPEBoot @ 0x14057E0DC (SiIsWinPEBoot.c)
 *     SiOpenArcNameObject @ 0x1405D36D8 (SiOpenArcNameObject.c)
 *     SiIssueSynchronousIoctl @ 0x14077D660 (SiIssueSynchronousIoctl.c)
 */

__int64 __fastcall SiGetBiosSystemDisk(wchar_t **a1, __int64 a2, __int64 a3, int a4)
{
  wchar_t *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r9d
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // rbx
  __int64 v14; // rdx
  int v15; // eax
  bool v16; // zf
  ULONG ReturnedLength; // [rsp+30h] [rbp-39h] BYREF
  HANDLE LinkHandle; // [rsp+38h] [rbp-31h]
  int v19; // [rsp+40h] [rbp-29h] BYREF
  int v20; // [rsp+44h] [rbp-25h] BYREF
  int v21; // [rsp+48h] [rbp-21h] BYREF
  wchar_t *Src; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v24[12]; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v25[10]; // [rsp+78h] [rbp+Fh] BYREF

  LinkHandle = 0LL;
  v5 = 0LL;
  if ( !SiIsWinPEBoot((int)a1, a2, a3, a4) )
    goto LABEL_2;
  if ( (int)SiGetFirmwareBootDeviceNameFromRegistry(&Src, v6, v7, v8) < 0 )
    goto LABEL_2;
  v13 = Src;
  v14 = -1LL;
  do
    ++v14;
  while ( Src[v14] );
  if ( snwscanf_s(Src, v14 + 1, L"multi(%d)disk(%d)rdisk(%d)", &v19, &v20, &v21) != 3
    || v19
    || v20
    || v21
    || SiTranslateSymbolicLink(L"\\ArcName\\multi(0)disk(0)rdisk(0)", &Src) < 0 )
  {
    goto LABEL_2;
  }
  ExFreePoolWithTag(v13, 0);
  memset(v25, 0, sizeof(v25));
  memset(v24, 0, sizeof(v24));
  v15 = SiIssueSynchronousIoctl(Src, v25, 0x28u);
  v16 = v15 >= 0 ? v25[7] == 7 : v15 == -1073741766;
  if ( !v16 || (v9 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(1)"), v9 == -1073740718) )
LABEL_2:
    v9 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(0)");
  if ( v9 >= 0 )
  {
    ReturnedLength = 0;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v10 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, &ReturnedLength);
    v9 = v10;
    if ( v10 == -1073741789 )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, ReturnedLength + 2LL, 0x4B505953u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        DestinationString.Buffer = PoolWithTag;
        DestinationString.MaximumLength = ReturnedLength;
        v9 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, 0LL);
        if ( v9 >= 0 )
        {
          v5[(unsigned __int64)DestinationString.Length >> 1] = 0;
          *a1 = v5;
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
    else if ( v10 >= 0 )
    {
      v9 = -1073741823;
    }
  }
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( v9 < 0 && v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v9;
}
