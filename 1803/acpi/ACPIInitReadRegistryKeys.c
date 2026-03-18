/*
 * XREFs of ACPIInitReadRegistryKeys @ 0x1C0099B04
 * Callers:
 *     DriverEntry @ 0x1C0098174 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     RtlStringCchPrintfA @ 0x1C0002234 (RtlStringCchPrintfA.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     OSOpenHandle @ 0x1C0071844 (OSOpenHandle.c)
 *     OSCloseHandle @ 0x1C0082128 (OSCloseHandle.c)
 *     OSReadRegValue @ 0x1C00829B8 (OSReadRegValue.c)
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
  int v8; // r9d
  char *v9; // rax
  __int64 v10; // rsi
  int v11; // esi
  unsigned int v12; // r14d
  _BYTE *v13; // rax
  unsigned int v14; // esi
  char *v15; // rax
  char *v16; // r14
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
  v2 = OSOpenHandle("\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0", 0LL, (__int64)&v19);
  if ( v2 >= 0 )
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
        if ( v6 >= 0 )
        {
          v9 = strstr(v0, "Stepping");
          if ( v9 )
            *(v9 - 1) = 0;
          v10 = -1LL;
          do
            ++v10;
          while ( v0[v10] );
          v11 = v10 + 1;
          v12 = 10;
          while ( 1 )
          {
            if ( v1 )
              ExFreePoolWithTag(v1, 0);
            v13 = ExAllocatePoolWithTag(PagedPool, v12, 0x53706341u);
            v1 = v13;
            if ( !v13 )
              break;
            memset(v13, 0, v12);
            v17 = v12;
            v12 += 10;
            v6 = OSReadRegValue("VendorIdentifier", v19, v1, &v17);
            if ( v6 != -2147483643 )
            {
              if ( v6 < 0 )
              {
                v8 = 18;
                goto LABEL_12;
              }
              v14 = v17 + 2 + v11;
              v15 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x53706341u);
              v16 = v15;
              if ( v15 )
              {
                RtlStringCchPrintfA(v15, v14, "%s - %s", v1, v0);
                Src = v16;
                WORD1(AcpiProcessorString) = v14;
                LOWORD(AcpiProcessorString) = v14;
              }
              goto LABEL_26;
            }
          }
        }
        else
        {
          v8 = 17;
LABEL_12:
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v7,
            11,
            v8,
            (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
            v6);
        }
        break;
      }
    }
LABEL_26:
    if ( v19 )
      OSCloseHandle(v19);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
  else
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      11,
      16,
      (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
      v2);
  }
}
