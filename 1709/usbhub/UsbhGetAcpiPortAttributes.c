/*
 * XREFs of UsbhGetAcpiPortAttributes @ 0x1C001EA50
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x1C001E840 (UsbhGetExtendedHubInformation.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAcpiEnumChildren @ 0x1C001F248 (UsbhAcpiEnumChildren.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     memmove @ 0x1C0029500 (memmove.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C00474E0 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall UsbhGetAcpiPortAttributes(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // r12
  NTSTATUS Status; // edi
  _DWORD *v8; // rax
  _DWORD *OutputBuffer; // rsi
  _DWORD *v10; // rax
  PVOID v11; // rax
  _DWORD *v12; // rax
  unsigned int v13; // edx
  _DWORD *v14; // r12
  unsigned __int16 v15; // di
  __int64 v16; // rbx
  IRP *v17; // rdi
  unsigned __int16 v18; // r13
  __int64 v19; // rbx
  IRP *v20; // rdi
  unsigned int v21; // r11d
  char *v22; // r10
  __int64 v23; // r8
  char *v24; // rax
  _BYTE *v25; // r9
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // ecx
  bool v32; // zf
  int v33; // edx
  unsigned int v34; // ecx
  int v35; // ecx
  __int64 v36; // rbx
  IRP *v37; // rdi
  __int64 v38; // rcx
  const EVENT_DESCRIPTOR *v39; // r9
  int v40; // [rsp+50h] [rbp-B0h]
  unsigned int v42; // [rsp+60h] [rbp-A0h]
  _DWORD *v44; // [rsp+70h] [rbp-90h]
  size_t Size; // [rsp+78h] [rbp-88h]
  _DWORD *v46; // [rsp+80h] [rbp-80h]
  struct _KEVENT Event; // [rsp+88h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK v49; // [rsp+B0h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK v50; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-30h] BYREF
  int v52; // [rsp+D8h] [rbp-28h]
  char v53[4]; // [rsp+E0h] [rbp-20h] BYREF
  SIZE_T NumberOfBytes; // [rsp+E4h] [rbp-1Ch]
  _DWORD InputBuffer[72]; // [rsp+100h] [rbp+0h] BYREF
  int v56; // [rsp+220h] [rbp+120h]
  _DWORD v57[7]; // [rsp+224h] [rbp+124h]

  v57[3] = 4;
  v2 = a1;
  v57[4] = 4;
  v57[6] = 4;
  v56 = 0;
  v57[0] = 1;
  v57[1] = 1;
  v57[2] = 1;
  v57[5] = 8;
  v46 = FdoExt(a1);
  result = UsbhAcpiEnumChildren(v2, v53, 20LL);
  if ( (_DWORD)result == -2147483643 )
  {
    v4 = NumberOfBytes;
    if ( (unsigned int)NumberOfBytes < 0x14 )
    {
      return 3222536207LL;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)NumberOfBytes, 0x42554855u);
      v44 = PoolWithTag;
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v4);
        Status = UsbhAcpiEnumChildren(v2, v6, v4);
        if ( Status >= 0 )
        {
          v8 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x414uLL, 0x42554855u);
          OutputBuffer = v8;
          if ( v8 )
          {
            memset(v8, 0, 0x414uLL);
            if ( !*((_QWORD *)v46 + 378) )
            {
              v10 = FdoExt(v2);
              v11 = ExAllocatePoolWithTag(
                      ExDefaultNonPagedPoolType,
                      28LL * ((unsigned int)*((unsigned __int8 *)v10 + 2938) + 1),
                      0x42554855u);
              *((_QWORD *)v46 + 378) = v11;
              if ( v11 )
              {
                v12 = FdoExt(v2);
                memset(*((void **)v46 + 378), 0, 28LL * ((unsigned int)*((unsigned __int8 *)v12 + 2938) + 1));
              }
            }
            v13 = 1;
            v14 = v6 + 2;
            v40 = 1;
            if ( v44[1] > 1u )
            {
              while ( 1 )
              {
                v14 = (_DWORD *)((char *)v14 + (unsigned int)v14[1] + 8);
                if ( (*v14 & 1) == 0 || !v14[1] )
                  goto LABEL_62;
                v15 = *((_WORD *)v14 + 2) - 1;
                if ( !v2 )
                  UsbhTrapFatal_Dbg(0LL, 0LL);
                v16 = *(_QWORD *)(v2 + 64);
                if ( !v16 )
                  UsbhTrapFatal_Dbg(v2, 0LL);
                if ( *(_DWORD *)v16 != 541218120 )
                  UsbhTrapFatal_Dbg(v2, *(_QWORD *)(v2 + 64));
                v42 = v15;
                if ( (unsigned __int64)((unsigned int)v15 + 1) + 5 > 0x100 )
                  goto LABEL_102;
                memset(InputBuffer, 0, 0x114uLL);
                InputBuffer[0] = 1181312321;
                InputBuffer[65] = 276;
                Size = v15;
                memmove(&InputBuffer[1], v14 + 2, v15);
                *((_BYTE *)&InputBuffer[1] + v15) = 46;
                *(_DWORD *)((char *)&InputBuffer[1] + (unsigned int)v15 + 1) = 1380204895;
                *((_BYTE *)&InputBuffer[2] + (unsigned int)v15 + 1) = 0;
                KeInitializeEvent(&Event, SynchronizationEvent, 0);
                v17 = IoBuildDeviceIoControlRequest(
                        0x32C018u,
                        *(PDEVICE_OBJECT *)(v16 + 1208),
                        InputBuffer,
                        0x114u,
                        OutputBuffer,
                        0x414u,
                        0,
                        &Event,
                        &IoStatusBlock);
                if ( !v17 )
                  goto LABEL_101;
                ObfReferenceObject(*(PVOID *)(v16 + 1208));
                Status = IofCallDriver(*(PDEVICE_OBJECT *)(v16 + 1208), v17);
                if ( Status == 259 )
                {
                  Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                  if ( !Status )
                    Status = IoStatusBlock.Status;
                }
                ObfDereferenceObject(*(PVOID *)(v16 + 1208));
                if ( Status < 0 || *OutputBuffer != 1114596673 || !OutputBuffer[2] )
                {
LABEL_101:
                  v13 = v40;
LABEL_102:
                  v2 = a1;
                  Status = 0;
                  goto LABEL_62;
                }
                v2 = a1;
                if ( !*((_WORD *)OutputBuffer + 6) )
                {
                  v18 = *((_WORD *)OutputBuffer + 8);
                  if ( v18 )
                  {
                    v19 = *(_QWORD *)(a1 + 64);
                    if ( !v19 )
                      UsbhTrapFatal_Dbg(a1, 0LL);
                    if ( *(_DWORD *)v19 != 541218120 )
                      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
                    if ( v18 <= *(unsigned __int8 *)(v19 + 2938) )
                      break;
                  }
                }
LABEL_61:
                v13 = v40;
LABEL_62:
                v40 = ++v13;
                if ( v13 >= v44[1] )
                  goto LABEL_63;
              }
              memset(InputBuffer, 0, 0x114uLL);
              InputBuffer[0] = 1181312321;
              InputBuffer[65] = 276;
              memmove(&InputBuffer[1], v14 + 2, Size);
              *((_BYTE *)&InputBuffer[1] + v42) = 46;
              *(_DWORD *)((char *)&InputBuffer[1] + v42 + 1) = 1129338207;
              *((_BYTE *)&InputBuffer[2] + v42 + 1) = 0;
              KeInitializeEvent(&Event, SynchronizationEvent, 0);
              v20 = IoBuildDeviceIoControlRequest(
                      0x32C018u,
                      *(PDEVICE_OBJECT *)(v19 + 1208),
                      InputBuffer,
                      0x114u,
                      OutputBuffer,
                      0x414u,
                      0,
                      &Event,
                      &v49);
              if ( !v20 )
                goto LABEL_78;
              ObfReferenceObject(*(PVOID *)(v19 + 1208));
              Status = IofCallDriver(*(PDEVICE_OBJECT *)(v19 + 1208), v20);
              if ( Status == 259 )
              {
                Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                if ( !Status )
                  Status = v49.Status;
              }
              ObfDereferenceObject(*(PVOID *)(v19 + 1208));
              if ( Status < 0 || *OutputBuffer != 1114596673 || !OutputBuffer[2] )
              {
LABEL_78:
                v39 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_79:
                UsbhEtwLogHubIrpEvent(v2, 0LL, 0LL, v39);
                Status = 0;
                goto LABEL_61;
              }
              v21 = OutputBuffer[2];
              if ( !v21 )
              {
                UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE);
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    38,
                    (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
                    v18);
                goto LABEL_61;
              }
              v22 = (char *)OutputBuffer + (unsigned int)OutputBuffer[1];
              v23 = 0LL;
              v51 = 0LL;
              v52 = 0;
              v24 = (char *)(OutputBuffer + 3);
              if ( OutputBuffer + 3 < (_DWORD *)v22 )
              {
                do
                {
                  if ( (unsigned int)v23 >= v21 )
                    break;
                  if ( (unsigned int)v23 >= 4 || *(_WORD *)v24 )
                    goto LABEL_78;
                  v25 = (char *)&v51 + (unsigned int)v57[2 * v23 - 1];
                  v26 = v57[2 * v23];
                  if ( v26 == 1 )
                  {
                    *v25 = v24[4];
                  }
                  else
                  {
                    if ( v26 != 4 )
                      goto LABEL_78;
                    *(_DWORD *)v25 = *((_DWORD *)v24 + 1);
                  }
                  LOWORD(v27) = *((_WORD *)v24 + 1);
                  v27 = (unsigned __int16)v27 < 4u ? 4LL : (unsigned __int16)v27;
                  v23 = (unsigned int)(v23 + 1);
                  v24 += v27 + 4;
                }
                while ( v24 < v22 );
              }
              v28 = *((_QWORD *)v46 + 378);
              if ( v28 )
              {
                v29 = 28LL * v18 + v28;
                v30 = v52;
                *(_QWORD *)v29 = v51;
                *(_DWORD *)(v29 + 8) = v30;
                *(_DWORD *)(a2 + 4LL * v18) |= 0x20u;
              }
              v31 = *(_DWORD *)(a2 + 4LL * v18) & 0xFFFFFFF0;
              v32 = (_BYTE)v51 == 0;
              *(_DWORD *)(a2 + 4LL * v18) = v31;
              if ( v32 )
              {
                *(_DWORD *)(a2 + 4LL * v18) = v31 | 0x11;
                v2 = a1;
                goto LABEL_61;
              }
              v33 = BYTE1(v51);
              v34 = v31 & 0xFFFFFFEF;
              *(_DWORD *)(a2 + 4LL * v18) = v34;
              switch ( v33 )
              {
                case 255:
                  v35 = v34 | 8;
                  break;
                case 0:
                  goto LABEL_47;
                case 1:
                  v35 = v34 | 4;
                  break;
                case 2:
                  v35 = v34 | 2;
                  break;
                default:
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_dD(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v33,
                      v33 - 1,
                      39,
                      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
                      v18,
                      v33);
                  goto LABEL_47;
              }
              *(_DWORD *)(a2 + 4LL * v18) = v35;
LABEL_47:
              v36 = *(_QWORD *)(a1 + 64);
              if ( !v36 )
                UsbhTrapFatal_Dbg(a1, 0LL);
              if ( *(_DWORD *)v36 != 541218120 )
                UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
              memset(InputBuffer, 0, 0x114uLL);
              InputBuffer[0] = 1181312321;
              InputBuffer[65] = 276;
              memmove(&InputBuffer[1], v14 + 2, Size);
              *((_BYTE *)&InputBuffer[1] + v42) = 46;
              *(_DWORD *)((char *)&InputBuffer[1] + v42 + 1) = 1145851999;
              *((_BYTE *)&InputBuffer[2] + v42 + 1) = 0;
              KeInitializeEvent(&Event, SynchronizationEvent, 0);
              v37 = IoBuildDeviceIoControlRequest(
                      0x32C018u,
                      *(PDEVICE_OBJECT *)(v36 + 1208),
                      InputBuffer,
                      0x114u,
                      OutputBuffer,
                      0x414u,
                      0,
                      &Event,
                      &v50);
              if ( v37 )
              {
                ObfReferenceObject(*(PVOID *)(v36 + 1208));
                Status = IofCallDriver(*(PDEVICE_OBJECT *)(v36 + 1208), v37);
                if ( Status == 259 )
                {
                  Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                  if ( !Status )
                    Status = v50.Status;
                }
                ObfDereferenceObject(*(PVOID *)(v36 + 1208));
                if ( Status >= 0 && *OutputBuffer == 1114596673 && OutputBuffer[2] )
                {
                  if ( *((_WORD *)OutputBuffer + 6) == 2 && *((_WORD *)OutputBuffer + 7) >= 0x10u )
                  {
                    v38 = *((_QWORD *)v46 + 378);
                    if ( v38 )
                    {
                      *(_OWORD *)(28LL * v18 + v38 + 12) = *((_OWORD *)OutputBuffer + 1);
                      *(_DWORD *)(a2 + 4LL * v18) |= 0x40u;
                    }
                    if ( (OutputBuffer[6] & 1) == 0 )
                      *(_DWORD *)(a2 + 4LL * v18) |= 0x10u;
                    v46[641] |= 1u;
                    v2 = a1;
                  }
                  else
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(
                        WPP_GLOBAL_Control->DeviceExtension,
                        0,
                        1,
                        40,
                        (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
                        v18);
                    v2 = a1;
                    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE);
                  }
                  goto LABEL_61;
                }
              }
              v2 = a1;
              v39 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
              goto LABEL_79;
            }
LABEL_63:
            ExFreePoolWithTag(OutputBuffer, 0);
            v6 = v44;
          }
          else
          {
            Status = -1073741670;
          }
        }
        ExFreePoolWithTag(v6, 0);
        return (unsigned int)Status;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
