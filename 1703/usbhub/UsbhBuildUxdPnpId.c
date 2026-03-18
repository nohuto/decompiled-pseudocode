/*
 * XREFs of UsbhBuildUxdPnpId @ 0x1C0058090
 * Callers:
 *     UsbhBuildDeviceID @ 0x1C001CFA0 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C001D200 (UsbhBuildHardwareID.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     memmove @ 0x1C0028680 (memmove.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     UsbhGetPnpKey @ 0x1C0058594 (UsbhGetPnpKey.c)
 */

__int64 __fastcall UsbhBuildUxdPnpId(size_t a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _DWORD *v5; // rbx
  PDEVICE_OBJECT v6; // rcx
  int PnpKey; // ebx
  __int64 v8; // rsi
  PVOID PoolWithTag; // rax
  void *v10; // r14
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+70h] [rbp+8h] BYREF
  void *Src; // [rsp+80h] [rbp+18h] BYREF

  Size = a1;
  v5 = PdoExt(a2);
  Src = 0LL;
  LODWORD(Size) = 0;
  v6 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x21u,
      (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids);
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)(a3 + 4) = 0;
  v12 = *(_OWORD *)(v5 + 645);
  PnpKey = UsbhGetPnpKey(v6, v4, &v12, &Src, &Size);
  if ( PnpKey >= 0 )
  {
    v8 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)Size + 2LL, 0x42554855u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v8 + 2);
        memmove(v10, Src, (unsigned int)v8);
        *(_QWORD *)(a3 + 8) = v10;
        *(_DWORD *)(a3 + 4) = v8 + 2;
      }
      else
      {
        PnpKey = -1073741670;
      }
      if ( Src )
        ExFreePoolWithTag(Src, 0);
    }
  }
  return (unsigned int)PnpKey;
}
