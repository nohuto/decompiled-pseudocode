/*
 * XREFs of PipProcessDevNodeTree @ 0x14048B768
 * Callers:
 *     PnpDeviceActionWorker @ 0x14003D340 (PnpDeviceActionWorker.c)
 *     PnpProcessRebalance @ 0x1401FB2FC (PnpProcessRebalance.c)
 *     PiProcessReenumeration @ 0x140460088 (PiProcessReenumeration.c)
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 *     PiProcessStartSystemDevices @ 0x1405D5704 (PiProcessStartSystemDevices.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406A6C40 (PiProcessResourceRequirementsChanged.c)
 *     PiRestartDevice @ 0x1406A6EE8 (PiRestartDevice.c)
 * Callees:
 *     PoFxPrepareDevice @ 0x14006776C (PoFxPrepareDevice.c)
 *     PoFxActivateDevice @ 0x14006815C (PoFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x140068444 (PoFxIdleDevice.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PiCollapseEnumRequests @ 0x140148F24 (PiCollapseEnumRequests.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     __report_rangecheckfailure @ 0x1401DD43C (__report_rangecheckfailure.c)
 *     Template_z @ 0x1401F8D2C (Template_z.c)
 *     PipProcessStartPhase1 @ 0x14044C310 (PipProcessStartPhase1.c)
 *     PipProcessStartPhase2 @ 0x14044F9D8 (PipProcessStartPhase2.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x14048BCBC (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpCheckForActiveDependencies @ 0x14048BE70 (PnpCheckForActiveDependencies.c)
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PipEnumerateDevice @ 0x1404A758C (PipEnumerateDevice.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1404DFDF8 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     PnpProcessAssignResources @ 0x140559D58 (PnpProcessAssignResources.c)
 *     PipSetDevNodeProblem @ 0x140570490 (PipSetDevNodeProblem.c)
 *     PiDevCfgLogDeviceStarted @ 0x140591B34 (PiDevCfgLogDeviceStarted.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1406A0A8C (PnpSynchronizeDeviceEventQueue.c)
 *     PipProcessRestartPhase1 @ 0x1406AAEE0 (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x1406AAFA8 (PipProcessRestartPhase2.c)
 */

__int64 __fastcall PipProcessDevNodeTree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  int v7; // esi
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rdi
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  int v16; // esi
  char v17; // al
  __int64 v18; // rdx
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  int v22; // esi
  __int64 v23; // rax
  int restarted; // eax
  int started; // eax
  bool v27; // al
  int v28; // eax
  bool v29; // al
  int v30; // eax
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  unsigned int v35; // [rsp+40h] [rbp-C0h]
  int v37; // [rsp+48h] [rbp-B8h]
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+54h] [rbp-ACh]
  unsigned int v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  unsigned int v43; // [rsp+68h] [rbp-98h]
  __int64 v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[208]; // [rsp+A0h] [rbp-60h] BYREF

  v45 = a3;
  v7 = a4;
  v8 = 0LL;
  v46 = a2;
  v9 = a2;
  v44 = a1;
  v10 = a1;
  v42 = a1;
  if ( a2 && a4 != 1 && !*(_BYTE *)(a2 + 28) && !a7 )
  {
    v27 = PiCollapseEnumRequests(a2);
    v8 = 0LL;
    if ( v27 )
      v10 = IopRootDeviceNode;
    v44 = v10;
  }
  v11 = 0;
  v43 = 0;
  v37 = 0;
  v35 = 0;
  v41 = 0;
  while ( 2 )
  {
    if ( !a7 )
    {
      if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x1Bu) )
        Template_z(a1, &KMPnPEvt_AssignResources_Start, 0LL, *(const wchar_t **)(v10 + 48));
      v38 = 0;
      v41 = PnpProcessAssignResources(v10, a5, &v38);
      if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x1Bu) )
        Template_z(v12, &KMPnPEvt_AssignResources_Stop, v13, *(const wchar_t **)(v10 + 48));
      v8 = 0LL;
      if ( v38 )
      {
        v30 = PipProcessDevNodeTree(IopRootDeviceNode, v9, v45, v7, 0, 0, 1);
        v11 = v37;
        v14 = 1LL;
        if ( v30 == -1073741106 )
          v11 = 1;
        v8 = 0LL;
        v37 = v11;
        goto LABEL_11;
      }
      v11 = v37;
    }
    v14 = 1LL;
