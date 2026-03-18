/*
 * XREFs of CmEtwRunDown @ 0x140689AF4
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     EtwTraceSiloDcEvent @ 0x14027B96C (EtwTraceSiloDcEvent.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 *     CmpGetNextActiveHive @ 0x1404E3AA0 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpLogHiveRundownEvent @ 0x14068A100 (CmpLogHiveRundownEvent.c)
 */

__int64 __fastcall CmEtwRunDown(__int64 a1, unsigned int a2, char a3, char a4, char a5)
{
  char v5; // di
  char v6; // si
  struct _EX_RUNDOWN_REF *v9; // rcx
  unsigned int v10; // eax
  __int64 *v11; // rsi
  __int64 v12; // r13
  __int64 i; // rdi
  void *v14; // r12
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
  __int64 *v33; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]
  __int16 *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]

  v5 = a4;
  v6 = a3;
  v21 = 0;
  if ( !a5 )
  {
    v30[1] = 0LL;
    v33 = v30;
    v9 = 0LL;
    v30[0] = 0LL;
    v38 = &v21;
    v34 = 24LL;
    v39 = 2LL;
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
        v10 = *((_DWORD *)v16 + 702);
        if ( v10 )
        {
          v11 = (__int64 *)(v16[350] + 16);
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
                v35 = *((_QWORD *)v23 + 1);
                v36 = v15;
                v30[2] = i - 8;
                v37 = 0;
                EtwTraceSiloDcEvent((__int64)&v33, 3u, a1, a2, 0x919u, 0x401802u);
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
        v33 = (__int64 *)&v22;
        v34 = 4LL;
        EtwTraceSiloDcEvent((__int64)&v33, 1u, a1, a2, 0x923u, 0x401802u);
      }
    }
  }
  v33 = &CmPerfCounters;
  v34 = 88LL;
  EtwTraceSiloDcEvent((__int64)&v33, 1u, a1, a2, 0x922u, 0x401802u);
  return 0LL;
}
