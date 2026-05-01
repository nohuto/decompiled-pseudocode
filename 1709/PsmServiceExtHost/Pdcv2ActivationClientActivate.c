/*
 * XREFs of Pdcv2ActivationClientActivate @ 0x180049ECC
 * Callers:
 *     ?HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE@@PEBGKPEAPEAXPEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x180040714 (-HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE.c)
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x180024A38 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180024A54 (PdcReleaseRwLockExclusive2.c)
 *     RtlStringCchCopyW @ 0x180024D6C (RtlStringCchCopyW.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180024E4C (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x180024EBC (PdcCreateWatchdogAroundClientCall.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     PdcpResizeDiagnosticContext @ 0x180049E94 (PdcpResizeDiagnosticContext.c)
 *     Pdcv2pValidateActivationParameters @ 0x18004A81C (Pdcv2pValidateActivationParameters.c)
 *     PdcPortSendMessageSynchronously @ 0x18004A9A8 (PdcPortSendMessageSynchronously.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE @ 0x18004B4C0 (Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE.c)
 */

__int64 __fastcall Pdcv2ActivationClientActivate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        _DWORD *a8)
{
  __int64 v8; // r14
  int v11; // ebx
  __int64 v12; // rdx
  unsigned int v13; // r10d
  _QWORD *Heap; // rax
  _QWORD *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r8
  char *v18; // rcx
  int v19; // ecx
  int v20; // eax
  _QWORD *v21; // rdx
  _BYTE v23[8]; // [rsp+28h] [rbp-E0h] BYREF
  PTP_TIMER pv[5]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v25[40]; // [rsp+58h] [rbp-B0h] BYREF
  int v26; // [rsp+80h] [rbp-88h]
  int v27; // [rsp+88h] [rbp-80h]
  int v28; // [rsp+8Ch] [rbp-7Ch]
  __int64 v29; // [rsp+90h] [rbp-78h]
  int v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  int v32; // [rsp+A8h] [rbp-60h]
  int v33; // [rsp+ACh] [rbp-5Ch]
  _WORD v34[128]; // [rsp+B0h] [rbp-58h] BYREF
  _WORD v35[128]; // [rsp+1B0h] [rbp+A8h] BYREF
  unsigned int v36[42]; // [rsp+2B0h] [rbp+1A8h] BYREF

  v8 = 0LL;
  v23[0] = 0;
  if ( !a8 )
  {
    v11 = -1073741578;
    goto LABEL_30;
  }
  *a8 = 1;
  if ( !a7 )
  {
    v11 = -1073741579;
    goto LABEL_30;
  }
  *a7 = 0LL;
  if ( !a1 )
    goto LABEL_6;
  v8 = a1;
  if ( *(_DWORD *)a1 != 843138128 )
  {
    v8 = 0LL;
LABEL_6:
    v11 = -1073741585;
    goto LABEL_30;
  }
  if ( (unsigned __int8)Pdcv2pValidateActivationParameters(a2) )
  {
    if ( v13 > 3 )
    {
      v11 = -1073741582;
    }
    else if ( a5 )
    {
      PdcCreateWatchdogAroundClientCall(
        pv,
        v12,
        *(_DWORD *)(a1 + 24),
        (struct _TP_TIMER *)"Pdcv2ActivationClientActivate");
      PdcAcquireRwLockExclusive2(a1 + 8, v23);
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x258uLL);
      v15 = Heap;
      if ( Heap )
      {
        memset_0(Heap, 0, 0x258uLL);
        *((_DWORD *)v15 + 4) = 1094927440;
        *((_DWORD *)v15 + 5) = 1;
        v15[3] = a1;
        v15[5] = GetTickCount64();
        *((_DWORD *)v15 + 12) = a4;
        v15[4] = a3;
        *((_DWORD *)v15 + 13) = *(_DWORD *)(a2 + 4);
        RtlStringCchCopyW((_WORD *)v15 + 36, 128LL, a5);
        v16 = *(_QWORD *)(a2 + 16);
        if ( v16 )
          RtlStringCchCopyW((_WORD *)v15 + 164, 128LL, v16);
        memset_0(v25, 0, 0x300uLL);
        v30 = a4;
        v31 = *(_QWORD *)(a2 + 8);
        v32 = a6;
        v33 = *(_DWORD *)(a2 + 4);
        v26 = 10;
        RtlStringCchCopyW(v34, 128LL, a5);
        v17 = *(_QWORD *)(a2 + 16);
        if ( v17 )
          RtlStringCchCopyW(v35, 128LL, v17);
        v18 = *(char **)(a2 + 24);
        if ( v18 )
          PdcpResizeDiagnosticContext(v18, v36);
        v11 = PdcPortSendMessageSynchronously(*(_QWORD *)(a1 + 32), v25);
        if ( v11 < 0 || (v11 = v27, v19 = v28, v20 = ~v27, *a8 = v28, v20 >= 0) || v19 == 300 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
        }
        else
        {
          v15[74] = v29;
          *((_BYTE *)v15 + 60) = 0;
          *((_DWORD *)v15 + 14) = v28;
          ++*(_DWORD *)(a1 + 220);
          ++*(_DWORD *)(a1 + 224);
          ++*(_DWORD *)(a1 + 4LL * a4 + 228);
          v21 = *(_QWORD **)(a1 + 80);
          if ( *v21 != a1 + 72 )
            __fastfail(3u);
          v15[1] = v21;
          *v15 = a1 + 72;
          *v21 = v15;
          *(_QWORD *)(a1 + 80) = v15;
          *a7 = v15;
          Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE(v15, a1, (unsigned int)v11);
        }
      }
      else
      {
        v11 = -1073741801;
      }
    }
    else
    {
      v11 = -1073741581;
    }
  }
  else
  {
    v11 = -1073741584;
  }
LABEL_30:
  if ( v11 < 0 )
    Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE(0LL, v8, (unsigned int)v11);
  if ( v23[0] )
    PdcReleaseRwLockExclusive2(v8 + 8, v23);
  PdcCancelWatchdogAroundClientCall(pv);
  return (unsigned int)v11;
}
