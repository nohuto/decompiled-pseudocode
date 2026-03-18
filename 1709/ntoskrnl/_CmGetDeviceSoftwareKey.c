/*
 * XREFs of _CmGetDeviceSoftwareKey @ 0x14058188C
 * Callers:
 *     _CmGetDeviceSoftwareKeyPath @ 0x140581770 (_CmGetDeviceSoftwareKeyPath.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchPrintfExW @ 0x1400DEF40 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _CmOpenInstallerClassRegKey @ 0x14051D7B8 (_CmOpenInstallerClassRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     _CmSetDeviceRegProp @ 0x140551244 (_CmSetDeviceRegProp.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14057EC84 (_RegRtlDeleteKeyTransacted.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1405D6894 (_CmCreateOrdinalInstanceKey.c)
 */

__int64 __fastcall CmGetDeviceSoftwareKey(__int64 a1, __int64 a2, wchar_t *a3, __int64 a4, char a5)
{
  int DeviceRegProp; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // [rsp+40h] [rbp-71h] BYREF
  int v16; // [rsp+44h] [rbp-6Dh] BYREF
  HANDLE v17; // [rsp+48h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-61h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-59h] BYREF
  WCHAR v20[12]; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v21[76]; // [rsp+80h] [rbp-31h] BYREF
  __int16 v22; // [rsp+CCh] [rbp+1Bh]

  v15 = 88;
  v17 = 0LL;
  Handle = 0LL;
  v16 = 0;
  DeviceRegProp = CmGetDeviceRegProp(a1, a2, 0LL, 10, (__int64)&v16, (__int64)a3, (__int64)&v15, 0);
  if ( DeviceRegProp == -1073741275 )
  {
    if ( a5 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 80), 1u);
      v16 = 0;
      v15 = 88;
      DeviceRegProp = CmGetDeviceRegProp(a1, a2, 0LL, 10, (__int64)&v16, (__int64)a3, (__int64)&v15, 0);
      if ( DeviceRegProp == -1073741275 )
      {
        v15 = 78;
        v16 = 0;
        v11 = CmGetDeviceRegProp(a1, a2, 0LL, 9, (__int64)&v16, (__int64)v21, (__int64)&v15, 0);
        DeviceRegProp = v11;
        if ( v11 == -1073741275 )
        {
          DeviceRegProp = -1073741772;
        }
        else if ( v11 >= 0 )
        {
          v22 = 0;
          DeviceRegProp = CmOpenInstallerClassRegKey(a1, (int)v21, v12, v13, 131103, 0, (__int64)&v17, 0LL);
          if ( DeviceRegProp >= 0 )
          {
            DeviceRegProp = CmCreateOrdinalInstanceKey(a1, v17, v20);
            if ( DeviceRegProp >= 0 )
            {
              DeviceRegProp = RtlStringCchPrintfExW(a3, 0x2CuLL, 0LL, 0LL, 0x800u, L"%s\\%s", v21, v20);
              if ( DeviceRegProp >= 0 )
              {
                DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a3);
                if ( DeviceRegProp >= 0 )
                {
                  DeviceRegProp = CmSetDeviceRegProp(
                                    a1,
                                    a2,
                                    0LL,
                                    0xAu,
                                    1u,
                                    (__int64)DestinationString.Buffer,
                                    DestinationString.MaximumLength,
                                    0);
                  if ( DeviceRegProp < 0 )
                  {
                    v14 = *(_QWORD *)a1;
                    if ( *(_QWORD *)a1 )
                      v14 = *(_QWORD *)(v14 + 8);
                    RegRtlDeleteKeyTransacted((char *)v17, v20, v14);
                  }
                }
              }
            }
          }
        }
      }
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 80));
      KeLeaveCriticalRegion();
      if ( Handle )
        ZwClose(Handle);
    }
    else
    {
      DeviceRegProp = -1073741772;
    }
  }
  if ( v17 )
    ZwClose(v17);
  return (unsigned int)DeviceRegProp;
}
