/*
 * XREFs of RIMCreateHidDesc @ 0x1C000DB5C
 * Callers:
 *     RIMCreateDev @ 0x1C000D350 (RIMCreateDev.c)
 * Callees:
 *     RIMAllocateHidConfigDesc @ 0x1C00087B0 (RIMAllocateHidConfigDesc.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C000B420 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C000C774 (RIMSearchHidTLCInfo.c)
 *     rimAnySecondaryRimUsagesMatchingUsages @ 0x1C000C854 (rimAnySecondaryRimUsagesMatchingUsages.c)
 *     RIMFreeHidDesc @ 0x1C000D2C8 (RIMFreeHidDesc.c)
 *     RIMAllocateHidDesc @ 0x1C000D844 (RIMAllocateHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000E118 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     DbgPrintRIM @ 0x1C000E2A4 (DbgPrintRIM.c)
 *     RIMHidGetCaps @ 0x1C000E2DC (RIMHidGetCaps.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000E444 (RIMGetDeviceObjectPointer.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C000E55C (ApiSetInkProcessorIsInkDevice.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C000E5AC (WPP_RECORDER_SF_qDD.c)
 *     RIMIsRunningOnMobile @ 0x1C000E954 (RIMIsRunningOnMobile.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0099AB0 (WPP_RECORDER_SF_DDq.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00EC478 (WPP_RECORDER_SF_qD.c)
 *     rimHidP_GetCollectionDescription @ 0x1C0107B34 (rimHidP_GetCollectionDescription.c)
 *     RIMIDECreateHIDDesc @ 0x1C0108550 (RIMIDECreateHIDDesc.c)
 */

