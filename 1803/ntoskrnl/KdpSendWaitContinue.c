/*
 * XREFs of KdpSendWaitContinue @ 0x140804F74
 * Callers:
 *     KdpReportCommandStringStateChange @ 0x140804660 (KdpReportCommandStringStateChange.c)
 *     KdpReportExceptionStateChange @ 0x1408047DC (KdpReportExceptionStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x1408048A8 (KdpReportLoadSymbolsStateChange.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140103610 (MmIsSessionAddress.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KdpGetContextEx @ 0x14023EA50 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x14023EC20 (KdpSetContextEx.c)
 *     KdpWriteCustomBreakpoint @ 0x14023ED48 (KdpWriteCustomBreakpoint.c)
 *     KdpSysReadIoSpace @ 0x14023F308 (KdpSysReadIoSpace.c)
 *     KdpSysReadMsr @ 0x14023F3C4 (KdpSysReadMsr.c)
 *     KdpSysWriteIoSpace @ 0x14023F3F8 (KdpSysWriteIoSpace.c)
 *     KdpSysWriteMsr @ 0x14023F4B0 (KdpSysWriteMsr.c)
 *     KeSwitchFrozenProcessor @ 0x1402472C0 (KeSwitchFrozenProcessor.c)
 *     KdExitDebugger @ 0x140803DB4 (KdExitDebugger.c)
 *     KdpFillMemory @ 0x140804020 (KdpFillMemory.c)
 *     KdpGetBusData @ 0x140804140 (KdpGetBusData.c)
 *     KdpGetContext @ 0x140804200 (KdpGetContext.c)
 *     KdpReadControlSpace @ 0x1408042F0 (KdpReadControlSpace.c)
 *     KdpReadPhysicalMemory @ 0x1408043A4 (KdpReadPhysicalMemory.c)
 *     KdpReadPhysicalMemoryLong @ 0x1408044E8 (KdpReadPhysicalMemoryLong.c)
 *     KdpReadVirtualMemory @ 0x1408045A8 (KdpReadVirtualMemory.c)
 *     KdpRestoreBreakPointEx @ 0x1408049C4 (KdpRestoreBreakPointEx.c)
 *     KdpSearchMemory @ 0x140804AC0 (KdpSearchMemory.c)
 *     KdpSearchPhysicalPageRange @ 0x140804ED4 (KdpSearchPhysicalPageRange.c)
 *     KdpSetContext @ 0x140805884 (KdpSetContext.c)
 *     KdpSysWriteBusData @ 0x1408059F4 (KdpSysWriteBusData.c)
 *     KdpWriteBreakPointEx @ 0x140805B18 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x140805CC4 (KdpWritePhysicalMemory.c)
 *     KdpGetStateChange @ 0x1408063F0 (KdpGetStateChange.c)
 *     KdpSysWriteControlSpace @ 0x1408065D0 (KdpSysWriteControlSpace.c)
 *     KdpCopyMemoryChunks @ 0x140806778 (KdpCopyMemoryChunks.c)
 *     KdpAddBreakpoint @ 0x1408069B4 (KdpAddBreakpoint.c)
 *     KdpDeleteBreakpoint @ 0x140806B40 (KdpDeleteBreakpoint.c)
 */