LABEL_11:
    v40 = 0;
    v15 = v10;
    v38 = 1;
    while ( 1 )
    {
      v16 = 1;
      if ( v11 )
        goto LABEL_125;
      if ( *(_DWORD *)(v15 + 300) != 769 && (*(_DWORD *)(v15 + 396) & 0x6000) == 0 )
      {
        v17 = PnpCheckForActiveDependencies(v15, 2LL, 0LL, 1LL);
        v8 = 0LL;
        if ( v17 )
        {
          PipSetDevNodeProblem(v15, 51LL, 0LL);
          v8 = 0LL;
        }
        v14 = 1LL;
      }
      v18 = *(unsigned int *)(v15 + 396);
      if ( (v18 & 0x6000) != 0 )
        goto LABEL_30;
      switch ( *(_DWORD *)(v15 + 300) )
      {
        case 0x301:
          if ( a4 == 3 && (v18 & 0x2000000) != 0 || a7 )
            goto LABEL_26;
          if ( (unsigned __int8)PnpCheckForActiveDependencies(v15, 1LL, 0LL, 1LL) )
          {
            PipSetDevNodeProblem(v15, 51LL, 0LL);
            goto LABEL_26;
          }
          v19 = PiProcessNewDeviceNode(v15);
          if ( v19 >= 0 )
            v16 = 0;
          goto LABEL_25;
        case 0x302:
          if ( a7 )
            goto LABEL_26;
          v19 = PipCallDriverAddDevice(v15, v45, 0LL, 1LL);
          if ( v19 >= 0 )
          {
            PoFxPrepareDevice(v15, 0);
            v16 = 0;
            v41 = 1;
          }
          goto LABEL_25;
        case 0x304:
          if ( a7 )
            goto LABEL_26;
          PoFxActivateDevice(*(_QWORD *)(v15 + 32));
          *(_DWORD *)(v15 + 704) |= 0x200u;
          started = PipProcessStartPhase1(v15, a6, v35);
          goto LABEL_85;
        case 0x306:
          restarted = PipProcessStartPhase2(v15, v18, 0LL);
          break;
        case 0x307:
          if ( (int)v18 < 0 )
          {
            v16 = 1;
            goto LABEL_26;
          }
          restarted = PipProcessStartPhase3(v15, a4 != 1);
          break;
        case 0x308:
          if ( a4 == 1 && v15 != v10 )
            goto LABEL_26;
          v16 = 2;
          if ( a7 || (v18 & 8) == 0 )
            goto LABEL_26;
          v19 = PipEnumerateDevice(v15, a6, v35, 1LL);
          if ( v19 == 259 )
          {
            v35 = 1;
            v16 = 1;
            goto LABEL_26;
          }
          if ( v19 >= 0 )
          {
LABEL_81:
            v16 = 0;
            goto LABEL_25;
          }
          goto LABEL_25;
        case 0x30A:
          started = PipProcessRestartPhase1(v15, a6, v35, 1LL);
LABEL_85:
          v19 = started;
          if ( started == 259 )
          {
            v35 = 1;
LABEL_26:
            v39 = 0;
            v20 = PnpDeviceCompletionProcessCompletedRequests(0LL, 0LL, &v39, v14);
            v8 = 0LL;
            v19 = v20;
            if ( v20 != -1073741106 )
            {
              if ( v40 && !v39 )
              {
                v40 = 0;
                v19 = PnpDeviceCompletionProcessCompletedRequests(0LL, 1LL, &v39, v14);
                v35 &= -(v39 != 0);
                v8 = 0LL;
              }
              if ( v19 != -1073741106 )
                goto LABEL_29;
            }
            goto LABEL_119;
          }
          v16 = 0;
          goto LABEL_25;
        case 0x30B:
          restarted = PipProcessRestartPhase2(v15, v18, 0LL, 1LL);
          break;
        case 0x30D:
          if ( (*(_DWORD *)(v15 + 704) & 0x200) != 0 )
          {
            PoFxIdleDevice(*(_QWORD *)(v15 + 32));
            *(_DWORD *)(v15 + 704) &= ~0x200u;
          }
          v19 = PipEnumerateCompleted(v15, v18, v8, v14);
          v16 = 2;
          goto LABEL_25;
        default:
          goto LABEL_26;
      }
      v19 = restarted;
      if ( restarted >= 0 )
        goto LABEL_81;
      v19 = -1073741106;
LABEL_25:
      if ( v19 != -1073741106 )
        goto LABEL_26;
      v8 = 0LL;
LABEL_119:
      if ( a7 )
      {
        v43 = v19;
LABEL_29:
        v10 = v44;
LABEL_30:
        if ( a7 || (v21 = *(_DWORD *)(v15 + 704), (v21 & 1) == 0) )
        {
LABEL_32:
          if ( v35 && v16 && PnpAsyncOptions >= 0 )
            v16 = 1;
          v22 = v16 - 1;
          if ( v22 )
          {
            if ( v22 == 1 )
            {
              if ( !*(_QWORD *)(v15 + 8) )
                goto LABEL_34;
              v15 = *(_QWORD *)(v15 + 8);
            }
          }
          else
          {
            while ( 1 )
            {
LABEL_34:
              if ( v15 == v10 )
              {
                v40 = 1;
                v38 = v35 != 0 ? v38 : 0;
                goto LABEL_37;
              }
              if ( *(_QWORD *)v15 )
              {
                v15 = *(_QWORD *)v15;
                goto LABEL_37;
              }
              if ( v35 && PnpAsyncOptions > 0 )
                break;
              if ( *(_QWORD *)(v15 + 16) )
                v15 = *(_QWORD *)(v15 + 16);
            }
            v31 = *(_QWORD *)(v15 + 16);
            if ( v31 )
              v15 = *(_QWORD *)(v31 + 8);
            v40 = 1;
          }
LABEL_37:
          v7 = a4;
          v23 = v42;
          goto LABEL_38;
        }
        v28 = *(_DWORD *)(v15 + 300);
        if ( v28 >= 770 )
        {
          if ( v28 <= 775 )
          {
            v29 = (*(_DWORD *)(v15 + 396) & 0x6000) != 0;
            goto LABEL_102;
          }
          if ( v28 == 776 )
          {
LABEL_105:
            *(_DWORD *)(v15 + 704) = v21 & 0xFFFFFFFE;
            PiDevCfgLogDeviceStarted(v15, 1LL, 0LL, v14);
            v8 = 0LL;
            goto LABEL_32;
          }
        }
        v29 = 1;
LABEL_102:
        if ( !v29 )
          goto LABEL_32;
        goto LABEL_105;
      }
      v10 = v44;
LABEL_125:
      v37 = 0;
      PnpDeviceCompletionProcessCompletedRequests(1LL, 1LL, &v39, 1LL);
      v7 = a4;
      v35 = 0;
      PipProcessDevNodeTree(IopRootDeviceNode, v46, v45, a4, a5, a6, 1);
      v32 = *(unsigned __int16 *)(v10 + 40) >> 1;
      memmove(SourceString, *(const void **)(v10 + 48), v32 * 2);
      if ( v32 >= 201 )
        _report_rangecheckfailure();
      v33 = v42;
      SourceString[v32] = 0;
      ObfDereferenceObject(*(PVOID *)(v33 + 32));
      PpDevNodeUnlockTree(1);
      PnpSynchronizeDeviceEventQueue();
      PpDevNodeLockTree(1);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v34 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
      v8 = 0LL;
      if ( !v34 )
        return 3221225473LL;
      v10 = *(_QWORD *)(v34[39] + 40LL);
      v23 = v10;
      v44 = v10;
      v42 = v10;
      v15 = v10;
LABEL_38:
      v11 = v37;
      if ( !v38 )
        break;
      v14 = 1LL;
    }
    a1 = v41;
    v9 = v46;
    if ( v41 )
      continue;
    break;
  }
  if ( !a7 )
    ObfDereferenceObject(*(PVOID *)(v23 + 32));
  return v43;
}
