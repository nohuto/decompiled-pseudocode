/*
 * XREFs of NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AF81C
 * Callers:
 *     ACPIInitialize @ 0x1C00AF648 (ACPIInitialize.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_s @ 0x1C000325C (WPP_RECORDER_SF_s.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C00216BC (AMLIEvalPackageElement.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall NotifyHalWithMachineStatesAndRetrieveInterruptModel(int *a1)
{
  _QWORD *PoolWithTag; // rax
  int v2; // edx
  _BYTE *v3; // r14
  __int64 v4; // r12
  signed int v5; // esi
  unsigned __int8 v6; // r13
  int v7; // edi
  _BYTE *v8; // rbx
  int v9; // edx
  __int64 *v10; // rdi
  char *v11; // rbx
  int v12; // eax
  int *v13; // rsi
  int v14; // ecx
  ULONG_PTR v15; // rdi
  int v16; // eax
  unsigned int v17; // ebx
  int v19; // [rsp+38h] [rbp-59h] BYREF
  __int64 InputBuffer; // [rsp+40h] [rbp-51h] BYREF
  __int64 v21; // [rsp+48h] [rbp-49h] BYREF
  __int64 v22; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-39h] BYREF
  int *v24; // [rsp+60h] [rbp-31h]
  _QWORD v25[5]; // [rsp+68h] [rbp-29h] BYREF
  void *Src[5]; // [rsp+90h] [rbp-1h]
  char v27[8]; // [rsp+B8h] [rbp+27h] BYREF

  strcpy(v27, "\\_PIC");
  Src[0] = "\\_S1";
  v24 = a1;
  Src[1] = "\\_S2";
  BugCheckParameter4 = 0LL;
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
  v4 = 0LL;
  *PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 2) = 0;
  *((_WORD *)PoolWithTag + 6) = 0;
  *((_BYTE *)PoolWithTag + 14) = 0;
  v5 = 2;
  AcpiSupportedSystemStates = 98;
  do
  {
    v6 = byte_1C0069AA8[v4];
    v7 = *(_DWORD *)((char *)&unk_1C0069A88 + v4);
    if ( v5 == 2 && (AcpiOverrideAttributes & 0x10) != 0
      || v5 == 3 && (AcpiOverrideAttributes & 0x20) != 0
      || v5 == 4 && (AcpiOverrideAttributes & 0x40) != 0 )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_s(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        13,
        (__int64)&WPP_675fdfd554893f59d272207a0f01211e_Traceguids,
        (__int64)Src[v6]);
      v3[2 * v6 + v6] = 0;
      if ( v7 )
      {
        HIDWORD(v21) |= v7;
        LODWORD(v21) = 2;
      }
      goto LABEL_12;
    }
    if ( (AcpiOverrideAttributes & 4) != 0 && v5 < 5 )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_s(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        14,
        (__int64)&WPP_675fdfd554893f59d272207a0f01211e_Traceguids,
        (__int64)Src[v6]);
      v3[2 * v6 + v6] = 0;
      if ( v7 )
      {
        HIDWORD(v22) |= v7;
        LODWORD(v22) = 9;
      }
      goto LABEL_12;
    }
    if ( *((_BYTE *)AcpiInformation + 133) && v5 >= 5 )
      goto LABEL_10;
    v8 = Src[v6];
    if ( (int)AMLIGetNameSpaceObject(v8, 0LL, (__int64 *)&BugCheckParameter4, 0) >= 0 )
    {
      v10 = (__int64 *)BugCheckParameter4;
      AcpiSupportedSystemStates |= 1 << v5;
      AMLIEvalPackageElement((__int64 *)BugCheckParameter4, 0, v25);
      v11 = &v3[2 * v6];
      v11[v6 + 1] = v25[2];
      dword_1C00797B8 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)v25, 1u);
      AMLIEvalPackageElement(v10, 1u, v25);
      v11[v6 + 2] = v25[2];
      dword_1C00797B8 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)v25, 1u);
      AMLIDereferenceHandleEx((__int64)v10);
      BugCheckParameter4 = 0LL;
LABEL_10:
      v12 = AcpiSupportedSystemStates;
      if ( _bittest(&v12, v5) )
        v3[2 * v6 + v6] = 1;
      goto LABEL_12;
    }
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_s(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      6,
      15,
      (__int64)&WPP_675fdfd554893f59d272207a0f01211e_Traceguids,
      (__int64)v8);
    v3[2 * v6 + v6] = 0;
    if ( v7 )
    {
      HIDWORD(InputBuffer) |= v7;
      LODWORD(InputBuffer) = 1;
    }
LABEL_12:
    ++v5;
    v4 += 4LL;
  }
  while ( v5 <= 6 );
  if ( *((_BYTE *)AcpiInformation + 133) && (AcpiSupportedSystemStates & 0xFFFFFF9D) != 0 )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      22,
      16,
      (__int64)&WPP_675fdfd554893f59d272207a0f01211e_Traceguids);
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
  v13 = v24;
  v14 = 4096;
  if ( (unsigned int)(v19 - 1) <= 3 )
    v14 = v19;
  *v24 = v14;
  if ( (int)AMLIGetNameSpaceObject(v27, 0LL, (__int64 *)&BugCheckParameter4, 0) < 0 )
  {
    return 0;
  }
  else
  {
    memset(v25, 0, sizeof(v25));
    v15 = BugCheckParameter4;
    WORD1(v25[0]) = 1;
    v25[2] = v19;
    v16 = AMLIEvalNameSpaceObject((__int64 *)BugCheckParameter4, 0LL, 1u, v25);
    v17 = v16;
    if ( v16 < 0 )
      KeBugCheckEx(0xA5u, 0x2001uLL, *v13, v16, v15);
    AMLIDereferenceHandleEx(v15);
  }
  return v17;
}