__int64 __fastcall KdpSendWaitContinue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 *v11; // rdx
  PVOID *v12; // r8
  char v13; // al
  int v15; // edi
  int v16; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+28h] [rbp-D8h]
  PVOID v19; // [rsp+40h] [rbp-C0h] BYREF
  void *v20; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+54h] [rbp-ACh] BYREF
  void *v23; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v25[4]; // [rsp+68h] [rbp-98h] BYREF
  int v26; // [rsp+6Ch] [rbp-94h] BYREF
  int v27; // [rsp+70h] [rbp-90h] BYREF
  int v28; // [rsp+74h] [rbp-8Ch] BYREF
  int v29; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v30[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v31; // [rsp+82h] [rbp-7Eh]
  PVOID *v32; // [rsp+88h] [rbp-78h]
  __int16 v33; // [rsp+90h] [rbp-70h] BYREF
  PVOID *v34; // [rsp+98h] [rbp-68h]
  __int16 v35; // [rsp+A0h] [rbp-60h] BYREF
  PVOID *v36; // [rsp+A8h] [rbp-58h]
  __int16 v37; // [rsp+B0h] [rbp-50h] BYREF
  PVOID *v38; // [rsp+B8h] [rbp-48h]
  __int16 v39; // [rsp+C0h] [rbp-40h] BYREF
  PVOID *v40; // [rsp+C8h] [rbp-38h]
  __int16 v41; // [rsp+D0h] [rbp-30h] BYREF
  PVOID *v42; // [rsp+D8h] [rbp-28h]
  __int16 v43; // [rsp+E0h] [rbp-20h] BYREF
  PVOID *v44; // [rsp+E8h] [rbp-18h]
  __int16 v45; // [rsp+F0h] [rbp-10h] BYREF
  PVOID *v46; // [rsp+F8h] [rbp-8h]
  __int16 v47; // [rsp+100h] [rbp+0h] BYREF
  PVOID *v48; // [rsp+108h] [rbp+8h]
  __int16 v49; // [rsp+110h] [rbp+10h] BYREF
  PVOID *v50; // [rsp+118h] [rbp+18h]
  __int16 v51; // [rsp+120h] [rbp+20h] BYREF
  PVOID *v52; // [rsp+128h] [rbp+28h]
  __int16 v53; // [rsp+130h] [rbp+30h] BYREF
  PVOID *v54; // [rsp+138h] [rbp+38h]
  __int16 v55; // [rsp+140h] [rbp+40h] BYREF
  PVOID *v56; // [rsp+148h] [rbp+48h]
  __int16 v57; // [rsp+150h] [rbp+50h] BYREF
  PVOID *v58; // [rsp+158h] [rbp+58h]
  __int16 v59; // [rsp+160h] [rbp+60h] BYREF
  PVOID *v60; // [rsp+168h] [rbp+68h]
  __int16 v61; // [rsp+170h] [rbp+70h] BYREF
  PVOID *v62; // [rsp+178h] [rbp+78h]
  __int16 v63; // [rsp+180h] [rbp+80h] BYREF
  PVOID *v64; // [rsp+188h] [rbp+88h]
  PVOID v65[7]; // [rsp+190h] [rbp+90h] BYREF

  memset(v65, 0, sizeof(v65));
  v31 = 56;
  v32 = v65;
  WORD1(v19) = 4096;
  v7 = 0;
  KdpContextSent = 0;
  v20 = &KdpMessageBuffer;
  KdSendPacket(7LL, a2, a3, &KdpContext);
  while ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
    {
      if ( (_DWORD)KeNumberProcessors_0 == 1 )
        KeQueryPerformanceCounter(0LL);
      v8 = KdReceivePacket(2LL, v30, &v19, v25, &KdpContext);
      if ( v8 == 2 )
        break;
      if ( v8 != 1 )
      {
        switch ( LODWORD(v65[0]) )
        {
          case 0x3130:
            KdpReadVirtualMemory((__int64)v65, &v19, v9);
            continue;
          case 0x3131:
            LODWORD(v65[1]) = KdpCopyMemoryChunks(v65[2], 5, (__int64)&v65[3] + 4);
            v11 = &v33;
            v33 = 56;
            v34 = v65;
            v12 = 0LL;
            goto LABEL_51;
          case 0x3132:
            v37 = 56;
            v38 = v65;
            KdpGetContext((__int64)v65, (__int64)&v19, a4);
            if ( !LODWORD(v65[1]) )
              KdpContextSent = 1;
            v11 = &v37;
            goto LABEL_50;
          case 0x3133:
            KdpSetContext(v65, &v19, a4);
            continue;
          case 0x3134:
            v40 = v65;
            LOBYTE(v9) = 1;
            v39 = 56;
            LODWORD(v65[3]) = KdpAddBreakpoint(v65[2], 204LL, v9, 0LL, BugCheckParameter4, v18);
            v11 = &v39;
            LODWORD(v65[1]) = LODWORD(v65[3]) == 0 ? 0xC0000001 : 0;
            v12 = 0LL;
            goto LABEL_51;
          case 0x3135:
            v42 = v65;
            v41 = 56;
            v13 = KdpDeleteBreakpoint(LODWORD(v65[2]));
            v11 = &v41;
            LODWORD(v65[1]) = v13 == 0 ? 0xC0000001 : 0;
            v12 = 0LL;
            goto LABEL_51;
          case 0x3136:
            LOBYTE(v7) = SLODWORD(v65[2]) >= 0;
            return v7;
          case 0x3137:
            KdpReadControlSpace((__int64)v65, (__int64)&v19, v9);
            continue;
          case 0x3138:
            v44 = v65;
            v43 = 56;
            LODWORD(v65[1]) = KdpSysWriteControlSpace(HIWORD(v65[0]), v65[2], v20, (unsigned __int16)v19, &v21);
            v11 = &v43;
            HIDWORD(v65[3]) = v21;
            goto LABEL_50;
          case 0x3139:
            v46 = v65;
            v45 = 56;
            HIDWORD(v65[3]) = 0;
            LODWORD(v65[1]) = KdpSysReadIoSpace(
                                1,
                                0,
                                1,
                                (unsigned __int16)v65[2],
                                (_BYTE *)&v65[3] + 4,
                                (int)v65[3],
                                &v26);
            v11 = &v45;
            v12 = 0LL;
            goto LABEL_51;
          case 0x313A:
            v48 = v65;
            v47 = 56;
            LODWORD(v65[1]) = KdpSysWriteIoSpace(
                                1,
                                0,
                                1,
                                (unsigned __int16)v65[2],
                                (unsigned __int8 *)&v65[3] + 4,
                                (int)v65[3],
                                &v27);
            v11 = &v47;
            v12 = 0LL;
            goto LABEL_51;
          case 0x313B:
            KiResumeForReboot = 1;
            KdExitDebugger(0);
            ((void (__fastcall *)(_QWORD))off_140398988[0])(0LL);
            HalReturnToFirmware(3LL);
          case 0x313C:
            if ( SLODWORD(v65[2]) < 0 )
              return 0LL;
            KdpGetStateChange(v65, a4);
            return 1LL;
          case 0x313D:
            KdpReadPhysicalMemory((__int64)v65, (__int64)&v19, v9, (__int64)&KdpContext);
            continue;
          case 0x313E:
            KdpWritePhysicalMemory(v65, &v19);
            continue;
          case 0x3140:
          case 0x3141:
          case 0x3142:
          case 0x315A:
            continue;
          case 0x3144:
            v50 = v65;
            v49 = 56;
            LODWORD(v65[5]) = 0;
            LODWORD(v65[1]) = KdpSysReadIoSpace(
                                SHIDWORD(v65[2]),
                                (int)v65[3],
                                SHIDWORD(v65[3]),
                                (unsigned __int16)v65[4],
                                &v65[5],
                                (int)v65[2],
                                &v28);
            v11 = &v49;
            v12 = 0LL;
            goto LABEL_51;
          case 0x3145:
            v52 = v65;
            v51 = 56;
            LODWORD(v65[1]) = KdpSysWriteIoSpace(
                                SHIDWORD(v65[2]),
                                (int)v65[3],
                                SHIDWORD(v65[3]),
                                (unsigned __int16)v65[4],
                                (unsigned __int8 *)&v65[5],
                                (int)v65[2],
                                &v29);
            v11 = &v51;
            v12 = 0LL;
            goto LABEL_51;
          case 0x3146:
            v59 = 56;
            v60 = v65;
            v12 = 0LL;
            *(_OWORD *)&v65[2] = KdVersionBlock;
            v11 = &v59;
            LODWORD(v65[1]) = 0;
            v65[6] = (PVOID)qword_140399DB0;
            *(_OWORD *)&v65[4] = xmmword_140399DA0;
            LODWORD(v65[0]) = 12614;
            goto LABEL_51;
          case 0x3147:
            if ( !(unsigned int)KdpWriteBreakPointEx(v65, &v19) )
              continue;
            return 0LL;
          case 0x3148:
            KdpRestoreBreakPointEx((__int64)v65, &v19);
            continue;
          case 0x3149:
            KdExitDebugger(0);
            KeBugCheckEx(0xE2u, 0LL, 0LL, 0LL, 0LL);
          case 0x3150:
            return KeSwitchFrozenProcessor(HIWORD(v65[0]));
          case 0x3151:
            v61 = 56;
            v62 = v65;
            v11 = &v61;
            LODWORD(v65[1]) = -1073741823;
            v12 = 0LL;
            goto LABEL_51;
          case 0x3152:
            v54 = v65;
            v53 = 56;
            LODWORD(v65[1]) = KdpSysReadMsr((unsigned int)v65[2], &v23);
            v11 = &v53;
            v12 = 0LL;
            *(PVOID *)((char *)&v65[2] + 4) = v23;
            goto LABEL_51;
          case 0x3153:
            v56 = v65;
            v24 = *(unsigned __int64 *)((char *)&v65[2] + 4);
            v55 = 56;
            LODWORD(v65[1]) = KdpSysWriteMsr((unsigned int)v65[2], &v24);
            v11 = &v55;
            v12 = 0LL;
            goto LABEL_51;
          case 0x3156:
            KdpSearchMemory((__int64)v65, (__int64)&v19);
            continue;
          case 0x3157:
            KdpGetBusData(v65, (__int64)&v19, v9);
            continue;
          case 0x3158:
            v58 = v65;
            v57 = 56;
            LODWORD(v65[1]) = KdpSysWriteBusData(
                                LODWORD(v65[2]),
                                HIDWORD(v65[2]),
                                LODWORD(v65[3]),
                                HIDWORD(v65[3]),
                                v20,
                                v65[4],
                                &v22);
            v11 = &v57;
            v12 = 0LL;
            LODWORD(v65[4]) = v22;
            goto LABEL_51;
          case 0x3159:
            v35 = 56;
            v36 = v65;
            if ( KdpSearchInProgress )
              KdpSearchPhysicalPageRange(4);
            LODWORD(v65[1]) = 0;
            v11 = &v35;
            v12 = 0LL;
            goto LABEL_51;
          case 0x315B:
            KdpFillMemory((__int64)v65, (__int64)&v19);
            continue;
          case 0x315C:
            v15 = 0;
            if ( LODWORD(v65[4]) )
            {
              v15 = -1073741811;
            }
            else
            {
              if ( v65[2] >= (PVOID)0x7FFFFFFEFFFFLL )
              {
                LOBYTE(v16) = MmIsSessionAddress((unsigned __int64)v65[2]);
                LODWORD(v65[4]) = 2 - (v16 != 0);
              }
              else
              {
                LODWORD(v65[4]) = 0;
              }
              HIDWORD(v65[4]) = 7;
            }
            LODWORD(v65[1]) = v15;
            v65[3] = 0LL;
            v63 = 56;
            v11 = &v63;
            v64 = v65;
            v12 = 0LL;
            goto LABEL_51;
          case 0x315F:
            KdpGetContextEx(v65, (unsigned __int16 *)&v19);
            continue;
          case 0x3160:
            KdpSetContextEx((__int64)v65, (__int64)&v19, a4);
            continue;
          case 0x3161:
            KdpWriteCustomBreakpoint((__int64)v65, 0x140000000LL, v9, v10);
            continue;
          case 0x3162:
            KdpReadPhysicalMemoryLong((__int64)v65, &v19, v9);
            continue;
          default:
            LOWORD(v19) = 0;
            v11 = (__int16 *)v30;
            LODWORD(v65[1]) = -1073741823;
LABEL_50:
            v12 = &v19;
LABEL_51:
            KdSendPacket(2LL, v11, v12, &KdpContext);
            continue;
        }
      }
    }
    KdSendPacket(7LL, a2, a3, &KdpContext);
  }
  return 1LL;
}
