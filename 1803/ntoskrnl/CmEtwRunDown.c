/*
 * XREFs of CmEtwRunDown @ 0x1406EDEF0
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140628E98 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     EtwTraceSiloDcEvent @ 0x1402AF31C (EtwTraceSiloDcEvent.c)
 *     CmpGetNextActiveHive @ 0x14049BA70 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpLogHiveRundownEvent @ 0x1406EE504 (CmpLogHiveRundownEvent.c)
 */

__int64 __fastcall CmEtwRunDown(__int64 a1, unsigned int a2, char a3, char a4, char a5)
{
  char v5; // di
  char v6; // si
  struct _EX_RUNDOWN_REF *v9; // rcx
  unsigned int v10; // eax
  __int64 *v11; // rsi
  __int64 v12; // r12
  __int64 i; // rdi
  void *v14; // r13
  int v15; // edx
  __int64 *v16; // rbx
  NTSTATUS v17; // ebx
  __int16 v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *NextActiveHive; // [rsp+48h] [rbp-B8h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v30[4]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+D0h] [rbp-30h] BYREF
  int v32; // [rsp+DCh] [rbp-24h]
  _BYTE v33[48]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v34; // [rsp+110h] [rbp+10h] BYREF
  __int64 v35; // [rsp+118h] [rbp+18h]
  __int64 v36; // [rsp+120h] [rbp+20h]
  int v37; // [rsp+128h] [rbp+28h]
  int v38; // [rsp+12Ch] [rbp+2Ch]
  __int16 *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]

  v5 = a4;
  v6 = a3;
  v21 = 0;
  if ( !a5 )
  {
    CmpAttachToRegistryProcess((__int64)v33);
    v30[1] = 0LL;
    v34 = v30;
    v9 = 0LL;
    v30[0] = 0LL;
    v39 = &v21;
    v35 = 24LL;
    v40 = 2LL;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v9);
      v16 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      CmpLockRegistryExclusive();
      if ( v5 )
        CmpLogHiveRundownEvent(v16, a1, a2);
      if ( v6 )
      {
        v10 = *((_DWORD *)v16 + 412);
        if ( v10 )
        {
          v11 = (__int64 *)(v16[205] + 16);
          v12 = v10;
          do
          {
            for ( i = *v11; i; i = *(_QWORD *)(i + 8) )
            {
              v23 = 0LL;
              CmpConstructNameWithStatus(i - 8, &v23);
              v14 = v23;
              if ( v23 )
              {
                v15 = *v23;
                v36 = *((_QWORD *)v23 + 1);
                v37 = v15;
                v30[2] = i - 8;
                v38 = 0;
                EtwTraceSiloDcEvent((__int64)&v34, 3u, a1, a2, 0x919u, 0x401802u);
                CmpFreeTransientPoolWithTag(v14, 0x624E4D43u);
              }
            }
            v11 += 3;
            --v12;
          }
          while ( v12 );
          v16 = NextActiveHive;
          v5 = a4;
        }
        v6 = a3;
      }
      CmpUnlockRegistry();
      v9 = (struct _EX_RUNDOWN_REF *)v16;
    }
    KiUnstackDetachProcess((__int64)v33, 0LL);
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Select");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"Current");
      v17 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x10u,
              &ResultLength);
      ZwClose(KeyHandle);
      if ( v17 >= 0 )
      {
        v22 = v32;
        v34 = (__int64 *)&v22;
        v35 = 4LL;
        EtwTraceSiloDcEvent((__int64)&v34, 1u, a1, a2, 0x923u, 0x401802u);
      }
    }
  }
  v34 = &CmPerfCounters;
  v35 = 88LL;
  EtwTraceSiloDcEvent((__int64)&v34, 1u, a1, a2, 0x922u, 0x401802u);
  return 0LL;
}
