/*
 * XREFs of VidSchEnqueueCpuEvent @ 0x1C0072F20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002090 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiFreeQueuePacket @ 0x1C0010C4C (VidSchiFreeQueuePacket.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0013790 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEA.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006EA50 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006EEB0 (VidSchiSubmitCommandPacketToQueue.c)
 */

__int64 __fastcall VidSchEnqueueCpuEvent(__int64 a1, __int64 a2, unsigned __int8 a3, void *a4)
{
  __int64 v4; // r14
  struct DXGPROCESS *Current; // rax
  bool v9; // r12
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rax
  struct _VIDSCH_QUEUE_PACKET **v15; // rdi
  unsigned int v16; // r15d
  __int64 v17; // rsi
  __int64 v18; // r13
  _QWORD *QueuePacket; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  PVOID P; // [rsp+40h] [rbp-48h] BYREF
  char v32; // [rsp+48h] [rbp-40h] BYREF
  int v33; // [rsp+58h] [rbp-30h]
  PVOID v34; // [rsp+A8h] [rbp+20h]

  v34 = a4;
  v4 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 0x41 && a2 )
  {
    Current = DXGPROCESS::GetCurrent();
    v9 = (*((_BYTE *)Current + 307) & 8) != 0;
    if ( (*((_BYTE *)Current + 307) & 8) != 0 )
    {
      LODWORD(v13) = 0;
    }
    else
    {
      v10 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v13 = v10;
      v34 = Object;
      if ( v10 < 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v12, v11);
        *(_QWORD *)(v24 + 24) = v13;
        WdLogEvent5_WdAssertion(v24);
        return (unsigned int)v13;
      }
    }
    P = 0LL;
    v33 = 0;
    v14 = NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,1853444950>::AllocateElements(&P, v4);
    v15 = (struct _VIDSCH_QUEUE_PACKET **)v14;
    if ( v14 )
    {
      v16 = 0;
      if ( !(_DWORD)v4 )
        goto LABEL_14;
      v17 = v14;
      v18 = a2 - v14;
      while ( 1 )
      {
        v29 = *(_QWORD *)(v17 + v18);
        QueuePacket = VidSchiAllocateQueuePacket(v29, *(_DWORD *)(v29 + 780) == 0);
        *(_QWORD *)v17 = QueuePacket;
        if ( !QueuePacket )
          break;
        *(_DWORD *)QueuePacket = 1953189969;
        *(_DWORD *)(*(_QWORD *)v17 + 48LL) = 5;
        *(_QWORD *)(*(_QWORD *)v17 + 56LL) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(*(_QWORD *)v17 + 52LL) = 2;
        *(_QWORD *)(*(_QWORD *)v17 + 88LL) = v29;
        *(_QWORD *)(*(_QWORD *)v17 + 104LL) = KeGetCurrentThread();
        *(_DWORD *)(*(_QWORD *)v17 + 72LL) = 0;
        *(_DWORD *)(*(_QWORD *)v17 + 288LL) ^= (a3 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)v17 + 288LL)) & 1;
        *(_DWORD *)(*(_QWORD *)v17 + 288LL) |= 2u;
        *(_DWORD *)(*(_QWORD *)v17 + 288LL) = *(_DWORD *)(*(_QWORD *)v17 + 288LL) & 0xFFFFFFF7 | (8 * v9);
        *(_QWORD *)(*(_QWORD *)v17 + 552LL) = v34;
        *(_QWORD *)(*(_QWORD *)v17 + 808LL) = 0LL;
        if ( v16 )
        {
          *(_QWORD *)(*(_QWORD *)v17 + 816LL) = v15[v16 - 1];
          *((_QWORD *)v15[v16 - 1] + 101) = *(_QWORD *)v17;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v17 + 816LL) = 0LL;
        }
        ++v16;
        v17 += 8LL;
        if ( v16 >= (unsigned int)v4 )
        {
          v22 = v4;
          do
          {
            VidSchiSubmitCommandPacketToQueue(*v15++);
            --v22;
          }
          while ( v22 );
          goto LABEL_14;
        }
      }
      v25 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v25 + 24) = -1073741801LL;
      *(_QWORD *)(v25 + 32) = 9015LL;
      WdLogEvent5_WdAssertion(v25);
      if ( v16 )
      {
        v27 = v16;
        do
        {
          VidSchiFreeQueuePacket(v29, (__int64)*v15++, v26);
          --v27;
        }
        while ( v27 );
      }
    }
    LODWORD(v13) = -1073741801;
LABEL_14:
    if ( P != &v32 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return (unsigned int)v13;
  }
  v28 = WdLogNewEntry5_WdAssertion(a1, a2);
  *(_QWORD *)(v28 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v28);
  return 3221225485LL;
}
