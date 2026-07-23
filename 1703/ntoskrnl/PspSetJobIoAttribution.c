/*
 * XREFs of PspSetJobIoAttribution @ 0x14054D468
 * Callers:
 *     PspSetJobIoRateControl @ 0x14041EBBC (PspSetJobIoRateControl.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     IoStartDiskIoAttributionForContext @ 0x14011F4F4 (IoStartDiskIoAttributionForContext.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspIsSetJobIoAttribution @ 0x14054D180 (PspIsSetJobIoAttribution.c)
 *     PspRemoveIoAttribution @ 0x14054DD78 (PspRemoveIoAttribution.c)
 *     IoDiskIoAttributionAllocate @ 0x14054DE04 (IoDiskIoAttributionAllocate.c)
 */

__int64 __fastcall PspSetJobIoAttribution(_DWORD *Object, __int64 a2, char a3, unsigned int a4)
{
  char v4; // r15
  char v7; // r12
  unsigned int v9; // eax
  unsigned int v10; // eax
  _RTL_BALANCED_NODE *v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // esi
  const EVENT_DESCRIPTOR *v17; // rbx
  REGHANDLE v18; // rdi
  int v20; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-31h] BYREF
  __int64 v22[3]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v25; // [rsp+70h] [rbp+7h]
  int v26; // [rsp+78h] [rbp+Fh]
  int v27; // [rsp+7Ch] [rbp+13h]
  unsigned int *v28; // [rsp+80h] [rbp+17h]
  int v29; // [rsp+88h] [rbp+1Fh]
  int v30; // [rsp+8Ch] [rbp+23h]

  v4 = 0;
  v7 = a2;
  if ( !(_BYTE)a2 )
  {
    if ( !a3 )
      goto LABEL_14;
    v13 = Object[332];
    if ( v13 < a4 )
    {
      v12 = 0LL;
      v16 = -1073741811;
      goto LABEL_19;
    }
    v14 = v13 - a4;
    Object[332] = v14;
    if ( v14 )
    {
      v12 = *((_QWORD *)Object + 167);
    }
    else
    {
LABEL_14:
      v15 = Object[333];
      v12 = *((_QWORD *)Object + 167);
      if ( v15 > a4 )
      {
        Object[333] = v15 - a4;
      }
      else
      {
        PspRemoveIoAttribution(Object);
        Object[333] = 0;
      }
    }
    goto LABEL_16;
  }
  if ( PspIsSetJobIoAttribution((__int64)Object, a2, 0) )
  {
    v12 = 0LL;
    v16 = -1073741637;
    goto LABEL_19;
  }
  if ( a3 )
  {
    v9 = Object[332];
    if ( v9 + a4 < v9 )
    {
      v12 = 0LL;
      v16 = -1073741670;
      goto LABEL_19;
    }
    if ( v9 )
    {
      Object[332] = v9 + a4;
      goto LABEL_25;
    }
    Object[332] = a4;
    v4 = 1;
  }
  v10 = Object[333];
  if ( v10 + a4 < v10 )
  {
    v12 = 0LL;
    v16 = -1073741670;
    goto LABEL_17;
  }
  if ( v10 )
  {
    Object[333] = v10 + a4;
LABEL_25:
    v12 = *((_QWORD *)Object + 167);
    goto LABEL_16;
  }
  v11 = (_RTL_BALANCED_NODE *)IoDiskIoAttributionAllocate(Object, 0LL);
  v12 = (__int64)v11;
  if ( v11 )
  {
    IoStartDiskIoAttributionForContext(v11);
    v22[2] = 1LL;
    v22[0] = v12;
    v22[1] = (__int64)Object;
    PspEnumJobsAndProcessesInJobHierarchy(
      (char *)Object,
      (int)PspSetJobIoAttributionJobPreCallback,
      0,
      (int)PspSetJobIoAttributionProcessCallback,
      (__int64)v22,
      5);
    Object[333] = a4;
    *((_QWORD *)Object + 167) = v12;
LABEL_16:
    v4 = 0;
    v16 = 0;
    goto LABEL_17;
  }
  v12 = 0LL;
  v16 = -1073741801;
LABEL_17:
  if ( v4 )
    Object[332] -= a4;
LABEL_19:
  v20 = Object[305];
  v17 = (const EVENT_DESCRIPTOR *)&PsDiskIoAttributionStart;
  v23 = v12;
  v18 = EtwpPsProvRegHandle;
  if ( !v7 )
    v17 = &PsDiskIoAttributionStop;
  v21 = v16;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, v17) )
  {
    UserData.Reserved = 0;
    v27 = 0;
    v30 = 0;
    UserData.Ptr = (ULONGLONG)&v20;
    UserData.Size = 4;
    v25 = &v23;
    v29 = 4;
    v28 = &v21;
    v26 = 8;
    EtwWrite(v18, v17, 0LL, 3u, &UserData);
  }
  return v16;
}
