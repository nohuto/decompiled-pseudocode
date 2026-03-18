/*
 * XREFs of PipProcessDevNodeTree @ 0x1405CDC7C
 * Callers:
 *     PnpDeviceActionWorker @ 0x140145DC0 (PnpDeviceActionWorker.c)
 *     PnpProcessRebalance @ 0x14023E0DC (PnpProcessRebalance.c)
 *     PiProcessReenumeration @ 0x1405CA710 (PiProcessReenumeration.c)
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     PiRestartDevice @ 0x1406548E4 (PiRestartDevice.c)
 *     PiProcessStartSystemDevices @ 0x140654EEC (PiProcessStartSystemDevices.c)
 *     PiProcessResourceRequirementsChanged @ 0x140739660 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PoFxIdleDevice @ 0x140146A58 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x140146BA0 (PoFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x140146F44 (PoFxPrepareDevice.c)
 *     PiCollapseEnumRequests @ 0x140163714 (PiCollapseEnumRequests.c)
 *     McTemplateK0z @ 0x1401857E8 (McTemplateK0z.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     __report_rangecheckfailure @ 0x14021F8EC (__report_rangecheckfailure.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14050BF34 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PipProcessStartPhase2 @ 0x1405CA7BC (PipProcessStartPhase2.c)
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PnpProcessAssignResources @ 0x1405CCC58 (PnpProcessAssignResources.c)
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1405CE2B8 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpCheckForActiveDependencies @ 0x1405CE34C (PnpCheckForActiveDependencies.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1405D1930 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x1405D3D70 (PipEnumerateDevice.c)
 *     PipProcessStartPhase1 @ 0x1405D5C5C (PipProcessStartPhase1.c)
 *     PiDevCfgLogDeviceStarted @ 0x1405D5DE4 (PiDevCfgLogDeviceStarted.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140605ABC (PnpSynchronizeDeviceEventQueue.c)
 *     PipProcessRestartPhase1 @ 0x14073FE1C (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x14073FEE4 (PipProcessRestartPhase2.c)
 */

__int64 __fastcall PipProcessDevNodeTree(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, unsigned int a6, int a7)
{
  int v7; // esi
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rdi
  bool v11; // al
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rbx
  int v17; // esi
  char v18; // al
  __int64 v19; // rdx
  int v20; // edi
  int v21; // eax
  int v22; // ecx
  int v23; // esi
  ULONG_PTR v24; // rax
  __int64 v25; // rax
  int v27; // eax
  bool v28; // al
  int started; // eax
  int restarted; // eax
  unsigned __int64 v31; // rbx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int v34; // eax
  __int64 v35; // rax
  unsigned int v36; // [rsp+40h] [rbp-C0h]
  int v38; // [rsp+48h] [rbp-B8h]
  int v39; // [rsp+4Ch] [rbp-B4h] BYREF
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+54h] [rbp-ACh]
  int v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h]
  unsigned int v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]
  __int64 v47; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[208]; // [rsp+A0h] [rbp-60h] BYREF

  v46 = a3;
  v7 = a4;
  v8 = 0LL;
  v47 = a2;
  v9 = a2;
  v45 = a1;
  v10 = a1;
  v43 = a1;
  if ( a2 && a4 != 1 && !a7 && !*(_BYTE *)(a2 + 28) )
  {
    v11 = PiCollapseEnumRequests(a2);
    v8 = 0LL;
    if ( v11 )
      v10 = IopRootDeviceNode;
    v45 = v10;
  }
  v12 = 0;
  v44 = 0;
  v38 = 0;
  v36 = 0;
  v42 = 0;
  while ( 2 )
  {
    if ( !a7 )
    {
      if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x1Bu) )
        McTemplateK0z(a1, &KMPnPEvt_AssignResources_Start, 0LL, *(const wchar_t **)(v10 + 48));
      v39 = 0;
      v42 = PnpProcessAssignResources(v10, a5, (__int64)&v39);
      if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x1Bu) )
        McTemplateK0z(v13, &KMPnPEvt_AssignResources_Stop, v14, *(const wchar_t **)(v10 + 48));
      v8 = 0LL;
      if ( v39 )
      {
        v34 = PipProcessDevNodeTree(IopRootDeviceNode, v9, v46, v7, 0, 0, 1);
        v12 = v38;
        v15 = 1LL;
        if ( v34 == -1073741106 )
          v12 = 1;
        v8 = 0LL;
        v38 = v12;
        goto LABEL_17;
      }
      v12 = v38;
    }
    v15 = 1LL;
