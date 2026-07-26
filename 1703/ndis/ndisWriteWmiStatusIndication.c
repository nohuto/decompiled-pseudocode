/*
 * XREFs of ndisWriteWmiStatusIndication @ 0x1C0019200
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ndisCoIndicateStatusInternal @ 0x1C01091F4 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     ndisSetupWmiNode @ 0x1C001C8F4 (ndisSetupWmiNode.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_qqq @ 0x1C0043A1C (Template_qqq.c)
 */

__int64 __fastcall ndisWriteWmiStatusIndication(__int64 a1, int a2, __int64 a3, int a4, int *Src, int a6)
{
  _DWORD *v6; // rbx
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  int v12; // eax
  __int16 v14; // cx
  unsigned int v15; // ebp
  int v16; // eax
  int v17; // r15d
  int v18; // eax
  int v19; // ecx
  PVOID v20; // r14
  unsigned int *v21; // rdi
  _DWORD *v22; // rdi
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // ebx
  PVOID WnodeEventItem[9]; // [rsp+30h] [rbp-48h] BYREF
  int v27; // [rsp+80h] [rbp+8h] BYREF
  bool v28; // [rsp+98h] [rbp+20h]

  v6 = *(_DWORD **)(a1 + 1368);
  v28 = (unsigned int)(a4 - 1073807371) <= 1;
  if ( !v6 )
    return 3221225473LL;
  v10 = *(unsigned __int16 *)(a1 + 1386);
  v11 = 0;
  if ( !*(_WORD *)(a1 + 1386) )
    return 3221225473LL;
  while ( 1 )
  {
    v12 = v6[6];
    if ( (v12 & 2) != 0 && v6[4] == a4 )
      break;
    ++v11;
    v6 += 7;
    if ( v11 >= v10 )
      return 3221225473LL;
  }
  if ( !v6 )
    return 0LL;
  v14 = v6[6];
  if ( v12 >= 0 || (*(_DWORD *)(a3 + 24) & 1) != 0 )
    return 0LL;
  v15 = Src != 0LL ? a6 : 0;
  v16 = v15 + 4;
  if ( (v14 & 0x10) == 0 )
    v16 = Src != 0LL ? a6 : 0;
  v27 = v16;
  v17 = v16;
  if ( (v14 & 0x200) != 0 )
  {
    v18 = *(unsigned __int16 *)(a1 + 3832) + 46;
LABEL_15:
    v17 += v18;
    goto LABEL_16;
  }
  if ( (unsigned int)(a4 - 1073807371) <= 1 )
  {
    v18 = *(unsigned __int16 *)(a1 + 3832) + 2;
    goto LABEL_15;
  }
LABEL_16:
  ndisSetupWmiNode(a1, a2, v17, (_DWORD)v6, (__int64)WnodeEventItem);
  v20 = WnodeEventItem[0];
  if ( WnodeEventItem[0] )
  {
    v21 = (unsigned int *)((char *)WnodeEventItem[0] + *((unsigned int *)WnodeEventItem[0] + 14));
    if ( (v6[6] & 0x200) != 0 )
    {
      *v21 = v17 - 4;
      v22 = v21 + 1;
      *v22 = 2621699;
      v22[1] = *(_DWORD *)(a1 + 4080);
      *((_QWORD *)v22 + 1) = *(_QWORD *)(a1 + 4048);
      v22[6] = *(_DWORD *)(a3 + 16);
      if ( *(_UNKNOWN **)(a3 + 32) == &ndisIntReqWmi )
        *((_QWORD *)v22 + 2) = *(_QWORD *)(a3 + 40);
      v22[7] = *(unsigned __int16 *)(a1 + 3832);
      v23 = v27 + 40;
      v22[8] = v27 + 40;
      memmove((char *)v22 + v23, *(const void **)(a1 + 3840), *(unsigned __int16 *)(a1 + 3832));
      v21 = v22 + 10;
    }
    v24 = v6[6];
    if ( v15 )
    {
      if ( (v24 & 0x10) != 0 )
      {
        *v21++ = v15 / v6[5];
      }
      else if ( a4 == 1073807384 && (*(_DWORD *)(a3 + 24) & 4) != 0 )
      {
        v27 = 3;
        Src = &v27;
        v15 = 4;
      }
      memmove(v21, Src, v15);
      v21 = (unsigned int *)((char *)v21 + v15);
    }
    else if ( (v24 & 0x10) != 0 )
    {
      *v21++ = 0;
    }
    if ( v28 )
      memmove(v21, *(const void **)(a1 + 3840), *(unsigned __int16 *)(a1 + 3832));
    v25 = IoWMIWriteEvent(v20);
    if ( (v25 & 0x80000000) == 0 )
      return v25;
  }
  else
  {
    v25 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C009261F >= 2u )
    WPP_SF_qD(51LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, v25);
  if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
    Template_qqq(v19, (unsigned int)&IoWMIWriteEventFailed, a1 + 4032, v25, 173, 0);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  return v25;
}