__int64 __fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // r12
  int v7; // edx
  __int64 v8; // r8
  int v9; // eax
  int v10; // edx
  struct _DEVICE_OBJECT *v11; // r15
  PIRP v12; // rax
  struct _FILE_OBJECT *v13; // r13
  int v14; // edx
  NTSTATUS Status; // eax
  int v16; // edx
  void *v17; // rdi
  PIRP v18; // rax
  int v19; // edx
  NTSTATUS v20; // eax
  int v21; // edx
  int Caps; // eax
  int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // rax
  unsigned __int16 v26; // r9
  unsigned __int16 v27; // r10
  int v28; // edx
  int v29; // eax
  char v30; // cl
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 *v35; // rax
  int v36; // r8d
  __int64 v37; // rdi
  int v38; // edx
  int v39; // r9d
  int v40; // r9d
  int v41; // r9d
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
    (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
  if ( (*(_DWORD *)(v4 + 184) & 0x1000) == 0 )
  {
    v9 = RIMGetDeviceObjectPointer((int)v4 + 208, v7, v8, (unsigned int)&Handle, (__int64)&v44, (__int64)&Object);
    if ( v9 < 0 )
    {
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        18,
        11,
        (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
        v9);
      return v6;
    }
    v11 = (struct _DEVICE_OBJECT *)Object;
    ObfReferenceObject(Object);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v12 = IoBuildDeviceIoControlRequest(0xB01A8u, v11, 0LL, 0, &OutputBuffer, 0xCu, 0, &Event, &IoStatusBlock);
    v13 = (struct _FILE_OBJECT *)v44;
    v14 = (int)v12;
    if ( v12 )
    {
      v12->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v44;
      Status = IofCallDriver(v11, v12);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          18,
          13,
          (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
          Status);
        goto LABEL_27;
      }
      v17 = (void *)Win32AllocPoolNonPaged(OutputBuffer, 1886417746LL);
      if ( v17 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v18 = IoBuildDeviceIoControlRequest(0xB0193u, v11, 0LL, 0, v17, OutputBuffer, 0, &Event, &IoStatusBlock);
        v19 = (int)v18;
        if ( !v18 )
        {
          v41 = 15;
LABEL_55:
          LOBYTE(v19) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            18,
            v41,
            (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
          goto LABEL_26;
        }
        v18->Tail.Overlay.CurrentStackLocation[-1].FileObject = v13;
        v20 = IofCallDriver(v11, v18);
        if ( v20 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v20 = IoStatusBlock.Status;
        }
        if ( v20 )
        {
          LOBYTE(v21) = 3;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v21,
            18,
            16,
            (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
            v20);
          goto LABEL_26;
        }
        Caps = RIMHidGetCaps(a1, v11, v17, v48);
        if ( Caps != 1114112 )
        {
          LOBYTE(v23) = 3;
          WPP_RECORDER_SF_qD(
            WPP_GLOBAL_Control->DeviceExtension,
            v23,
            18,
            17,
            (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
            (char)v11,
            Caps);
          goto LABEL_26;
        }
        WPP_RECORDER_SF_DD(
          WPP_GLOBAL_Control->DeviceExtension,
          v23,
          19,
          18,
          (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
          SBYTE2(v48[0]),
          v48[0]);
        WPP_RECORDER_SF_DD(
          WPP_GLOBAL_Control->DeviceExtension,
          19,
          19,
          19,
          (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
          SBYTE4(v48[0]),
          SBYTE8(v48[0]));
        if ( LODWORD(v48[0]) == 65774
          && (*(_QWORD *)(a1 + 768) || *(_DWORD *)(a1 + 976))
          && (unsigned int)RIMIsRunningOnMobile() )
        {
          *(_DWORD *)(v4 + 184) |= 0x2000u;
        }
        DbgPrintRIM("Found (Usage: %x, UsagePage: %x)\n");
        v24 = *(_DWORD *)(a1 + 80);
        if ( v24 )
        {
          v25 = 0LL;
          v26 = WORD1(v48[0]);
          v27 = v48[0];
          while ( *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * v25) != LODWORD(v48[0]) )
          {
            v28 = 1;
            v25 = (unsigned int)(v25 + 1);
            if ( (unsigned int)v25 >= v24 )
              goto LABEL_18;
          }
          *(_DWORD *)(v4 + 184) |= 0x4000u;
        }
        else
        {
          if ( *(_DWORD *)(a1 + 976) )
          {
            RIMLockExclusive(&gObListLock);
            v47[0] = v48[0];
            v47[1] = v48[1];
            v47[2] = v48[2];
            v47[3] = v48[3];
            if ( (unsigned int)rimAnySecondaryRimUsagesMatchingUsages(v47) )
            {
              *(_DWORD *)(v4 + 184) |= 0xC000u;
              *(_DWORD *)(v4 + 200) |= 0x40u;
            }
            qword_1C0193AE8 = 0LL;
            ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
            KeLeaveCriticalRegion();
          }
          v27 = v48[0];
          v26 = WORD1(v48[0]);
        }
        v28 = 1;
LABEL_18:
        v29 = *(_DWORD *)(v4 + 184);
        if ( (v29 & 0x4000) != 0 || (v29 & 0x2000) != 0 || v26 != 1 )
        {
          v28 = 13;
          if ( v26 == 13 )
          {
            v30 = 14;
            if ( v27 != 14 )
              goto LABEL_23;
            if ( (*(_DWORD *)(a1 + 76) & 0x18) != 0 )
            {
              v6 = RIMAllocateHidConfigDesc(a1, v4, (__int64)v17, (__int64)v48, (__int64)&OutputBuffer);
              if ( v6 )
                goto LABEL_41;
              v30 = v48[0];
              v39 = 22;
              v28 = WORD1(v48[0]);
            }
            else
            {
              v39 = 23;
            }
LABEL_44:
            WPP_RECORDER_SF_DD(
              WPP_GLOBAL_Control->DeviceExtension,
              v28,
              18,
              v39,
              (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
              v28,
              v30);
            goto LABEL_26;
          }
          v28 = 1;
          if ( v26 != 1 )
          {
LABEL_23:
            if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v26, v27, v50) && (*(_DWORD *)(a1 + 76) & 4) == 0 )
            {
              v41 = 25;
              goto LABEL_55;
            }
            v6 = RIMAllocateHidDesc(
                   a1,
                   v4,
                   (__int64)v17,
                   (unsigned __int16 *)v48,
                   (__int64)&OutputBuffer,
                   (__int64)v11,
                   (__int64)v13);
            if ( !v6 )
            {
              WPP_RECORDER_SF_DD(
                WPP_GLOBAL_Control->DeviceExtension,
                v31,
                18,
                26,
                (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
                SBYTE2(v48[0]),
                v48[0]);
LABEL_26:
              Win32FreePool(v17, v32, v33);
LABEL_27:
              ObfDereferenceObject(v13);
              ZwClose(Handle);
              ObfDereferenceObject(v11);
              return v6;
            }
            v35 = RIMSearchHidTLCInfo(SWORD1(v48[0]), v48[0]);
            v37 = (__int64)v35;
            if ( v35 )
            {
              WPP_RECORDER_SF_DDq(
                WPP_GLOBAL_Control->DeviceExtension,
                WORD1(v48[0]),
                v36,
                27,
                (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
                SBYTE2(v48[0]),
                v48[0],
                (char)v35);
            }
            else
            {
              v37 = RIMAllocateAndLinkHidTLCInfo(SWORD1(v48[0]), v48[0]);
              if ( !v37 )
              {
                LOBYTE(v38) = 3;
                WPP_RECORDER_SF_q(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v38,
                  18,
                  28,
                  (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
                  a1);
                RIMFreeHidDesc(v6);
                v6 = 0LL;
                goto LABEL_27;
              }
              LOBYTE(v38) = 3;
              WPP_RECORDER_SF_qDD(
                WPP_GLOBAL_Control->DeviceExtension,
                v38,
                19,
                29,
                (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
                v37,
                SBYTE2(v48[0]),
                v48[0]);
            }
            ++*(_DWORD *)(v37 + 20);
            *(_QWORD *)(v4 + 464) = v37;
LABEL_41:
            ObfDereferenceObject(v11);
            ObfDereferenceObject(v13);
            ZwClose(Handle);
            return v6;
          }
        }
        else if ( v27 && (v27 <= 2u || v27 > 5u && (v27 <= 7u || v27 == 128)) )
        {
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            1,
            19,
            20,
            (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
            1,
            v27);
          goto LABEL_26;
        }
        v30 = 14;
        if ( v27 != 14 || (*(_DWORD *)(a1 + 76) & 0x10) != 0 )
          goto LABEL_23;
        v39 = 24;
        goto LABEL_44;
      }
      v40 = 14;
    }
    else
    {
      v40 = 12;
    }
    LOBYTE(v14) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      18,
      v40,
      (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
    goto LABEL_27;
  }
  if ( *(_QWORD *)a3 && (int)rimHidP_GetCollectionDescription(*(_QWORD *)a3, *(unsigned int *)(a3 + 8), v8, a3 + 16) < 0 )
    return 0LL;
  else
    return RIMIDECreateHIDDesc(a1, v4, a3);
}
