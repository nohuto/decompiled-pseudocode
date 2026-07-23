/*
 * XREFs of PspSetJobIoAttribution @ 0x14052F4C8
 * Callers:
 *     PspSetJobIoRateControl @ 0x140489B40 (PspSetJobIoRateControl.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 * Callees:
 *     IoStartDiskIoAttributionForContext @ 0x1400CC6B4 (IoStartDiskIoAttributionForContext.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PspIsSetJobIoAttribution @ 0x14052F6BC (PspIsSetJobIoAttribution.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140536910 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspRemoveIoAttribution @ 0x14057CDC4 (PspRemoveIoAttribution.c)
 *     IoDiskIoAttributionAllocate @ 0x14057D838 (IoDiskIoAttributionAllocate.c)
 */

__int64 __fastcall PspSetJobIoAttribution(_DWORD *Object, char a2, char a3, unsigned int a4)
{
  char v4; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  _RTL_BALANCED_NODE *v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi
  const EVENT_DESCRIPTOR *v14; // rbx
  REGHANDLE v15; // rdi
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
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
  if ( !a2 )
  {
    if ( !a3 )
      goto LABEL_22;
    v17 = Object[332];
    if ( v17 < a4 )
    {
      v12 = 0LL;
      v13 = -1073741811;
      goto LABEL_14;
    }
    v18 = v17 - a4;
    Object[332] = v18;
    if ( v18 )
    {
      v12 = *((_QWORD *)Object + 167);
    }
    else
    {
LABEL_22:
      v19 = Object[333];
      v12 = *((_QWORD *)Object + 167);
      if ( v19 > a4 )
      {
        Object[333] = v19 - a4;
      }
      else
      {
        PspRemoveIoAttribution(Object);
        Object[333] = 0;
      }
    }
    goto LABEL_11;
  }
  if ( (unsigned __int8)PspIsSetJobIoAttribution((__int64)Object) )
  {
    v12 = 0LL;
    v13 = -1073741637;
    goto LABEL_14;
  }
  if ( a3 )
  {
    v9 = Object[332];
    if ( v9 + a4 < v9 )
    {
      v12 = 0LL;
      v13 = -1073741670;
      goto LABEL_14;
    }
    if ( v9 )
    {
      Object[332] = v9 + a4;
LABEL_26:
      v12 = *((_QWORD *)Object + 167);
      goto LABEL_11;
    }
    Object[332] = a4;
    v4 = 1;
  }
  v10 = Object[333];
  if ( v10 + a4 < v10 )
  {
    v12 = 0LL;
    v13 = -1073741670;
    goto LABEL_12;
  }
  if ( v10 )
  {
    Object[333] = v10 + a4;
    goto LABEL_26;
  }
  v11 = (_RTL_BALANCED_NODE *)IoDiskIoAttributionAllocate(Object, 0LL);
  v12 = (__int64)v11;
  if ( v11 )
  {
    IoStartDiskIoAttributionForContext(v11);
    v22[2] = 1LL;
    v22[0] = v12;
    v22[1] = (__int64)Object;
    PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v22, 5);
    Object[333] = a4;
    *((_QWORD *)Object + 167) = v12;
LABEL_11:
    v4 = 0;
    v13 = 0;
    goto LABEL_12;
  }
  v12 = 0LL;
  v13 = -1073741801;
LABEL_12:
  if ( v4 )
    Object[332] -= a4;
LABEL_14:
  v20 = Object[305];
  v14 = (const EVENT_DESCRIPTOR *)&PsDiskIoAttributionStart;
  v23 = v12;
  v15 = EtwpPsProvRegHandle;
  if ( !a2 )
    v14 = &PsDiskIoAttributionStop;
  v21 = v13;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, v14) )
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
    EtwWrite(v15, v14, 0LL, 3u, &UserData);
  }
  return v13;
}
