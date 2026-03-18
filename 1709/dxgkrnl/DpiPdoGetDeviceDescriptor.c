/*
 * XREFs of DpiPdoGetDeviceDescriptor @ 0x1C0107E68
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0107994 (DpiPdoAddPdo.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     DpiIsValidEdid @ 0x1C0011F04 (DpiIsValidEdid.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0100C74 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0100CA8 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C01080C0 (DpiDxgkDdiQueryDeviceDescriptor.c)
 *     DpiPdoPollChild @ 0x1C01E8B84 (DpiPdoPollChild.c)
 */

__int64 __fastcall DpiPdoGetDeviceDescriptor(
        __int64 a1,
        int *a2,
        int a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        _OWORD *a8)
{
  __int64 v8; // r14
  __int64 DeviceDescriptor; // rdi
  int v12; // r13d
  __int64 v13; // r15
  PVOID v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  unsigned int v21; // ebx
  void *v22; // rcx
  size_t v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  PVOID PoolWithTag; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  _WORD *v41; // rax
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
    v20 = (unsigned int)*((unsigned __int16 *)a2 + 46) - 124;
    if ( (unsigned int)v20 >= HIDWORD(Size[0]) )
    {
      v23 = HIDWORD(Size[0]);
      v22 = (void *)Size[1];
    }
    else
    {
      v21 = *((unsigned __int16 *)a2 + 46) - 124;
      memset((void *)(v20 + Size[1]), 0, (unsigned int)(HIDWORD(Size[0]) - v20));
      v22 = (void *)Size[1];
      v23 = v21;
    }
    memmove(v22, (const void *)(*((_QWORD *)a2 + 12) + 124LL), v23);
    goto LABEL_7;
  }
  if ( *a2 != 1 )
  {
    if ( *a2 != 2 )
    {
      LODWORD(DeviceDescriptor) = -1073741823;
      v39 = WdLogNewEntry5_WdError(a1);
      v40 = *a2;
      goto LABEL_39;
    }
    Size[0] = 0x19800000000LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x198uLL, 0x74727044u);
    Size[1] = (size_t)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_16;
    memset(PoolWithTag, 0, HIDWORD(Size[0]));
    KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3728), 1);
    DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(v13, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3728));
    KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
    if ( (int)DeviceDescriptor < 0 )
    {
      v39 = WdLogNewEntry5_WdError(v38);
      v40 = *(_QWORD *)(v13 + 216);
      *(_QWORD *)(v39 + 32) = DeviceDescriptor;
LABEL_39:
      *(_QWORD *)(v39 + 24) = v40;
      WdLogEvent5_WdError(v39);
      goto LABEL_8;
    }
    v41 = (_WORD *)Size[1];
    *(_WORD *)(Size[1] + 100) = 0;
    v41[101] = 0;
    v41[152] = 0;
    v41[203] = 0;
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
    v24 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v24 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v24);
    goto LABEL_9;
  }
  memset(v14, 0, HIDWORD(Size[0]));
  KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3728), 1);
  DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(v13, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
  DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3728));
  KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
  if ( (_DWORD)DeviceDescriptor == -1071774719 )
  {
    if ( IsInternalVideoOutput(a2[1]) )
    {
      v29 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v29 + 24) = DpiDxgkDdiQueryDeviceDescriptor;
      *(_QWORD *)(v29 + 32) = -1071774719LL;
      WdLogEvent5_WdError(v29);
    }
    else
    {
      v30 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v30 + 24) = -1071774719LL;
      WdLogEvent5_WdWarning(v30);
    }
    goto LABEL_9;
  }
  if ( (int)DeviceDescriptor >= 0 )
  {
    if ( !DpiIsValidEdid(Size[1]) )
    {
      if ( IsInternalVideoOutput(a2[1]) )
      {
        v36 = WdLogNewEntry5_WdError(v34);
        *(_QWORD *)(v36 + 24) = DeviceDescriptor;
        WdLogEvent5_WdError(v36);
      }
      else
      {
        v25 = WdLogNewEntry5_WdWarning(v34, v33, v35);
        *(_QWORD *)(v25 + 24) = DeviceDescriptor;
        WdLogEvent5_WdWarning(v25);
      }
      LODWORD(DeviceDescriptor) = -1073741823;
      goto LABEL_9;
    }
    goto LABEL_7;
  }
  v31 = WdLogNewEntry5_WdWarning(v17, v16, v18);
  *(_QWORD *)(v31 + 24) = *(_QWORD *)(v13 + 216);
  WdLogEvent5_WdWarning(v31);
  if ( a6 == 1 && (unsigned int)a2[15] < 3 )
  {
    KeWaitForSingleObject((PVOID)(v8 + 3272), Executive, 0, 0, 0LL);
    ++a2[15];
    if ( !*((_BYTE *)a2 + 64) )
    {
      _InterlockedAdd((volatile signed __int32 *)(v8 + 3520), 1u);
      *((_BYTE *)a2 + 64) = 1;
    }
    KeReleaseMutex((PRKMUTEX)(v8 + 3272), 0);
    LOBYTE(v32) = a4;
    LODWORD(DeviceDescriptor) = DpiPdoPollChild(v12, a2[6], a3, v32, a5);
    if ( (int)DeviceDescriptor >= 0 )
      LODWORD(DeviceDescriptor) = 259;
  }
LABEL_8:
  if ( (_DWORD)DeviceDescriptor != 259 )
  {
LABEL_9:
    KeWaitForSingleObject((PVOID)(v8 + 3272), Executive, 0, 0, 0LL);
    a2[15] = 0;
    KeReleaseMutex((PRKMUTEX)(v8 + 3272), 0);
  }
  if ( (int)DeviceDescriptor < 0 || (_DWORD)DeviceDescriptor == 259 )
  {
    if ( Size[1] )
      ExFreePoolWithTag((PVOID)Size[1], 0);
  }
  return (unsigned int)DeviceDescriptor;
}
