/*
 * XREFs of PiDevCfgResolveMultiSzValue @ 0x14058E87C
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PnpValidateRegistryMultiSz @ 0x14014FC24 (PnpValidateRegistryMultiSz.c)
 *     PnpValidateMultiSzData @ 0x14014FC5C (PnpValidateMultiSzData.c)
 *     PnpMultiSzContainsString @ 0x14014FC94 (PnpMultiSzContainsString.c)
 *     PnpValidateStringData @ 0x14014FF38 (PnpValidateStringData.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
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
  char v15; // al
  NTSTATUS RegistryValue; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // edi
  unsigned int v20; // esi
  char *v21; // r12
  unsigned int v22; // r12d
  const WCHAR *v23; // r13
  __int64 v24; // rax
  unsigned int v25; // ebx
  const WCHAR *v27; // r12
  int v28; // r15d
  bool v29; // zf
  unsigned int v30; // ebx
  unsigned int v31; // eax
  char *v32; // rax
  NTSTATUS v33; // [rsp+20h] [rbp-68h]
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
    goto LABEL_59;
  if ( a1 > 2 )
  {
    if ( a1 == 7 )
    {
      v15 = PnpValidateMultiSzData(a3, a2);
      goto LABEL_5;
    }
LABEL_59:
    v19 = -1073741823;
    goto LABEL_27;
  }
  v15 = PnpValidateStringData((__int64)a3, a2);
LABEL_5:
  if ( !v15 )
    return (unsigned int)-1073741823;
  RegistryValue = IopGetRegistryValue(KeyHandle, a6, 0, &P);
  v14 = (unsigned int *)P;
  v19 = RegistryValue;
  v33 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( PnpValidateRegistryMultiSz(P, v17, v18) )
    {
      if ( (a4 & 0x40000) != 0 )
      {
        v20 = v14[3];
        v21 = (char *)v14 + v14[2];
        P = v21;
        if ( !v20 )
          v20 = 2;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v20 + (unsigned int)v11, 0x63647050u);
        if ( PoolWithTag )
        {
          if ( v20 <= 2 )
          {
            v22 = 0;
          }
          else
          {
            memmove(PoolWithTag, v21, v20);
            v22 = v20 - 2;
          }
          if ( a1 == 7 )
          {
            if ( (a4 & 0x20000) != 0 )
            {
              memmove(&PoolWithTag[v22], v12, v11);
              v20 = v20 + v11 - 2;
            }
            else if ( *v12 )
            {
              v23 = (const WCHAR *)P;
              do
              {
                v24 = -1LL;
                do
                  ++v24;
                while ( v12[v24] );
                v25 = 2 * v24 + 2;
                if ( !PnpMultiSzContainsString(v23, v12) )
                {
                  memmove(&PoolWithTag[v22], v12, v25);
                  v22 += v25;
                  v20 += v25;
                }
                v12 += (unsigned __int64)v25 >> 1;
              }
              while ( *v12 );
            }
          }
          else if ( (a4 & 0x20000) != 0 || v20 == 2 || !PnpMultiSzContainsString((PCWSTR)P, v12) )
          {
            memmove(&PoolWithTag[v22], v12, v11);
            v20 += v11;
          }
LABEL_23:
          v8 = a7;
LABEL_24:
          if ( PoolWithTag )
            *(_WORD *)&PoolWithTag[2 * ((unsigned __int64)v20 >> 1) - 2] = 0;
          *v8 = v20;
          *a8 = PoolWithTag;
          goto LABEL_27;
        }
      }
      else
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v14[3], 0x63647050u);
        if ( PoolWithTag )
        {
          if ( a1 != 7 )
            RtlInitUnicodeString(&DestinationString, v12);
          v20 = 2;
          v27 = (const WCHAR *)((char *)v14 + v14[2]);
          if ( *v27 )
          {
            v28 = 0;
            do
            {
              RtlInitUnicodeString(&String2, v27);
              if ( a1 == 7 )
                v29 = PnpMultiSzContainsString(v12, String2.Buffer) == 0LL;
              else
                v29 = RtlEqualUnicodeString(&DestinationString, &String2, 1u) == 0;
              if ( v29 )
              {
                v30 = String2.Length + 2;
                memmove(&PoolWithTag[v28], String2.Buffer, v30);
                v28 += v30;
                v20 += v30;
              }
              v27 += ((unsigned __int64)String2.Length >> 1) + 1;
            }
            while ( *v27 );
            v19 = v33;
            v14 = (unsigned int *)P;
          }
          goto LABEL_23;
        }
      }
      goto LABEL_33;
    }
    goto LABEL_59;
  }
  if ( RegistryValue == -1073741772 )
  {
    v19 = 0;
    if ( (a4 & 0x40000) == 0 )
    {
      v20 = 0;
      goto LABEL_24;
    }
    v31 = v11 + 2;
    if ( a1 == 7 )
      v31 = v11;
    v20 = v31;
    v32 = (char *)ExAllocatePoolWithTag(PagedPool, v31, 0x63647050u);
    PoolWithTag = v32;
    if ( v32 )
    {
      memmove(v32, v12, v11);
      goto LABEL_24;
    }
    v14 = (unsigned int *)P;
LABEL_33:
    v19 = -1073741670;
  }
LABEL_27:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return v19;
}
