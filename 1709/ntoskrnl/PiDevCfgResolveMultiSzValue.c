/*
 * XREFs of PiDevCfgResolveMultiSzValue @ 0x1405A0790
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PnpValidateMultiSzData @ 0x1401280D4 (PnpValidateMultiSzData.c)
 *     PnpValidateRegistryMultiSz @ 0x1401330B8 (PnpValidateRegistryMultiSz.c)
 *     PnpMultiSzContainsString @ 0x1401330EC (PnpMultiSzContainsString.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 */

__int64 __fastcall PiDevCfgResolveMultiSzValue(
        unsigned int a1,
        unsigned int a2,
        _WORD *a3,
        int a4,
        HANDLE KeyHandle,
        const WCHAR *a6,
        unsigned int *a7,
        _QWORD *a8)
{
  unsigned int *v8; // r12
  char *PoolWithTag; // rbp
  size_t v11; // rbx
  _WORD *v12; // r14
  unsigned int *v14; // r15
  NTSTATUS RegistryValue; // eax
  unsigned int v16; // edi
  unsigned int v17; // esi
  char *v18; // r12
  unsigned int v19; // r12d
  const WCHAR *v20; // r13
  __int64 v21; // rax
  unsigned int v22; // ebx
  const WCHAR *v24; // r12
  int v25; // r15d
  bool v26; // zf
  unsigned int v27; // ebx
  unsigned int v28; // eax
  char *v29; // rax
  NTSTATUS v30; // [rsp+20h] [rbp-68h]
  PVOID P; // [rsp+28h] [rbp-60h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF

  v8 = a7;
  PoolWithTag = 0LL;
  v11 = a2;
  v12 = a3;
  P = 0LL;
  *a7 = 0;
  v14 = 0LL;
  *a8 = 0LL;
  if ( !a1 )
    goto LABEL_60;
  if ( a1 > 2 )
  {
    if ( a1 == 7 )
    {
      if ( PnpValidateMultiSzData(a3, a2) )
        goto LABEL_5;
      return (unsigned int)-1073741823;
    }
LABEL_60:
    v16 = -1073741823;
    goto LABEL_26;
  }
  if ( a2 < 2 || a3[((unsigned __int64)a2 >> 1) - 1] )
    return (unsigned int)-1073741823;
LABEL_5:
  RegistryValue = IopGetRegistryValue(KeyHandle, a6, 0, &P);
  v14 = (unsigned int *)P;
  v16 = RegistryValue;
  v30 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( PnpValidateRegistryMultiSz(P) )
    {
      if ( (a4 & 0x40000) != 0 )
      {
        v17 = v14[3];
        v18 = (char *)v14 + v14[2];
        P = v18;
        if ( !v17 )
          v17 = 2;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v17 + (unsigned int)v11, 0x63647050u);
        if ( PoolWithTag )
        {
          if ( v17 <= 2 )
          {
            v19 = 0;
          }
          else
          {
            memmove(PoolWithTag, v18, v17);
            v19 = v17 - 2;
          }
          if ( a1 == 7 )
          {
            if ( (a4 & 0x20000) != 0 )
            {
              memmove(&PoolWithTag[v19], v12, v11);
              v17 = v17 + v11 - 2;
            }
            else if ( *v12 )
            {
              v20 = (const WCHAR *)P;
              do
              {
                v21 = -1LL;
                do
                  ++v21;
                while ( v12[v21] );
                v22 = 2 * v21 + 2;
                if ( !PnpMultiSzContainsString(v20, v12) )
                {
                  memmove(&PoolWithTag[v19], v12, v22);
                  v19 += v22;
                  v17 += v22;
                }
                v12 += (unsigned __int64)v22 >> 1;
              }
              while ( *v12 );
            }
          }
          else if ( (a4 & 0x20000) != 0 || v17 == 2 || !PnpMultiSzContainsString((PCWSTR)P, v12) )
          {
            memmove(&PoolWithTag[v19], v12, v11);
            v17 += v11;
          }
LABEL_22:
          v8 = a7;
LABEL_23:
          if ( PoolWithTag )
            *(_WORD *)&PoolWithTag[2 * ((unsigned __int64)v17 >> 1) - 2] = 0;
          *v8 = v17;
          *a8 = PoolWithTag;
          goto LABEL_26;
        }
      }
      else
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v14[3], 0x63647050u);
        if ( PoolWithTag )
        {
          if ( a1 != 7 )
            RtlInitUnicodeString(&DestinationString, v12);
          v17 = 2;
          v24 = (const WCHAR *)((char *)v14 + v14[2]);
          if ( *v24 )
          {
            v25 = 0;
            do
            {
              RtlInitUnicodeString(&String2, v24);
              if ( a1 == 7 )
                v26 = PnpMultiSzContainsString(v12, String2.Buffer) == 0LL;
              else
                v26 = RtlEqualUnicodeString(&DestinationString, &String2, 1u) == 0;
              if ( v26 )
              {
                v27 = String2.Length + 2;
                memmove(&PoolWithTag[v25], String2.Buffer, v27);
                v25 += v27;
                v17 += v27;
              }
              v24 += ((unsigned __int64)String2.Length >> 1) + 1;
            }
            while ( *v24 );
            v16 = v30;
            v14 = (unsigned int *)P;
          }
          goto LABEL_22;
        }
      }
      goto LABEL_34;
    }
    goto LABEL_60;
  }
  if ( RegistryValue == -1073741772 )
  {
    v16 = 0;
    if ( (a4 & 0x40000) == 0 )
    {
      v17 = 0;
      goto LABEL_23;
    }
    v28 = v11 + 2;
    if ( a1 == 7 )
      v28 = v11;
    v17 = v28;
    v29 = (char *)ExAllocatePoolWithTag(PagedPool, v28, 0x63647050u);
    PoolWithTag = v29;
    if ( v29 )
    {
      memmove(v29, v12, v11);
      goto LABEL_23;
    }
    v14 = (unsigned int *)P;
LABEL_34:
    v16 = -1073741670;
  }
LABEL_26:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return v16;
}
