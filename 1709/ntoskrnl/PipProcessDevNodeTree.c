/*
 * XREFs of PipProcessDevNodeTree @ 0x140527614
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400FF730 (PnpDeviceActionWorker.c)
 *     PnpProcessRebalance @ 0x140201004 (PnpProcessRebalance.c)
 *     PiRestartDevice @ 0x140451BE8 (PiRestartDevice.c)
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x14055EF24 (PiProcessReenumeration.c)
 *     PiProcessStartSystemDevices @ 0x1405F1CAC (PiProcessStartSystemDevices.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406D1B54 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PoFxIdleDevice @ 0x1400FBB18 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x1400FC934 (PoFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x1400FCDC8 (PoFxPrepareDevice.c)
 *     PiCollapseEnumRequests @ 0x14012EB3C (PiCollapseEnumRequests.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     __report_rangecheckfailure @ 0x1401E00DC (__report_rangecheckfailure.c)
 *     McTemplateK0z @ 0x1401FEBA8 (McTemplateK0z.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140526314 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140527C7C (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpCheckForActiveDependencies @ 0x140527D10 (PnpCheckForActiveDependencies.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     PipEnumerateDevice @ 0x140553034 (PipEnumerateDevice.c)
 *     PipEnumerateCompleted @ 0x140553474 (PipEnumerateCompleted.c)
 *     PipProcessStartPhase1 @ 0x140553C10 (PipProcessStartPhase1.c)
 *     PnpProcessAssignResources @ 0x140553D98 (PnpProcessAssignResources.c)
 *     PipProcessStartPhase2 @ 0x140555E8C (PipProcessStartPhase2.c)
 *     PipSetDevNodeProblem @ 0x14055DCFC (PipSetDevNodeProblem.c)
 *     PiDevCfgLogDeviceStarted @ 0x1405A3B98 (PiDevCfgLogDeviceStarted.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1405F1818 (PnpSynchronizeDeviceEventQueue.c)
 *     PipProcessRestartPhase1 @ 0x1406D6150 (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x1406D6218 (PipProcessRestartPhase2.c)
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
  ULONG_PTR v10; // rdi
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR v15; // rbx
  int v16; // esi
  char v17; // al
  __int64 v18; // rdx
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  int v22; // esi
  ULONG_PTR v23; // rax
  int restarted; // eax
  int started; // eax
  int v27; // eax
  bool v28; // al
  bool v29; // al
  unsigned __int64 v30; // rbx
  ULONG_PTR v31; // rcx
  _QWORD *v32; // rax
  int v33; // eax
  __int64 v34; // rax
  unsigned int v35; // [rsp+40h] [rbp-C0h]
  int v37; // [rsp+48h] [rbp-B8h]
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+54h] [rbp-ACh]
  unsigned int v41; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v42; // [rsp+60h] [rbp-A0h]
  unsigned int v43; // [rsp+68h] [rbp-98h]
  ULONG_PTR v44; // [rsp+70h] [rbp-90h]
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
  if ( a2 && a4 != 1 && !a7 && !*(_BYTE *)(a2 + 28) )
  {
    v29 = PiCollapseEnumRequests(a2);
    v8 = 0LL;
    if ( v29 )
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
        McTemplateK0z(a1, &KMPnPEvt_AssignResources_Start, 0LL, *(const wchar_t **)(v10 + 48));
      v38 = 0;
      v41 = PnpProcessAssignResources(v10, a5, &v38);
      if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x1Bu) )
        McTemplateK0z(v12, &KMPnPEvt_AssignResources_Stop, v13, *(const wchar_t **)(v10 + 48));
      v8 = 0LL;
      if ( v38 )
      {
        v33 = PipProcessDevNodeTree(IopRootDeviceNode, v9, v45, v7, 0, 0, 1);
        v11 = v37;
        v14 = 1LL;
        if ( v33 == -1073741106 )
          v11 = 1;
        v8 = 0LL;
        v37 = v11;
        goto LABEL_12;
      }
      v11 = v37;
    }
    v14 = 1LL;
LABEL_12:
    v40 = 0;
    v15 = v10;
    v38 = 1;
    while ( 1 )
    {
      v16 = 1;
      if ( !v11 )
      {
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
          goto LABEL_31;
        switch ( *(_DWORD *)(v15 + 300) )
        {
          case 0x301:
            if ( a4 == 3 && (v18 & 0x2000000) != 0 || a7 )
              goto LABEL_27;
            if ( (unsigned __int8)PnpCheckForActiveDependencies(v15, 1LL, 0LL, 1LL) )
            {
              PipSetDevNodeProblem(v15, 51LL, 0LL);
              goto LABEL_27;
            }
            v19 = PiProcessNewDeviceNode(v15);
            if ( v19 >= 0 )
              v16 = 0;
            goto LABEL_26;
          case 0x302:
            if ( a7 )
              goto LABEL_27;
            v19 = PipCallDriverAddDevice(v15, v45);
            if ( v19 >= 0 )
            {
              PoFxPrepareDevice(v15, 0);
              v16 = 0;
              v41 = 1;
            }
LABEL_26:
            if ( v19 == -1073741106 )
            {
              v8 = 0LL;
              goto LABEL_107;
            }
LABEL_27:
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
                goto LABEL_30;
            }
LABEL_107:
            if ( !a7 )
            {
              v10 = v44;
              goto LABEL_109;
            }
            v43 = v19;
LABEL_30:
            v10 = v44;
LABEL_31:
            if ( a7 || (v21 = *(_DWORD *)(v15 + 704), (v21 & 1) == 0) )
            {
LABEL_33:
              if ( v35 && v16 && PnpAsyncOptions >= 0 )
                v16 = 1;
              v22 = v16 - 1;
              if ( v22 )
              {
                if ( v22 == 1 )
                {
                  if ( !*(_QWORD *)(v15 + 8) )
                    goto LABEL_35;
                  v15 = *(_QWORD *)(v15 + 8);
                }
              }
              else
              {
                while ( 1 )
                {
LABEL_35:
                  if ( v15 == v10 )
                  {
                    v40 = 1;
                    v38 = v35 != 0 ? v38 : 0;
                    goto LABEL_38;
                  }
                  if ( *(_QWORD *)v15 )
                  {
                    v15 = *(_QWORD *)v15;
                    goto LABEL_38;
                  }
                  if ( v35 && PnpAsyncOptions > 0 )
                    break;
                  if ( *(_QWORD *)(v15 + 16) )
                    v15 = *(_QWORD *)(v15 + 16);
                }
                v34 = *(_QWORD *)(v15 + 16);
                if ( v34 )
                  v15 = *(_QWORD *)(v34 + 8);
                v40 = 1;
              }
LABEL_38:
              v7 = a4;
              v23 = v42;
              goto LABEL_39;
            }
            v27 = *(_DWORD *)(v15 + 300);
            if ( v27 >= 770 )
            {
              if ( v27 <= 775 )
              {
                v28 = (*(_DWORD *)(v15 + 396) & 0x6000) != 0;
                goto LABEL_94;
              }
              if ( v27 == 776 )
              {
LABEL_105:
                *(_DWORD *)(v15 + 704) = v21 & 0xFFFFFFFE;
                PiDevCfgLogDeviceStarted(v15, 1LL, 0LL, v14);
                v8 = 0LL;
                goto LABEL_33;
              }
            }
            if ( (*(_DWORD *)(v15 + 396) & 0x2000) != 0 && *(_DWORD *)(v15 + 404) == 56 )
              goto LABEL_33;
            v28 = 1;
LABEL_94:
            if ( !v28 )
              goto LABEL_33;
            goto LABEL_105;
          case 0x304:
            if ( a7 )
              goto LABEL_27;
            PoFxActivateDevice(*(_QWORD *)(v15 + 32));
            *(_DWORD *)(v15 + 704) |= 0x200u;
            started = PipProcessStartPhase1(v15);
            break;
          case 0x306:
            restarted = PipProcessStartPhase2(v15, v18, 0LL, 1LL);
            goto LABEL_81;
          case 0x307:
            if ( (int)v18 < 0 )
            {
              v16 = 1;
              goto LABEL_27;
            }
            restarted = PipProcessStartPhase3(v15, a4 != 1);
            goto LABEL_81;
          case 0x308:
            if ( a4 == 1 && v15 != v10 )
              goto LABEL_27;
            v16 = 2;
            if ( a7 || (v18 & 8) == 0 )
              goto LABEL_27;
            v19 = PipEnumerateDevice(v15, a6, v35, 1LL);
            if ( v19 == 259 )
            {
              v35 = 1;
              v16 = 1;
              goto LABEL_27;
            }
            if ( v19 < 0 )
              goto LABEL_26;
            goto LABEL_82;
          case 0x30A:
            started = PipProcessRestartPhase1(v15, a6, v35, 1LL);
            break;
          case 0x30B:
            restarted = PipProcessRestartPhase2(v15, v18, 0LL, 1LL);
LABEL_81:
            v19 = restarted;
            if ( restarted < 0 )
            {
              v19 = -1073741106;
              goto LABEL_26;
            }
LABEL_82:
            v16 = 0;
            goto LABEL_26;
          case 0x30D:
            if ( (*(_DWORD *)(v15 + 704) & 0x200) != 0 )
            {
              PoFxIdleDevice(*(_QWORD *)(v15 + 32));
              *(_DWORD *)(v15 + 704) &= ~0x200u;
            }
            v19 = PipEnumerateCompleted(v15, v18, v8, v14);
            v16 = 2;
            goto LABEL_26;
          default:
            goto LABEL_27;
        }
        v19 = started;
        if ( started == 259 )
        {
          v35 = 1;
          goto LABEL_27;
        }
        v16 = 0;
        goto LABEL_26;
      }
LABEL_109:
      v37 = 0;
      PnpDeviceCompletionProcessCompletedRequests(1LL, 1LL, &v39, 1LL);
      v7 = a4;
      v35 = 0;
      PipProcessDevNodeTree(IopRootDeviceNode, v46, v45, a4, a5, a6, 1);
      v30 = *(unsigned __int16 *)(v10 + 40) >> 1;
      memmove(SourceString, *(const void **)(v10 + 48), v30 * 2);
      if ( v30 >= 201 )
        _report_rangecheckfailure();
      v31 = v42;
      SourceString[v30] = 0;
      ObfDereferenceObject(*(PVOID *)(v31 + 32));
      PpDevNodeUnlockTree(1);
      PnpSynchronizeDeviceEventQueue();
      PpDevNodeLockTree(1);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v32 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
      v8 = 0LL;
      if ( !v32 )
        return 3221225473LL;
      v10 = *(_QWORD *)(v32[39] + 40LL);
      v23 = v10;
      v44 = v10;
      v42 = v10;
      v15 = v10;
LABEL_39:
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
