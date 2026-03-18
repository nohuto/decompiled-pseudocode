/*
 * XREFs of DpiPdoGetDeviceDescriptor @ 0x1C0118B48
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0118D50 (DpiPdoAddPdo.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     DpiIsValidEdid @ 0x1C0011018 (DpiIsValidEdid.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01126F4 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01127C4 (DxgkAcquireAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C0115FB0 (DpiDxgkDdiQueryDeviceDescriptor.c)
 *     DpiPdoPollChild @ 0x1C01CE774 (DpiPdoPollChild.c)
 */

__int64 __fastcall DpiPdoGetDeviceDescriptor(
        __int64 a1,
        int *a2,
        int a3,
        char a4,
        char a5,
        char a6,
        int a7,
        _OWORD *a8)
{
  __int64 v8; // r14
  __int64 DeviceDescriptor; // rdi
  int v12; // r13d
  __int64 v13; // r15
  PVOID v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rax
  unsigned int v23; // ebx
  void *v24; // rcx
  size_t v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // r9d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  PVOID PoolWithTag; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  _WORD *v47; // rax
  size_t Size[2]; // [rsp+30h] [rbp-10h] BYREF

  v8 = *(_QWORD *)(a1 + 64);
  LODWORD(DeviceDescriptor) = 0;
  Size[0] = 0LL;
  Size[1] = 0LL;
  v12 = a1;
  v13 = *(_QWORD *)(v8 + 40);
  if ( *((_QWORD *)a2 + 12) )
  {
    Size[0] = 0x10000000000LL;
    Size[1] = (size_t)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
    if ( !Size[1] )
      goto LABEL_16;
    v22 = (unsigned int)*((unsigned __int16 *)a2 + 46) - 124;
    if ( (unsigned int)v22 >= HIDWORD(Size[0]) )
    {
      v25 = HIDWORD(Size[0]);
      v24 = (void *)Size[1];
    }
    else
    {
      v23 = *((unsigned __int16 *)a2 + 46) - 124;
      memset((void *)(v22 + Size[1]), 0, (unsigned int)(HIDWORD(Size[0]) - v22));
      v24 = (void *)Size[1];
      v25 = v23;
    }
    memmove(v24, (const void *)(*((_QWORD *)a2 + 12) + 124LL), v25);
    goto LABEL_7;
  }
  if ( *a2 != 1 )
  {
    if ( *a2 != 2 )
    {
      LODWORD(DeviceDescriptor) = -1073741823;
      v45 = WdLogNewEntry5_WdError(a1, a2);
      v46 = *a2;
      goto LABEL_39;
    }
    Size[0] = 0x19800000000LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x198uLL, 0x74727044u);
    Size[1] = (size_t)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_16;
    memset(PoolWithTag, 0, HIDWORD(Size[0]));
    KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3704), 1LL);
    DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(
                              v13,
                              *(_QWORD *)(v8 + 48),
                              (unsigned int)a2[6],
                              (unsigned int *)Size);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3704), v42);
    KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
    if ( (int)DeviceDescriptor < 0 )
    {
      v45 = WdLogNewEntry5_WdError(v44, v43);
      v46 = *(_QWORD *)(v13 + 216);
      *(_QWORD *)(v45 + 32) = DeviceDescriptor;
LABEL_39:
      *(_QWORD *)(v45 + 24) = v46;
      WdLogEvent5_WdError(v45);
      goto LABEL_8;
    }
    v47 = (_WORD *)Size[1];
    *(_WORD *)(Size[1] + 100) = 0;
    v47[101] = 0;
    v47[152] = 0;
    v47[203] = 0;
LABEL_7:
    *a8 = *(_OWORD *)Size;
    goto LABEL_8;
  }
  Size[0] = 0x10000000000LL;
  v14 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
  Size[1] = (size_t)v14;
  if ( !v14 )
  {
LABEL_16:
    LODWORD(DeviceDescriptor) = -1073741801;
    v26 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v26 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v26);
    goto LABEL_9;
  }
  memset(v14, 0, HIDWORD(Size[0]));
  KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3704), 1LL);
  DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(
                            v13,
                            *(_QWORD *)(v8 + 48),
                            (unsigned int)a2[6],
                            (unsigned int *)Size);
  DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3704), v16);
  KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
  if ( (_DWORD)DeviceDescriptor == -1071774719 )
  {
    if ( IsInternalVideoOutput(a2[1]) )
    {
      v32 = WdLogNewEntry5_WdError(v29, v28);
      *(_QWORD *)(v32 + 24) = DpiDxgkDdiQueryDeviceDescriptor;
      *(_QWORD *)(v32 + 32) = -1071774719LL;
      WdLogEvent5_WdError(v32);
    }
    else
    {
      v33 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
      *(_QWORD *)(v33 + 24) = -1071774719LL;
      WdLogEvent5_WdWarning(v33);
    }
    goto LABEL_9;
  }
  if ( (int)DeviceDescriptor >= 0 )
  {
    if ( !DpiIsValidEdid(Size[1]) )
    {
      if ( IsInternalVideoOutput(a2[1]) )
      {
        v40 = WdLogNewEntry5_WdError(v37, v36);
        *(_QWORD *)(v40 + 24) = DeviceDescriptor;
        WdLogEvent5_WdError(v40);
      }
      else
      {
        v27 = WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
        *(_QWORD *)(v27 + 24) = DeviceDescriptor;
        WdLogEvent5_WdWarning(v27);
      }
      LODWORD(DeviceDescriptor) = -1073741823;
      goto LABEL_9;
    }
    goto LABEL_7;
  }
  v34 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
  *(_QWORD *)(v34 + 24) = *(_QWORD *)(v13 + 216);
  WdLogEvent5_WdWarning(v34);
  if ( a6 == 1 && (unsigned int)a2[15] < 3 )
  {
    KeWaitForSingleObject((PVOID)(v8 + 3248), Executive, 0, 0, 0LL);
    ++a2[15];
    if ( !*((_BYTE *)a2 + 64) )
    {
      _InterlockedAdd((volatile signed __int32 *)(v8 + 3496), 1u);
      *((_BYTE *)a2 + 64) = 1;
    }
    KeReleaseMutex((PRKMUTEX)(v8 + 3248), 0);
    LOBYTE(v35) = a4;
    LODWORD(DeviceDescriptor) = DpiPdoPollChild(v12, a2[6], a3, v35, a5);
    if ( (int)DeviceDescriptor >= 0 )
      LODWORD(DeviceDescriptor) = 259;
  }
LABEL_8:
  if ( (_DWORD)DeviceDescriptor != 259 )
  {
LABEL_9:
    KeWaitForSingleObject((PVOID)(v8 + 3248), Executive, 0, 0, 0LL);
    a2[15] = 0;
    KeReleaseMutex((PRKMUTEX)(v8 + 3248), 0);
  }
  if ( (int)DeviceDescriptor < 0 || (_DWORD)DeviceDescriptor == 259 )
  {
    if ( Size[1] )
      ExFreePoolWithTag((PVOID)Size[1], 0);
  }
  return (unsigned int)DeviceDescriptor;
}
