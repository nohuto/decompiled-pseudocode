/*
 * XREFs of ?VmBusCddGdiCommand@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002B5A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?ValidateCommand@@YAEIIPEBE00IPEAPEAE@Z @ 0x1C002B03C (-ValidateCommand@@YAEIIPEBE00IPEAPEAE@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C0093F70 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 */

unsigned __int8 __fastcall VmBusCddGdiCommand(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned __int8 *v12; // rdi
  unsigned __int8 *v13; // rsi
  unsigned __int8 *v14; // r14
  unsigned int *v15; // rcx
  unsigned __int8 *v16; // r9
  unsigned __int8 *v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int8 **v26; // [rsp+38h] [rbp-D0h]
  int v27[4]; // [rsp+48h] [rbp-C0h] BYREF
  _D3DKMT_RENDER v28; // [rsp+58h] [rbp-B0h] BYREF

  v4 = *((_QWORD *)a1 + 9);
  v27[0] = -1073741811;
  v6 = 8LL * *(unsigned int *)(v4 + 24);
  if ( v6 > 0xFFFFFFFF )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, 0xFFFFFFFFLL, a3, a4);
    *(_QWORD *)(v7 + 24) = 5253LL;
    goto LABEL_35;
  }
  if ( (unsigned int)v6 >= 0xFFFFFFD0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a4);
    *(_QWORD *)(v7 + 24) = 5258LL;
    goto LABEL_35;
  }
  v8 = (unsigned int)(v6 + 48);
  v9 = *(unsigned int *)(v4 + 20);
  v10 = v9 + v8;
  if ( (int)v9 + (int)v8 < (unsigned int)v8 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, 0xFFFFFFFFLL, v8, v9);
    *(_QWORD *)(v7 + 24) = 5263LL;
    goto LABEL_35;
  }
  v11 = v10;
  if ( v10 > *((_DWORD *)a1 + 20) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v10, v8, v9);
    *(_QWORD *)(v7 + 24) = 5268LL;
    goto LABEL_35;
  }
  if ( (*(_DWORD *)(v4 + 40) & 0x20) == 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v10, v8, v9);
    *(_QWORD *)(v7 + 24) = 5273LL;
    goto LABEL_35;
  }
  v12 = (unsigned __int8 *)((unsigned int)v6 + v4 + 48);
  v13 = v12;
  v14 = &v12[v9];
  if ( v12 < &v12[v9] )
  {
    while ( 1 )
    {
      v15 = (unsigned int *)(v13 + 4);
      v16 = v13;
      v13 += *((unsigned int *)v13 + 1);
      if ( v13 > v14 || (v11 = *v15, (unsigned int)v11 > *(_DWORD *)(v4 + 20)) )
      {
        v7 = WdLogNewEntry5_WdAssertion(v15, v11, v8, v16);
        *(_QWORD *)(v7 + 24) = 5290LL;
LABEL_35:
        WdLogEvent5_WdAssertion(v7);
        goto LABEL_36;
      }
      if ( *(_DWORD *)v16 == 1 )
        break;
      if ( *(_DWORD *)v16 == 2 )
      {
        v20 = ValidateCommand(
                40LL,
                v11,
                v12,
                v16 + 8,
                *(const unsigned __int8 **)(v4 + 32),
                *((_DWORD *)v16 + 7),
                (unsigned __int8 **)v16 + 4);
        goto LABEL_31;
      }
      if ( *(_DWORD *)v16 == 3 || *(_DWORD *)v16 == 4 )
      {
        v17 = v16 + 8;
        v26 = (unsigned __int8 **)(v17 + 48);
        v18 = *((_DWORD *)v17 + 10);
LABEL_25:
        v19 = 64LL;
LABEL_30:
        v20 = ValidateCommand(v19, v11, v12, v17, *(const unsigned __int8 **)(v4 + 32), v18, v26);
LABEL_31:
        if ( !v20 )
          goto LABEL_36;
        goto LABEL_32;
      }
      if ( *(_DWORD *)v16 != 5 )
      {
        if ( *(_DWORD *)v16 == 6 )
        {
          v17 = v16 + 8;
          v26 = (unsigned __int8 **)(v17 + 48);
          v18 = *((_DWORD *)v17 + 11);
          goto LABEL_25;
        }
        if ( *(_DWORD *)v16 != 7 )
        {
          v7 = WdLogNewEntry5_WdAssertion((unsigned int)(*(_DWORD *)v16 - 6), v11, v8, v16);
          *(_QWORD *)(v7 + 24) = 5358LL;
          goto LABEL_35;
        }
        v17 = v16 + 8;
        v26 = (unsigned __int8 **)(v17 + 56);
        v18 = *((_DWORD *)v17 + 12);
        goto LABEL_29;
      }
LABEL_32:
      if ( v13 >= v14 )
        goto LABEL_33;
    }
    v17 = v16 + 8;
    v26 = (unsigned __int8 **)(v17 + 48);
    v18 = *((_DWORD *)v17 + 10);
LABEL_29:
    v19 = 72LL;
    goto LABEL_30;
  }
LABEL_33:
  memset(&v28, 0, sizeof(v28));
  v28.hDevice = *(_DWORD *)(v4 + 16);
  v28.CommandLength = *(_DWORD *)(v4 + 20);
  v28.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)(v4 + 48);
  v28.AllocationCount = *(_DWORD *)(v4 + 24);
  v28.Flags = *(D3DKMT_RENDERFLAGS *)(v4 + 40);
  v28.pNewCommandBuffer = v12;
  v27[0] = DxgkCddGdiCommand(&v28);
  if ( v27[0] < 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
    *(_QWORD *)(v7 + 24) = v27[0];
    goto LABEL_35;
  }
LABEL_36:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v27, 4u);
  return 1;
}
