/*
 * XREFs of ACPIDetectDuplicateHID @ 0x1C001E1F8
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C001EB90 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C00055B0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIExtListStartEnum @ 0x1C00108A0 (ACPIExtListStartEnum.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0011260 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListEnumNext @ 0x1C001E750 (ACPIExtListEnumNext.c)
 */

void __fastcall ACPIDetectDuplicateHID(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  __int64 i; // rax
  _QWORD *v4; // rdi
  const char *v5; // rcx
  const char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int8 *v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // ecx
  const char *v13; // rax
  const char *v14; // r8
  __int64 v15; // rdx
  const char *v16; // rax
  const char *v17; // r8
  _QWORD v18[2]; // [rsp+58h] [rbp+17h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp+27h]
  KIRQL NewIrql; // [rsp+70h] [rbp+2Fh]
  __int64 v21; // [rsp+78h] [rbp+37h]
  __int64 v22; // [rsp+80h] [rbp+3Fh]
  int v23; // [rsp+88h] [rbp+47h]

  v2 = BugCheckParameter2[93];
  if ( v2 && (BugCheckParameter2[1] & 0xA00000000000LL) != 0 && (BugCheckParameter2[1] & 0x2000000000003LL) == 0 )
  {
    v18[1] = 0LL;
    v18[0] = v2 + 752;
    v22 = 768LL;
    SpinLock = &AcpiDeviceTreeLock;
    v23 = 2;
    for ( i = ACPIExtListStartEnum((__int64)v18); ; i = ACPIExtListEnumNext(v18) )
    {
      v4 = (_QWORD *)i;
      if ( v21 + v22 == v18[0] )
      {
        if ( !v23 )
          return;
        goto LABEL_15;
      }
      if ( v23 == 1 )
      {
        ACPIInitReferenceDeviceExtension(v21);
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
                  v15 = BugCheckParameter2[1];
                  v16 = (const char *)&unk_1C0067B08;
                  v17 = (const char *)&unk_1C0067B08;
                  if ( (v15 & 0x200000000000LL) != 0 )
                  {
                    v16 = (const char *)BugCheckParameter2[70];
                    if ( (v15 & 0x400000000000LL) != 0 )
                      v17 = (const char *)BugCheckParameter2[71];
                  }
                  WPP_RECORDER_SF_qqss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    0x16u,
                    0xDu,
                    (__int64)&WPP_162dd38d4b03301972a4b65da78217e0_Traceguids,
                    (char)v4,
                    (char)BugCheckParameter2,
                    v16,
                    v17);
                  KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 1uLL);
                }
              }
              else if ( ((v8 | v7) & 0x1400000000000LL) == 0 )
              {
                v13 = (const char *)&unk_1C0067B08;
                v14 = (const char *)&unk_1C0067B08;
                if ( (v8 & 0x200000000000LL) != 0 )
                {
                  v13 = (const char *)BugCheckParameter2[70];
                  if ( (v8 & 0x400000000000LL) != 0 )
                    v14 = (const char *)BugCheckParameter2[71];
                }
                WPP_RECORDER_SF_qqss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  0x16u,
                  0xEu,
                  (__int64)&WPP_162dd38d4b03301972a4b65da78217e0_Traceguids,
                  (char)v4,
                  (char)BugCheckParameter2,
                  v13,
                  v14);
                KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 0LL);
              }
            }
          }
        }
      }
    }
    if ( v23 == 2 )
LABEL_15:
      KeReleaseSpinLock(SpinLock, NewIrql);
  }
}
