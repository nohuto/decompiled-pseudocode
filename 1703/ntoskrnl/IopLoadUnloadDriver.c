/*
 * XREFs of IopLoadUnloadDriver @ 0x14044DA20
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140005A00 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x140031E34 (IopLoadDriverImage.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IopCallDriverReinitializationRoutines @ 0x14044DAC0 (IopCallDriverReinitializationRoutines.c)
 *     IopOpenRegistryKey @ 0x14044DB84 (IopOpenRegistryKey.c)
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v2; // rcx
  int SystemImage; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF
  char v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    (*(void (**)(void))(v2 + 104))();
    SystemImage = 0;
  }
  else if ( *(_BYTE *)(a1 + 72) )
  {
    SystemImage = MmLoadSystemImageEx(*(_QWORD *)(a1 + 64), 0, 0, -2147483632, (__int64)&v7, (__int64)&v5);
  }
  else
  {
    SystemImage = IopOpenRegistryKey(&KeyHandle, 0LL, *(_QWORD *)(a1 + 64), 131097LL, 0);
    if ( SystemImage >= 0 )
    {
      SystemImage = IopLoadDriver(KeyHandle);
      if ( SystemImage == -1073740955 )
      {
        SystemImage = v5;
      }
      else if ( SystemImage == -1073740914 )
      {
        SystemImage = -1073741772;
      }
      IopCallDriverReinitializationRoutines(0LL);
    }
  }
  *(_DWORD *)(a1 + 76) = SystemImage;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
