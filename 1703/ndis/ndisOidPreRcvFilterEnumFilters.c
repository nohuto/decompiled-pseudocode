/*
 * XREFs of ndisOidPreRcvFilterEnumFilters @ 0x1C003DEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C003D6F4 (ndisFindReceiveQueueByQueueId.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006ABA8 (ndisIovFindVPortByVPortId.c)
 */

char __fastcall ndisOidPreRcvFilterEnumFilters(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *ReceiveQueueByQueueId; // r15
  __int64 v3; // rbp
  char v5; // r13
  _DWORD *v6; // rax
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  KIRQL v11; // r10
  __int64 VPortByVPortId; // rax
  unsigned int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // r14d
  __int64 *v16; // rcx
  unsigned int v17; // r9d
  __int64 i; // rsi
  __int64 *v19; // rdx
  __int64 v20; // rax

  v1 = *(_QWORD *)a1;
  ReceiveQueueByQueueId = 0LL;
  v3 = 0LL;
  v5 = 1;
  if ( (unsigned __int8)byte_1C0092620 >= 4u )
    WPP_SF_q(0x1Eu, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, a1);
  v6 = *(_DWORD **)(a1 + 32);
  v7 = 20;
  if ( v6[1] == 12 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( v6[12] >= 0x14u )
    {
      if ( v6[13] < 0x14u )
      {
        v6[17] = 20;
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
    else
    {
      v6[17] = 20;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( *(_DWORD *)(a1 + 40) )
      goto LABEL_9;
    v8 = *(_QWORD *)(a1 + 32);
    if ( *(_BYTE *)(*(_QWORD *)(v8 + 40) + 1LL) == 2 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      v7 = 28;
      if ( *(_DWORD *)(v8 + 48) >= 0x1Cu )
      {
        if ( *(_DWORD *)(v8 + 52) < 0x1Cu )
        {
          *(_DWORD *)(v8 + 68) = 28;
          *(_DWORD *)(a1 + 40) = -1073676266;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 68) = 28;
        *(_DWORD *)(a1 + 40) = -1073676268;
      }
      if ( *(_DWORD *)(a1 + 40) )
      {
LABEL_9:
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = 0;
        goto LABEL_43;
      }
    }
    if ( !v1 )
    {
      v5 = 0;
      goto LABEL_43;
    }
    *(_DWORD *)(a1 + 40) = -1073741637;
    if ( *(_QWORD *)(v1 + 3560) )
    {
      v9 = *(_QWORD *)(a1 + 32);
      v10 = *(_QWORD *)(v9 + 40);
      *(_DWORD *)(v9 + 60) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = v7;
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1856) = 2690794;
      if ( *(_BYTE *)(v10 + 1) >= 2u && (*(_DWORD *)(v10 + 20) & 1) != 0 )
      {
        VPortByVPortId = ndisIovFindVPortByVPortId(v1, *(unsigned int *)(v10 + 24));
        v3 = VPortByVPortId;
        if ( !VPortByVPortId )
        {
LABEL_22:
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v11);
          *(_DWORD *)(a1 + 40) = -1073741811;
          goto LABEL_43;
        }
        v13 = *(_DWORD *)(VPortByVPortId + 864);
      }
      else
      {
        v14 = *(_DWORD *)(v10 + 4);
        if ( v14 )
          ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v1, v14);
        else
          ReceiveQueueByQueueId = *(__int64 **)(v1 + 4400);
        if ( !ReceiveQueueByQueueId )
          goto LABEL_22;
        v13 = *((_DWORD *)ReceiveQueueByQueueId + 21);
      }
      v15 = 16 * v13 + 28;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL) = v15;
      if ( v15 <= *(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) )
      {
        *(_DWORD *)v10 = 1835392;
        if ( v3 )
        {
          v16 = *(__int64 **)(v3 + 872);
          *(_DWORD *)(v10 + 24) = *(_DWORD *)(v3 + 124);
        }
        else
        {
          v16 = (__int64 *)ReceiveQueueByQueueId[4];
          *(_DWORD *)(v10 + 4) = *((_DWORD *)ReceiveQueueByQueueId + 12);
        }
        *(_DWORD *)(v10 + 8) = 28;
        *(_DWORD *)(v10 + 16) = 16;
        v17 = 0;
        *(_DWORD *)(v10 + 12) = v13;
        for ( i = v10 + 28; v17 < v13; v16 = (__int64 *)*v16 )
        {
          if ( v3 )
          {
            if ( v16 == (__int64 *)(v3 + 872) )
              break;
            v19 = v16 - 4;
          }
          else
          {
            if ( v16 == ReceiveQueueByQueueId + 4 )
              break;
            v19 = v16 - 2;
          }
          ++v17;
          *(_QWORD *)i = 0LL;
          *(_QWORD *)(i + 8) = 0LL;
          *(_DWORD *)i = 1048960;
          *(_DWORD *)(i + 4) = *((_DWORD *)v19 + 34);
          *(_DWORD *)(i + 8) = *((_DWORD *)v19 + 35);
          *(_DWORD *)(i + 12) = *((_DWORD *)v19 + 12);
          i += 16LL;
        }
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v11);
        v20 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 40) = 0;
        *(_DWORD *)(v20 + 60) = v15;
      }
      else
      {
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v11);
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_43:
  if ( (unsigned __int8)byte_1C0092620 >= 4u )
    WPP_SF_qD(0x1Fu, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v1, *(_DWORD *)(a1 + 40));
  return v5;
}
