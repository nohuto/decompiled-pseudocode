/*
 * XREFs of PiCreateDriverSwDeviceCallback @ 0x1406AA480
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x140156E08 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     _PnpGetGenericStoreProperty @ 0x140487660 (_PnpGetGenericStoreProperty.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     RtlCreateUnicodeString @ 0x1404C1CA0 (RtlCreateUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     PnpGenerateDeviceIdsHash @ 0x1404E5BF0 (PnpGenerateDeviceIdsHash.c)
 *     RtlHashUnicodeString @ 0x1404E5D70 (RtlHashUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14059365C (_PnpGetGenericStorePropertyKeys.c)
 *     PipMakeGloballyUniqueId @ 0x1405C146C (PipMakeGloballyUniqueId.c)
 *     PiSwStartCreate @ 0x1406A34B8 (PiSwStartCreate.c)
 *     PnpCompareMultiSz @ 0x1406A6970 (PnpCompareMultiSz.c)
 */

__int64 __fastcall PiCreateDriverSwDeviceCallback(__int64 *a1, __int64 a2, const WCHAR *a3, __int64 *a4)
{
  __int64 *v4; // rdi
  ULONG v5; // r15d
  wchar_t *v6; // r14
  void *v7; // rsi
  unsigned int v8; // r13d
  signed __int64 v9; // r12
  __int64 v10; // rcx
  int RegistryValues; // ebx
  wchar_t *Buffer; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  ULONG v15; // r15d
  int v16; // edi
  wchar_t *v17; // r15
  PCWCH *v18; // r12
  unsigned int v19; // r14d
  int *v20; // r13
  int v21; // r9d
  const wchar_t *v22; // rdi
  __int64 v23; // rax
  NTSTATUS RegistryValue; // eax
  PCWSTR v26; // r14
  __int64 v27; // rax
  PVOID v28; // rbx
  __int64 *v29; // rdi
  signed int i; // eax
  __int64 v31; // rax
  PVOID v32; // rax
  unsigned int v33; // esi
  signed __int64 v34; // r14
  char *v35; // rdi
  __int64 v36; // r12
  int v37; // eax
  void *v38; // rcx
  PVOID v39; // rax
  PVOID v40; // rax
  PVOID *v41; // rdi
  __int64 v42; // rsi
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v44; // [rsp+78h] [rbp-88h]
  int v45; // [rsp+80h] [rbp-80h]
  _DWORD *v46; // [rsp+88h] [rbp-78h] BYREF
  wchar_t *Str1; // [rsp+90h] [rbp-70h]
  ULONG HashValue; // [rsp+98h] [rbp-68h] BYREF
  ULONG v49; // [rsp+9Ch] [rbp-64h] BYREF
  int v50; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  int v52; // [rsp+B0h] [rbp-50h] BYREF
  ULONG v53; // [rsp+B4h] [rbp-4Ch]
  unsigned int v54; // [rsp+B8h] [rbp-48h]
  unsigned int v55; // [rsp+BCh] [rbp-44h]
  PVOID v56; // [rsp+C0h] [rbp-40h]
  PVOID PoolWithTag; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING UnicodeString; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v59; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING GuidString; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v61; // [rsp+100h] [rbp+0h] BYREF
  PVOID P; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v63; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v64; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING String2; // [rsp+138h] [rbp+38h] BYREF
  _DWORD v66[2]; // [rsp+148h] [rbp+48h] BYREF
  PCWSTR SourceString; // [rsp+150h] [rbp+50h]
  __int64 *v68; // [rsp+158h] [rbp+58h]
  __int64 v69; // [rsp+160h] [rbp+60h]
  UNICODE_STRING DestinationString; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v71[2]; // [rsp+178h] [rbp+78h] BYREF
  GUID Guid; // [rsp+188h] [rbp+88h] BYREF
  _QWORD v73[50]; // [rsp+1A0h] [rbp+A0h] BYREF

  v44 = a4;
  SourceString = a3;
  v4 = a4;
  v68 = a1;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  Handle = 0LL;
  v5 = 0;
  UnicodeString.Buffer = 0LL;
  v6 = 0LL;
  *(_QWORD *)&v59.Length = 0LL;
  v7 = 0LL;
  v59.Buffer = 0LL;
  v8 = 0;
  *(_QWORD *)&GuidString.Length = 0LL;
  v9 = 0LL;
  GuidString.Buffer = 0LL;
  v50 = 0;
  *(_QWORD *)&v63.Length = 0LL;
  v63.Buffer = 0LL;
  *(_QWORD *)&v64.Length = 0LL;
  v64.Buffer = 0LL;
  v53 = 0;
  v49 = 0;
  HashValue = 0;
  Str1 = 0LL;
  v52 = 1;
  v45 = 0;
  v46 = 0LL;
  v69 = 0LL;
  v55 = 0;
  *(_QWORD *)&v61.Length = 0LL;
  v61.Buffer = 0LL;
  P = 0LL;
  v54 = 0;
  PoolWithTag = 0LL;
  v56 = 0LL;
  if ( a1 )
    v10 = *a1;
  else
    v10 = 0LL;
  RegistryValues = SysCtxRegOpenKey(v10, a2, (__int64)a3, 0, 0x20019u, (__int64)&Handle);
  if ( RegistryValues >= 0 )
  {
    memset(v73, 0, 0x188uLL);
    LODWORD(v73[25]) = 0x4000000;
    LODWORD(v73[1]) = 304;
    LODWORD(v73[4]) = 117440512;
    v73[2] = L"HardwareIds";
    LODWORD(v73[8]) = 304;
    v73[3] = &UnicodeString;
    LODWORD(v73[11]) = 117440512;
    v73[9] = L"CompatibleIds";
    LODWORD(v73[15]) = 288;
    v73[10] = &v59;
    LODWORD(v73[18]) = 0x1000000;
    v73[16] = L"ContainerId";
    v73[17] = &GuidString;
    v73[23] = L"Capabilities";
    v73[24] = &v50;
    v73[30] = L"Description";
    v73[31] = &v63;
    v73[37] = L"LocationInfo";
    LODWORD(v73[22]) = 288;
    LODWORD(v73[29]) = 288;
    LODWORD(v73[32]) = 0x1000000;
    LODWORD(v73[36]) = 288;
    LODWORD(v73[39]) = 0x1000000;
    v73[38] = &v64;
    RegistryValues = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, (__int64)v73, 0LL);
    if ( RegistryValues >= 0 )
    {
      if ( UnicodeString.Buffer && UnicodeString.Length <= 2u )
        RtlFreeUnicodeString(&UnicodeString);
      if ( v59.Buffer && v59.Length <= 2u )
        RtlFreeUnicodeString(&v59);
      Buffer = GuidString.Buffer;
      if ( !GuidString.Buffer )
        goto LABEL_17;
      if ( GuidString.Length < 2u )
      {
        RtlFreeUnicodeString(&GuidString);
        Buffer = GuidString.Buffer;
      }
      if ( !Buffer || RtlGUIDFromString(&GuidString, &Guid) < 0 )
      {
LABEL_17:
        *(_QWORD *)&Guid.Data1 = 0LL;
        *(_QWORD *)Guid.Data4 = 0LL;
      }
      if ( v63.Buffer && v63.Length < 2u )
        RtlFreeUnicodeString(&v63);
      if ( v64.Buffer && v64.Length < 2u )
        RtlFreeUnicodeString(&v64);
      if ( !UnicodeString.Buffer && !v59.Buffer )
      {
        RegistryValues = -1073741637;
        goto LABEL_77;
      }
      v13 = *v4;
      v14 = -1LL;
      v71[0] = UnicodeString.Buffer;
      v71[1] = v59.Buffer;
      v66[0] = 2;
      v66[1] = 3;
      if ( v13 != IopRootDeviceNode )
      {
        while ( 1 )
        {
          if ( *(PDRIVER_OBJECT *)(*(_QWORD *)(v13 + 32) + 8LL) == PiSwDeviceDriverObject )
          {
            RtlInitUnicodeString(&DestinationString, L"SWD\\");
            if ( RtlPrefixUnicodeString(&DestinationString, (PCUNICODE_STRING)(v13 + 40), 1u) )
            {
              RtlInitUnicodeString(
                &String2,
                (PCWSTR)(*(_QWORD *)(v13 + 48) + 2 * ((unsigned __int64)DestinationString.Length >> 1)));
              RtlInitUnicodeString(&DestinationString, L"DRIVERENUM");
              if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
              {
                if ( String2.Buffer[(unsigned __int64)DestinationString.Length >> 1] == 92 )
                {
                  if ( !v5 )
                  {
                    RegistryValues = PnpGenerateDeviceIdsHash((__int64)UnicodeString.Buffer, (__int64)v59.Buffer, &v49);
                    if ( RegistryValues < 0 )
                      goto LABEL_144;
                    if ( (v50 & 8) != 0 )
                    {
                      v15 = v49;
                    }
                    else
                    {
                      RtlInitUnicodeString(&String2, L"SWD\\GenericRaw");
                      RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
                      if ( RegistryValues < 0 )
                      {
LABEL_144:
                        v7 = v46;
                        goto LABEL_76;
                      }
                      v15 = HashValue + v49;
                    }
                    RtlInitUnicodeString(&String2, L"SWD\\Generic");
                    RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
                    if ( RegistryValues < 0 )
                      goto LABEL_44;
                    v5 = HashValue + v15;
                    v53 = v5;
                    v49 = v5;
                  }
                  if ( *(_DWORD *)(v13 + 684) == v5 )
                  {
                    if ( v6 )
                    {
                      v16 = v45;
                    }
                    else
                    {
                      v16 = 2048;
                      v45 = 2048;
                      Str1 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x20207050u);
                      v6 = Str1;
                      if ( !Str1 )
                      {
                        RegistryValues = -1073741670;
                        goto LABEL_44;
                      }
                    }
                    v17 = Str1;
                    v18 = (PCWCH *)v71;
                    v19 = 0;
                    v20 = v66;
                    do
                    {
                      v21 = *v20;
                      LODWORD(NumberOfBytes) = v16;
                      RegistryValues = CmGetDeviceRegProp(
                                         *(__int64 *)&PiPnpRtlCtx,
                                         *(_QWORD *)(v13 + 48),
                                         0LL,
                                         v21,
                                         (__int64)&v52,
                                         (__int64)v17,
                                         (__int64)&NumberOfBytes,
                                         0);
                      if ( RegistryValues < 0 || v52 != 7 || (unsigned int)NumberOfBytes < 2 )
                      {
                        *v17 = 0;
                        RegistryValues = 0;
                      }
                      if ( v19 == 1 )
                      {
                        v22 = v17;
                        if ( *v17 )
                        {
                          while ( wcsicmp(v22, L"SWD\\GenericRaw") && wcsicmp(v22, L"SWD\\Generic") )
                          {
                            v23 = -1LL;
                            do
                              ++v23;
                            while ( v22[v23] );
                            v22 += v23 + 1;
                            if ( !*v22 )
                              goto LABEL_60;
                          }
                          *v22 = 0;
                        }
LABEL_60:
                        v16 = v45;
                      }
                      if ( *v18 )
                      {
                        if ( !PnpCompareMultiSz(*v18, v17) )
                          break;
                      }
                      else if ( *v17 )
                      {
                        break;
                      }
                      ++v19;
                      ++v20;
                      ++v18;
                    }
                    while ( v19 < 2 );
                    v5 = v53;
                    if ( v19 >= 2 )
                    {
                      RegistryValues = -1073740028;
LABEL_71:
                      v8 = v54;
                      v14 = -1LL;
                      v9 = v54;
                      break;
                    }
                    v6 = Str1;
                  }
                }
              }
            }
          }
          v13 = *(_QWORD *)(v13 + 16);
          if ( v13 == IopRootDeviceNode )
            goto LABEL_71;
        }
      }
      if ( RegistryValues >= 0 )
      {
        RegistryValue = IopGetRegistryValue(Handle, L"Security", 0, &v46);
        v7 = v46;
        RegistryValues = RegistryValue;
        if ( RegistryValue >= 0 )
        {
          if ( v46[1] != 3 || (v55 = v46[3], v55 < 0x28) )
          {
            RegistryValues = -1073741823;
            goto LABEL_132;
          }
          v69 = (__int64)v46 + (unsigned int)v46[2];
        }
        else if ( RegistryValue != -1073741772 )
        {
LABEL_75:
          v6 = Str1;
          goto LABEL_76;
        }
        if ( *v44 == IopRootDeviceNode )
        {
          if ( !RtlCreateUnicodeString(&v61, SourceString) )
            goto LABEL_98;
        }
        else
        {
          RegistryValues = PipMakeGloballyUniqueId(*(_QWORD *)(*v44 + 32), 0LL, (wchar_t **)&P);
          if ( RegistryValues < 0 )
            goto LABEL_75;
          v26 = SourceString;
          v27 = -1LL;
          v61.Length = 0;
          do
            ++v27;
          while ( SourceString[v27] );
          v28 = P;
          do
            ++v14;
          while ( *((_WORD *)P + v14) );
          v61.MaximumLength = 2 * (v14 + v27 + 2);
          v61.Buffer = (wchar_t *)ExpAllocateStringRoutine(v61.MaximumLength);
          if ( !v61.Buffer )
          {
LABEL_98:
            RegistryValues = -1073741670;
            goto LABEL_75;
          }
          RegistryValues = RtlUnicodeStringPrintf(&v61, L"%ws&%ws", v26, v28);
          if ( RegistryValues < 0 )
            goto LABEL_75;
        }
        v29 = v68;
        for ( i = PnpGetGenericStorePropertyKeys(v68, (__int64)Handle, 0LL, 0, 0LL, 0, (unsigned int *)&NumberOfBytes);
              ;
              i = PnpGetGenericStorePropertyKeys(
                    v29,
                    (__int64)Handle,
                    0LL,
                    0,
                    (__int64)PoolWithTag,
                    v8,
                    (unsigned int *)&NumberOfBytes) )
        {
          RegistryValues = i;
          if ( i != -1073741789 )
          {
            v8 = NumberOfBytes;
            goto LABEL_110;
          }
          v31 = (unsigned int)NumberOfBytes;
          if ( (unsigned int)NumberOfBytes <= v8 )
          {
            RegistryValues = -1073741595;
            goto LABEL_140;
          }
          if ( v9 )
          {
            ExFreePoolWithTag((PVOID)v9, 0);
            v31 = (unsigned int)NumberOfBytes;
          }
          v8 = v31;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20 * v31, 0x20207050u);
          v9 = (signed __int64)PoolWithTag;
          if ( !PoolWithTag )
            break;
        }
        RegistryValues = -1073741670;
LABEL_110:
        if ( RegistryValues < 0 )
          goto LABEL_140;
        if ( v8 )
        {
          v32 = ExAllocatePoolWithTag(PagedPool, 48LL * v8, 0x20207050u);
          v56 = v32;
          if ( !v32 )
          {
            RegistryValues = -1073741670;
            goto LABEL_140;
          }
          memset(v32, 0, 48LL * v8);
          v33 = 0;
          v34 = v9;
          v35 = (char *)v56 + 36;
          while ( 2 )
          {
            *(_OWORD *)(v35 - 36) = *(_OWORD *)v34;
            *((_DWORD *)v35 - 5) = *(_DWORD *)(v34 + 16);
            *((_DWORD *)v35 - 4) = 0;
            v36 = v9 + 20LL * v33;
            while ( 1 )
            {
              RegistryValues = PnpGetGenericStoreProperty(
                                 v68,
                                 (__int64)Handle,
                                 0LL,
                                 v36,
                                 (_DWORD *)v35 - 1,
                                 *(_QWORD *)(v35 + 4),
                                 *(_DWORD *)v35,
                                 &NumberOfBytes);
              v37 = NumberOfBytes;
              if ( RegistryValues != -1073741789 )
                break;
              if ( (unsigned int)NumberOfBytes <= *(_DWORD *)v35 )
              {
                RegistryValues = -1073741595;
                goto LABEL_132;
              }
              v38 = *(void **)(v35 + 4);
              if ( v38 )
              {
                ExFreePoolWithTag(v38, 0);
                v37 = NumberOfBytes;
              }
              *(_DWORD *)v35 = v37;
              v39 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20207050u);
              *(_QWORD *)(v35 + 4) = v39;
              if ( !v39 )
              {
                RegistryValues = -1073741670;
                goto LABEL_126;
              }
            }
            *(_DWORD *)v35 = NumberOfBytes;
LABEL_126:
            if ( RegistryValues < 0 )
              goto LABEL_132;
            ++v33;
            v35 += 48;
            v34 += 20LL;
            if ( v33 < v8 )
            {
              v9 = (signed __int64)PoolWithTag;
              continue;
            }
            break;
          }
        }
        RegistryValues = PiSwStartCreate(
                           (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
                           *(_QWORD *)(*v44 + 48),
                           (__int64)v61.Buffer,
                           (__int64)UnicodeString.Buffer,
                           (__int64)v59.Buffer,
                           (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
                           v50,
                           (__int64)v63.Buffer,
                           (__int64)v64.Buffer,
                           v69,
                           v55,
                           (__int64)v56,
                           v8);
LABEL_132:
        v40 = v56;
        if ( v56 )
        {
          if ( v8 )
          {
            v41 = (PVOID *)((char *)v56 + 40);
            v42 = v8;
            do
            {
              if ( *v41 )
                ExFreePoolWithTag(*v41, 0);
              v41 += 6;
              --v42;
            }
            while ( v42 );
            v40 = v56;
          }
          ExFreePoolWithTag(v40, 0);
        }
LABEL_140:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        v7 = v46;
        goto LABEL_75;
      }
      v6 = Str1;
LABEL_44:
      v7 = v46;
LABEL_76:
      v4 = v44;
    }
  }
LABEL_77:
  RtlFreeUnicodeString(&v61);
  if ( P )
    ExFreePoolWithTag(P, 0);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v59);
  RtlFreeUnicodeString(&GuidString);
  RtlFreeUnicodeString(&v63);
  RtlFreeUnicodeString(&v64);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( *((int *)v4 + 2) >= 0 )
    *((_DWORD *)v4 + 2) = RegistryValues;
  return 0LL;
}
