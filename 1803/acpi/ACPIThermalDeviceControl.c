/*
 * XREFs of ACPIThermalDeviceControl @ 0x1C003C2C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002B29C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlEnumChildren @ 0x1C002BA70 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C002BDC4 (ACPIIoctlEvalControlMethod.c)
 *     ACPIThermalLoopEx @ 0x1C003CE8C (ACPIThermalLoopEx.c)
 *     WPP_RECORDER_SF_qDDqssdddd @ 0x1C003E9D0 (WPP_RECORDER_SF_qDDqssdddd.c)
 *     WPP_RECORDER_SF_qDqssdddd @ 0x1C003ECA0 (WPP_RECORDER_SF_qDqssdddd.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x1C003EF3C (WPP_RECORDER_SF_qqssdddd.c)
 */

__int64 __fastcall ACPIThermalDeviceControl(ULONG_PTR a1, __int64 a2)
{
  unsigned int v4; // esi
  union _LARGE_INTEGER v5; // r12
  __int64 DeviceExtension; // rax
  __int64 v7; // r14
  __int64 v8; // rdi
  _DWORD *v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned __int8 *v18; // rax
  unsigned int v19; // r13d
  unsigned __int8 *v20; // rax
  unsigned __int8 *v21; // rax
  int v22; // r9d
  KIRQL v23; // dl
  __int64 v24; // rax
  _QWORD *v25; // rbx
  _QWORD *v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  int v33; // [rsp+80h] [rbp-80h]
  union _LARGE_INTEGER Time; // [rsp+88h] [rbp-78h] BYREF
  union _LARGE_INTEGER v35; // [rsp+90h] [rbp-70h] BYREF
  union _LARGE_INTEGER v36; // [rsp+98h] [rbp-68h] BYREF
  union _LARGE_INTEGER v37; // [rsp+A0h] [rbp-60h] BYREF
  union _LARGE_INTEGER v38; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v39; // [rsp+B0h] [rbp-50h]
  struct _TIME_FIELDS TimeFields; // [rsp+B8h] [rbp-48h] BYREF
  struct _TIME_FIELDS v41; // [rsp+C8h] [rbp-38h] BYREF
  struct _TIME_FIELDS v42; // [rsp+D8h] [rbp-28h] BYREF
  struct _TIME_FIELDS v43; // [rsp+E8h] [rbp-18h] BYREF
  struct _TIME_FIELDS v44; // [rsp+F8h] [rbp-8h] BYREF

  if ( *(_BYTE *)(a2 + 64) )
  {
    v4 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
LABEL_3:
    IofCompleteRequest((PIRP)a2, 0);
    return v4;
  }
  v5.QuadPart = MEMORY[0xFFFFF78000000008];
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = *(_QWORD *)(a2 + 184);
  v8 = DeviceExtension;
  v9 = *(_DWORD **)(DeviceExtension + 200);
  v10 = *(_DWORD *)(v7 + 24);
  if ( v10 > 0x32C018 )
  {
    v27 = v10 - 3325980;
    if ( !v27 )
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    v28 = v27 - 4;
    if ( !v28 )
      return (unsigned int)ACPIIoctlEnumChildren(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    v29 = v28 - 28;
    if ( v29 )
    {
      v30 = v29 - 4;
      if ( v30 )
      {
        v31 = v30 - 4;
        if ( !v31 )
          return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
        if ( v31 != 4 )
        {
LABEL_35:
          v4 = -1073741637;
          goto LABEL_36;
        }
      }
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    }
    return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
  }
  if ( v10 == 3325976 )
    return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
  v11 = v10 - 2703488;
  if ( v11 )
  {
    v12 = v11 - 24;
    if ( v12 )
    {
      v13 = v12 - 16364;
      if ( v13 )
      {
        v14 = v13 - 4;
        if ( v14 )
        {
          v15 = v14 - 4;
          if ( v15 )
          {
            v16 = v15 - 606068;
            if ( v16 )
            {
              if ( v16 == 4 )
                return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
              goto LABEL_35;
            }
            return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
          }
          v18 = *(unsigned __int8 **)(a2 + 24);
          Time = v5;
          v9[24] = *v18;
          RtlTimeToTimeFields(&Time, &TimeFields);
          WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, TimeFields.Minute, TimeFields.Hour, 15);
          v19 = 536871168;
        }
        else
        {
          v20 = *(unsigned __int8 **)(a2 + 24);
          v35 = v5;
          v9[23] = *v20;
          RtlTimeToTimeFields(&v35, &v41);
          WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v41.Minute, v41.Hour, 14);
          v19 = 536870913;
        }
      }
      else
      {
        v21 = *(unsigned __int8 **)(a2 + 24);
        v36 = v5;
        v9[25] = *v21;
        RtlTimeToTimeFields(&v36, &v42);
        WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v42.Minute, v42.Hour, 13);
        v19 = 536870924;
      }
    }
    else
    {
      v37 = v5;
      v19 = 0x20000000;
      RtlTimeToTimeFields(&v37, &v43);
      WPP_RECORDER_SF_qqssdddd(WPP_GLOBAL_Control->DeviceExtension, v43.Minute, v43.Hour, 16);
    }
  }
  else
  {
    v39 = *(_DWORD **)(a2 + 24);
    v38 = v5;
    v33 = *v9 != *v39 ? 0x20000002 : 0;
    RtlTimeToTimeFields(&v38, &v44);
    WPP_RECORDER_SF_qDDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v44.Minute, v44.Hour, v22);
    v19 = v33;
  }
  v23 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  if ( *(char *)(v8 + 8) < 0 || (*(_DWORD *)(v8 + 192) & 0x8000000) != 0 )
  {
    KeReleaseSpinLock(&AcpiThermalLock, v23);
    *(_QWORD *)(a2 + 56) = 0LL;
    v4 = -1073741810;
    *(_DWORD *)(a2 + 48) = -1073741810;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(v7 + 24) == 2703488 )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIThermalCancelRequest);
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
      {
        KeReleaseSpinLock(&AcpiThermalLock, v23);
        v4 = -1073741536;
LABEL_36:
        *(_QWORD *)(a2 + 56) = 0LL;
        *(_DWORD *)(a2 + 48) = v4;
        goto LABEL_3;
      }
    }
  }
  v24 = *(_QWORD *)(a2 + 184);
  v25 = (_QWORD *)(a2 + 168);
  v4 = 259;
  *(_BYTE *)(v24 + 3) |= 1u;
  v26 = (_QWORD *)qword_1C00669A8;
  if ( *(__int64 **)qword_1C00669A8 != &AcpiThermalList )
    __fastfail(3u);
  *v25 = &AcpiThermalList;
  v25[1] = v26;
  *v26 = v25;
  qword_1C00669A8 = (__int64)v25;
  KeReleaseSpinLock(&AcpiThermalLock, v23);
  ACPIThermalLoopEx(v8, v19, 0LL);
  return v4;
}
