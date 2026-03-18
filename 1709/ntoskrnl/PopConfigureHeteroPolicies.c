/*
 * XREFs of PopConfigureHeteroPolicies @ 0x1405B6708
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1405B6434 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KeConfigureHeteroPolicy @ 0x1405B6AF0 (KeConfigureHeteroPolicy.c)
 */

char __fastcall PopConfigureHeteroPolicies(int a1, char a2)
{
  __int64 v4; // r15
  int v5; // ebx
  int v6; // esi
  int *v7; // r9
  int v8; // r11d
  unsigned int i; // r10d
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  wchar_t **v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  int v19; // r8d
  int v20; // ecx
  int v21; // r9d
  int v22; // ecx
  char v23; // al
  _DWORD *v24; // r10
  int *v25; // r11
  __int64 v26; // rsi
  char v27; // cl
  char v28; // dl
  int v29; // eax
  bool v30; // zf
  char result; // al
  _DWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // ecx
  _DWORD *v36; // rdx
  __int64 v37; // r8
  char v38; // dl
  char v39; // cl
  int v40; // r8d
  int v41; // r8d
  int *v42; // rax
  __int64 v43; // r10
  __int64 v44; // r9
  int v45; // r8d
  unsigned __int64 v46; // [rsp+38h] [rbp-89h]
  HANDLE Handle; // [rsp+48h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-71h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-51h] BYREF
  UNICODE_STRING ValueName; // [rsp+A0h] [rbp-21h] BYREF
  _DWORD v54[10]; // [rsp+B0h] [rbp-11h] BYREF
  _DWORD KeyValueInformation[4]; // [rsp+D8h] [rbp+17h] BYREF

  memset(v54, 0, sizeof(v54));
  v4 = 7LL;
  v54[0] = 5;
  v5 = 0;
  v54[9] = 7;
  if ( a1 == 4 )
  {
    v54[7] = 10;
    goto LABEL_3;
  }
  v54[7] = 8;
  if ( a1 != 3 )
  {
LABEL_3:
    v54[8] = 100;
    if ( a1 <= 0 || a1 > 2 )
    {
      memset(&v54[1], 0, 24);
    }
    else
    {
      v35 = 0;
      v36 = &v54[1];
      do
      {
        v37 = 2LL;
        do
        {
          *v36++ = 3 - (v35 != 2);
          --v37;
        }
        while ( v37 );
        ++v35;
      }
      while ( v35 < 3 );
    }
    goto LABEL_5;
  }
  v54[8] = 5200;
  *(_QWORD *)&v54[1] = 0x200000004LL;
  *(_QWORD *)&v54[3] = 0x200000004LL;
  *(_QWORD *)&v54[5] = 0x400000004LL;
LABEL_5:
  v6 = 5;
  v7 = &v54[2];
  v8 = 5;
  for ( i = 0; i < 3; ++i )
  {
    if ( i == 1 )
    {
      v10 = PpmEntryLevelPerfProfile;
    }
    else
    {
      if ( i != 2 )
      {
        v12 = 2688LL * dword_1403661AC + PpmCurrentProfile + 40;
        HIDWORD(v46) |= 0x1800u;
        v11 = v46;
        goto LABEL_11;
      }
      v10 = PpmBackgroundProfile;
    }
    if ( v10 )
    {
      v12 = 2688LL * dword_1403661AC + v10 + 40;
      v11 = *(_QWORD *)v12;
      v46 = *(_QWORD *)v12;
    }
    else
    {
      v46 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
    }
LABEL_11:
    v13 = HIDWORD(v11);
    if ( (v13 & 0x1000) != 0 )
      v6 = *(_DWORD *)(v12 + 2676);
    if ( (v13 & 0x800) != 0 )
      v8 = *(_DWORD *)(v12 + 2680);
    if ( v6 != 5 )
      *(v7 - 1) = v6;
    if ( v8 != 5 )
      *v7 = v8;
    v7 += 2;
  }
  if ( a2 )
  {
    dword_140364984 = -1;
    PopHeteroLegacyOverride[0] = 5;
    qword_140364964 = 0x500000005LL;
    qword_14036496C = 0x500000005LL;
    qword_140364974 = 0x500000005LL;
    qword_14036497C = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes) >= 0 )
    {
      v14 = &off_14078E5D8;
      ObjectAttributes.RootDirectory = KeyHandle;
      do
      {
        RtlInitUnicodeString(&DestinationString, *(v14 - 1));
        if ( ZwOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, *v14);
          if ( ZwQueryValueKey(
                 Handle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 KeyValueInformation,
                 0x10u,
                 &ResultLength) >= 0
            && KeyValueInformation[0] == 4 )
          {
            *(int *)((char *)PopHeteroLegacyOverride + *((unsigned int *)v14 + 2)) = KeyValueInformation[2];
          }
          ZwClose(Handle);
        }
        v14 += 3;
        --v4;
      }
      while ( v4 );
      ZwClose(KeyHandle);
    }
  }
  v15 = 3LL;
  v16 = 0LL;
  do
  {
    v17 = 2LL;
    do
    {
      v18 = PopHeteroLegacyOverride[v16 + 1];
      if ( v18 != 5 )
        v54[v16 + 1] = v18;
      ++v16;
      --v17;
    }
    while ( v17 );
    --v15;
  }
  while ( v15 );
  v19 = v54[0];
  if ( PopHeteroLegacyOverride[0] != 5 )
    v19 = PopHeteroLegacyOverride[0];
  v20 = v54[7];
  v21 = v54[9];
  if ( (_DWORD)qword_14036497C )
    v20 = qword_14036497C;
  v54[7] = v20;
  v22 = v54[8];
  if ( HIDWORD(qword_14036497C) )
    v22 = HIDWORD(qword_14036497C);
  v54[0] = v19;
  v54[8] = v22;
  if ( dword_140364984 != -1 )
    v21 = dword_140364984;
  v54[9] = v21;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    v32 = &v54[1];
    v33 = 3LL;
    do
    {
      v34 = 2LL;
      do
      {
        if ( *v32 == 3 )
          *v32 = 4;
        ++v32;
        --v34;
      }
      while ( v34 );
      --v33;
    }
    while ( v33 );
    v21 = v54[9];
    v19 = v54[0];
  }
  v23 = 1;
  v24 = &v54[1];
  v25 = &v54[2];
  v26 = 3LL;
  do
  {
    v27 = v23;
    v28 = 0;
    v29 = *v25;
    v25 += 2;
    v30 = *v24 == v29;
    v24 += 2;
    if ( v30 )
      v28 = v27;
    v23 = v28;
    --v26;
  }
  while ( v26 );
  if ( v28 )
    v54[9] = v21 & 0xFFFFFFFB;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    v5 = 1;
    goto LABEL_51;
  }
  v38 = 0;
  v39 = 0;
  if ( !v19 )
  {
    v38 = 1;
    v39 = 1;
    goto LABEL_91;
  }
  v40 = v19 - 2;
  if ( !v40 )
  {
LABEL_93:
    v5 = 2;
    goto LABEL_51;
  }
  v41 = v40 - 2;
  if ( !v41 )
  {
LABEL_95:
    v5 = 3;
    goto LABEL_51;
  }
  if ( v41 != 1 )
    goto LABEL_51;
  v42 = &v54[1];
  v43 = 3LL;
  while ( 2 )
  {
    v44 = 2LL;
    while ( 2 )
    {
      v45 = *v42;
      if ( !*v42 )
      {
        v39 = 1;
LABEL_86:
        v38 = 1;
        goto LABEL_87;
      }
      if ( v45 == 2 )
      {
        v39 = 1;
        goto LABEL_87;
      }
      if ( v45 == 4 )
        goto LABEL_86;
LABEL_87:
      ++v42;
      if ( --v44 )
        continue;
      break;
    }
    if ( --v43 )
      continue;
    break;
  }
LABEL_91:
  if ( v38 )
  {
    v5 = 1;
    if ( v39 )
      goto LABEL_51;
    goto LABEL_95;
  }
  if ( v39 )
    goto LABEL_93;
LABEL_51:
  result = KeConfigureHeteroPolicy(v54);
  if ( PpmHeteroParkBias != v5 )
  {
    PpmHeteroParkBias = v5;
    return 1;
  }
  return result;
}
