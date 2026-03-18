/*
 * XREFs of ACPIDetectDuplicateHID @ 0x1C0017E78
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000E650 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIExtListEnumNext @ 0x1C0023590 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C002367C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C00236D0 (ACPIExtListTestElement.c)
 */

void __fastcall ACPIDetectDuplicateHID(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  __int64 i; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  const char *v6; // rcx
  const char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int8 *v10; // rax
  __int64 v11; // r9
  int v12; // r8d
  int v13; // ecx
  const char *v14; // rax
  const char *v15; // rcx
  const char *v16; // rax
  const char *v17; // rcx
  _QWORD v18[2]; // [rsp+50h] [rbp-48h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-38h]
  KIRQL NewIrql; // [rsp+68h] [rbp-30h]
  __int64 v21; // [rsp+78h] [rbp-20h]
  int v22; // [rsp+80h] [rbp-18h]

  v2 = BugCheckParameter2[93];
  if ( v2 && (BugCheckParameter2[1] & 0xA00000000000LL) != 0 && (BugCheckParameter2[1] & 0x2000000000003LL) == 0 )
  {
    v18[1] = 0LL;
    v18[0] = v2 + 752;
    v21 = 768LL;
    SpinLock = &AcpiDeviceTreeLock;
    v22 = 2;
    for ( i = ACPIExtListStartEnum(v18); ; i = ACPIExtListEnumNext(v18) )
    {
      LOBYTE(v4) = 1;
      v5 = (_QWORD *)i;
      if ( !(unsigned __int8)ACPIExtListTestElement(v18, v4) )
        break;
      if ( !v5 )
      {
        if ( v22 == 2 )
          KeReleaseSpinLock(SpinLock, NewIrql);
        return;
      }
      if ( v5 != BugCheckParameter2 && (v5[1] & 0xA00000000000LL) != 0 && (v5[1] & 0x2080000000003LL) == 0 )
      {
        v6 = (const char *)v5[70];
        if ( v6 )
        {
          v7 = (const char *)BugCheckParameter2[70];
          if ( v7 )
          {
            if ( strstr(v6, v7) )
            {
              v8 = v5[1];
              v9 = BugCheckParameter2[1];
              if ( (v8 & 0x1400000000000LL) != 0 && (v9 & 0x1400000000000LL) != 0 )
              {
                v10 = (unsigned __int8 *)v5[71];
                v11 = BugCheckParameter2[71] - (_QWORD)v10;
                do
                {
                  v12 = v10[v11];
                  v13 = *v10 - v12;
                  if ( v13 )
                    break;
                  ++v10;
                }
                while ( v12 );
                if ( !v13 )
                {
                  v14 = (const char *)&unk_1C005B1F0;
                  v15 = (const char *)&unk_1C005B1F0;
                  if ( (v9 & 0x200000000000LL) != 0 )
                  {
                    v14 = (const char *)BugCheckParameter2[70];
                    if ( (v9 & 0x400000000000LL) != 0 )
                      v15 = (const char *)BugCheckParameter2[71];
                  }
                  WPP_RECORDER_SF_qqss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    0x16u,
                    0xDu,
                    (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
                    (char)v5,
                    (char)BugCheckParameter2,
                    v14,
                    v15);
                  KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 1uLL);
                }
              }
              else if ( ((v9 | v8) & 0x1400000000000LL) == 0 )
              {
                v16 = (const char *)&unk_1C005B1F0;
                v17 = (const char *)&unk_1C005B1F0;
                if ( (v9 & 0x200000000000LL) != 0 )
                {
                  v16 = (const char *)BugCheckParameter2[70];
                  if ( (v9 & 0x400000000000LL) != 0 )
                    v17 = (const char *)BugCheckParameter2[71];
                }
                WPP_RECORDER_SF_qqss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  0x16u,
                  0xEu,
                  (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
                  (char)v5,
                  (char)BugCheckParameter2,
                  v16,
                  v17);
                KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 0LL);
              }
            }
          }
        }
      }
    }
  }
}
