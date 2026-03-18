/*
 * XREFs of DpiPdoGetDeviceDescriptor @ 0x1C020C0EC
 * Callers:
 *     DpiPdoAddPdo @ 0x1C020B454 (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiIsValidEdid @ 0x1C003C5A8 (DpiIsValidEdid.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C010930C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0109340 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C020A910 (DpiDxgkDdiQueryDeviceDescriptor.c)
 *     DpiPdoPollChild @ 0x1C020D430 (DpiPdoPollChild.c)
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
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  size_t v17; // r8
  PVOID v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  PVOID PoolWithTag; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  _WORD *v38; // rax
  size_t Size[2]; // [rsp+30h] [rbp-10h] BYREF

  v8 = *(_QWORD *)(a1 + 64);
  LODWORD(DeviceDescriptor) = 0;
  Size[0] = 0LL;
  Size[1] = 0LL;
  v12 = a1;
  v13 = *(_QWORD *)(v8 + 40);
  if ( *((_QWORD *)a2 + 13) )
  {
    Size[0] = 0x10000000000LL;
    Size[1] = (size_t)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
    if ( !Size[1] )
    {
LABEL_3:
      LODWORD(DeviceDescriptor) = -1073741801;
      v15 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v15 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v15);
LABEL_35:
      KeWaitForSingleObject((PVOID)(v8 + 3272), Executive, 0, 0, 0LL);
      a2[15] = 0;
      KeReleaseMutex((PRKMUTEX)(v8 + 3272), 0);
      goto LABEL_36;
    }
    v16 = *((unsigned __int16 *)a2 + 47);
    if ( (unsigned int)v16 >= HIDWORD(Size[0]) )
    {
      v17 = HIDWORD(Size[0]);
    }
    else
    {
      memset((void *)(Size[1] + v16), 0, (unsigned int)(HIDWORD(Size[0]) - v16));
      v17 = *((unsigned __int16 *)a2 + 47);
    }
    memmove((void *)Size[1], *((const void **)a2 + 13), v17);
    goto LABEL_31;
  }
  if ( *a2 != 1 )
  {
    if ( *a2 == 2 )
    {
      Size[0] = 0x19800000000LL;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x198uLL, 0x74727044u);
      Size[1] = (size_t)PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_3;
      memset(PoolWithTag, 0, HIDWORD(Size[0]));
      KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3728), 1);
      DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(
                                v13,
                                *(_QWORD *)(v8 + 48),
                                (unsigned int)a2[6],
                                (unsigned int *)Size);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3728));
      KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
      if ( (int)DeviceDescriptor >= 0 )
      {
        v38 = (_WORD *)Size[1];
        *(_WORD *)(Size[1] + 100) = 0;
        v38[101] = 0;
        v38[152] = 0;
        v38[203] = 0;
LABEL_31:
        *a8 = *(_OWORD *)Size;
        goto LABEL_34;
      }
      v36 = WdLogNewEntry5_WdError(v35);
      v37 = *(_QWORD *)(v13 + 216);
      *(_QWORD *)(v36 + 32) = DeviceDescriptor;
    }
    else
    {
      LODWORD(DeviceDescriptor) = -1073741823;
      v36 = WdLogNewEntry5_WdError(a1);
      v37 = *a2;
    }
    *(_QWORD *)(v36 + 24) = v37;
    WdLogEvent5_WdError(v36);
    goto LABEL_34;
  }
  Size[0] = 0x10000000000LL;
  v18 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
  Size[1] = (size_t)v18;
  if ( !v18 )
    goto LABEL_3;
  memset(v18, 0, HIDWORD(Size[0]));
  KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3728), 1);
  DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(
                            v13,
                            *(_QWORD *)(v8 + 48),
                            (unsigned int)a2[6],
                            (unsigned int *)Size);
  DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3728));
  KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
  if ( (_DWORD)DeviceDescriptor == -1071774719 )
  {
    if ( IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[1]) )
    {
      v25 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v25 + 24) = DpiDxgkDdiQueryDeviceDescriptor;
      *(_QWORD *)(v25 + 32) = -1071774719LL;
      WdLogEvent5_WdError(v25);
    }
    else
    {
      v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v26 + 24) = -1071774719LL;
      WdLogEvent5_WdWarning(v26);
    }
    goto LABEL_35;
  }
  if ( (int)DeviceDescriptor >= 0 )
  {
    if ( !DpiIsValidEdid((char *)Size[1]) )
    {
      if ( IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[1]) )
      {
        v32 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v32 + 24) = DeviceDescriptor;
        WdLogEvent5_WdError(v32);
      }
      else
      {
        v33 = WdLogNewEntry5_WdWarning(v30, v29, v31);
        *(_QWORD *)(v33 + 24) = DeviceDescriptor;
        WdLogEvent5_WdWarning(v33);
      }
      LODWORD(DeviceDescriptor) = -1073741823;
      goto LABEL_35;
    }
    goto LABEL_31;
  }
  v27 = WdLogNewEntry5_WdWarning(v20, v19, v21);
  *(_QWORD *)(v27 + 24) = *(_QWORD *)(v13 + 216);
  WdLogEvent5_WdWarning(v27);
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
    LOBYTE(v28) = a4;
    LODWORD(DeviceDescriptor) = DpiPdoPollChild(v12, a2[6], a3, v28, a5);
    if ( (int)DeviceDescriptor >= 0 )
      LODWORD(DeviceDescriptor) = 259;
  }
LABEL_34:
  if ( (_DWORD)DeviceDescriptor != 259 )
    goto LABEL_35;
LABEL_36:
  if ( (int)DeviceDescriptor < 0 || (_DWORD)DeviceDescriptor == 259 )
  {
    if ( Size[1] )
      ExFreePoolWithTag((PVOID)Size[1], 0);
  }
  return (unsigned int)DeviceDescriptor;
}
