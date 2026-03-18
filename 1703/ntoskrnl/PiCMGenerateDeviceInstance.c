/*
 * XREFs of PiCMGenerateDeviceInstance @ 0x1406A532C
 * Callers:
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchPrintfExW @ 0x14004C0E0 (RtlStringCchPrintfExW.c)
 *     RtlStringCchLengthW @ 0x14004C7E8 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyExW @ 0x140081B60 (RtlStringCchCopyExW.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlStringCchCatExW @ 0x140156E80 (RtlStringCchCatExW.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmCreateDevice @ 0x14044CE10 (_CmCreateDevice.c)
 *     _RegRtlSetValue @ 0x140456A24 (_RegRtlSetValue.c)
 *     _CmValidateDeviceName @ 0x140483E80 (_CmValidateDeviceName.c)
 *     RtlUpcaseUnicodeString @ 0x1404971A0 (RtlUpcaseUnicodeString.c)
 *     _CmGetDeviceStatus @ 0x1404E7B28 (_CmGetDeviceStatus.c)
 *     _CmDeleteDevice @ 0x14073A284 (_CmDeleteDevice.c)
 */

__int64 __fastcall PiCMGenerateDeviceInstance(NTSTRSAFE_PCWSTR pszSrc, char a2, wchar_t *a3, int a4)
{
  char v4; // r12
  HANDLE v8; // rdi
  int inited; // ebx
  wchar_t v10; // ax
  NTSTRSAFE_PCWSTR v11; // rcx
  NTSTRSAFE_PWSTR *v12; // r9
  NTSTRSAFE_PWSTR *v13; // r9
  wchar_t *PoolWithTag; // rsi
  int v15; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rcx
  size_t *pcchRemaining; // [rsp+20h] [rbp-50h]
  size_t *pcchRemaininga; // [rsp+20h] [rbp-50h]
  ULONG dwFlags; // [rsp+28h] [rbp-48h]
  ULONG dwFlagsa; // [rsp+28h] [rbp-48h]
  int v23; // [rsp+40h] [rbp-30h] BYREF
  int v24; // [rsp+44h] [rbp-2Ch] BYREF
  int v25; // [rsp+48h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-20h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  int v29; // [rsp+C0h] [rbp+50h] BYREF
  size_t v30; // [rsp+C8h] [rbp+58h] BYREF

  LODWORD(v30) = a4;
  v4 = 0;
  *a3 = 0;
  KeyHandle = 0LL;
  v8 = 0LL;
  inited = RtlStringCchLengthW(pszSrc, 0xC8uLL, &pcchLength);
  if ( inited >= 0 )
  {
    v10 = *pszSrc;
    v11 = pszSrc;
    while ( v10 )
    {
      if ( v10 <= 0x20u || v10 > 0x7Fu || v10 == 44 || v10 == 92 )
      {
        inited = -1073741773;
        break;
      }
      v10 = *++v11;
    }
    if ( inited >= 0 )
    {
      inited = RtlStringCchCopyExW(a3, 0xC8uLL, L"Root", 0LL, 0LL, 0x800u);
      if ( inited >= 0 )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, a3);
        if ( inited >= 0 )
        {
          inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
          if ( inited >= 0 )
          {
            inited = RtlStringCchCatExW(a3, 0xC8uLL, L"\\", v12, pcchRemaining, dwFlags);
            if ( inited >= 0 )
            {
              inited = RtlStringCchCatExW(a3, 0xC8uLL, pszSrc, v13, pcchRemaininga, dwFlagsa);
              if ( inited >= 0 )
              {
                PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
                if ( !PoolWithTag )
                  return (unsigned int)-1073741670;
                v15 = 0;
                while ( 1 )
                {
                  if ( v8 )
                  {
                    ZwClose(v8);
                    v8 = 0LL;
                    KeyHandle = 0LL;
                  }
                  inited = RtlStringCchPrintfExW(PoolWithTag, 0xC8uLL, 0LL, 0LL, 0x800u, L"%s\\%04u");
                  if ( inited < 0 )
                    break;
                  if ( (int)CmGetDeviceStatus(
                              *(__int64 *)&PiPnpRtlCtx,
                              PoolWithTag,
                              0LL,
                              &v25,
                              &v24,
                              &v23,
                              (unsigned int)a3) < 0 )
                  {
                    CurrentThread = KeGetCurrentThread();
                    --CurrentThread->KernelApcDisable;
                    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
                    LOBYTE(v30) = 0;
                    v4 = 1;
                    inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131078, &KeyHandle, &v30, 0);
                    if ( inited < 0 )
                      goto LABEL_37;
                    if ( (_BYTE)v30 )
                    {
                      v8 = KeyHandle;
                      inited = CmValidateDeviceName(v17, PoolWithTag);
                      if ( inited < 0
                        || (inited = RtlStringCchCopyExW(a3, 0xC8uLL, PoolWithTag, 0LL, 0LL, 0x800u), inited < 0) )
                      {
                        CmDeleteDevice(PiPnpRtlCtx);
                      }
                      else if ( a2 )
                      {
                        v29 = 1;
                        inited = RegRtlSetValue(v8, L"Phantom", 4u, &v29, 4u);
                      }
LABEL_36:
                      if ( !v4 )
                        break;
LABEL_37:
                      ExReleaseResourceLite(&PnpRegistryDeviceResource);
                      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                      v8 = KeyHandle;
                      break;
                    }
                    ExReleaseResourceLite(&PnpRegistryDeviceResource);
                    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                    v8 = KeyHandle;
                    v4 = 0;
                  }
                  if ( (unsigned int)++v15 > 0x270F )
                  {
                    inited = -2147483622;
                    goto LABEL_36;
                  }
                  v4 = 0;
                }
                if ( v8 )
                  ZwClose(v8);
                ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
              }
            }
          }
        }
      }
    }
  }
  if ( inited == -2147483643 )
    return (unsigned int)-1073741789;
  return (unsigned int)inited;
}
