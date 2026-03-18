/*
 * XREFs of UsbhGetAcpiPortAttributes @ 0x1C0023C70
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x1C001AA20 (UsbhGetExtendedHubInformation.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhAcpiEnumChildren @ 0x1C0024464 (UsbhAcpiEnumChildren.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     memmove @ 0x1C0028680 (memmove.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C003BF58 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall UsbhGetAcpiPortAttributes(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // r13
  int v7; // r15d
  _DWORD *v8; // rax
  _DWORD *OutputBuffer; // rdi
  _DWORD *v10; // rax
  PVOID v11; // rax
  _DWORD *v12; // rax
  unsigned int v13; // ecx
  _DWORD *v14; // r13
  unsigned __int16 v15; // si
  __int64 v16; // rbx
  IRP *v17; // rsi
  NTSTATUS Status; // esi
  unsigned __int16 v19; // r12
  __int64 v20; // rbx
  IRP *v21; // rsi
  NTSTATUS v22; // esi
  unsigned __int64 v23; // r10
  __int64 v24; // r8
  _DWORD *v25; // rax
  unsigned int v26; // r11d
  _BYTE *v27; // r9
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // ecx
  bool v34; // zf
  int v35; // edx
  unsigned int v36; // ecx
  int v37; // ecx
  __int64 v38; // rbx
  IRP *v39; // rsi
  NTSTATUS v40; // esi
  __int64 v41; // rcx
  int v42; // ecx
  void *v43; // r9
  ULONG OutputBufferLength; // [rsp+28h] [rbp-D8h]
  int v45; // [rsp+50h] [rbp-B0h]
  unsigned int v47; // [rsp+60h] [rbp-A0h]
  _DWORD *v49; // [rsp+70h] [rbp-90h]
  size_t Size; // [rsp+78h] [rbp-88h]
  _DWORD *v51; // [rsp+80h] [rbp-80h]
  struct _KEVENT Event; // [rsp+88h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK v54; // [rsp+B0h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK v55; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-30h] BYREF
  int v57; // [rsp+D8h] [rbp-28h]
  char v58[4]; // [rsp+E0h] [rbp-20h] BYREF
  SIZE_T NumberOfBytes; // [rsp+E4h] [rbp-1Ch]
  _DWORD InputBuffer[72]; // [rsp+100h] [rbp+0h] BYREF
  int v61; // [rsp+220h] [rbp+120h]
  _DWORD v62[7]; // [rsp+224h] [rbp+124h]

  v62[3] = 4;
  v2 = a1;
  v62[4] = 4;
  v62[6] = 4;
  v61 = 0;
  v62[0] = 1;
  v62[1] = 1;
  v62[2] = 1;
  v62[5] = 8;
  v51 = FdoExt(a1);
  result = UsbhAcpiEnumChildren(v2, v58, 20LL);
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
      v49 = PoolWithTag;
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v4);
        v7 = UsbhAcpiEnumChildren(v2, v6, v4);
        if ( v7 >= 0 )
        {
          v8 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x414uLL, 0x42554855u);
          OutputBuffer = v8;
          if ( v8 )
          {
            memset(v8, 0, 0x414uLL);
            if ( !*((_QWORD *)v51 + 378) )
            {
              v10 = FdoExt(v2);
              v11 = ExAllocatePoolWithTag(
                      ExDefaultNonPagedPoolType,
                      28 * (*((unsigned __int8 *)v10 + 2938) + 1LL),
                      0x42554855u);
              *((_QWORD *)v51 + 378) = v11;
              if ( v11 )
              {
                v12 = FdoExt(v2);
                memset(*((void **)v51 + 378), 0, 28 * (*((unsigned __int8 *)v12 + 2938) + 1LL));
              }
            }
            v13 = 1;
            v14 = v6 + 2;
            v45 = 1;
            if ( v49[1] > 1u )
            {
              while ( 1 )
              {
                v14 = (_DWORD *)((char *)v14 + (unsigned int)v14[1] + 8);
                if ( (*v14 & 1) == 0 || !v14[1] )
                  goto LABEL_70;
                v15 = *((_WORD *)v14 + 2) - 1;
                if ( !v2 )
                  UsbhTrapFatal_Dbg(0LL, 0LL);
                v16 = *(_QWORD *)(v2 + 64);
                if ( !v16 )
                  UsbhTrapFatal_Dbg(v2, 0LL);
                if ( *(_DWORD *)v16 != 541218120 )
                  UsbhTrapFatal_Dbg(v2, *(_QWORD *)(v2 + 64));
                Size = v15;
                if ( (unsigned __int64)v15 + 6 > 0x100 )
                  goto LABEL_114;
                memset(InputBuffer, 0, 0x114uLL);
                InputBuffer[0] = 1181312321;
                InputBuffer[65] = 276;
                memmove(&InputBuffer[1], v14 + 2, v15);
                v47 = v15;
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
                  goto LABEL_113;
                ObfReferenceObject(*(PVOID *)(v16 + 1208));
                Status = IofCallDriver(*(PDEVICE_OBJECT *)(v16 + 1208), v17);
                if ( Status == 259 )
                {
                  Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                  if ( !Status )
                    Status = IoStatusBlock.Status;
                }
                if ( (ObfDereferenceObject(*(PVOID *)(v16 + 1208)), Status >= 0)
                  && (*OutputBuffer != 1114596673 || !OutputBuffer[2])
                  || (v7 = Status, Status < 0) )
                {
LABEL_113:
                  v13 = v45;
LABEL_114:
                  v7 = 0;
                  goto LABEL_70;
                }
                if ( OutputBuffer[2] )
                  break;
LABEL_69:
                v13 = v45;
LABEL_70:
                v45 = ++v13;
                if ( v13 >= v49[1] )
                  goto LABEL_71;
              }
              if ( !*((_WORD *)OutputBuffer + 6) )
              {
                v19 = *((_WORD *)OutputBuffer + 8);
                if ( v19 )
                {
                  v20 = *(_QWORD *)(a1 + 64);
                  if ( !v20 )
                    UsbhTrapFatal_Dbg(a1, 0LL);
                  if ( *(_DWORD *)v20 != 541218120 )
                    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
                  if ( v19 > *(unsigned __int8 *)(v20 + 2938) )
                  {
                    v2 = a1;
                    goto LABEL_69;
                  }
                  if ( *(_DWORD *)v20 != 541218120 )
                    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
                  memset(InputBuffer, 0, 0x114uLL);
                  InputBuffer[0] = 1181312321;
                  InputBuffer[65] = 276;
                  memmove(&InputBuffer[1], v14 + 2, Size);
                  *((_BYTE *)&InputBuffer[1] + v47) = 46;
                  *(_DWORD *)((char *)&InputBuffer[1] + v47 + 1) = 1129338207;
                  *((_BYTE *)&InputBuffer[2] + v47 + 1) = 0;
                  KeInitializeEvent(&Event, SynchronizationEvent, 0);
                  v21 = IoBuildDeviceIoControlRequest(
                          0x32C018u,
                          *(PDEVICE_OBJECT *)(v20 + 1208),
                          InputBuffer,
                          0x114u,
                          OutputBuffer,
                          0x414u,
                          0,
                          &Event,
                          &v54);
                  if ( !v21 )
                  {
                    v7 = -1073741670;
LABEL_94:
                    OutputBufferLength = v7;
LABEL_95:
                    v43 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_98:
                    v2 = a1;
                    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v43, v19, OutputBufferLength);
                    v7 = 0;
                    goto LABEL_69;
                  }
                  ObfReferenceObject(*(PVOID *)(v20 + 1208));
                  v22 = IofCallDriver(*(PDEVICE_OBJECT *)(v20 + 1208), v21);
                  if ( v22 == 259 )
                  {
                    v22 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                    if ( !v22 )
                      v22 = v54.Status;
                  }
                  ObfDereferenceObject(*(PVOID *)(v20 + 1208));
                  if ( v22 >= 0 && (*OutputBuffer != 1114596673 || !OutputBuffer[2]) )
                  {
                    v7 = -1072431089;
                    goto LABEL_94;
                  }
                  v7 = v22;
                  if ( v22 < 0 )
                    goto LABEL_94;
                  if ( !OutputBuffer[2] )
                  {
                    v2 = a1;
                    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE, v19, -1072431093);
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(
                        WPP_GLOBAL_Control->DeviceExtension,
                        0,
                        1,
                        38,
                        (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
                        v19);
                    goto LABEL_69;
                  }
                  v23 = (unsigned __int64)OutputBuffer + (unsigned int)OutputBuffer[1];
                  v56 = 0LL;
                  v24 = 0LL;
                  v57 = 0;
                  v25 = OutputBuffer + 3;
                  if ( (unsigned __int64)(OutputBuffer + 3) < v23 )
                  {
                    v26 = OutputBuffer[2];
                    while ( 1 )
                    {
                      if ( (unsigned int)v24 >= v26 )
                        goto LABEL_46;
                      if ( (unsigned int)v24 >= 4 )
                      {
                        v42 = -1072431093;
                        goto LABEL_92;
                      }
                      if ( *(_WORD *)v25 )
                        break;
                      v27 = (char *)&v56 + (unsigned int)v62[2 * v24 - 1];
                      v28 = v62[2 * v24];
                      if ( v28 == 1 )
                      {
                        *v27 = *((_BYTE *)v25 + 4);
                      }
                      else
                      {
                        if ( v28 != 4 )
                        {
                          v42 = -1072431089;
LABEL_92:
                          OutputBufferLength = v42;
                          goto LABEL_95;
                        }
                        *(_DWORD *)v27 = v25[1];
                      }
                      LOWORD(v29) = *((_WORD *)v25 + 1);
                      if ( (unsigned __int16)v29 < 4u )
                        v29 = 4LL;
                      else
                        v29 = (unsigned __int16)v29;
                      v24 = (unsigned int)(v24 + 1);
                      v25 = (_DWORD *)((char *)v25 + v29 + 4);
                      if ( (unsigned __int64)v25 >= v23 )
                        goto LABEL_46;
                    }
                    v42 = -1072431096;
                    goto LABEL_92;
                  }
LABEL_46:
                  v30 = *((_QWORD *)v51 + 378);
                  if ( v30 )
                  {
                    v31 = 28LL * v19 + v30;
                    v32 = v57;
                    *(_QWORD *)v31 = v56;
                    *(_DWORD *)(v31 + 8) = v32;
                    *(_DWORD *)(a2 + 4LL * v19) |= 0x20u;
                  }
                  v33 = *(_DWORD *)(a2 + 4LL * v19) & 0xFFFFFFF0;
                  v34 = (_BYTE)v56 == 0;
                  *(_DWORD *)(a2 + 4LL * v19) = v33;
                  if ( !v34 )
                  {
                    v35 = BYTE1(v56);
                    v36 = v33 & 0xFFFFFFEF;
                    *(_DWORD *)(a2 + 4LL * v19) = v36;
                    switch ( v35 )
                    {
                      case 255:
                        v37 = v36 | 8;
                        break;
                      case 0:
                        goto LABEL_52;
                      case 1:
                        v37 = v36 | 4;
                        break;
                      case 2:
                        v37 = v36 | 2;
                        break;
                      default:
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                          WPP_RECORDER_SF_dD(
                            WPP_GLOBAL_Control->DeviceExtension,
                            v35,
                            v35 - 1,
                            39,
                            (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
                            v19,
                            v35);
                        goto LABEL_52;
                    }
                    *(_DWORD *)(a2 + 4LL * v19) = v37;
LABEL_52:
                    v38 = *(_QWORD *)(a1 + 64);
                    if ( !v38 )
                      UsbhTrapFatal_Dbg(a1, 0LL);
                    if ( *(_DWORD *)v38 != 541218120 )
                      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
                    memset(InputBuffer, 0, 0x114uLL);
                    InputBuffer[0] = 1181312321;
                    InputBuffer[65] = 276;
                    memmove(&InputBuffer[1], v14 + 2, Size);
                    *((_BYTE *)&InputBuffer[1] + v47) = 46;
                    *(_DWORD *)((char *)&InputBuffer[1] + v47 + 1) = 1145851999;
                    *((_BYTE *)&InputBuffer[2] + v47 + 1) = 0;
                    KeInitializeEvent(&Event, SynchronizationEvent, 0);
                    v39 = IoBuildDeviceIoControlRequest(
                            0x32C018u,
                            *(PDEVICE_OBJECT *)(v38 + 1208),
                            InputBuffer,
                            0x114u,
                            OutputBuffer,
                            0x414u,
                            0,
                            &Event,
                            &v55);
                    if ( !v39 )
                    {
                      v7 = -1073741670;
                      goto LABEL_97;
                    }
                    ObfReferenceObject(*(PVOID *)(v38 + 1208));
                    v40 = IofCallDriver(*(PDEVICE_OBJECT *)(v38 + 1208), v39);
                    if ( v40 == 259 )
                    {
                      v40 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                      if ( !v40 )
                        v40 = v55.Status;
                    }
                    ObfDereferenceObject(*(PVOID *)(v38 + 1208));
                    if ( v40 >= 0 && (*OutputBuffer != 1114596673 || !OutputBuffer[2]) )
                    {
                      v7 = -1072431089;
LABEL_97:
                      OutputBufferLength = v7;
                      v43 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
                      goto LABEL_98;
                    }
                    v7 = v40;
                    if ( v40 < 0 )
                      goto LABEL_97;
                    if ( !OutputBuffer[2] || *((_WORD *)OutputBuffer + 6) != 2 || *((_WORD *)OutputBuffer + 7) < 0x10u )
                    {
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        WPP_RECORDER_SF_d(
                          WPP_GLOBAL_Control->DeviceExtension,
                          0,
                          1,
                          40,
                          (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
                          v19);
                      v2 = a1;
                      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE, v19, v40);
                      goto LABEL_69;
                    }
                    v41 = *((_QWORD *)v51 + 378);
                    if ( v41 )
                    {
                      *(_OWORD *)(28LL * v19 + v41 + 12) = *((_OWORD *)OutputBuffer + 1);
                      *(_DWORD *)(a2 + 4LL * v19) |= 0x40u;
                    }
                    if ( (OutputBuffer[6] & 1) == 0 )
                      *(_DWORD *)(a2 + 4LL * v19) |= 0x10u;
                    v51[641] |= 1u;
                    goto LABEL_68;
                  }
                  *(_DWORD *)(a2 + 4LL * v19) = v33 | 0x11;
                }
              }
LABEL_68:
              v2 = a1;
              goto LABEL_69;
            }
LABEL_71:
            ExFreePoolWithTag(OutputBuffer, 0);
            v6 = v49;
          }
          else
          {
            v7 = -1073741670;
          }
        }
        ExFreePoolWithTag(v6, 0);
        return (unsigned int)v7;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
