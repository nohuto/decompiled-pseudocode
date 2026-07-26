/*
 * XREFs of ndisMSetReceiveFilterAttributes @ 0x1C00CA1C8
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00BFE50 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ndisMCheckReceiveFilterPacketCoalescingAttributes @ 0x1C00CA3C0 (ndisMCheckReceiveFilterPacketCoalescingAttributes.c)
 *     ndisShouldSuppressReceiveFilterCapabilities @ 0x1C00CA3D8 (ndisShouldSuppressReceiveFilterCapabilities.c)
 */

__int64 __fastcall ndisMSetReceiveFilterAttributes(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  PVOID PoolWithTag; // rax
  PVOID v9; // rax
  PVOID v10; // rax
  unsigned __int16 *v11; // rdx
  unsigned int v12; // eax
  _WORD *v13; // rdx
  unsigned __int16 v14; // ax
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qq(0x7Eu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, a2);
  v5 = *(_QWORD *)(a2 + 16);
  if ( !*(_BYTE *)(v5 + 1) || *(_WORD *)(v5 + 2) < 0x38u )
  {
    v4 = -1073741811;
LABEL_30:
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073676283 )
      goto LABEL_32;
    goto LABEL_21;
  }
  v6 = *(_QWORD *)(a2 + 24);
  if ( !*(_BYTE *)(v6 + 1) || *(_WORD *)(v6 + 2) < 0x38u )
  {
    v4 = -1073741811;
    goto LABEL_32;
  }
  if ( (unsigned __int8)((__int64 (*)(void))ndisShouldSuppressReceiveFilterCapabilities)()
    || (unsigned __int8)ndisShouldSuppressReceiveFilterCapabilities(*(_QWORD *)(a2 + 24)) )
  {
    if ( (unsigned __int8)byte_1C0098754 < 4u )
      return v4;
    WPP_SF_qqq(0x7Fu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
    goto LABEL_21;
  }
  v4 = ndisMCheckReceiveFilterPacketCoalescingAttributes(*(_QWORD *)(a2 + 16));
  if ( v4 )
    goto LABEL_30;
  v4 = ndisMCheckReceiveFilterPacketCoalescingAttributes(*(_QWORD *)(a2 + 24));
  if ( v4 )
    goto LABEL_30;
  if ( !*(_QWORD *)(a1 + 3560) && !*(_QWORD *)(a1 + 3552) )
  {
    v7 = 84;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x54uLL, 0x666F444Eu);
    *(_QWORD *)(a1 + 3560) = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x54uLL, 0x666F444Eu);
      *(_QWORD *)(a1 + 3568) = v9;
      if ( v9 )
      {
        v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x54uLL, 0x666F444Eu);
        *(_QWORD *)(a1 + 3552) = v10;
        if ( v10 )
        {
          memset(*(void **)(a1 + 3568), 0, 0x54uLL);
          memset(*(void **)(a1 + 3560), 0, 0x54uLL);
          memset(*(void **)(a1 + 3552), 0, 0x54uLL);
          v11 = *(unsigned __int16 **)(a2 + 16);
          v12 = v11[1];
          if ( (unsigned __int16)v12 >= 0x54u )
            v12 = 84;
          memmove(*(void **)(a1 + 3552), v11, v12);
          v13 = *(_WORD **)(a2 + 24);
          v14 = v13[1];
          if ( v14 < 0x54u )
            v7 = v14;
          memmove(*(void **)(a1 + 3560), v13, v7);
          memmove(*(void **)(a1 + 3568), *(const void **)(a2 + 24), v7);
          *(_DWORD *)(a1 + 3548) = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL);
          *(_DWORD *)(a1 + 3544) = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
          goto LABEL_21;
        }
      }
    }
    v4 = -1073741670;
LABEL_32:
    v16 = *(void **)(a1 + 3560);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0);
      *(_QWORD *)(a1 + 3560) = 0LL;
    }
    v17 = *(void **)(a1 + 3568);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *(_QWORD *)(a1 + 3568) = 0LL;
    }
    v18 = *(void **)(a1 + 3552);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *(_QWORD *)(a1 + 3552) = 0LL;
    }
    goto LABEL_21;
  }
  v4 = -1073676283;
LABEL_21:
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
  {
    LODWORD(v19) = v4;
    WPP_SF_qqd(0x80u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, a2, v19);
  }
  return v4;
}
