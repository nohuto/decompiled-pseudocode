/*
 * XREFs of IopInitializeSystemDrivers @ 0x1407F8D84
 * Callers:
 *     IoInitSystem @ 0x140809ED0 (IoInitSystem.c)
 * Callees:
 *     PnpDiagnosticTrace @ 0x140033764 (PnpDiagnosticTrace.c)
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404D98B8 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     IopOpenRegistryKeyEx @ 0x14059C8A8 (IopOpenRegistryKeyEx.c)
 *     IopReferenceDriverObjectByName @ 0x1405AD78C (IopReferenceDriverObjectByName.c)
 *     ExIsManufacturingModeEnabled @ 0x1405ADA50 (ExIsManufacturingModeEnabled.c)
 *     CmGetSystemDriverList @ 0x1407F67B8 (CmGetSystemDriverList.c)
 *     PipFreeGroupTree @ 0x1407F6A2C (PipFreeGroupTree.c)
 *     PnpWaitForDevicesToStart @ 0x1407F870C (PnpWaitForDevicesToStart.c)
 *     InbvIndicateProgress @ 0x1407F9FA4 (InbvIndicateProgress.c)
 *     PipCheckDependencies @ 0x1407FA19C (PipCheckDependencies.c)
 *     PipLookupGroupName @ 0x1407FA1E8 (PipLookupGroupName.c)
 */

__int64 IopInitializeSystemDrivers()
{
  char IsManufacturingModeEnabled; // al
  HANDLE *SystemDriverList; // rax
  void **v2; // rbx
  HANDLE *v3; // r14
  HANDLE v4; // rax
  PVOID v5; // rdi
  PVOID v6; // rsi
  __int64 v7; // rdi
  int v8; // eax
  void *v9; // rcx
  int v11; // edi
  UNICODE_STRING v12; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-10h] BYREF
  int v15; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF

  PnpDiagnosticTrace(&KMPnPEvt_SystemStart_Start, 0, 0LL);
  IsManufacturingModeEnabled = ExIsManufacturingModeEnabled();
  SystemDriverList = CmGetSystemDriverList((unsigned __int64)qword_140344B50 & -(__int64)(IsManufacturingModeEnabled != 0));
  v2 = SystemDriverList;
  if ( SystemDriverList )
  {
    v3 = SystemDriverList;
    v4 = *SystemDriverList;
    if ( v4 )
    {
      do
      {
        if ( (int)IopGetDriverNameFromKeyNode(v4, &UnicodeString) >= 0
          && (v5 = IopReferenceDriverObjectByName(&UnicodeString), RtlFreeUnicodeString(&UnicodeString), v5) )
        {
          ObfDereferenceObjectWithTag(v5, 0x746C6644u);
        }
        else
        {
          *(_DWORD *)&v12.Length = 655368;
          v12.Buffer = L"Enum";
          if ( IopOpenRegistryKeyEx(&Handle, *v2, &v12, 0x20019u) < 0 )
            goto LABEL_6;
          v11 = 0;
          if ( IopGetRegistryValue(Handle, L"INITSTARTFAILED", 0, &P) >= 0 )
          {
            if ( *((_DWORD *)P + 3) == 4 )
              v11 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
          ZwClose(Handle);
          if ( !v11 )
          {
LABEL_6:
            if ( IopGetRegistryValue(*v2, L"Group", 0, &P) < 0 )
            {
              v7 = 0LL;
            }
            else
            {
              v6 = P;
              if ( *((_DWORD *)P + 3) )
              {
                String1.Length = *((_WORD *)P + 6);
                String1.MaximumLength = String1.Length;
                String1.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
                v7 = PipLookupGroupName(&String1);
              }
              else
              {
                v7 = 0LL;
              }
              ExFreePoolWithTag(v6, 0);
            }
            v8 = PipCheckDependencies(*v2);
            v9 = *v2;
            if ( v8 )
            {
              if ( (int)IopLoadDriver(v9, 1, 0, &v15) >= 0 && v7 )
                ++*(_DWORD *)(v7 + 28);
            }
            else
            {
              ZwClose(v9);
            }
            InbvIndicateProgress();
            goto LABEL_15;
          }
        }
        ZwClose(*v2);
LABEL_15:
        v4 = *++v2;
      }
      while ( *v2 );
    }
    ExFreePoolWithTag(v3, 0);
  }
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 17, 0, 0LL, 0LL, 0LL, 0LL);
  if ( !PnpBootOptions )
    PnpWaitForDevicesToStart();
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 18, 0, 0LL, 0LL, 0LL, 0LL);
  if ( IopGroupListHead )
    PipFreeGroupTree((_QWORD *)IopGroupListHead);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStart_Stop, 0, 0LL);
  return 1LL;
}
