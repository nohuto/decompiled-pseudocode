/*
 * XREFs of IopGetDriverNameFromKeyNode @ 0x14051A450
 * Callers:
 *     IopUnloadDriver @ 0x14046EF24 (IopUnloadDriver.c)
 *     PiGetDefaultMessageString @ 0x140517098 (PiGetDefaultMessageString.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14051A720 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipInitializeCoreDriversByGroup @ 0x140845614 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140845AEC (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 *     PnpLoadBootFilterDriver @ 0x14084E29C (PnpLoadBootFilterDriver.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x14084E428 (PipInitializeEarlyLaunchDrivers.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     ZwQueryKey @ 0x14017DB80 (ZwQueryKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
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
  _WORD *v15; // r10
  unsigned __int16 v16; // cx
  __int16 *v17; // r8
  int i; // r9d
  __int16 v19; // ax
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF
  ULONG Length; // [rsp+90h] [rbp+50h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h]

  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) > 2u && *((_DWORD *)P + 1) == 1 )
    {
      v15 = P;
      v16 = *((_WORD *)P + 6) - 2;
      Destination->Length = v16;
      Destination->MaximumLength = v4[6];
      v17 = (__int16 *)((char *)v4 + *((unsigned int *)v4 + 2));
      for ( i = v16 >> 1; i; --i )
      {
        v19 = *v17++;
        *v15++ = v19;
      }
      Destination->Buffer = v4;
      return 0LL;
    }
    v10 = -1073741472;
    goto LABEL_27;
  }
  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
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
