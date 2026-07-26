/*
 * XREFs of ndisWriteWmiStatusIndication @ 0x1C0008030
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ndisCoIndicateStatusInternal @ 0x1C0112204 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     ndisSetupWmiNode @ 0x1C0005800 (ndisSetupWmiNode.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0qqq @ 0x1C00401C4 (McTemplateK0qqq.c)
 */

__int64 __fastcall ndisWriteWmiStatusIndication(__int64 a1, const void **a2, __int64 a3, int a4, int *Src, int a6)
{
  __int64 v6; // rbx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v14; // ebp
  int v15; // eax
  unsigned int v16; // r15d
  int v17; // eax
  struct _MCGEN_TRACE_CONTEXT *v18; // rcx
  PVOID v19; // r14
  unsigned int *v20; // rdi
  _DWORD *v21; // rdi
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v24; // ebx
  PVOID WnodeEventItem[9]; // [rsp+30h] [rbp-48h] BYREF
  int v26; // [rsp+80h] [rbp+8h] BYREF
  bool v27; // [rsp+98h] [rbp+20h]

  v6 = *(_QWORD *)(a1 + 1368);
  v27 = (unsigned int)(a4 - 1073807371) <= 1;
  if ( !v6 )
    return 3221225473LL;
  v10 = *(unsigned __int16 *)(a1 + 1386);
  v11 = 0;
  if ( !*(_WORD *)(a1 + 1386) )
    return 3221225473LL;
  while ( 1 )
  {
    v12 = *(_DWORD *)(v6 + 24);
    if ( (v12 & 2) != 0 && *(_DWORD *)(v6 + 16) == a4 )
      break;
    ++v11;
    v6 += 28LL;
    if ( v11 >= v10 )
      return 3221225473LL;
  }
  if ( !v6 || v12 >= 0 || (*(_DWORD *)(a3 + 24) & 1) != 0 )
    return 0LL;
  v14 = Src != 0LL ? a6 : 0;
  v15 = v14 + 4;
  if ( (v12 & 0x10) == 0 )
    v15 = Src != 0LL ? a6 : 0;
  v26 = v15;
  v16 = v15;
  if ( (v12 & 0x200) != 0 )
  {
    v17 = *(unsigned __int16 *)(a1 + 3832) + 46;
LABEL_15:
    v16 += v17;
    goto LABEL_16;
  }
  if ( (unsigned int)(a4 - 1073807371) <= 1 )
  {
    v17 = *(unsigned __int16 *)(a1 + 3832) + 2;
    goto LABEL_15;
  }
LABEL_16:
  ndisSetupWmiNode(a1, a2, v16, (__int128 *)v6, WnodeEventItem);
  v19 = WnodeEventItem[0];
  if ( WnodeEventItem[0] )
  {
    v20 = (unsigned int *)((char *)WnodeEventItem[0] + *((unsigned int *)WnodeEventItem[0] + 14));
    if ( (*(_DWORD *)(v6 + 24) & 0x200) != 0 )
    {
      *v20 = v16 - 4;
      v21 = v20 + 1;
      *v21 = 2621699;
      v21[1] = *(_DWORD *)(a1 + 4080);
      *((_QWORD *)v21 + 1) = *(_QWORD *)(a1 + 4048);
      v21[6] = *(_DWORD *)(a3 + 16);
      if ( *(_UNKNOWN **)(a3 + 32) == &ndisIntReqWmi )
        *((_QWORD *)v21 + 2) = *(_QWORD *)(a3 + 40);
      v21[7] = *(unsigned __int16 *)(a1 + 3832);
      v22 = v26 + 40;
      v21[8] = v26 + 40;
      memmove((char *)v21 + v22, *(const void **)(a1 + 3840), *(unsigned __int16 *)(a1 + 3832));
      v20 = v21 + 10;
    }
    v23 = *(_DWORD *)(v6 + 24);
    if ( v14 )
    {
      if ( (v23 & 0x10) != 0 )
      {
        *v20++ = v14 / *(_DWORD *)(v6 + 20);
      }
      else if ( a4 == 1073807384 && (*(_DWORD *)(a3 + 24) & 4) != 0 )
      {
        v26 = 3;
        Src = &v26;
        v14 = 4;
      }
      memmove(v20, Src, v14);
      v20 = (unsigned int *)((char *)v20 + v14);
    }
    else if ( (v23 & 0x10) != 0 )
    {
      *v20++ = 0;
    }
    if ( v27 )
      memmove(v20, *(const void **)(a1 + 3840), *(unsigned __int16 *)(a1 + 3832));
    v24 = IoWMIWriteEvent(v19);
    if ( (v24 & 0x80000000) == 0 )
      return v24;
  }
  else
  {
    v24 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C009875F >= 2u )
    WPP_SF_qD(52LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v24);
  if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
    McTemplateK0qqq(v18, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4032), v24, 0xEA6u, 0);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  return v24;
}
