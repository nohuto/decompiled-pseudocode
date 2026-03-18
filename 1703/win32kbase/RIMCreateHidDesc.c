/*
 * XREFs of RIMCreateHidDesc @ 0x1C0054FD4
 * Callers:
 *     RIMCreateDev @ 0x1C005428C (RIMCreateDev.c)
 * Callees:
 *     RIMAllocateHidConfigDesc @ 0x1C00079F4 (RIMAllocateHidConfigDesc.c)
 *     RIMIsRunningOnMobile @ 0x1C000A090 (RIMIsRunningOnMobile.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RIMHidGetCaps @ 0x1C00544D4 (RIMHidGetCaps.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C005557C (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     DbgPrintRIM @ 0x1C0055708 (DbgPrintRIM.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0055740 (RIMGetDeviceObjectPointer.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C0055E9C (ApiSetInkProcessorIsInkDevice.c)
 *     RIMFreeHidDesc @ 0x1C0055EEC (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0055F74 (WPP_RECORDER_SF_qDD.c)
 *     rimAnySecondaryRimUsagesMatchingUsages @ 0x1C008C460 (rimAnySecondaryRimUsagesMatchingUsages.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0090B14 (WPP_RECORDER_SF_DDq.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00960DC (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00961CC (RIMSearchHidTLCInfo.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00E6EB8 (WPP_RECORDER_SF_qD.c)
 *     rimHidP_GetCollectionDescription @ 0x1C0106E48 (rimHidP_GetCollectionDescription.c)
 *     RIMIDECreateHIDDesc @ 0x1C0109528 (RIMIDECreateHIDDesc.c)
 */

