/*
 * XREFs of RaUnitQueryDeviceTextIrp @ 0x1C0060360
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0004E20 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RtlStringCchPrintfW @ 0x1C001828C (RtlStringCchPrintfW.c)
 *     StorGetIdentityVendorId @ 0x1C0018308 (StorGetIdentityVendorId.c)
 *     StorGetIdentityProductId @ 0x1C0018334 (StorGetIdentityProductId.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     PortGetDeviceType @ 0x1C0060340 (PortGetDeviceType.c)
 */

__int64 __fastcall RaUnitQueryDeviceTextIrp(__int64 a1, IRP *a2)
{
  unsigned int Length; // ebx
  wchar_t *Pool; // rax
  int v6; // edi
  wchar_t *v7; // rsi
  unsigned int v8; // r8d
  IRP *v9; // rcx
  char **DeviceType; // rax
  __int64 v12; // r9
  _BYTE *v13; // rax
  _BYTE *v14; // r9
  _BYTE v15[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v16[24]; // [rsp+40h] [rbp-38h] BYREF

  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x200uLL, 0x54516152u, *(_QWORD *)(a1 + 8));
  v6 = 0;
  v7 = Pool;
  if ( Pool )
  {
    if ( Length )
    {
      if ( Length == 1 )
      {
        RtlStringCchPrintfW(
          Pool,
          0x100uLL,
          L"Bus Number %d, Target Id %d, LUN %d",
          *(unsigned __int8 *)(a1 + 88),
          *(unsigned __int8 *)(a1 + 89),
          *(unsigned __int8 *)(a1 + 90));
      }
      else
      {
        ExFreePoolWithTag(Pool, 0);
        v7 = 0LL;
        v6 = -1073741637;
      }
      goto LABEL_5;
    }
    if ( (*(_DWORD *)(a1 + 1536) & 1) != 0 )
    {
      RtlStringCchPrintfW(Pool, 0x100uLL, L"VM passthrough LUN device");
      goto LABEL_5;
    }
    StorGetIdentityVendorId((_QWORD *)(a1 + 96), (__int64)v15);
    StorGetIdentityProductId((_QWORD *)(a1 + 96), (__int64)v16);
    DeviceType = PortGetDeviceType(**(_BYTE **)(a1 + 96) & 0x1F);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 0x10) == 0 )
    {
      RtlStringCchPrintfW(v7, 0x100uLL, L"%hs %hs SCSI %hs Device", v15, v16, *DeviceType);
LABEL_5:
      a2->IoStatus.Information = (unsigned __int64)v7;
      v8 = v6;
      v9 = a2;
      return RaidCompleteRequestEx(v9, 0, v8);
    }
    v12 = *(_QWORD *)(a1 + 144);
    if ( v12 )
    {
      if ( !*(_BYTE *)(v12 + 8) )
        goto LABEL_12;
      v13 = (_BYTE *)(v12 + 25);
      v14 = (_BYTE *)(v12 + 8);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 136) )
      {
LABEL_12:
        RtlStringCchPrintfW(v7, 0x100uLL, L"%hs");
        goto LABEL_5;
      }
      v13 = v16;
      v14 = v15;
    }
    RtlStringCchPrintfW(v7, 0x100uLL, L"%hs %hs", v14, v13);
    goto LABEL_5;
  }
  v9 = a2;
  if ( Length <= 1 )
    v8 = -1073741801;
  else
    v8 = -1073741637;
  return RaidCompleteRequestEx(v9, 0, v8);
}
