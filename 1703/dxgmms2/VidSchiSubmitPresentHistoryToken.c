/*
 * XREFs of VidSchiSubmitPresentHistoryToken @ 0x1C00280C4
 * Callers:
 *     VidSchiFlushQueuePacket @ 0x1C00262BC (VidSchiFlushQueuePacket.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C000BEA0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0012D18 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C002220C (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0022CDC (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_I.c)
 */

void __fastcall VidSchiSubmitPresentHistoryToken(union _ULARGE_INTEGER *a1)
{
  union _ULARGE_INTEGER v1; // r13
  union _ULARGE_INTEGER *v2; // rdi
  union _ULARGE_INTEGER v3; // rbx
  bool v4; // si
  bool v5; // r12
  __int64 v6; // r15
  char v7; // r8
  __int64 v8; // rbp
  bool v9; // zf
  int v10; // eax
  char v11; // cl
  __int64 v12; // r14
  int v13; // eax
  DWORD LowPart; // r9d
  __int64 HighPart; // rax
  unsigned int v16; // r10d
  unsigned int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // [rsp+70h] [rbp+8h]
  unsigned int v21; // [rsp+78h] [rbp+10h]

  v1 = a1[11];
  v2 = a1 + 33;
  v3 = a1[13];
  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(v1.QuadPart + 104) + 32LL);
  if ( (a1[33].LowPart & 0x1000000) == 0 )
  {
    LowPart = a1[52].LowPart;
    if ( !a1[52].QuadPart )
      goto LABEL_13;
    HighPart = a1[47].HighPart;
    if ( (_DWORD)HighPart == -1 )
      goto LABEL_13;
    v16 = *(_DWORD *)(v6 + 128);
    v17 = 0;
    v18 = *(_QWORD *)(v6 + 8 * HighPart + 2992);
    if ( !v16 )
      goto LABEL_13;
    while ( 1 )
    {
      v19 = 272LL * v17;
      if ( LowPart == *(_DWORD *)(v19 + v18 + 128)
        && v2[19].HighPart == *(_DWORD *)(v19 + v18 + 132)
        && v2[20].QuadPart == *(_QWORD *)(v19 + v18 + 136)
        && *(_DWORD *)(v19 + v18 + 156) == 3 )
      {
        break;
      }
      if ( ++v17 >= v16 )
        goto LABEL_13;
    }
LABEL_12:
    v5 = 1;
    goto LABEL_13;
  }
  v7 = 0;
  v21 = a1[47].HighPart;
  v8 = *(_QWORD *)(v6 + 8LL * v21 + 2992);
  v9 = !_BitScanForward((unsigned int *)&v10, (unsigned __int8)a1[87].LowPart);
  v11 = -1;
  if ( !v9 )
    v11 = v10;
  if ( v11 != -1 )
    v7 = v11;
  v12 = 272LL * (unsigned int)v7;
  v20 = v7;
  if ( *(_QWORD *)(v12 + v8 + 176) != v12 + v8 + 176 )
    goto LABEL_7;
  v13 = *(_DWORD *)(v12 + v8 + 156);
  if ( v13 == 3 )
  {
    if ( v2[19].LowPart != *(_DWORD *)(v12 + v8 + 128)
      || v2[19].HighPart != *(_DWORD *)(v12 + v8 + 132)
      || v2[20].QuadPart != *(_QWORD *)(v12 + v8 + 136) )
    {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  if ( v13 == 1
    && VidSchiCheckTokenIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v6, (const struct VIDSCH_SUBMIT_DATA2 *)v2) )
  {
    if ( *(_BYTE *)(v12 + v8 + 153) )
    {
      if ( !VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v6, v21, v20) )
      {
LABEL_7:
        VidSchiPostponePresentHistoryToken((struct _VIDSCH_CONTEXT *)v1.QuadPart, (struct VIDSCH_SUBMIT_DATA2 *)v2, v3);
        return;
      }
    }
    else
    {
      *(_BYTE *)(v12 + v8 + 153) = 1;
      v4 = 1;
    }
  }
LABEL_13:
  VidSchiProcessPresentHistoryToken((struct _VIDSCH_CONTEXT *)v1.QuadPart, (struct VIDSCH_SUBMIT_DATA2 *)v2, v3, v4, v5);
}
