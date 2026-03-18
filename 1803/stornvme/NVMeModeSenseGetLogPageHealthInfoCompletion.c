/*
 * XREFs of NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0008A90
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbScsiData @ 0x1C0006F54 (GetSrbScsiData.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeModeSenseGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _BYTE *v5; // r12
  __int64 SrbScsiData; // rax
  __int64 v7; // rbx
  _DWORD *v8; // r14
  __int64 v9; // rbp
  _BYTE *v10; // r15
  char *v11; // rbx
  __int64 v12; // rax
  size_t v13; // rax
  unsigned int v14; // eax
  __int16 v15; // cx
  char v16; // dl
  char v17; // cl
  char v18; // cl
  char v19; // al
  __int64 v20; // r8
  __int64 result; // rax
  __int64 v22; // [rsp+60h] [rbp+8h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = *(_BYTE **)(v4 + 4200);
  SrbScsiData = GetSrbScsiData(a2, 0LL, 0LL, 0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 1112);
  v8 = 0LL;
  LODWORD(v9) = 0;
  v22 = v7;
  v10 = (_BYTE *)SrbScsiData;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v11 = *(char **)(a2 + 64);
      v12 = 60LL;
    }
    else
    {
      v11 = *(char **)(a2 + 24);
      v12 = 16LL;
    }
    v8 = (_DWORD *)(a2 + v12);
    v13 = *(unsigned int *)(a2 + v12);
    if ( (v13 & 3) != 0 )
    {
      if ( (_DWORD)v13 )
        memset(v11, 0, v13);
    }
    else
    {
      v14 = (unsigned int)v13 >> 2;
      if ( v14 )
        memset(v11, 0, 4LL * v14);
    }
    v15 = 26;
    if ( *v10 == 26 )
    {
      v9 = 4LL;
      v16 = 23;
      if ( *v8 < 0x18u )
        v16 = 15;
      v11[1] = 0;
      *v11 = v16;
      v17 = v11[2] | 0x10;
      v11[2] = v17;
      if ( (*v5 & 8) != 0 )
        v11[2] = v17 | 0x80;
    }
    else
    {
      v9 = 8LL;
      if ( *v8 < 0x1Cu )
        v15 = 18;
      v11[1] = v15;
      *v11 = HIBYTE(v15);
      v18 = v11[3] | 0x10;
      v11[2] = 0;
      v11[3] = v18;
      if ( (*v5 & 8) != 0 )
        v11[3] = v18 | 0x80;
    }
    v19 = v11[v9] & 0x40;
    v11[v9 + 1] = 10;
    v11[v9 + 2] &= 0xFAu;
    v11[v9] = v19 | 8;
    v7 = v22;
  }
  v20 = *(_QWORD *)(v4 + 4200);
  result = *(_QWORD *)(v4 + 4208);
  if ( v20 )
    result = StorPortExtendedFunction(83LL, a1, v20, *(unsigned int *)(v4 + 4240));
  *(_QWORD *)(v4 + 4200) = 0LL;
  *(_DWORD *)(v4 + 4240) = 0;
  *(_QWORD *)(v4 + 4232) = 0LL;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( (*(_BYTE *)(v7 + 525) & 1) != 0 )
    {
      *(_BYTE *)(a2 + 3) = 0;
      *(_BYTE *)(v4 + 4253) = *(_BYTE *)(v4 + 4253) & 0xF8 | 1;
      SrbAssignQueueId(a1, a2);
      memset((void *)(v4 + 4096), 0, 0x40uLL);
      *(_BYTE *)(v4 + 4096) = 10;
      *(_BYTE *)(v4 + 4136) = 6;
      *(_QWORD *)(v4 + 4224) = NVMeGetFeaturesCurrentCacheValueCompletion;
      return ProcessCommand(a1, a2);
    }
    result = (unsigned int)(v9 + 20);
    if ( (unsigned int)*v8 < (unsigned __int64)(unsigned int)v9 + 20 )
      result = (unsigned int)(v9 + 12);
    *v8 = result;
  }
  *(_BYTE *)(v4 + 4253) |= 8u;
  return result;
}
