/*
 * XREFs of ndisOidPreRcvFilterEnumQueues @ 0x1C003AC70
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisCopyReceiveQueueInfo @ 0x1C0039CC0 (ndisCopyReceiveQueueInfo.c)
 */

char __fastcall ndisOidPreRcvFilterEnumQueues(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r12d
  _BYTE *v3; // rbp
  char v5; // si
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // r13
  _BYTE *OidSourceHandle; // rax
  unsigned int v10; // r14d
  unsigned int v11; // ecx
  __int64 v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // r15
  _QWORD *v15; // r13
  _QWORD *v16; // rbp
  __int64 v17; // rdx
  _QWORD *v18; // rbp
  __int64 v19; // rax
  KIRQL NewIrql; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = 0LL;
  v5 = 1;
  if ( (unsigned __int8)byte_1C0098760 >= 4u )
    WPP_SF_q(0x1Cu, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, a1);
  v6 = *(_QWORD *)(a1 + 32);
  if ( (*(_DWORD *)(v6 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_31;
  *(_DWORD *)(v6 + 52) = 0;
  if ( !v1 )
  {
    v5 = 0;
    goto LABEL_32;
  }
  *(_DWORD *)(a1 + 40) = -1073741637;
  if ( *(_QWORD *)(v1 + 3560) )
  {
    v7 = *(_QWORD *)(a1 + 32);
    if ( *(_DWORD *)(v7 + 4) == 2 )
    {
      v8 = 0;
LABEL_12:
      NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1856) = 2690503;
      if ( v8 )
      {
        v10 = *((_DWORD *)v3 + 212);
      }
      else
      {
        v10 = *(_DWORD *)(v1 + 3508);
        if ( *(_QWORD *)(v1 + 4400) )
          ++v10;
      }
      v11 = 1096 * v10 + 16;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 56LL) = v11;
      v12 = *(_QWORD *)(a1 + 32);
      if ( v11 <= *(_DWORD *)(v12 + 48) )
      {
        v13 = *(_DWORD **)(v12 + 40);
        *v13 = 1048960;
        v14 = v13 + 4;
        v13[1] = 16;
        v13[2] = v10;
        v13[3] = 1096;
        if ( v8 )
        {
          v15 = v3 + 832;
          v16 = (_QWORD *)*((_QWORD *)v3 + 104);
          while ( v16 != v15 && v2 < v10 )
          {
            ndisCopyReceiveQueueInfo(v14, (__int64)(v16 - 2));
            v16 = (_QWORD *)*v16;
            v14 += 274;
            ++v2;
          }
        }
        else
        {
          v17 = *(_QWORD *)(v1 + 4400);
          if ( v17 )
          {
            ndisCopyReceiveQueueInfo(v13 + 4, v17);
            v14 += 274;
            v2 = 1;
          }
          v18 = *(_QWORD **)(v1 + 3480);
          while ( v18 != (_QWORD *)(v1 + 3480) && v2 < v10 )
          {
            ndisCopyReceiveQueueInfo(v14, (__int64)v18);
            v18 = (_QWORD *)*v18;
            v14 += 274;
            ++v2;
          }
        }
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), NewIrql);
        v19 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 40) = 0;
        *(_DWORD *)(v19 + 52) = 1096 * v10 + 16;
      }
      else
      {
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), NewIrql);
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
      goto LABEL_32;
    }
    OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v7);
    v3 = OidSourceHandle;
    if ( OidSourceHandle && *OidSourceHandle == 18 )
    {
      v8 = 1;
      goto LABEL_12;
    }
LABEL_31:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_32:
  if ( (unsigned __int8)byte_1C0098760 >= 4u )
    WPP_SF_qD(0x1Du, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v1, *(_DWORD *)(a1 + 40));
  return v5;
}
