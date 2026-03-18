/*
 * XREFs of IopLoadUnloadDriver @ 0x1405F6C00
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14009FB48 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x140160304 (IopLoadDriverImage.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     IopOpenRegistryKey @ 0x1405F6BA8 (IopOpenRegistryKey.c)
 *     IopCallDriverReinitializationRoutines @ 0x1405F6CAC (IopCallDriverReinitializationRoutines.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v2; // rcx
  UNICODE_STRING *v3; // rax
  NTSTATUS SystemImage; // ebx
  ULONG v6; // [rsp+20h] [rbp-18h]
  NTSTATUS v7; // [rsp+40h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    (*(void (**)(void))(v2 + 104))();
    SystemImage = 0;
  }
  else
  {
    v3 = *(UNICODE_STRING **)(a1 + 64);
    if ( *(_BYTE *)(a1 + 72) )
    {
      SystemImage = MmLoadSystemImageEx((_DWORD)v3, 0, 0, -2147483632, (__int64)&v9, (__int64)&v7);
    }
    else
    {
      LOBYTE(v6) = 0;
      SystemImage = IopOpenRegistryKey(&KeyHandle, 0LL, v3, 0x20019u, v6);
      if ( SystemImage >= 0 )
      {
        SystemImage = IopLoadDriver(KeyHandle);
        if ( SystemImage == -1073740955 )
        {
          SystemImage = v7;
        }
        else if ( SystemImage == -1073740914 )
        {
          SystemImage = -1073741772;
        }
        IopCallDriverReinitializationRoutines(0LL);
      }
    }
  }
  *(_DWORD *)(a1 + 76) = SystemImage;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