__int64 __fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // r12
  int v7; // edx
  __int64 v8; // r8
  int v9; // eax
  struct _DEVICE_OBJECT *v10; // r15
  PIRP v11; // rax
  struct _FILE_OBJECT *v12; // r13
  int v13; // edx
  NTSTATUS Status; // eax
  void *v15; // rdi
  PIRP v16; // rax
  int v17; // edx
  NTSTATUS v18; // eax
  int Caps; // eax
  int v20; // edx
  unsigned int v21; // ecx
  __int64 v22; // rax
  unsigned __int16 v23; // r9
  unsigned __int16 v24; // r10
  int v25; // edx
  int v26; // eax
  char v27; // cl
  int v28; // edx
  __int64 v29; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // r8d
  __int64 v34; // rdi
  int v35; // edx
  int v36; // r9d
  int v37; // r9d
  int v38; // r9d
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-D8h]
  ULONG OutputBufferLengtha[2]; // [rsp+28h] [rbp-D8h]
  ULONG OutputBufferLengthb[2]; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v44; // [rsp+60h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v47[4]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v48[4]; // [rsp+D0h] [rbp-30h] BYREF
  ULONG OutputBuffer; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v50[10]; // [rsp+116h] [rbp+16h] BYREF

  v4 = a2;
  v6 = 0LL;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    10,
    (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
  if ( (*(_DWORD *)(v4 + 184) & 0x1000) == 0 )
  {
    v9 = RIMGetDeviceObjectPointer((int)v4 + 208, v7, v8, (unsigned int)&Handle, (__int64)&v44, (__int64)&Object);
    if ( v9 < 0 )
    {
      OutputBufferLength[0] = v9;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0xBu,
        (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
        *(_QWORD *)OutputBufferLength);
      return v6;
    }
    v10 = (struct _DEVICE_OBJECT *)Object;
    ObfReferenceObject(Object);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = IoBuildDeviceIoControlRequest(0xB01A8u, v10, 0LL, 0, &OutputBuffer, 0xCu, 0, &Event, &IoStatusBlock);
    v12 = (struct _FILE_OBJECT *)v44;
    v13 = (int)v11;
    if ( v11 )
    {
      v11->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v44;
      Status = IofCallDriver(v10, v11);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        OutputBufferLengtha[0] = Status;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0xDu,
          (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
          *(_QWORD *)OutputBufferLengtha);
        goto LABEL_27;
      }
      v15 = (void *)Win32AllocPoolNonPaged(OutputBuffer, 0x70707352u);
      if ( v15 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v16 = IoBuildDeviceIoControlRequest(0xB0193u, v10, 0LL, 0, v15, OutputBuffer, 0, &Event, &IoStatusBlock);
        v17 = (int)v16;
        if ( !v16 )
        {
          v38 = 15;
LABEL_54:
          LOBYTE(v17) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v17,
            18,
            v38,
            (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
          goto LABEL_26;
        }
        v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = v12;
        v18 = IofCallDriver(v10, v16);
        if ( v18 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v18 = IoStatusBlock.Status;
        }
        if ( v18 )
        {
          OutputBufferLengthb[0] = v18;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x12u,
            0x10u,
            (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
            *(_QWORD *)OutputBufferLengthb);
          goto LABEL_26;
        }
        Caps = RIMHidGetCaps(a1, v10, (__int64)v15, (__int64)v48);
        if ( Caps != 1114112 )
        {
          LOBYTE(v20) = 3;
          WPP_RECORDER_SF_qD(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            18,
            17,
            (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
            (char)v10,
            Caps);
          goto LABEL_26;
        }
        WPP_RECORDER_SF_DD(
          WPP_GLOBAL_Control->DeviceExtension,
          v20,
          19,
          18,
          (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
          SBYTE2(v48[0]),
          v48[0]);
        WPP_RECORDER_SF_DD(
          WPP_GLOBAL_Control->DeviceExtension,
          19,
          19,
          19,
          (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
          SBYTE4(v48[0]),
          SBYTE8(v48[0]));
        if ( LODWORD(v48[0]) == 65774 && (*(_QWORD *)(a1 + 768) || *(_DWORD *)(a1 + 976)) && RIMIsRunningOnMobile() )
          *(_DWORD *)(v4 + 184) |= 0x2000u;
        DbgPrintRIM("Found (Usage: %x, UsagePage: %x)\n");
        v21 = *(_DWORD *)(a1 + 80);
        if ( v21 )
        {
          v22 = 0LL;
          v23 = WORD1(v48[0]);
          v24 = v48[0];
          while ( *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * v22) != LODWORD(v48[0]) )
          {
            v25 = 1;
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= v21 )
              goto LABEL_18;
          }
          *(_DWORD *)(v4 + 184) |= 0x4000u;
        }
        else
        {
          if ( *(_DWORD *)(a1 + 976) )
          {
            RIMLockExclusive((__int64)&gObListLock);
            v47[0] = v48[0];
            v47[1] = v48[1];
            v47[2] = v48[2];
            v47[3] = v48[3];
            if ( (unsigned int)rimAnySecondaryRimUsagesMatchingUsages(v47) )
            {
              *(_DWORD *)(v4 + 184) |= 0xC000u;
              *(_DWORD *)(v4 + 200) |= 0x40u;
            }
            qword_1C018EC88 = 0LL;
            ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
            KeLeaveCriticalRegion();
          }
          v24 = v48[0];
          v23 = WORD1(v48[0]);
        }
        v25 = 1;
LABEL_18:
        v26 = *(_DWORD *)(v4 + 184);
        if ( (v26 & 0x4000) != 0 || (v26 & 0x2000) != 0 || v23 != 1 )
        {
          v25 = 13;
          if ( v23 == 13 )
          {
            v27 = 14;
            if ( v24 != 14 )
              goto LABEL_23;
            if ( (*(_DWORD *)(a1 + 76) & 0x18) != 0 )
            {
              v6 = RIMAllocateHidConfigDesc(a1, v4, (__int64)v15, (__int64)v48, (__int64)&OutputBuffer);
              if ( v6 )
                goto LABEL_39;
              v27 = v48[0];
              v36 = 22;
              v25 = WORD1(v48[0]);
            }
            else
            {
              v36 = 23;
            }
LABEL_44:
            WPP_RECORDER_SF_DD(
              WPP_GLOBAL_Control->DeviceExtension,
              v25,
              18,
              v36,
              (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
              v25,
              v27);
            goto LABEL_26;
          }
          v25 = 1;
          if ( v23 != 1 )
          {
LABEL_23:
            if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v23, v24, v50) && (*(_DWORD *)(a1 + 76) & 4) == 0 )
            {
              v38 = 25;
              goto LABEL_54;
            }
            v6 = RIMAllocateHidDesc(
                   a1,
                   v4,
                   (__int64)v15,
                   (unsigned __int16 *)v48,
                   (__int64)&OutputBuffer,
                   (__int64)v10,
                   (__int64)v12);
            if ( !v6 )
            {
              WPP_RECORDER_SF_DD(
                WPP_GLOBAL_Control->DeviceExtension,
                v28,
                18,
                26,
                (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
                SBYTE2(v48[0]),
                v48[0]);
LABEL_26:
              Win32FreePool((__int64)v15);
LABEL_27:
              ObfDereferenceObject(v12);
              ZwClose(Handle);
              ObfDereferenceObject(v10);
              return v6;
            }
            v31 = RIMSearchHidTLCInfo(v29, WORD1(v48[0]), LOWORD(v48[0]));
            v34 = v31;
            if ( v31 )
            {
              WPP_RECORDER_SF_DDq(
                WPP_GLOBAL_Control->DeviceExtension,
                WORD1(v48[0]),
                v33,
                27,
                (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
                SBYTE2(v48[0]),
                v48[0],
                v31);
            }
            else
            {
              v34 = RIMAllocateAndLinkHidTLCInfo(v32, WORD1(v48[0]), LOWORD(v48[0]));
              if ( !v34 )
              {
                LOBYTE(v35) = 3;
                WPP_RECORDER_SF_q(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v35,
                  18,
                  28,
                  (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
                  a1);
                RIMFreeHidDesc(v6);
                v6 = 0LL;
                goto LABEL_27;
              }
              LOBYTE(v35) = 3;
              WPP_RECORDER_SF_qDD(
                WPP_GLOBAL_Control->DeviceExtension,
                v35,
                19,
                29,
                (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
                v34,
                SBYTE2(v48[0]),
                v48[0]);
            }
            ++*(_DWORD *)(v34 + 20);
            *(_QWORD *)(v4 + 464) = v34;
LABEL_39:
            ObfDereferenceObject(v10);
            ObfDereferenceObject(v12);
            ZwClose(Handle);
            return v6;
          }
        }
        else if ( v24 && (v24 <= 2u || v24 > 5u && (v24 <= 7u || v24 == 128)) )
        {
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            1,
            19,
            20,
            (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
            1,
            v24);
          goto LABEL_26;
        }
        v27 = 14;
        if ( v24 != 14 || (*(_DWORD *)(a1 + 76) & 0x10) != 0 )
          goto LABEL_23;
        v36 = 24;
        goto LABEL_44;
      }
      v37 = 14;
    }
    else
    {
      v37 = 12;
    }
    LOBYTE(v13) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      18,
      v37,
      (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
    goto LABEL_27;
  }
  if ( *(_QWORD *)a3 && (int)rimHidP_GetCollectionDescription(*(_QWORD *)a3, *(unsigned int *)(a3 + 8), v8, a3 + 16) < 0 )
    return 0LL;
  else
    return RIMIDECreateHIDDesc(a1, v4, a3);
}