LABEL_17:
    v41 = 0;
    v16 = v10;
    v39 = 1;
    while ( 1 )
    {
      v17 = 1;
      if ( !v12 )
      {
        if ( *(_DWORD *)(v16 + 300) != 769 && (*(_DWORD *)(v16 + 396) & 0x6000) == 0 )
        {
          v18 = PnpCheckForActiveDependencies(v16, 2LL, 0LL, 1LL);
          v8 = 0LL;
          if ( v18 )
          {
            PipSetDevNodeProblem(v16, 51, 0);
            v8 = 0LL;
          }
          v15 = 1LL;
        }
        v19 = *(unsigned int *)(v16 + 396);
        if ( (v19 & 0x6000) != 0 )
          goto LABEL_46;
        if ( *(_DWORD *)(v16 + 300) == 769 )
        {
          if ( a4 == 3 && (v19 & 0x2000000) != 0 || a7 )
            goto LABEL_42;
          if ( (unsigned __int8)PnpCheckForActiveDependencies(v16, 1LL, 0LL, 1LL) )
          {
            PipSetDevNodeProblem(v16, 51, 0);
            goto LABEL_42;
          }
          v20 = PiProcessNewDeviceNode(v16);
          if ( v20 >= 0 )
            v17 = 0;
          goto LABEL_41;
        }
        if ( *(_DWORD *)(v16 + 300) == 770 )
        {
          if ( a7 )
            goto LABEL_42;
          v20 = PipCallDriverAddDevice(v16, v46, 0LL, 1LL);
          if ( v20 >= 0 )
          {
            PoFxPrepareDevice(v16, 0);
            v17 = 0;
            v42 = 1;
          }
          goto LABEL_41;
        }
        if ( *(_DWORD *)(v16 + 300) != 772 )
        {
          switch ( *(_DWORD *)(v16 + 300) )
          {
            case 0x306:
              started = PipProcessStartPhase2(v16, v19, 0LL);
              break;
            case 0x307:
              if ( (int)v19 < 0 )
              {
                v17 = 1;
                goto LABEL_42;
              }
              started = PipProcessStartPhase3(v16, a4 != 1, 0LL);
              break;
            case 0x308:
              if ( a4 == 1 && v16 != v10 )
                goto LABEL_42;
              v17 = 2;
              if ( a7 || (v19 & 8) == 0 )
                goto LABEL_42;
              v20 = PipEnumerateDevice(v16, a6, v36, 1LL);
              if ( v20 == 259 )
              {
                v36 = 1;
                v17 = 1;
                goto LABEL_42;
              }
              if ( v20 < 0 )
                goto LABEL_41;
              goto LABEL_37;
            case 0x30A:
              restarted = PipProcessRestartPhase1(v16, a6, v36, 1LL);
LABEL_95:
              v20 = restarted;
              if ( restarted == 259 )
              {
                v36 = 1;
                goto LABEL_42;
              }
              v17 = 0;
              goto LABEL_41;
            case 0x30B:
              started = PipProcessRestartPhase2(v16, v19, 0LL, 1LL);
              break;
            case 0x30D:
              if ( (*(_DWORD *)(v16 + 704) & 0x200) != 0 )
              {
                PoFxIdleDevice(*(_QWORD *)(v16 + 32));
                *(_DWORD *)(v16 + 704) &= ~0x200u;
              }
              v20 = PipEnumerateCompleted(v16, v19, v8, v15);
              v17 = 2;
              goto LABEL_41;
            default:
              goto LABEL_42;
          }
          v20 = started;
          if ( started >= 0 )
          {
LABEL_37:
            v17 = 0;
            goto LABEL_41;
          }
          v20 = -1073741106;
LABEL_41:
          if ( v20 == -1073741106 )
          {
            v8 = 0LL;
            goto LABEL_106;
          }
LABEL_42:
          v40 = 0;
          v21 = PnpDeviceCompletionProcessCompletedRequests(0LL, 0LL, &v40, v15);
          v8 = 0LL;
          v20 = v21;
          if ( v21 != -1073741106 )
          {
            if ( v41 && !v40 )
            {
              v41 = 0;
              v20 = PnpDeviceCompletionProcessCompletedRequests(0LL, 1LL, &v40, v15);
              v36 &= -(v40 != 0);
              v8 = 0LL;
            }
            if ( v20 != -1073741106 )
              goto LABEL_45;
          }
LABEL_106:
          if ( !a7 )
          {
            v10 = v45;
            goto LABEL_108;
          }
          v44 = v20;
LABEL_45:
          v10 = v45;
LABEL_46:
          if ( a7 || (v22 = *(_DWORD *)(v16 + 704), (v22 & 1) == 0) )
          {
LABEL_48:
            a1 = v36;
            if ( v36 && v17 && PnpAsyncOptions >= 0 )
              v17 = 1;
            v23 = v17 - 1;
            if ( v23 )
            {
              if ( v23 == 1 )
              {
                v24 = *(_QWORD *)(v16 + 8);
                if ( !v24 )
                  goto LABEL_52;
LABEL_54:
                v16 = v24;
              }
            }
            else
            {
              while ( 1 )
              {
LABEL_52:
                if ( v16 == v10 )
                {
                  v41 = 1;
                  a1 = (unsigned int)-(v36 != 0);
                  v39 &= a1;
                  goto LABEL_55;
                }
                v24 = *(_QWORD *)v16;
                if ( *(_QWORD *)v16 )
                  goto LABEL_54;
                if ( v36 && PnpAsyncOptions > 0 )
                  break;
                if ( *(_QWORD *)(v16 + 16) )
                  v16 = *(_QWORD *)(v16 + 16);
              }
              v35 = *(_QWORD *)(v16 + 16);
              if ( v35 )
                v16 = *(_QWORD *)(v35 + 8);
              v41 = 1;
            }
LABEL_55:
            v7 = a4;
            v25 = v43;
            goto LABEL_56;
          }
          v27 = *(_DWORD *)(v16 + 300);
          if ( v27 >= 770 )
          {
            if ( v27 <= 775 )
            {
              v28 = (*(_DWORD *)(v16 + 396) & 0x6000) != 0;
              goto LABEL_81;
            }
            if ( v27 == 776 )
            {
LABEL_101:
              *(_DWORD *)(v16 + 704) = v22 & 0xFFFFFFFE;
              PiDevCfgLogDeviceStarted(v16, 1LL, 0LL, v15);
              v8 = 0LL;
              goto LABEL_48;
            }
          }
          if ( (*(_DWORD *)(v16 + 396) & 0x2000) != 0 && *(_DWORD *)(v16 + 404) == 56 )
            goto LABEL_48;
          v28 = 1;
LABEL_81:
          if ( !v28 )
            goto LABEL_48;
          goto LABEL_101;
        }
        if ( a7 )
          goto LABEL_42;
        PoFxActivateDevice(*(_QWORD *)(v16 + 32));
        *(_DWORD *)(v16 + 704) |= 0x200u;
        restarted = PipProcessStartPhase1(v16);
        goto LABEL_95;
      }
LABEL_108:
      v38 = 0;
      PnpDeviceCompletionProcessCompletedRequests(1LL, 1LL, &v40, 1LL);
      v7 = a4;
      v36 = 0;
      PipProcessDevNodeTree(IopRootDeviceNode, v47, v46, a4, a5, a6, 1);
      v31 = *(unsigned __int16 *)(v10 + 40) >> 1;
      memmove(SourceString, *(const void **)(v10 + 48), v31 * 2);
      if ( v31 >= 201 )
        _report_rangecheckfailure();
      v32 = v43;
      SourceString[v31] = 0;
      ObfDereferenceObject(*(PVOID *)(v32 + 32));
      PpDevNodeUnlockTree(1);
      PnpSynchronizeDeviceEventQueue();
      PpDevNodeLockTree(1);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v33 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
      v8 = 0LL;
      if ( !v33 )
        return 3221225473LL;
      v10 = *(_QWORD *)(v33[39] + 40LL);
      v25 = v10;
      v45 = v10;
      v43 = v10;
      v16 = v10;
LABEL_56:
      v12 = v38;
      if ( !v39 )
        break;
      v15 = 1LL;
    }
    v9 = v47;
    if ( v42 )
      continue;
    break;
  }
  if ( !a7 )
    ObfDereferenceObject(*(PVOID *)(v25 + 32));
  return v44;
}
