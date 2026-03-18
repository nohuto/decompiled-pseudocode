/*
 * XREFs of VidSchEnqueueCpuEvent @ 0x1C0047EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0001054 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEA.c)
 *     VidSchiFreeQueuePacket @ 0x1C000EB98 (VidSchiFreeQueuePacket.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006AD40 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006B1A0 (VidSchiSubmitCommandPacketToQueue.c)
 */

__int64 __fastcall VidSchEnqueueCpuEvent(__int64 a1, __int64 a2, unsigned __int8 a3, void *a4)
{
  __int64 v4; // rbp
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rax
  struct _VIDSCH_QUEUE_PACKET **v12; // rdi
  unsigned int v13; // r14d
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // r13
  _DWORD *QueuePacket; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rax
  PVOID v27; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+38h] [rbp-50h] BYREF
  char v29; // [rsp+40h] [rbp-48h] BYREF
  int v30; // [rsp+50h] [rbp-38h]

  v4 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 0x41 && a2 )
  {
    v7 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v27, 0LL);
    v10 = v7;
    if ( v7 < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v22 + 24) = v10;
      WdLogEvent5_WdAssertion(v22);
      return (unsigned int)v10;
    }
    P = 0LL;
    v30 = 0;
    v11 = NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,1853444950>::AllocateElements(&P, v4);
    v12 = (struct _VIDSCH_QUEUE_PACKET **)v11;
    if ( v11 )
    {
      v13 = 0;
      if ( !(_DWORD)v4 )
        goto LABEL_13;
      v14 = v11;
      v15 = a2 - v11;
      while ( 1 )
      {
        v16 = *(_QWORD *)(v15 + v14);
        QueuePacket = (_DWORD *)VidSchiAllocateQueuePacket(v16, *(_DWORD *)(v16 + 804) == 0);
        *(_QWORD *)v14 = QueuePacket;
        if ( !QueuePacket )
          break;
        *QueuePacket = 1953189969;
        *(_DWORD *)(*(_QWORD *)v14 + 48LL) = 5;
        *(_QWORD *)(*(_QWORD *)v14 + 56LL) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(*(_QWORD *)v14 + 52LL) = 2;
        *(_QWORD *)(*(_QWORD *)v14 + 88LL) = v16;
        *(_QWORD *)(*(_QWORD *)v14 + 96LL) = KeGetCurrentThread();
        *(_DWORD *)(*(_QWORD *)v14 + 72LL) = 0;
        *(_DWORD *)(*(_QWORD *)v14 + 264LL) ^= (a3 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)v14 + 264LL)) & 1;
        *(_DWORD *)(*(_QWORD *)v14 + 264LL) |= 2u;
        *(_QWORD *)(*(_QWORD *)v14 + 528LL) = v27;
        *(_QWORD *)(*(_QWORD *)v14 + 784LL) = 0LL;
        if ( v13 )
        {
          *(_QWORD *)(*(_QWORD *)v14 + 792LL) = v12[v13 - 1];
          *((_QWORD *)v12[v13 - 1] + 98) = *(_QWORD *)v14;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v14 + 792LL) = 0LL;
        }
        ++v13;
        v14 += 8LL;
        if ( v13 >= (unsigned int)v4 )
        {
          v20 = v4;
          do
          {
            VidSchiSubmitCommandPacketToQueue(*v12++);
            --v20;
          }
          while ( v20 );
          goto LABEL_13;
        }
      }
      v23 = WdLogNewEntry5_WdAssertion(v19, v18);
      *(_QWORD *)(v23 + 24) = -1073741801LL;
      *(_QWORD *)(v23 + 32) = 8941LL;
      WdLogEvent5_WdAssertion(v23);
      if ( v13 )
      {
        v25 = v13;
        do
        {
          VidSchiFreeQueuePacket(v16, (__int64)*v12++, v24);
          --v25;
        }
        while ( v25 );
      }
    }
    LODWORD(v10) = -1073741801;
LABEL_13:
    if ( P != &v29 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return (unsigned int)v10;
  }
  v26 = WdLogNewEntry5_WdAssertion(a1, a2);
  *(_QWORD *)(v26 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v26);
  return 3221225485LL;
}
