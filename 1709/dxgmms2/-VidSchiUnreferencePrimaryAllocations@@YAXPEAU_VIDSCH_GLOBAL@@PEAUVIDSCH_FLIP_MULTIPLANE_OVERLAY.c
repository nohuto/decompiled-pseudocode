/*
 * XREFs of ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIH@Z @ 0x1C001525C
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008DA0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0011AB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D0F8 (-VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001537C (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 */

void __fastcall VidSchiUnreferencePrimaryAllocations(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  unsigned int v5; // r10d
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v6; // r11
  int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  bool v11; // zf
  unsigned int v12; // edx
  int v13; // r14d
  int v14; // eax
  char v15; // cl
  int v16; // eax
  unsigned int v17; // edi
  char v18; // cl
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD v22[2]; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-18h]
  unsigned int v24; // [rsp+3Ch] [rbp-14h]
  int v25; // [rsp+40h] [rbp-10h]
  unsigned int v26; // [rsp+44h] [rbp-Ch]
  unsigned int v27; // [rsp+48h] [rbp-8h]

  if ( a3 )
  {
    v5 = a3;
    v6 = a2;
    v8 = 0;
    do
    {
      if ( (v5 & 1) != 0 )
      {
        if ( (a4 & 1) != 0 )
        {
          v9 = *(_DWORD *)v6;
          v10 = *(_DWORD *)v6 & 0x3FF;
          v22[0] = a1;
          v11 = *((_BYTE *)a1 + 132) == 0;
          v22[1] = v6;
          v23 = v10;
          if ( v11 )
            v12 = 0;
          else
            v12 = (v9 >> 10) & 0x3FF;
          v13 = 0;
          v24 = v12;
          v11 = !_BitScanForward((unsigned int *)&v14, v10);
          v15 = -1;
          v25 = 0;
          if ( !v11 )
            v15 = v14;
          v11 = !_BitScanForward((unsigned int *)&v16, v12);
          v17 = v15;
          v18 = -1;
          if ( !v11 )
            v18 = v16;
          v26 = v17;
          v19 = v18;
          v27 = v18;
          while ( v10 || v12 )
          {
            if ( v17 < v19 )
            {
              v20 = *(_QWORD *)((char *)v6
                              + 48 * (v13 + v8 * *((_DWORD *)v6 + 1))
                              + *((_DWORD *)v6 + 1) * ((8 * *((_DWORD *)v6 + 2) + 175) & 0xFFFFFFF8)
                              + 48);
              v21 = *(_QWORD *)(v20 + 96);
              _InterlockedDecrement((volatile signed __int32 *)(v20 + 104));
              if ( a5 )
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 16) + 8LL));
            }
            VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v22);
            v19 = v27;
            v12 = v24;
            v10 = v23;
            v17 = v26;
            v13 = v25;
          }
        }
        ++v8;
      }
      a4 >>= 1;
      v5 >>= 1;
    }
    while ( v5 );
  }
}
