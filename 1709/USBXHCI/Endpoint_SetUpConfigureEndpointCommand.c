/*
 * XREFs of Endpoint_SetUpConfigureEndpointCommand @ 0x1C001B308
 * Callers:
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0019368 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0019690 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019E64 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001A260 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 * Callees:
 *     memset @ 0x1C0008A40 (memset.c)
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00333D0 (XilUsbDevice_GetDeviceContextBufferVA.c)
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
  _OWORD *v13; // rsi
  _OWORD *v14; // rbx
  _OWORD *DeviceContextBufferVA; // rax
  _OWORD *v16; // rax
  unsigned int v17; // r8d
  unsigned int i; // ecx
  int v19; // r9d
  int v20; // eax
  int v21; // edx
  unsigned int v22; // eax
  __int64 result; // rax

  v9 = *(_DWORD *)(a1 + 144);
  v12 = *(_DWORD **)(a5 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 88LL) + 104LL) & 4) != 0 )
  {
    memset(v12, 0, 0x40uLL);
    v13 = v12 + 16;
    v14 = &v12[16 * (v9 - 1) + 32];
    if ( *(_BYTE *)(a1 + 1336) )
    {
      memset(v12 + 16, 0, 0x40uLL);
    }
    else
    {
      DeviceContextBufferVA = (_OWORD *)XilUsbDevice_GetDeviceContextBufferVA(*(_QWORD *)(a1 + 16));
      *v13 = *DeviceContextBufferVA;
      *((_OWORD *)v12 + 5) = DeviceContextBufferVA[1];
      *((_OWORD *)v12 + 6) = DeviceContextBufferVA[2];
      *((_OWORD *)v12 + 7) = DeviceContextBufferVA[3];
    }
    if ( a6 )
    {
      *v14 = *a6;
      v14[1] = a6[1];
      v14[2] = a6[2];
      v14[3] = a6[3];
    }
  }
  else
  {
    memset(v12, 0, 0x20uLL);
    v13 = v12 + 8;
    v14 = &v12[8 * (v9 - 1) + 16];
    if ( *(_BYTE *)(a1 + 1336) )
    {
      memset(v12 + 8, 0, 0x20uLL);
    }
    else
    {
      v16 = (_OWORD *)XilUsbDevice_GetDeviceContextBufferVA(*(_QWORD *)(a1 + 16));
      *v13 = *v16;
      *((_OWORD *)v12 + 3) = v16[1];
    }
    if ( a6 )
    {
      *v14 = *a6;
      v14[1] = a6[1];
    }
  }
  if ( a7 )
    *a7 = v14;
  v17 = 0;
  for ( i = 0; i < 0x20; ++i )
  {
    v19 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
    if ( _bittest(&v19, i) )
      v17 = i;
  }
  *(_DWORD *)v13 = (v17 << 27) | *(_DWORD *)v13 & 0x7FFFFFF;
  v20 = v12[1] | 1;
  v12[1] = v20;
  switch ( a2 )
  {
    case 0:
      v21 = 1 << v9;
LABEL_24:
      v12[1] = v20 | v21;
      break;
    case 1:
      *v12 |= 1 << v9;
      break;
    case 2:
      v21 = 1 << v9;
      *v12 |= 1 << v9;
      goto LABEL_24;
  }
  memset(a8, 0, 0x60uLL);
  *((_QWORD *)a8 + 5) = a3;
  v22 = *((_DWORD *)a8 + 9) & 0xFFFF31FF;
  *((_QWORD *)a8 + 6) = a4;
  *((_DWORD *)a8 + 9) = v22 | 0x3000;
  *((_BYTE *)a8 + 39) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  *((_QWORD *)a8 + 3) = *(_QWORD *)(a5 + 24);
  *((_QWORD *)a8 + 9) = v12;
  result = *(unsigned int *)(a5 + 44);
  *((_DWORD *)a8 + 20) = result;
  *((_DWORD *)a8 + 21) = 2;
  *((_QWORD *)a8 + 11) = a1;
  return result;
}
