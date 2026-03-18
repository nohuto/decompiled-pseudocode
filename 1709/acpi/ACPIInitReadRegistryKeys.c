/*
 * XREFs of ACPIInitReadRegistryKeys @ 0x1C00ADBC0
 * Callers:
 *     DriverEntry @ 0x1C00AC84C (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     RtlStringCchPrintfA @ 0x1C000E0C0 (RtlStringCchPrintfA.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     OSOpenHandle @ 0x1C0087914 (OSOpenHandle.c)
 *     OSReadRegValue @ 0x1C008E0E8 (OSReadRegValue.c)
 *     OSCloseHandle @ 0x1C008F8C8 (OSCloseHandle.c)
 */

void ACPIInitReadRegistryKeys()
{
  _BYTE *v0; // rbx
  _BYTE *v1; // rdi
  int v2; // eax
  int v3; // edx
  unsigned int v4; // esi
  _BYTE *PoolWithTag; // rax
  int v6; // eax
  int v7; // edx
  char *v8; // rax
  __int64 v9; // rsi
  int v10; // esi
  unsigned int v11; // r14d
  _BYTE *v12; // rax
  unsigned int v13; // esi
  char *v14; // rax
  const char *v15; // r14
  int v16; // r9d
  unsigned int v17; // [rsp+60h] [rbp+30h] BYREF
  int v18; // [rsp+68h] [rbp+38h] BYREF
  void *v19; // [rsp+70h] [rbp+40h] BYREF

  v19 = 0LL;
  v0 = 0LL;
  v17 = 4;
  v18 = 0;
  v1 = 0LL;
  if ( (int)OSReadRegValue("Attributes", 0LL, &v18, &v17) >= 0 )
    AcpiOverrideAttributes |= v18 & 0xFFFEFFFF;
  AcpiProcessorString = 0LL;
  Src = 0LL;
  v2 = OSOpenHandle("\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0", 0LL, &v19);
  if ( v2 < 0 )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      11,
      16,
      (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
      v2);
  }
  else
  {
    v4 = 40;
    while ( 1 )
    {
      if ( v0 )
        ExFreePoolWithTag(v0, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x53706341u);
      v0 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, v4);
      v17 = v4;
      v4 += 10;
      v6 = OSReadRegValue("Identifier", v19, v0, &v17);
      if ( v6 != -2147483643 )
      {
        if ( v6 < 0 )
        {
          v16 = 17;
LABEL_32:
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v7,
            11,
            v16,
            (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
            v6);
        }
        else
        {
          v8 = strstr(v0, "Stepping");
          if ( v8 )
            *(v8 - 1) = 0;
          v9 = -1LL;
          do
            ++v9;
          while ( v0[v9] );
          v10 = v9 + 1;
          v11 = 10;
          while ( 1 )
          {
            if ( v1 )
              ExFreePoolWithTag(v1, 0);
            v12 = ExAllocatePoolWithTag(PagedPool, v11, 0x53706341u);
            v1 = v12;
            if ( !v12 )
              break;
            memset(v12, 0, v11);
            v17 = v11;
            v11 += 10;
            v6 = OSReadRegValue("VendorIdentifier", v19, v1, &v17);
            if ( v6 != -2147483643 )
            {
              if ( v6 < 0 )
              {
                v16 = 18;
                goto LABEL_32;
              }
              v13 = v17 + 2 + v10;
              v14 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x53706341u);
              v15 = v14;
              if ( v14 )
              {
                RtlStringCchPrintfA(v14, v13, "%s - %s", v1, v0);
                Src = v15;
                WORD1(AcpiProcessorString) = v13;
                LOWORD(AcpiProcessorString) = v13;
              }
              goto LABEL_22;
            }
          }
        }
        break;
      }
    }
LABEL_22:
    if ( v19 )
      OSCloseHandle(v19);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}
