/*
 * XREFs of ndisMSetQosAttributes @ 0x1C00EA34C
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C2BB0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_DDDD @ 0x1C0043A88 (WPP_SF_DDDD.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMSetQosAttributes(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  unsigned int v6; // esi
  unsigned __int8 v7; // cl
  __int64 v8; // rax
  unsigned __int8 v9; // cl
  PVOID PoolWithTag; // rax
  PVOID v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int16 *v14; // rdx
  unsigned int v15; // eax
  _WORD *v16; // rdx
  unsigned __int16 v17; // ax
  int v18; // r8d
  unsigned __int16 v19; // cx
  void *v20; // rcx
  void *v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qq(0x88u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a2);
  v5 = *(_QWORD *)(a2 + 64);
  v6 = 20;
  v7 = *(_BYTE *)(v5 + 1);
  if ( !v7 || *(_WORD *)(v5 + 2) < 0x14u )
  {
    if ( (unsigned __int8)byte_1C0099614 >= 5u )
    {
      v18 = v7;
      v19 = 137;
      goto LABEL_22;
    }
LABEL_23:
    v4 = -1073741811;
    goto LABEL_24;
  }
  v8 = *(_QWORD *)(a2 + 72);
  v9 = *(_BYTE *)(v8 + 1);
  if ( !v9 || *(_WORD *)(v8 + 2) < 0x14u )
  {
    if ( (unsigned __int8)byte_1C0099614 >= 5u )
    {
      v18 = v9;
      v19 = 138;
LABEL_22:
      WPP_SF_DDDD(v19, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v18, 1);
      goto LABEL_23;
    }
    goto LABEL_23;
  }
  if ( *(_QWORD *)(a1 + 4944) || *(_QWORD *)(a1 + 4936) )
  {
    v4 = -1073676283;
    goto LABEL_28;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x7371444Eu);
  *(_QWORD *)(a1 + 4944) = PoolWithTag;
  if ( PoolWithTag )
  {
    v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x7371444Eu);
    *(_QWORD *)(a1 + 4936) = v11;
    if ( v11 )
    {
      v12 = *(_QWORD *)(a1 + 4944);
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_DWORD *)(v12 + 16) = 0;
      v13 = *(_QWORD *)(a1 + 4936);
      *(_QWORD *)v13 = 0LL;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_DWORD *)(v13 + 16) = 0;
      v14 = *(unsigned __int16 **)(a2 + 72);
      v15 = v14[1];
      if ( (unsigned __int16)v15 >= 0x14u )
        v15 = 20;
      memmove(*(void **)(a1 + 4944), v14, v15);
      v16 = *(_WORD **)(a2 + 64);
      v17 = v16[1];
      if ( v17 < 0x14u )
        v6 = v17;
      memmove(*(void **)(a1 + 4936), v16, v6);
      goto LABEL_28;
    }
  }
  v4 = -1073741670;
LABEL_24:
  v20 = *(void **)(a1 + 4944);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    *(_QWORD *)(a1 + 4944) = 0LL;
  }
  v21 = *(void **)(a1 + 4936);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(a1 + 4936) = 0LL;
  }
LABEL_28:
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
  {
    v23 = v4;
    WPP_SF_qqd(0x8Bu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a2, v23);
  }
  return v4;
}
