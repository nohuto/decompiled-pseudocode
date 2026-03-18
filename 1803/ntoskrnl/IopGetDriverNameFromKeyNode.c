/*
 * XREFs of IopGetDriverNameFromKeyNode @ 0x1405F76D4
 * Callers:
 *     IopUnloadDriver @ 0x1405F5EC0 (IopUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405F72F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     PiGetDefaultMessageString @ 0x140645B40 (PiGetDefaultMessageString.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1408B3654 (PipInitializeEarlyLaunchDrivers.c)
 *     PnpLoadBootFilterDriver @ 0x1408B3768 (PnpLoadBootFilterDriver.c)
 *     PipInitializeCoreDriversByGroup @ 0x1408B5658 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1408B5994 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryKey @ 0x1401A7780 (ZwQueryKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 */

__int64 __fastcall IopGetDriverNameFromKeyNode(HANDLE KeyHandle, PUNICODE_STRING Destination)
{
  wchar_t *v4; // rdi
  const WCHAR *v5; // r13
  unsigned __int16 v6; // r12
  int v7; // ecx
  unsigned __int16 *Pool; // rsi
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  unsigned int v11; // ecx
  unsigned __int16 v12; // bx
  wchar_t *v13; // rax
  unsigned int v15; // eax
  _WORD *v16; // r10
  __int16 *v17; // r8
  int i; // r9d
  __int16 v19; // ax
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF
  ULONG Length; // [rsp+90h] [rbp+50h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h] BYREF

  if ( IopGetRegistryValue(KeyHandle, L"ObjectName", 64, &P) >= 0 )
  {
    v4 = (wchar_t *)P;
    v15 = *((_DWORD *)P + 3);
    if ( v15 > 2 && *((_DWORD *)P + 1) == 1 )
    {
      v16 = P;
      Destination->Length = v15 - 2;
      Destination->MaximumLength = v4[6];
      v17 = (__int16 *)((char *)v4 + *((unsigned int *)v4 + 2));
      for ( i = (unsigned __int16)(v15 - 2) >> 1; i; --i )
      {
        v19 = *v17++;
        *v16++ = v19;
      }
      Destination->Buffer = v4;
      return 0LL;
    }
    v10 = -1073741472;
    goto LABEL_27;
  }
  if ( IopGetRegistryValue(KeyHandle, L"Type", 0, &P) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) )
    {
      v5 = L"\\Driver\\";
      v6 = 16;
      v7 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      if ( v7 == 2 || v7 == 8 )
      {
        v5 = L"\\FileSystem\\";
        v6 = 24;
      }
      Length = 164;
      Pool = (unsigned __int16 *)IopVerifierExAllocatePool(NonPagedPoolNx, 0xA4uLL);
      if ( Pool )
      {
        v9 = ZwQueryKey(KeyHandle, KeyBasicInformation, Pool, Length, &Length);
        v10 = v9;
        if ( v9 != -2147483643 && v9 != -1073741789 )
        {
LABEL_9:
          if ( v10 < 0 )
          {
            ExFreePoolWithTag(Pool, 0);
          }
          else
          {
            v11 = v6 + *((_DWORD *)Pool + 3);
            if ( v11 >= v6 )
            {
              v12 = v6 + Pool[6];
              v13 = (wchar_t *)IopVerifierExAllocatePool(NonPagedPoolNx, (unsigned __int16)v11);
              Destination->Buffer = v13;
              if ( v13 )
              {
                Destination->Length = 0;
                Destination->MaximumLength = v12;
                RtlAppendUnicodeToString(Destination, v5);
                Source.Length = Pool[6];
                Source.MaximumLength = Source.Length;
                Source.Buffer = Pool + 8;
                RtlAppendUnicodeStringToString(Destination, &Source);
                ExFreePoolWithTag(Pool, 0);
                ExFreePoolWithTag(v4, 0);
                return 0LL;
              }
              ExFreePoolWithTag(Pool, 0);
              goto LABEL_26;
            }
            ExFreePoolWithTag(Pool, 0);
            v10 = -1073741675;
          }
LABEL_27:
          ExFreePoolWithTag(v4, 0);
          return (unsigned int)v10;
        }
        ExFreePoolWithTag(Pool, 0);
        Pool = (unsigned __int16 *)IopVerifierExAllocatePool(NonPagedPoolNx, Length);
        if ( Pool )
        {
          v10 = ZwQueryKey(KeyHandle, KeyBasicInformation, Pool, Length, &Length);
          goto LABEL_9;
        }
      }
LABEL_26:
      v10 = -1073741670;
      goto LABEL_27;
    }
    ExFreePoolWithTag(P, 0);
  }
  return 3221225824LL;
}
