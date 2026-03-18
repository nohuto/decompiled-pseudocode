/*
 * XREFs of ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIH@Z @ 0x1C0012D78
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C000BEA0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001E7B4 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
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
  bool v9; // zf
  unsigned int v10; // r8d
  unsigned int v11; // edx
  int v12; // r14d
  int v13; // eax
  char v14; // cl
  int v15; // eax
  unsigned int v16; // edi
  char v17; // cl
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-18h]
  unsigned int v23; // [rsp+3Ch] [rbp-14h]
  int v24; // [rsp+40h] [rbp-10h]
  unsigned int v25; // [rsp+44h] [rbp-Ch]
  unsigned int v26; // [rsp+48h] [rbp-8h]

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
          v9 = *((_BYTE *)a1 + 132) == 0;
          v10 = (unsigned __int8)*(_DWORD *)v6;
          v22 = v10;
          v21[0] = a1;
          v21[1] = v6;
          if ( v9 )
            v11 = 0;
          else
            v11 = *((unsigned __int8 *)v6 + 1);
          v12 = 0;
          v23 = v11;
          v9 = !_BitScanForward((unsigned int *)&v13, v10);
          v14 = -1;
          v24 = 0;
          if ( !v9 )
            v14 = v13;
          v9 = !_BitScanForward((unsigned int *)&v15, v11);
          v16 = v14;
          v17 = -1;
          if ( !v9 )
            v17 = v15;
          v25 = v16;
          v18 = v17;
          v26 = v17;
          while ( v10 || v11 )
          {
            if ( v16 < v18 )
            {
              v19 = *(_QWORD *)((char *)v6
                              + 48 * (v12 + v8 * *((_DWORD *)v6 + 1))
                              + *((_DWORD *)v6 + 1) * ((8 * *((_DWORD *)v6 + 2) + 167) & 0xFFFFFFF8)
                              + 48);
              v20 = *(_QWORD *)(v19 + 96);
              _InterlockedDecrement((volatile signed __int32 *)(v19 + 104));
              if ( a5 )
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 16) + 8LL));
            }
            VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v21);
            v18 = v26;
            v11 = v23;
            v10 = v22;
            v16 = v25;
            v12 = v24;
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
