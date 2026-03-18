/*
 * XREFs of NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00081F0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbScsiData @ 0x1C0006898 (GetSrbScsiData.c)
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C000F8C8 (ProcessCommand.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

char __fastcall NVMeModeSenseGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _BYTE *v5; // r12
  __int64 SrbScsiData; // rax
  __int64 v7; // rbx
  unsigned int *v8; // r14
  __int64 v9; // rbp
  _BYTE *v10; // r15
  char *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int16 v14; // cx
  char v15; // dl
  char v16; // cl
  char *v17; // rbx
  char v18; // al
  __int64 v19; // r8
  __int64 v21; // [rsp+78h] [rbp+10h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = *(_BYTE **)(v4 + 4200);
  SrbScsiData = GetSrbScsiData(a2, 0LL, 0LL, 0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 1080);
  v8 = 0LL;
  LODWORD(v9) = 0;
  v21 = v7;
  v10 = (_BYTE *)SrbScsiData;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v11 = *(char **)(a2 + 64);
      v8 = (unsigned int *)(a2 + 60);
    }
    else
    {
      v11 = *(char **)(a2 + 24);
      v8 = (unsigned int *)(a2 + 16);
    }
    v12 = *v8;
    if ( (*v8 & 3) != 0 )
    {
      if ( v12 )
        memset(v11, 0, *v8);
    }
    else
    {
      v13 = v12 >> 2;
      if ( v13 )
        memset(v11, 0, 4LL * v13);
    }
    v14 = 26;
    if ( *v10 == 26 )
    {
      v9 = 4LL;
      v15 = 23;
      if ( *v8 < 0x18 )
        v15 = 15;
      v11[1] = 0;
      v11[2] |= 0x10u;
      *v11 = v15;
      if ( (*v5 & 8) != 0 )
        v11[2] |= 0x80u;
    }
    else
    {
      v9 = 8LL;
      if ( *v8 < 0x1C )
        v14 = 18;
      v11[1] = v14;
      *v11 = HIBYTE(v14);
      v11[3] |= 0x10u;
      v16 = v11[3];
      v11[2] = 0;
      if ( (*v5 & 8) != 0 )
        v11[3] = v16 | 0x80;
    }
    v17 = &v11[v9];
    v18 = *v17 & 0x40;
    v17[1] = 10;
    LOBYTE(SrbScsiData) = v18 | 8;
    v17[2] &= 0xFAu;
    *v17 = SrbScsiData;
    v7 = v21;
  }
  v19 = *(_QWORD *)(v4 + 4200);
  if ( v19 )
    LOBYTE(SrbScsiData) = StorPortExtendedFunction(25LL, a1, v19, *(unsigned int *)(v4 + 4232));
  *(_QWORD *)(v4 + 4200) = 0LL;
  *(_DWORD *)(v4 + 4232) = 0;
  *(_QWORD *)(v4 + 4224) = 0LL;
  if ( *(_BYTE *)(a2 + 3) != 1 )
    goto LABEL_33;
  if ( (*(_BYTE *)(v7 + 525) & 1) == 0 )
  {
    LODWORD(SrbScsiData) = v9 + 20;
    if ( *v8 < (unsigned __int64)(unsigned int)v9 + 20 )
      LODWORD(SrbScsiData) = v9 + 12;
    *v8 = SrbScsiData;
LABEL_33:
    *(_BYTE *)(v4 + 4245) |= 8u;
    return SrbScsiData;
  }
  *(_BYTE *)(a2 + 3) = 0;
  *(_BYTE *)(v4 + 4245) = *(_BYTE *)(v4 + 4245) & 0xF8 | 1;
  SrbAssignQueueId(a1, a2);
  memset((void *)(v4 + 4096), 0, 0x40uLL);
  *(_BYTE *)(v4 + 4096) = 10;
  *(_BYTE *)(v4 + 4136) = 6;
  *(_QWORD *)(v4 + 4216) = NVMeGetFeaturesCurrentCacheValueCompletion;
  LOBYTE(SrbScsiData) = ProcessCommand(a1, a2);
  return SrbScsiData;
}
