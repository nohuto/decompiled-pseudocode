/*
 * XREFs of ACPIThermalDeviceControl @ 0x1C00211A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C0013D34 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlEnumChildren @ 0x1C001E03C (ACPIIoctlEnumChildren.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x1C0020EBC (WPP_RECORDER_SF_qqssdddd.c)
 *     ACPIThermalLoopEx @ 0x1C0021610 (ACPIThermalLoopEx.c)
 *     WPP_RECORDER_SF_qDDqssdddd @ 0x1C00223C4 (WPP_RECORDER_SF_qDDqssdddd.c)
 *     WPP_RECORDER_SF_qDqssdddd @ 0x1C002255C (WPP_RECORDER_SF_qDqssdddd.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C00251F4 (ACPIIoctlEvalControlMethodEx.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C005075C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C0050910 (ACPIIoctlAsyncEvalControlMethodEx.c)
 */

__int64 __fastcall ACPIThermalDeviceControl(ULONG_PTR a1, __int64 a2)
{
  union _LARGE_INTEGER v4; // r12
  __int64 DeviceExtension; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  _DWORD *v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // edi
  int v15; // r9d
  unsigned int v16; // r13d
  KIRQL v17; // dl
  __int64 v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  unsigned __int8 *v22; // rax
  unsigned __int8 *v23; // rax
  unsigned __int8 *v24; // rax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+80h] [rbp-80h]
  union _LARGE_INTEGER v31; // [rsp+88h] [rbp-78h] BYREF
  union _LARGE_INTEGER v32; // [rsp+90h] [rbp-70h] BYREF
  union _LARGE_INTEGER v33; // [rsp+98h] [rbp-68h] BYREF
  union _LARGE_INTEGER v34; // [rsp+A0h] [rbp-60h] BYREF
  union _LARGE_INTEGER Time; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v36; // [rsp+B0h] [rbp-50h]
  struct _TIME_FIELDS v37; // [rsp+B8h] [rbp-48h] BYREF
  struct _TIME_FIELDS v38; // [rsp+C8h] [rbp-38h] BYREF
  struct _TIME_FIELDS v39; // [rsp+D8h] [rbp-28h] BYREF
  struct _TIME_FIELDS v40; // [rsp+E8h] [rbp-18h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+F8h] [rbp-8h] BYREF

  if ( *(_BYTE *)(a2 + 64) )
  {
    v14 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
    goto LABEL_11;
  }
  v4.QuadPart = MEMORY[0xFFFFF78000000008];
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = DeviceExtension;
  v8 = *(_DWORD **)(DeviceExtension + 200);
  v9 = *(_DWORD *)(v6 + 24);
  if ( v9 > 0x32C000 )
  {
    v26 = v9 - 3325956;
    if ( v26 )
    {
      v27 = v26 - 20;
      if ( v27 )
      {
        v28 = v27 - 4;
        if ( v28 )
        {
          if ( v28 != 4 )
            goto LABEL_9;
          return (unsigned int)ACPIIoctlEnumChildren(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
        }
        else
        {
          return (unsigned int)ACPIIoctlAsyncEvalControlMethodEx(a1, a2, *(_QWORD *)(a2 + 184));
        }
      }
      else
      {
        return (unsigned int)ACPIIoctlEvalControlMethodEx(a1, a2, *(_QWORD *)(a2 + 184));
      }
    }
    else
    {
      return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2);
    }
  }
  if ( v9 == 3325952 )
    return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
  v10 = v9 - 2703488;
  if ( v10 )
  {
    v11 = v10 - 24;
    if ( v11 )
    {
      v12 = v11 - 16364;
      if ( v12 )
      {
        v13 = v12 - 4;
        if ( v13 )
        {
          if ( v13 != 4 )
          {
LABEL_9:
            v14 = -1073741637;
LABEL_10:
            *(_QWORD *)(a2 + 56) = 0LL;
            *(_DWORD *)(a2 + 48) = v14;
LABEL_11:
            IofCompleteRequest((PIRP)a2, 0);
            return v14;
          }
          v24 = *(unsigned __int8 **)(a2 + 24);
          v31 = v4;
          v8[24] = *v24;
          RtlTimeToTimeFields(&v31, &v37);
          WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v37.Minute, v37.Hour, 15);
          v16 = 536871168;
        }
        else
        {
          v22 = *(unsigned __int8 **)(a2 + 24);
          v32 = v4;
          v8[23] = *v22;
          RtlTimeToTimeFields(&v32, &v38);
          WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v38.Minute, v38.Hour, 14);
          v16 = 536870913;
        }
      }
      else
      {
        v23 = *(unsigned __int8 **)(a2 + 24);
        v33 = v4;
        v8[25] = *v23;
        RtlTimeToTimeFields(&v33, &v39);
        WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v39.Minute, v39.Hour, 13);
        v16 = 536870924;
      }
    }
    else
    {
      v34 = v4;
      v16 = 0x20000000;
      RtlTimeToTimeFields(&v34, &v40);
      WPP_RECORDER_SF_qqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v40.Minute,
        (unsigned int)v40.Hour,
        0x10u,
        v29);
    }
  }
  else
  {
    v36 = *(_DWORD **)(a2 + 24);
    Time = v4;
    v30 = *v8 != *v36 ? 0x20000002 : 0;
    RtlTimeToTimeFields(&Time, &TimeFields);
    WPP_RECORDER_SF_qDDqssdddd(WPP_GLOBAL_Control->DeviceExtension, TimeFields.Minute, TimeFields.Hour, v15);
    v16 = v30;
  }
  v17 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  if ( *(char *)(v7 + 8) < 0 || (*(_DWORD *)(v7 + 192) & 0x8000000) != 0 )
  {
    KeReleaseSpinLock(&AcpiThermalLock, v17);
    *(_QWORD *)(a2 + 56) = 0LL;
    v14 = -1073741810;
    *(_DWORD *)(a2 + 48) = -1073741810;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v6 + 24) == 2703488 )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIThermalCancelRequest);
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
      {
        KeReleaseSpinLock(&AcpiThermalLock, v17);
        v14 = -1073741536;
        goto LABEL_10;
      }
    }
  }
  v18 = *(_QWORD *)(a2 + 184);
  v19 = (_QWORD *)(a2 + 168);
  v14 = 259;
  *(_BYTE *)(v18 + 3) |= 1u;
  v20 = (_QWORD *)qword_1C0076908;
  if ( *(__int64 **)qword_1C0076908 != &AcpiThermalList )
    __fastfail(3u);
  *v19 = &AcpiThermalList;
  v19[1] = v20;
  *v20 = v19;
  qword_1C0076908 = (__int64)v19;
  KeReleaseSpinLock(&AcpiThermalLock, v17);
  ACPIThermalLoopEx(v7, v16, 0LL);
  return v14;
}
