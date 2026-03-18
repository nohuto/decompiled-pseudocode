/*
 * XREFs of PipHardwareConfigInit @ 0x1408C395C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140506374 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlStringFromGUID @ 0x140518D40 (RtlStringFromGUID.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 *     IopCreateRegistryKeyEx @ 0x1405F7BC4 (IopCreateRegistryKeyEx.c)
 *     _PnpCtxRegQueryKeyPathName @ 0x14064E934 (_PnpCtxRegQueryKeyPathName.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140722AC4 (PipHardwareConfigClearStartOverrides.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x140722BF4 (PipHardwareConfigTriggerRespecialize.c)
 *     PipHardwareConfigExists @ 0x1408DEDE8 (PipHardwareConfigExists.c)
 */

__int64 __fastcall PipHardwareConfigInit(GUID *Guid)
{
  HANDLE v2; // r15
  int v3; // eax
  HANDLE v4; // rdi
  int CachedContextBaseKey; // ebx
  HANDLE v6; // r12
  int v7; // eax
  HANDLE v8; // rsi
  NTSTATUS RegistryValue; // r14d
  unsigned __int8 CurrentIrql; // dl
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // edi
  bool v14; // r14
  unsigned int v16; // eax
  int v17; // r14d
  bool v18; // zf
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING v21; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  ULONG v26; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER Data; // [rsp+88h] [rbp-80h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-78h] BYREF
  HANDLE v29[2]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v30[528]; // [rsp+A8h] [rbp-60h] BYREF

  LODWORD(v19) = -1;
  *(_DWORD *)&ValueName.Length = 4063292;
  v29[0] = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v23 = 0LL;
  v2 = 0LL;
  ValueName.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\Setup";
  v3 = IopCreateRegistryKeyEx(&v23, 0LL, &ValueName, 0xF003Fu, 0, 0LL);
  v4 = v23;
  if ( v3 < 0 )
    v4 = 0LL;
  v23 = v4;
  if ( v4 )
  {
    *(_DWORD *)&ValueName.Length = 1703960;
    ValueName.Buffer = L"Respecialize";
    ZwDeleteValueKey(v4, &ValueName);
  }
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 15, (__int64)&KeyHandle);
  if ( CachedContextBaseKey >= 0 )
  {
    CachedContextBaseKey = RtlStringFromGUID(Guid, &PnpCurrentHardwareConfigurationGuidString);
    if ( CachedContextBaseKey >= 0 )
    {
      v6 = KeyHandle;
      v21.Buffer = L"LastConfig";
      *(_DWORD *)&v21.Length = 1441812;
      CachedContextBaseKey = ZwSetValueKey(
                               KeyHandle,
                               &v21,
                               0,
                               1u,
                               PnpCurrentHardwareConfigurationGuidString.Buffer,
                               PnpCurrentHardwareConfigurationGuidString.Length + 2);
      if ( CachedContextBaseKey >= 0 )
      {
        v7 = IopCreateRegistryKeyEx(&Handle, v6, &PnpCurrentHardwareConfigurationGuidString, 0xF003Fu, 0, &v26);
        v8 = Handle;
        CachedContextBaseKey = v7;
        if ( v7 < 0 )
          goto LABEL_25;
        RegistryValue = IopGetRegistryValue(Handle, L"Id", 0, &P);
        CachedContextBaseKey = -1073741823;
        if ( RegistryValue < 0
          || (*((_DWORD *)P + 1) != 4 || *((_DWORD *)P + 3) != 4
            ? (RegistryValue = -1073741823)
            : (LODWORD(v19) = *(_DWORD *)((char *)P + *((unsigned int *)P + 2))),
              ExFreePoolWithTag(P, 0),
              RegistryValue < 0) )
        {
          LODWORD(v19) = 0;
          if ( IopGetRegistryValue(v6, L"LastId", 0, &P) >= 0 )
          {
            if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
              LODWORD(v19) = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) + 1;
            ExFreePoolWithTag(P, 0);
          }
          v16 = v19;
          v17 = v19 - 1;
          if ( (_DWORD)v19 == (_DWORD)v19 - 1 )
            goto LABEL_25;
          do
          {
            v18 = (unsigned __int8)PipHardwareConfigExists(v6, v16) == 0;
            v16 = v19;
            if ( v18 )
              break;
            v16 = v19 + 1;
            LODWORD(v19) = v16;
          }
          while ( v16 != v17 );
          if ( v16 == v17 )
            goto LABEL_25;
          *(_DWORD *)&v21.Length = 917516;
          v21.Buffer = L"LastId";
          ZwSetValueKey(v6, &v21, 0, 4u, &v19, 4u);
          *(_DWORD *)&v21.Length = 393220;
          v21.Buffer = L"Id";
          CachedContextBaseKey = ZwSetValueKey(v8, &v21, 0, 4u, &v19, 4u);
          if ( CachedContextBaseKey < 0 )
            goto LABEL_25;
        }
        PnpCurrentHardwareConfigurationIndex = v19;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v11 = KeBootTimeBias;
        Data = KeBootTime;
        __writecr8(CurrentIrql);
        Data.QuadPart -= v11;
        v8 = Handle;
        v21.Buffer = L"LastUse";
        *(_DWORD *)&v21.Length = 1048590;
        ZwSetValueKey(Handle, &v21, 0, 3u, &Data, 8u);
        v21.Buffer = (wchar_t *)L"Current";
        *(_DWORD *)&v21.Length = 1048590;
        CachedContextBaseKey = IopCreateRegistryKeyEx(v29, KeyHandle, &v21, 0xF003Fu, 3u, 0LL);
        if ( CachedContextBaseKey < 0
          || (LODWORD(v24) = 260,
              CachedContextBaseKey = PnpCtxRegQueryKeyPathName(v12, (__int64)v8, (__int64)v30, (__int64)&v24),
              CachedContextBaseKey < 0) )
        {
          v2 = v29[0];
        }
        else
        {
          v2 = v29[0];
          CachedContextBaseKey = ZwSetValueKey(v29[0], &CmSymbolicLinkValueName, 0, 6u, v30, 2 * v24 - 2);
          if ( CachedContextBaseKey >= 0 )
          {
            if ( InitSafeBootMode )
              goto LABEL_49;
            if ( IopGetRegistryValue(v8, L"Reset", 0, &P) >= 0 )
            {
              v13 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4
                  ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2))
                  : 0;
              ExFreePoolWithTag(P, 0);
            }
            else
            {
              v13 = 0;
            }
            if ( v13 )
            {
LABEL_49:
              if ( PipHardwareConfigClearStartOverrides(v19) >= 0 )
              {
                *(_DWORD *)&ValueName.Length = 786442;
                ValueName.Buffer = L"Reset";
                ZwDeleteValueKey(v8, &ValueName);
              }
            }
            v4 = v23;
            if ( v23 )
            {
              if ( v26 == 1 )
                goto LABEL_60;
              v14 = 0;
              if ( IopGetRegistryValue(v23, L"RespecializeStarted", 0, &P) >= 0 )
              {
                if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
                  v14 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) == 1;
                ExFreePoolWithTag(P, 0);
                if ( v14 )
                  goto LABEL_60;
              }
              if ( IopGetRegistryValue(v8, L"Respecialize", 0, &P) >= 0 )
              {
                if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
                  v14 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) == 1;
                ExFreePoolWithTag(P, 0);
                if ( v14 )
                {
LABEL_60:
                  if ( (int)PipHardwareConfigTriggerRespecialize(v4) >= 0 )
                  {
                    *(_DWORD *)&ValueName.Length = 1703960;
                    ValueName.Buffer = L"Respecialize";
                    ZwDeleteValueKey(v8, &ValueName);
                  }
                }
              }
            }
            goto LABEL_25;
          }
        }
        v4 = v23;
LABEL_25:
        if ( v8 )
          ZwClose(v8);
        if ( v2 )
          ZwClose(v2);
      }
    }
  }
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)CachedContextBaseKey;
}
