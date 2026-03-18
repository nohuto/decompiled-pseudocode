/*
 * XREFs of UsbDevice_InitializeEndpointContext @ 0x1C0032754
 * Callers:
 *     UsbDevice_ReconfigureEndpoint @ 0x1C0032ACC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0033E10 (UsbDevice_UcxEvtEndpointsConfigure.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x1C0011EBC (Endpoint_GetDequeuePointer.c)
 *     Endpoint_GetMaxPrimaryStreams @ 0x1C0011EFC (Endpoint_GetMaxPrimaryStreams.c)
 */

__int64 __fastcall UsbDevice_InitializeEndpointContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r8d
  char v7; // al
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  unsigned __int8 v12; // cl
  unsigned int v13; // edi
  unsigned int v14; // r11d
  unsigned int v15; // ebx
  unsigned int v16; // eax
  int v17; // edx
  int v18; // edx
  char v19; // cl
  unsigned __int8 v20; // al
  int v21; // ecx
  int v22; // eax
  int v23; // r11d
  char v24; // cl
  char v25; // al
  int MaxPrimaryStreams; // eax
  _DWORD *v27; // r10
  __int64 v28; // rcx
  __int64 result; // rax
  __int64 v30; // r10
  int v31; // r11d
  unsigned int v32; // r11d
  signed __int64 v33[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  *(_DWORD *)(a3 + 4) ^= (*(_DWORD *)(a3 + 4) ^ (8 * *(_DWORD *)(a2 + 120))) & 0x38;
  *(_WORD *)(a3 + 6) = *(_WORD *)(a2 + 100) & 0x7FF;
  v7 = *(_BYTE *)(a2 + 99) & 3;
  *(_OWORD *)v33 = *(_OWORD *)(*(_QWORD *)a2 + 272LL);
  if ( v7 == 1
    || ((v7 == 3) & _bittest64(v33, 0x34u)) != 0
    && *(char *)(a2 + 98) < 0
    && (v8 = *(_QWORD *)(a2 + 16), *(_WORD *)(v8 + 124) == 1529)
    && *(_WORD *)(v8 + 126) == 4353
    && *(_DWORD *)(v8 + 36) > 1u )
  {
    v9 = 0;
  }
  else
  {
    v9 = 6;
  }
  v10 = v9 | *(_DWORD *)(a3 + 4) & 0xFFFFFFF9;
  *(_DWORD *)(a3 + 4) = v10;
  v11 = *(_DWORD *)(a1 + 20);
  v12 = *(_BYTE *)(a2 + 102);
  v13 = HIWORD(v10);
  v14 = HIWORD(v10);
  v15 = v10 >> 8;
  switch ( v11 )
  {
    case 0:
      if ( ((((v10 >> 3) & 7) - 3) & 0xFFFFFFFB) == 0 )
      {
        if ( v12 >= 0x10u )
          *(_BYTE *)(a3 + 2) = 8 - (v12 < 0x20u);
        else
          *(_BYTE *)(a3 + 2) = 6;
        v5 = HIWORD(v10);
        *(_WORD *)(a3 + 18) = HIWORD(v10);
        *(_BYTE *)(a3 + 3) = 0;
      }
      v16 = HIWORD(v10);
      goto LABEL_34;
    case 1:
      v17 = (v10 >> 3) & 7;
      if ( v17 != 7 )
      {
        if ( v17 != 3 )
        {
          if ( v17 == 5 || v17 == 1 )
          {
            *(_WORD *)(a3 + 2) = 3;
            v5 = v14;
            *(_WORD *)(a3 + 18) = v14;
          }
          goto LABEL_33;
        }
        LOWORD(v14) = v13;
      }
      if ( v12 >= 2u )
      {
        if ( v12 >= 4u )
        {
          if ( v12 >= 8u )
          {
            if ( v12 >= 0x10u )
              *(_BYTE *)(a3 + 2) = 8 - (v12 < 0x20u);
            else
              *(_BYTE *)(a3 + 2) = 6;
          }
          else
          {
            *(_BYTE *)(a3 + 2) = 5;
          }
        }
        else
        {
          *(_BYTE *)(a3 + 2) = 4;
        }
      }
      else
      {
        *(_BYTE *)(a3 + 2) = 3;
      }
      v5 = (unsigned __int16)v14;
      *(_WORD *)(a3 + 18) = v14;
      *(_BYTE *)(a3 + 3) = 0;
LABEL_33:
      v16 = (unsigned __int16)v14;
LABEL_34:
      *(_DWORD *)(a2 + 152) = v16;
      break;
    case 2:
      v18 = (v10 >> 3) & 7;
      if ( ((v18 - 3) & 0xFFFFFFF9) == 0 || v18 == 1 )
      {
        if ( v12 >= 2u )
        {
          if ( v12 >= 6u )
            v19 = 5;
          else
            v19 = v12 - 1;
        }
        else
        {
          v19 = 0;
        }
        *(_BYTE *)(a3 + 2) = v19;
        v20 = (*(_WORD *)(a2 + 100) >> 11) & 3;
        *(_BYTE *)(a3 + 3) = 0;
        v21 = v20;
        v22 = *(unsigned __int16 *)(a3 + 6);
        LOBYTE(v15) = v21;
        *(_BYTE *)(a3 + 5) = v21;
        LOWORD(v14) = v22;
        v5 = v22 * (v21 + 1);
        *(_WORD *)(a3 + 18) = v22 * (v21 + 1);
      }
      *(_DWORD *)(a2 + 152) = (unsigned __int16)v14 * ((unsigned __int8)v15 + 1);
      break;
    case 3:
      v23 = (v10 >> 3) & 7;
      if ( ((v23 - 3) & 0xFFFFFFF9) == 0 || v23 == 1 )
      {
        if ( v12 >= 2u )
        {
          if ( v12 >= 6u )
            v24 = 5;
          else
            v24 = v12 - 1;
        }
        else
        {
          v24 = 0;
        }
        *(_BYTE *)(a3 + 2) = v24;
        v25 = *(_BYTE *)(a2 + 106);
        if ( v25 >= 0 )
        {
          v5 = *(unsigned __int16 *)(a2 + 107);
          *(_DWORD *)a3 ^= (*(_DWORD *)a3 ^ ((unsigned __int8)v25 << 8)) & 0x300;
        }
        else
        {
          v5 = *(_DWORD *)(a2 + 113);
          *(_DWORD *)a3 &= 0xFFFFFCFF;
        }
        *(_WORD *)(a3 + 18) = v5;
        *(_BYTE *)(a3 + 3) = BYTE2(v5);
      }
      if ( ((((v10 >> 3) & 7) - 1) & 0xFFFFFFFB) != 0 )
        *(_DWORD *)(a2 + 152) = HIWORD(v10) * (BYTE1(v10) + 1);
      else
        *(_DWORD *)(a2 + 152) = v5;
      *(_BYTE *)(a3 + 5) = *(_BYTE *)(a2 + 105);
      break;
  }
  if ( *(_BYTE *)(a3 + 2) > 7u && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) & 0x10000LL) != 0 )
    *(_BYTE *)(a3 + 2) = 7;
  *(_DWORD *)(a2 + 148) = *(unsigned __int8 *)(a3 + 5);
  *(_WORD *)(a3 + 16) = v5 >> 1;
  MaxPrimaryStreams = Endpoint_GetMaxPrimaryStreams(a2);
  *v27 ^= (*v27 ^ (MaxPrimaryStreams << 10)) & 0x7C00;
  result = Endpoint_GetDequeuePointer(v28, 0);
  *(_QWORD *)(v30 + 8) = result;
  if ( (v31 & 0x7C00) != 0 )
    v32 = v31 | 0x8000;
  else
    v32 = v31 & 0xFFFF7FFF;
  *(_DWORD *)v30 = v32;
  return result;
}
