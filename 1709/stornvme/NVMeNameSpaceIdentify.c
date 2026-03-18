/*
 * XREFs of NVMeNameSpaceIdentify @ 0x1C000DF54
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0004758 (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x1C0010058 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011A4C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

char __fastcall NVMeNameSpaceIdentify(__int64 a1)
{
  unsigned __int64 v1; // rax
  _QWORD *v2; // rsi
  unsigned int v4; // r15d
  unsigned int v5; // ebp
  unsigned int i; // r14d
  bool v7; // cc
  int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r8
  int v12; // r14d
  void *v13; // rcx
  int v14; // edx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned __int16 v18; // ax
  bool v19; // cc
  __int64 v20; // r8
  char *v21; // rdx
  __int128 v22; // xmm0
  int v24; // [rsp+70h] [rbp+8h]
  char *v25; // [rsp+78h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 1080);
  v2 = *(_QWORD **)(a1 + 1168);
  v4 = 0;
  v5 = *(_DWORD *)(v1 + 516);
  if ( !v5 )
    return v1;
  LOBYTE(v1) = -1;
  if ( v5 > 0xFF )
    v5 = 255;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v25 = *(char **)(a1 + 1096);
    *(_QWORD *)(a1 + 1096) = v25 + 96;
    memset(v25, 0, 0x60uLL);
    v12 = 1;
    while ( *(_BYTE *)(a1 + 16) && *(_DWORD *)(a1 + 152) != v12 )
    {
LABEL_39:
      LOBYTE(v1) = v12++;
      if ( v12 - 1 >= v5 )
      {
LABEL_40:
        *(_DWORD *)(a1 + 148) = v4;
        return v1;
      }
    }
    v13 = *(void **)(a1 + 656);
    *(_BYTE *)(a1 + 571) = 0;
    memset(v13, 0, 0x1098uLL);
    v14 = 0;
    *(_QWORD *)(a1 + 624) = *(_QWORD *)(a1 + 656);
    *(_DWORD *)(a1 + 560) = 1;
    do
      *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) |= ++v14;
    while ( v14 < 2 );
    *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
    v15 = *(_QWORD *)(a1 + 656);
    *(_QWORD *)(v15 + 4120) = *(_QWORD *)(a1 + 1176);
    v16 = *(_DWORD *)(v15 + 4136) & 0xFFFFFFFC;
    *(_BYTE *)(v15 + 4096) = 6;
    *(_DWORD *)(v15 + 4100) = v12;
    *(_DWORD *)(v15 + 4136) = v16 | (v12 == 0);
    ProcessCommand(a1, a1 + 568);
    LOBYTE(v17) = 1;
    WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v17, 10000LL);
    LOBYTE(v1) = -122;
    if ( *(_WORD *)(a1 + 4) == 0x8086 )
    {
      LOBYTE(v1) = 17;
      if ( *(_WORD *)(a1 + 6) == 8209 )
      {
        HIBYTE(v24) = *((_BYTE *)v2 + 384);
        BYTE2(v24) = *((_BYTE *)v2 + 385);
        BYTE1(v24) = *((_BYTE *)v2 + 386);
        LOBYTE(v1) = *((_BYTE *)v2 + 387);
        LOBYTE(v24) = v1;
        if ( v24 != -559038737 && v12 == 1 )
        {
          LOBYTE(v1) = (unsigned __int8)memset(v2, 0, 0x1000uLL);
          *v2 = 67108336LL;
          v2[1] = 67108336LL;
          v2[2] = 67108336LL;
          *((_BYTE *)v2 + 130) = 9;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 571) != 1 )
      goto LABEL_38;
    if ( *(_BYTE *)(a1 + 16) || v5 <= 1 )
      goto LABEL_37;
    v18 = *(_WORD *)(a1 + 122);
    v19 = v18 <= 1u;
    if ( v18 == 1 )
    {
      if ( *(_BYTE *)(a1 + 121) )
      {
LABEL_35:
        v1 = *((_BYTE *)v2 + 26) & 0xF;
        if ( *((_BYTE *)v2 + 4 * v1 + 130) || *v2 )
          goto LABEL_37;
LABEL_38:
        if ( *(_BYTE *)(a1 + 16) )
          goto LABEL_40;
        goto LABEL_39;
      }
      v19 = v18 <= 1u;
    }
    if ( v19 )
    {
LABEL_37:
      v20 = v4;
      v21 = &v25[96 * v4];
      v21[64] = *((_BYTE *)v2 + 26) & 0xF;
      *((_DWORD *)v21 + 12) = *((_DWORD *)v2 + (*((_BYTE *)v2 + 26) & 0xF) + 32);
      *((_DWORD *)v21 + 13) = 1 << v21[50];
      *((_QWORD *)v21 + 7) = *v2;
      v21[65] = v2[3] & 1;
      v21[66] = *((_BYTE *)v2 + 29) & 7;
      *((_WORD *)v21 + 46) = *((_WORD *)v2 + 23);
      v1 = v2[15];
      *(_QWORD *)(v21 + 84) = v1;
      v22 = *(_OWORD *)(v2 + 13);
      v21[10] = v4++;
      *(_DWORD *)v21 = 1;
      *(_OWORD *)(v21 + 68) = v22;
      *((_DWORD *)v21 + 1) = 4;
      *((_WORD *)v21 + 4) = 0;
      *((_DWORD *)v21 + 4) = v12;
      *(_QWORD *)(a1 + 8 * v20 + 1184) = v21;
      goto LABEL_38;
    }
    goto LABEL_35;
  }
  i = v5;
  if ( v5 > 1 )
  {
    LOWORD(v1) = *(_WORD *)(a1 + 122);
    v7 = (unsigned __int16)v1 <= 1u;
    if ( (_WORD)v1 == 1 )
    {
      if ( *(_BYTE *)(a1 + 121) )
      {
LABEL_11:
        *(_BYTE *)(a1 + 571) = 0;
        memset(*(void **)(a1 + 656), 0, 0x1098uLL);
        v8 = 0;
        *(_QWORD *)(a1 + 624) = *(_QWORD *)(a1 + 656);
        *(_DWORD *)(a1 + 560) = 1;
        do
          *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) |= ++v8;
        while ( v8 < 2 );
        *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
        v9 = *(_QWORD *)(a1 + 656);
        *(_QWORD *)(v9 + 4120) = *(_QWORD *)(a1 + 1176);
        v10 = *(_DWORD *)(v9 + 4136) & 0xFFFFFFFE;
        *(_BYTE *)(v9 + 4096) = 6;
        *(_DWORD *)(v9 + 4100) = 0;
        *(_DWORD *)(v9 + 4136) = v10 | 2;
        ProcessCommand(a1, a1 + 568);
        LOBYTE(v11) = 1;
        LOBYTE(v1) = WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v11, 10000LL);
        if ( *(_BYTE *)(a1 + 571) == 1 )
        {
          v1 = *(_QWORD *)(a1 + 1168);
          for ( i = 0; i < v5; ++i )
          {
            if ( !*(_DWORD *)v1 )
              break;
            v1 += 4LL;
          }
        }
        goto LABEL_17;
      }
      v7 = (unsigned __int16)v1 <= 1u;
    }
    if ( !v7 )
      goto LABEL_11;
  }
LABEL_17:
  if ( i )
    LOBYTE(v1) = StorPortExtendedFunction(0LL, a1, 96 * i, 1701672526LL);
  return v1;
}
