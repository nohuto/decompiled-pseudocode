/*
 * XREFs of CmEtwRunDown @ 0x140660B64
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     CmpLogHiveRundownEvent @ 0x14066117C (CmpLogHiveRundownEvent.c)
 */

__int64 __fastcall CmEtwRunDown(unsigned int a1, char a2, char a3, char a4)
{
  char v4; // di
  char v5; // si
  struct _EX_RUNDOWN_REF *v7; // rcx
  unsigned int v8; // eax
  __int64 *v9; // rsi
  __int64 v10; // r12
  __int64 i; // rdi
  PVOID v12; // r15
  int v13; // edx
  __int64 *v14; // rbx
  NTSTATUS v15; // ebx
  __int16 v19; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  PVOID P; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *NextActiveHive; // [rsp+50h] [rbp-B8h]
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v28[4]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+D8h] [rbp-30h] BYREF
  int v30; // [rsp+E4h] [rbp-24h]
  __int64 *v31; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-18h]
  __int64 v33; // [rsp+F8h] [rbp-10h]
  int v34; // [rsp+100h] [rbp-8h]
  int v35; // [rsp+104h] [rbp-4h]
  __int16 *v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]

  v4 = a3;
  v19 = 0;
  v5 = a2;
  if ( !a4 )
  {
    v28[1] = 0LL;
    v31 = v28;
    v7 = 0LL;
    v28[0] = 0LL;
    v36 = &v19;
    v32 = 24LL;
    v37 = 2LL;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v7);
      v14 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      CmpLockRegistryExclusive();
      if ( v4 )
        CmpLogHiveRundownEvent(v14, a1);
      if ( v5 )
      {
        v8 = *((_DWORD *)v14 + 702);
        if ( v8 )
        {
          v9 = (__int64 *)(v14[350] + 16);
          v10 = v8;
          do
          {
            for ( i = *v9; i; i = *(_QWORD *)(i + 8) )
            {
              P = 0LL;
              CmpConstructNameWithStatus(i - 8, &P);
              v12 = P;
              if ( P )
              {
                v13 = *(unsigned __int16 *)P;
                v33 = *((_QWORD *)P + 1);
                v34 = v13;
                v35 = 0;
                v28[2] = i - 8;
                EtwpLogKernelEvent((__int64)&v31, EtwpHostSiloState, a1, 3u, 0x919u, 0x401802u);
                CmpFreeTransientPoolWithTag(v12, 0x624E4D43u);
              }
            }
            v9 += 3;
            --v10;
          }
          while ( v10 );
          v14 = NextActiveHive;
          v4 = a3;
        }
        v5 = a2;
      }
      CmpUnlockRegistry();
      v7 = (struct _EX_RUNDOWN_REF *)v14;
    }
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Select");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"Current");
      v15 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x10u,
              &ResultLength);
      ZwClose(KeyHandle);
      if ( v15 >= 0 )
      {
        LODWORD(v20) = v30;
        v31 = &v20;
        v32 = 4LL;
        EtwpLogKernelEvent((__int64)&v31, EtwpHostSiloState, a1, 1u, 0x923u, 0x401802u);
      }
    }
  }
  v31 = &CmPerfCounters;
  v32 = 88LL;
  EtwpLogKernelEvent((__int64)&v31, EtwpHostSiloState, a1, 1u, 0x922u, 0x401802u);
  return 0LL;
}
