/*
 * XREFs of Endpoint_SetUpConfigureEndpointCommand @ 0x1C0014088
 * Callers:
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C001209C (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C00123D0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0012B88 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0012F60 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 * Callees:
 *     memset @ 0x1C0002D40 (memset.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C003FC54 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall Endpoint_SetUpConfigureEndpointCommand(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        _QWORD *a7,
        void *a8)
{
  int v9; // ebp
  _DWORD *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  _OWORD *v15; // rsi
  _OWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _OWORD *DeviceContextBufferVA; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _OWORD *v23; // rax
  unsigned int v24; // r8d
  unsigned int i; // ecx
  int v26; // r9d
  unsigned int v27; // eax
  int v28; // eax
  int v29; // edx
  unsigned int v30; // eax
  __int64 result; // rax

  v9 = *(_DWORD *)(a1 + 144);
  v12 = *(_DWORD **)(a5 + 16);
  v13 = (unsigned int)(v9 - 1) + 2LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 88LL) + 104LL) & 4) != 0 )
  {
    memset(v12, 0, 0x40uLL);
    v14 = *(_QWORD *)(a1 + 16);
    v15 = v12 + 16;
    v16 = &v12[16 * v13];
    if ( *(_BYTE *)(v14 + 610) )
    {
      v17 = v14 + 560;
      v18 = v17 + 8;
      if ( !*(_BYTE *)(v17 + 49) )
        v18 = v17;
      DeviceContextBufferVA = (_OWORD *)XilCoreUsbDevice_GetDeviceContextBufferVA(v18);
      *v15 = *DeviceContextBufferVA;
      *((_OWORD *)v12 + 5) = DeviceContextBufferVA[1];
      *((_OWORD *)v12 + 6) = DeviceContextBufferVA[2];
      *((_OWORD *)v12 + 7) = DeviceContextBufferVA[3];
    }
    else
    {
      memset(v12 + 16, 0, 0x40uLL);
    }
    if ( a6 )
    {
      *v16 = *a6;
      v16[1] = a6[1];
      v16[2] = a6[2];
      v16[3] = a6[3];
    }
  }
  else
  {
    memset(v12, 0, 0x20uLL);
    v20 = *(_QWORD *)(a1 + 16);
    v15 = v12 + 8;
    v16 = &v12[8 * v13];
    if ( *(_BYTE *)(v20 + 610) )
    {
      v21 = v20 + 560;
      v22 = v21 + 8;
      if ( !*(_BYTE *)(v21 + 49) )
        v22 = v21;
      v23 = (_OWORD *)XilCoreUsbDevice_GetDeviceContextBufferVA(v22);
      *v15 = *v23;
      *((_OWORD *)v12 + 3) = v23[1];
    }
    else
    {
      memset(v12 + 8, 0, 0x20uLL);
    }
    if ( a6 )
    {
      *v16 = *a6;
      v16[1] = a6[1];
    }
  }
  if ( a7 )
    *a7 = v16;
  v24 = 0;
  for ( i = 0; i < 0x20; ++i )
  {
    v27 = i;
    v26 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
    if ( !_bittest(&v26, i) )
      v27 = v24;
    v24 = v27;
  }
  *(_DWORD *)v15 = (v27 << 27) | *(_DWORD *)v15 & 0x7FFFFFF;
  v28 = v12[1] | 1;
  v12[1] = v28;
  switch ( a2 )
  {
    case 0:
      v29 = 1 << v9;
LABEL_28:
      v12[1] = v28 | v29;
      break;
    case 1:
      *v12 |= 1 << v9;
      break;
    case 2:
      v29 = 1 << v9;
      *v12 |= 1 << v9;
      goto LABEL_28;
  }
  memset(a8, 0, 0x60uLL);
  *((_QWORD *)a8 + 5) = a3;
  v30 = *((_DWORD *)a8 + 9) & 0xFFFF31FF;
  *((_QWORD *)a8 + 6) = a4;
  *((_DWORD *)a8 + 9) = v30 | 0x3000;
  *((_BYTE *)a8 + 39) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  *((_QWORD *)a8 + 3) = *(_QWORD *)(a5 + 24);
  *((_QWORD *)a8 + 9) = v12;
  result = *(unsigned int *)(a5 + 44);
  *((_DWORD *)a8 + 20) = result;
  *((_DWORD *)a8 + 21) = 2;
  *((_QWORD *)a8 + 11) = a1;
  return result;
}
