/*
 * XREFs of VidSchEnqueueCpuEvent @ 0x1C0053170
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0001008 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00053A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006BD0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiFreeQueuePacket @ 0x1C0011368 (VidSchiFreeQueuePacket.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030C40 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0033B44 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0076AF0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00BEC50 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchEnqueueCpuEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        HANDLE Handle)
{
  int v8; // edi
  struct DXGPROCESS *Current; // rax
  bool v10; // r12
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rbx
  struct _VIDSCH_QUEUE_PACKET **v16; // rax
  struct _VIDSCH_QUEUE_PACKET **v17; // rdi
  unsigned int v18; // ebp
  struct _VIDSCH_QUEUE_PACKET **v19; // rsi
  __int64 v20; // r13
  struct VIDSCH_HW_QUEUE *v21; // r15
  __int64 v22; // rdx
  struct _VIDSCH_QUEUE_PACKET *HwQueuePacket; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _VIDSCH_QUEUE_PACKET *v26; // rax
  struct _VIDSCH_QUEUE_PACKET *v27; // rdx
  struct _VIDSCH_QUEUE_PACKET *v28; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rbx
  struct _VIDSCH_QUEUE_PACKET *v35; // rdx
  PVOID v36; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  PVOID P; // [rsp+40h] [rbp-68h] BYREF
  char v39; // [rsp+48h] [rbp-60h] BYREF
  int v40; // [rsp+58h] [rbp-50h]
  unsigned int v41; // [rsp+B0h] [rbp+8h]
  __int64 v42; // [rsp+B8h] [rbp+10h]

  v41 = a1;
  v8 = a1;
  if ( a3 <= 0x41 && (a3 || (_DWORD)a1) )
  {
    Current = DXGPROCESS::GetCurrent();
    v10 = (*((_BYTE *)Current + 323) & 8) != 0;
    if ( (*((_BYTE *)Current + 323) & 8) != 0 )
    {
      LODWORD(v14) = 0;
      v36 = Handle;
    }
    else
    {
      v11 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v14 = v11;
      v36 = Object;
      if ( v11 < 0 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v13, v12);
        *(_QWORD *)(v31 + 24) = v14;
        WdLogEvent5_WdAssertion(v31);
        return (unsigned int)v14;
      }
    }
    P = 0LL;
    v40 = 0;
    LODWORD(v15) = v8 + a3;
    v16 = (struct _VIDSCH_QUEUE_PACKET **)NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,1853444950>::AllocateElements(
                                            &P,
                                            v15);
    v17 = v16;
    if ( v16 )
    {
      v18 = 0;
      if ( !(_DWORD)v15 )
        goto LABEL_22;
      v42 = a2 - (_QWORD)v16;
      v19 = v16;
      while ( 1 )
      {
        v20 = 0LL;
        v21 = 0LL;
        if ( v18 < v41 )
        {
          v21 = *(struct _VIDSCH_QUEUE_PACKET **)((char *)v19 + v42);
        }
        else
        {
          _mm_lfence();
          v20 = *(_QWORD *)(a4 + 8LL * (v18 - v41));
        }
        v22 = 0LL;
        if ( v21 )
        {
          HwQueuePacket = (struct _VIDSCH_QUEUE_PACKET *)VidSchiAllocateHwQueuePacket(v21, 0LL);
        }
        else
        {
          LOBYTE(v22) = *(_DWORD *)(v20 + 788) == 0;
          HwQueuePacket = (struct _VIDSCH_QUEUE_PACKET *)VidSchiAllocateQueuePacket(v20, v22);
        }
        *v19 = HwQueuePacket;
        if ( !HwQueuePacket )
          break;
        *(_DWORD *)HwQueuePacket = 1953189969;
        *((_DWORD *)*v19 + 12) = 5;
        *((_QWORD *)*v19 + 7) = MEMORY[0xFFFFF78000000320];
        *((_DWORD *)*v19 + 13) = 2;
        v26 = *v19;
        if ( v21 )
          *((_QWORD *)v26 + 12) = v21;
        else
          *((_QWORD *)v26 + 11) = v20;
        *((_QWORD *)*v19 + 13) = KeGetCurrentThread();
        *((_QWORD *)*v19 + 9) = 0LL;
        *((_DWORD *)*v19 + 68) ^= (a5 ^ (unsigned __int8)*((_DWORD *)*v19 + 68)) & 1;
        *((_DWORD *)*v19 + 68) |= 2u;
        *((_DWORD *)*v19 + 68) = *((_DWORD *)*v19 + 68) & 0xFFFFFFF7 | (8 * v10);
        *((_QWORD *)*v19 + 67) = v36;
        *((_QWORD *)*v19 + 99) = 0LL;
        v27 = *v19;
        if ( v18 )
        {
          *((_QWORD *)v27 + 100) = v17[v18 - 1];
          *((_QWORD *)v17[v18 - 1] + 99) = *v19;
        }
        else
        {
          *((_QWORD *)v27 + 100) = 0LL;
        }
        ++v18;
        ++v19;
        if ( v18 >= (unsigned int)v15 )
        {
          v15 = (unsigned int)v15;
          do
          {
            v28 = *v17;
            if ( *((_QWORD *)*v17 + 12) )
              VidSchiSubmitCommandPacketToHwQueue(v28);
            else
              VidSchiSubmitCommandPacketToQueue((__int64)v28);
            ++v17;
            --v15;
          }
          while ( v15 );
          goto LABEL_22;
        }
      }
      v32 = WdLogNewEntry5_WdWarning(v25, v24);
      *(_QWORD *)(v32 + 24) = -1073741801LL;
      *(_QWORD *)(v32 + 32) = 9553LL;
      WdLogEvent5_WdWarning(v32);
      if ( v18 )
      {
        v34 = v18;
        do
        {
          v35 = *v17;
          if ( *v17 )
          {
            if ( *((_QWORD *)v35 + 12) )
              VidSchiFreeQueuePacket(v21, v35);
            else
              VidSchiFreeQueuePacket(v20, (__int64)v35, v33);
          }
          ++v17;
          --v34;
        }
        while ( v34 );
      }
    }
    LODWORD(v14) = -1073741801;
LABEL_22:
    if ( P != &v39 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return (unsigned int)v14;
  }
  v30 = WdLogNewEntry5_WdAssertion(a1, a2);
  *(_QWORD *)(v30 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v30);
  return 3221225485LL;
}
