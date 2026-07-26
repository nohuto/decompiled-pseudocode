/*
 * XREFs of ndisMSetQosAttributes @ 0x1C00DE8B4
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00AA760 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMSetQosAttributes(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  size_t v6; // rsi
  __int64 v7; // rax
  PVOID PoolWithTag; // rax
  PVOID v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _WORD *v12; // rdx
  size_t v13; // r8
  _WORD *v14; // rdx
  unsigned __int16 v15; // ax
  void *v16; // rcx
  void *v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qq(0x80u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, a2);
  v5 = *(_QWORD *)(a2 + 64);
  if ( *(_BYTE *)(v5 + 1)
    && (v6 = 20LL, *(_WORD *)(v5 + 2) >= 0x14u)
    && (v7 = *(_QWORD *)(a2 + 72), *(_BYTE *)(v7 + 1))
    && *(_WORD *)(v7 + 2) >= 0x14u )
  {
    if ( *(_QWORD *)(a1 + 4944) || *(_QWORD *)(a1 + 4936) )
    {
      v4 = -1073676283;
      goto LABEL_23;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x7371444Eu);
    *(_QWORD *)(a1 + 4944) = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x7371444Eu);
      *(_QWORD *)(a1 + 4936) = v9;
      if ( v9 )
      {
        v10 = *(_QWORD *)(a1 + 4944);
        *(_QWORD *)v10 = 0LL;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_DWORD *)(v10 + 16) = 0;
        v11 = *(_QWORD *)(a1 + 4936);
        *(_QWORD *)v11 = 0LL;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_DWORD *)(v11 + 16) = 0;
        v12 = *(_WORD **)(a2 + 72);
        LOWORD(v11) = v12[1];
        v13 = (unsigned __int16)v11;
        if ( (unsigned __int16)v11 >= 0x14u )
          v13 = 20LL;
        memmove(*(void **)(a1 + 4944), v12, v13);
        v14 = *(_WORD **)(a2 + 64);
        v15 = v14[1];
        if ( v15 < 0x14u )
          v6 = v15;
        memmove(*(void **)(a1 + 4936), v14, v6);
        goto LABEL_23;
      }
    }
    v4 = -1073741670;
  }
  else
  {
    v4 = -1073741811;
  }
  v16 = *(void **)(a1 + 4944);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    *(_QWORD *)(a1 + 4944) = 0LL;
  }
  v17 = *(void **)(a1 + 4936);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    *(_QWORD *)(a1 + 4936) = 0LL;
  }
LABEL_23:
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
  {
    v19 = v4;
    WPP_SF_qqd(0x81u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, a2, v19);
  }
  return v4;
}
