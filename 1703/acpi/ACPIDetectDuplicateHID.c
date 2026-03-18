/*
 * XREFs of ACPIDetectDuplicateHID @ 0x1C001341C
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000ED90 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C00070E8 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000DE58 (WPP_RECORDER_SF_qqss.c)
 *     ACPIExtListEnumNext @ 0x1C0013970 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C0016AB4 (ACPIExtListStartEnum.c)
 */

void __fastcall ACPIDetectDuplicateHID(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  __int64 i; // rax
  _QWORD *v4; // rdi
  const char *v5; // rcx
  const char *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int8 *v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // ecx
  __int64 v13; // rdx
  const char *v14; // rax
  const char *v15; // r8
  __int64 v16; // rdx
  const char *v17; // rax
  const char *v18; // r8
  _QWORD v19[2]; // [rsp+58h] [rbp+17h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp+27h]
  KIRQL NewIrql; // [rsp+70h] [rbp+2Fh]
  __int64 v22; // [rsp+78h] [rbp+37h]
  __int64 v23; // [rsp+80h] [rbp+3Fh]
  int v24; // [rsp+88h] [rbp+47h]

  v2 = BugCheckParameter2[93];
  if ( v2 && (BugCheckParameter2[1] & 0xA00000000000LL) != 0 && (BugCheckParameter2[1] & 0x2000000000003LL) == 0 )
  {
    v19[1] = 0LL;
    v19[0] = v2 + 752;
    v23 = 768LL;
    SpinLock = &AcpiDeviceTreeLock;
    v24 = 2;
    for ( i = ACPIExtListStartEnum(v19); ; i = ACPIExtListEnumNext(v19) )
    {
      v4 = (_QWORD *)i;
      if ( v22 + v23 == v19[0] )
      {
        if ( !v24 )
          return;
        goto LABEL_15;
      }
      if ( v24 == 1 )
      {
        ACPIInitReferenceDeviceExtension(v22);
        KeReleaseSpinLock(SpinLock, NewIrql);
      }
      if ( !v4 )
        break;
      if ( v4 != BugCheckParameter2 && (v4[1] & 0xA00000000000LL) != 0 && (v4[1] & 0x2080000000003LL) == 0 )
      {
        v5 = (const char *)v4[70];
        if ( v5 )
        {
          v6 = (const char *)BugCheckParameter2[70];
          if ( v6 )
          {
            if ( strstr(v5, v6) )
            {
              v7 = v4[1];
              v8 = BugCheckParameter2[1];
              if ( (v7 & 0x1400000000000LL) != 0 && (v8 & 0x1400000000000LL) != 0 )
              {
                v9 = (unsigned __int8 *)v4[71];
                v10 = BugCheckParameter2[71] - (_QWORD)v9;
                do
                {
                  v11 = v9[v10];
                  v12 = *v9 - v11;
                  if ( v12 )
                    break;
                  ++v9;
                }
                while ( v11 );
                if ( !v12 )
                {
                  v16 = BugCheckParameter2[1];
                  v17 = (const char *)&unk_1C0066CD0;
                  v18 = (const char *)&unk_1C0066CD0;
                  if ( (v16 & 0x200000000000LL) != 0 )
                  {
                    v17 = (const char *)BugCheckParameter2[70];
                    if ( (v16 & 0x400000000000LL) != 0 )
                      v18 = (const char *)BugCheckParameter2[71];
                  }
                  WPP_RECORDER_SF_qqss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    0x16u,
                    0xDu,
                    (__int64)&WPP_6c95d7dca6633290cc5c2f72c740a678_Traceguids,
                    (char)v4,
                    (char)BugCheckParameter2,
                    v17,
                    v18);
                  KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 1uLL);
                }
              }
              else if ( ((v8 | v7) & 0x1400000000000LL) == 0 )
              {
                v13 = BugCheckParameter2[1];
                v14 = (const char *)&unk_1C0066CD0;
                v15 = (const char *)&unk_1C0066CD0;
                if ( (v13 & 0x200000000000LL) != 0 )
                {
                  v14 = (const char *)BugCheckParameter2[70];
                  if ( (v13 & 0x400000000000LL) != 0 )
                    v15 = (const char *)BugCheckParameter2[71];
                }
                WPP_RECORDER_SF_qqss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  0x16u,
                  0xEu,
                  (__int64)&WPP_6c95d7dca6633290cc5c2f72c740a678_Traceguids,
                  (char)v4,
                  (char)BugCheckParameter2,
                  v14,
                  v15);
                KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 0LL);
              }
            }
          }
        }
      }
    }
    if ( v24 == 2 )
LABEL_15:
      KeReleaseSpinLock(SpinLock, NewIrql);
  }
}
