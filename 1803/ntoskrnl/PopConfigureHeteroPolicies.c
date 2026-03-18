/*
 * XREFs of PopConfigureHeteroPolicies @ 0x14063FC4C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14063F9AC (PopInitializeHeteroProcessors.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KeConfigureHeteroPolicy @ 0x140640094 (KeConfigureHeteroPolicy.c)
 *     PpmHeteroComputeBias @ 0x14076B108 (PpmHeteroComputeBias.c)
 */

char __fastcall PopConfigureHeteroPolicies(int a1, char a2)
{
  __int64 v4; // r15
  __int64 v5; // rbx
  int v6; // edi
  int *v7; // r9
  int v8; // r11d
  unsigned int i; // r10d
  unsigned __int64 v10; // rax
  __int64 *v11; // r8
  __int64 v12; // rdx
  wchar_t **v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  unsigned __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // r9
  int v21; // ecx
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  _DWORD *v26; // r10
  _DWORD *v27; // r11
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // edi
  char result; // al
  __int64 v33; // rcx
  int v34; // edx
  unsigned int v35; // edx
  _DWORD *v36; // rcx
  __int64 v37; // r8
  char v38; // r10
  __int64 *v39; // rsi
  __int64 v40; // r15
  unsigned __int8 v41; // di
  __int64 v42; // rdx
  int v43; // eax
  char v44; // r10
  int v45; // eax
  char v46; // r11
  unsigned __int64 v47; // [rsp+38h] [rbp-99h]
  HANDLE Handle; // [rsp+48h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-71h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-61h] BYREF
  UNICODE_STRING ValueName; // [rsp+A0h] [rbp-31h] BYREF
  _DWORD v55[12]; // [rsp+B0h] [rbp-21h] BYREF
  _DWORD KeyValueInformation[4]; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v57; // [rsp+F0h] [rbp+1Fh] BYREF
  __int64 v58; // [rsp+F8h] [rbp+27h]

  memset(v55, 0, sizeof(v55));
  v4 = 7LL;
  v55[0] = 5;
  v5 = 0LL;
  v55[11] = 7;
  if ( a1 == 4 )
  {
    v55[9] = 10;
    goto LABEL_3;
  }
  v55[9] = 8;
  if ( a1 != 3 )
  {
LABEL_3:
    v55[10] = 100;
    if ( a1 <= 0 || a1 > 2 )
    {
      memset(&v55[1], 0, 32);
    }
    else
    {
      v35 = 0;
      v36 = &v55[1];
      do
      {
        v37 = 2LL;
        do
        {
          *v36++ = (0x300000001LL - (unsigned __int64)(v35 - 2)) >> 32;
          --v37;
        }
        while ( v37 );
        ++v35;
      }
      while ( v35 < 4 );
    }
    goto LABEL_5;
  }
  v55[10] = 5200;
  *(_QWORD *)&v55[1] = 0x200000004LL;
  *(_QWORD *)&v55[3] = 0x200000004LL;
  *(_QWORD *)&v55[5] = 0x400000004LL;
  *(_QWORD *)&v55[7] = 0x400000004LL;
LABEL_5:
  v6 = 5;
  v7 = &v55[2];
  v8 = 5;
  for ( i = 0; i < 4; ++i )
  {
    if ( i == 1 )
    {
      v12 = PpmEntryLevelPerfProfile;
      if ( !PpmEntryLevelPerfProfile )
      {
        v11 = 0LL;
        v47 = 0LL;
        LOWORD(v10) = 0;
        goto LABEL_15;
      }
    }
    else
    {
      if ( i == 2 )
      {
        if ( PpmBackgroundProfile )
          v47 = *(_QWORD *)(2688LL * dword_1403AAA2C + PpmBackgroundProfile + 40);
        else
          v47 = 0LL;
      }
      else if ( i != 3 )
      {
        LODWORD(v10) = HIDWORD(v47);
        v11 = &PpmCurrentProfile[336 * dword_1403AAA2C + 5];
LABEL_14:
        LODWORD(v10) = v10 | 0x1800;
        HIDWORD(v47) = v10;
        goto LABEL_15;
      }
      v12 = PpmMultimediaQosProfile;
      if ( !PpmMultimediaQosProfile )
      {
        v11 = &PpmCurrentProfile[336 * dword_1403AAA2C + 5];
        v10 = HIDWORD(v47);
        goto LABEL_14;
      }
    }
    v11 = (__int64 *)(2688LL * dword_1403AAA2C + v12 + 40);
    v47 = *v11;
    v10 = HIDWORD(*v11);
LABEL_15:
    if ( (v10 & 0x1000) != 0 )
      v6 = *((_DWORD *)v11 + 669);
    if ( (v10 & 0x800) != 0 )
      v8 = *((_DWORD *)v11 + 670);
    if ( v6 != 5 )
      *(v7 - 1) = v6;
    if ( v8 != 5 )
      *v7 = v8;
    v7 += 2;
  }
  if ( a2 )
  {
    dword_1403A81EC = -1;
    PopHeteroLegacyOverride = 5;
    qword_1403A81C4 = 0x500000005LL;
    qword_1403A81CC = 0x500000005LL;
    qword_1403A81D4 = 0x500000005LL;
    qword_1403A81DC = 0x500000005LL;
    qword_1403A81E4 = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes) >= 0 )
    {
      v13 = &off_1407FACA8;
      ObjectAttributes.RootDirectory = KeyHandle;
      do
      {
        RtlInitUnicodeString(&DestinationString, *(v13 - 1));
        if ( ZwOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, *v13);
          if ( ZwQueryValueKey(
                 Handle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 KeyValueInformation,
                 0x10u,
                 &ResultLength) >= 0
            && KeyValueInformation[0] == 4 )
          {
            *(int *)((char *)&PopHeteroLegacyOverride + *((unsigned int *)v13 + 2)) = KeyValueInformation[2];
          }
          ZwClose(Handle);
        }
        v13 += 3;
        --v4;
      }
      while ( v4 );
      ZwClose(KeyHandle);
    }
  }
  v14 = 4LL;
  v15 = 0LL;
  do
  {
    v16 = 2LL;
    do
    {
      v17 = *(_DWORD *)((char *)&qword_1403A81C4 + v15 * 4);
      if ( v17 != 5 )
        v55[v15 + 1] = v17;
      ++v15;
      --v16;
    }
    while ( v16 );
    --v14;
  }
  while ( v14 );
  v18 = v55[0];
  if ( PopHeteroLegacyOverride != 5 )
    v18 = (unsigned int)PopHeteroLegacyOverride;
  v19 = v55[9];
  v20 = v55[11];
  if ( (_DWORD)qword_1403A81E4 )
    v19 = qword_1403A81E4;
  v55[9] = v19;
  v21 = v55[10];
  if ( HIDWORD(qword_1403A81E4) )
    v21 = HIDWORD(qword_1403A81E4);
  v55[0] = v18;
  v55[10] = v21;
  if ( dword_1403A81EC != -1 )
    v20 = (unsigned int)dword_1403A81EC;
  v55[11] = v20;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    v22 = &v55[1];
    v23 = 4LL;
    do
    {
      v24 = 2LL;
      do
      {
        if ( *v22 == 3 )
          *v22 = 4;
        ++v22;
        --v24;
      }
      while ( v24 );
      --v23;
    }
    while ( v23 );
    v20 = v55[11];
    v18 = v55[0];
  }
  v25 = 1;
  v26 = &v55[1];
  v27 = &v55[2];
  v28 = 4LL;
  do
  {
    v29 = v25;
    v30 = 0LL;
    if ( *v26 == *v27 )
      v30 = v25;
    v26 += 2;
    v27 += 2;
    v25 = v30;
    --v28;
  }
  while ( v28 );
  if ( (_BYTE)v30 )
  {
    v20 = (unsigned int)v20 & 0xFFFFFFFB;
    v55[11] = v20;
  }
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    v31 = 1;
    v57 = 0x100000001LL;
    v58 = 0x100000001LL;
    goto LABEL_62;
  }
  LOBYTE(v20) = 0;
  v38 = 0;
  if ( !(_DWORD)v18 )
  {
    v38 = 1;
LABEL_101:
    LOBYTE(v20) = 1;
    goto LABEL_102;
  }
  v18 = (unsigned int)(v18 - 2);
  if ( !(_DWORD)v18 )
  {
    v38 = 1;
    goto LABEL_102;
  }
  v18 = (unsigned int)(v18 - 2);
  if ( !(_DWORD)v18 )
    goto LABEL_101;
  if ( (_DWORD)v18 == 1 )
  {
    v39 = &v57;
    v40 = 4LL;
    v18 = (unsigned __int64)&v55[1];
    do
    {
      LOBYTE(v29) = 0;
      v41 = 0;
      v42 = 2LL;
      do
      {
        v43 = *(_DWORD *)v18;
        if ( !*(_DWORD *)v18 )
        {
          v41 = 1;
LABEL_95:
          LOBYTE(v29) = 1;
          goto LABEL_96;
        }
        if ( v43 == 2 )
        {
          v41 = 1;
          goto LABEL_96;
        }
        if ( v43 == 4 )
          goto LABEL_95;
LABEL_96:
        v18 += 4LL;
        --v42;
      }
      while ( v42 );
      *(_DWORD *)v39 = PpmHeteroComputeBias(v29, v41, v18, v20);
      LOBYTE(v20) = v29 | v20;
      v39 = (__int64 *)((char *)v39 + 4);
      v38 = v41 | v44;
      --v40;
    }
    while ( v40 );
  }
LABEL_102:
  LOBYTE(v30) = v38;
  LOBYTE(v29) = v20;
  v45 = PpmHeteroComputeBias(v29, v30, v18, v20);
  v31 = v45;
  if ( v46 )
  {
    LODWORD(v57) = v45;
    HIDWORD(v57) = v45;
    LODWORD(v58) = v45;
    HIDWORD(v58) = v45;
  }
LABEL_62:
  result = KeConfigureHeteroPolicy(v55);
  if ( PpmHeteroParkBias != v31 )
  {
    PpmHeteroParkBias = v31;
    result = 1;
  }
  v33 = 4LL;
  do
  {
    v34 = *(_DWORD *)((char *)&v57 + v5 * 4);
    if ( PpmHeteroQosBias[v5] != v34 )
    {
      PpmHeteroQosBias[v5] = v34;
      result = 1;
    }
    ++v5;
    --v33;
  }
  while ( v33 );
  return result;
}
