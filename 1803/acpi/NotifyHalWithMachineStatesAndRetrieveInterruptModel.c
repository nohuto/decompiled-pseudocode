/*
 * XREFs of NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0098974
 * Callers:
 *     ACPIInitialize @ 0x1C0099FEC (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0001AA8 (WPP_RECORDER_SF_s.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     AMLIEvalPackageElement @ 0x1C0043464 (AMLIEvalPackageElement.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall NotifyHalWithMachineStatesAndRetrieveInterruptModel(int *a1)
{
  _QWORD *PoolWithTag; // rax
  int v2; // edx
  _BYTE *v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // r12
  signed int v6; // edi
  unsigned __int8 v7; // r13
  int v8; // r14d
  _BYTE *v9; // rbx
  int v10; // edx
  __int64 *v11; // rbx
  char *v12; // r14
  int v13; // eax
  int *v14; // rsi
  int v15; // ecx
  volatile signed __int32 *BugCheckParameter4; // rdi
  int v17; // eax
  int v19; // [rsp+38h] [rbp-59h] BYREF
  __int64 InputBuffer; // [rsp+40h] [rbp-51h] BYREF
  __int64 v21; // [rsp+48h] [rbp-49h] BYREF
  __int64 v22; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR v23; // [rsp+58h] [rbp-39h] BYREF
  int *v24; // [rsp+60h] [rbp-31h]
  _QWORD v25[5]; // [rsp+68h] [rbp-29h] BYREF
  void *Src[5]; // [rsp+90h] [rbp-1h]
  char v27[8]; // [rsp+B8h] [rbp+27h] BYREF

  strcpy(v27, "\\_PIC");
  Src[0] = "\\_S1";
  v24 = a1;
  Src[1] = "\\_S2";
  v23 = 0LL;
  Src[2] = "\\_S3";
  Src[3] = "\\_S4";
  Src[4] = "\\_S5";
  v22 = 0LL;
  InputBuffer = 0LL;
  v21 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xFuLL, 0x4D706341u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v5 = 0LL;
  *PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 2) = 0;
  *((_WORD *)PoolWithTag + 6) = 0;
  *((_BYTE *)PoolWithTag + 14) = 0;
  v6 = 2;
  AcpiSupportedSystemStates = 98;
  do
  {
    v7 = byte_1C005BF08[v5];
    v8 = *(_DWORD *)((char *)&unk_1C005BEE8 + v5);
    if ( v6 == 2 && (AcpiOverrideAttributes & 0x10) != 0
      || v6 == 3 && (AcpiOverrideAttributes & 0x20) != 0
      || v6 == 4 && (AcpiOverrideAttributes & 0x40) != 0 )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_s(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        13,
        (__int64)&WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids,
        (__int64)Src[v7]);
      v3[2 * v7 + v7] = 0;
      if ( v8 )
      {
        HIDWORD(v21) |= v8;
        LODWORD(v21) = 2;
      }
      goto LABEL_24;
    }
    if ( (AcpiOverrideAttributes & 4) != 0 && v6 < 5 )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_s(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        14,
        (__int64)&WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids,
        (__int64)Src[v7]);
      v3[2 * v7 + v7] = 0;
      if ( v8 )
      {
        HIDWORD(v22) |= v8;
        LODWORD(v22) = 9;
      }
      goto LABEL_24;
    }
    if ( !*((_BYTE *)AcpiInformation + 133) || v6 < 5 )
    {
      v9 = Src[v7];
      if ( (int)AMLIGetNameSpaceObject(v9, 0LL, (__int64)&v23, 0) < 0 )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_s(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          6,
          15,
          (__int64)&WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids,
          (__int64)v9);
        v3[2 * v7 + v7] = 0;
        if ( v8 )
        {
          HIDWORD(InputBuffer) |= v8;
          LODWORD(InputBuffer) = 1;
        }
        goto LABEL_24;
      }
      v11 = (__int64 *)v23;
      AcpiSupportedSystemStates |= 1 << v6;
      AMLIEvalPackageElement((__int64 *)v23, 0, v25);
      v12 = &v3[2 * v7];
      v12[v7 + 1] = v25[2];
      dword_1C00677B8 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)v25, 1u);
      AMLIEvalPackageElement(v11, 1u, v25);
      v12[v7 + 2] = v25[2];
      dword_1C00677B8 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)v25, 1u);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v11);
      v23 = 0LL;
    }
    v13 = AcpiSupportedSystemStates;
    if ( _bittest(&v13, v6) )
      v3[2 * v7 + v7] = 1;
LABEL_24:
    ++v6;
    v5 += 4LL;
  }
  while ( v6 <= 6 );
  if ( *((_BYTE *)AcpiInformation + 133) && (AcpiSupportedSystemStates & 0xFFFFFF9D) != 0 )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      22,
      16,
      (__int64)&WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids);
    KeBugCheckEx(0xA5u, 0x11uLL, 0xDuLL, 0LL, 0LL);
  }
  if ( (_DWORD)InputBuffer )
    ZwPowerInformation(SystemPowerLoggingEntry, &InputBuffer, 8u, 0LL, 0);
  if ( (_DWORD)v21 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v21, 8u, 0LL, 0);
  if ( (_DWORD)v22 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v22, 8u, 0LL, 0);
  v19 = 0;
  (*(void (__fastcall **)(_BYTE *, int *))(PmHalDispatchTable + 16))(v3, &v19);
  ExFreePoolWithTag(v3, 0);
  v14 = v24;
  v15 = 4096;
  if ( (unsigned int)(v19 - 1) <= 3 )
    v15 = v19;
  *v24 = v15;
  if ( (int)AMLIGetNameSpaceObject(v27, 0LL, (__int64)&v23, 0) >= 0 )
  {
    memset(v25, 0, sizeof(v25));
    BugCheckParameter4 = (volatile signed __int32 *)v23;
    v25[2] = v19;
    WORD1(v25[0]) = 1;
    v17 = AMLIEvalNameSpaceObject((__int64 *)v23, 0LL, 1u, v25);
    v4 = v17;
    if ( v17 < 0 )
      KeBugCheckEx(0xA5u, 0x2001uLL, *v14, v17, (ULONG_PTR)BugCheckParameter4);
    AMLIDereferenceHandleEx(BugCheckParameter4);
  }
  else
  {
    return 0;
  }
  return v4;
}
