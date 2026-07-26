/*
 * XREFs of ndisMSetNicSwitchAttributes @ 0x1C00B37FC
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C2BB0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMSetNicSwitchAttributes(void **a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned __int8 v7; // r9
  unsigned __int16 v8; // r10
  __int64 v9; // rcx
  unsigned __int8 v10; // r8
  unsigned __int16 v11; // dx
  PVOID PoolWithTag; // rax
  PVOID v13; // rax
  PVOID v14; // rax
  unsigned __int16 *v15; // rdx
  unsigned int v16; // eax
  _WORD *v17; // rdx
  unsigned __int16 v18; // ax
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v5 = 132;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qq(0x84u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a2);
  v6 = *(_QWORD *)(a2 + 32);
  v7 = *(_BYTE *)(v6 + 1);
  if ( v7
    && (v8 = *(_WORD *)(v6 + 2), v8 >= 0x20u)
    && (v9 = *(_QWORD *)(a2 + 40), (v10 = *(_BYTE *)(v9 + 1)) != 0)
    && (v11 = *(_WORD *)(v9 + 2), v11 >= 0x20u) )
  {
    if ( a1[448] || a1[447] )
    {
      v4 = -1073676283;
      goto LABEL_27;
    }
    if ( v10 >= 2u && (v11 < 0x74u || *(_DWORD *)(v9 + 12) || *(_DWORD *)(v9 + 16) || *(_DWORD *)(v9 + 20))
      || v7 >= 2u && (v8 < 0x74u || *(_DWORD *)(v6 + 12) || *(_DWORD *)(v6 + 16) || *(_DWORD *)(v6 + 20)) )
    {
      v4 = -1073741637;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
      a1[448] = PoolWithTag;
      if ( PoolWithTag )
      {
        v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
        a1[449] = v13;
        if ( v13 )
        {
          v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
          a1[447] = v14;
          if ( v14 )
          {
            memset(a1[449], 0, 0x84uLL);
            memset(a1[448], 0, 0x84uLL);
            memset(a1[447], 0, 0x84uLL);
            v15 = *(unsigned __int16 **)(a2 + 32);
            v16 = v15[1];
            if ( (unsigned __int16)v16 >= 0x84u )
              v16 = 132;
            memmove(a1[447], v15, v16);
            v17 = *(_WORD **)(a2 + 40);
            v18 = v17[1];
            if ( v18 < 0x84u )
              v5 = v18;
            memmove(a1[448], v17, v5);
            memmove(a1[449], *(const void **)(a2 + 40), v5);
            goto LABEL_27;
          }
        }
      }
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  v20 = a1[448];
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    a1[448] = 0LL;
  }
  v21 = a1[449];
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    a1[449] = 0LL;
  }
  v22 = a1[447];
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    a1[447] = 0LL;
  }
LABEL_27:
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
  {
    v23 = v4;
    WPP_SF_qqd(0x85u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a2, v23);
  }
  return v4;
}
