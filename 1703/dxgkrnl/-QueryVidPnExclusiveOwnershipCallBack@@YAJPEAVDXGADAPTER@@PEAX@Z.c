/*
 * XREFs of ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C017B6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B47C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0020820 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C00252F0 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall QueryVidPnExclusiveOwnershipCallBack(struct DXGADAPTER *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rax
  unsigned int i; // esi
  int VidPnSourceOwnerType; // ebp
  __int64 v12; // rcx
  const struct tagRECT *ContentRect; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v21; // [rsp+28h] [rbp-20h]
  char v22; // [rsp+30h] [rbp-18h]

  v21 = a1;
  v22 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    v9 = *((_QWORD *)a1 + 285);
    for ( i = 0; i < *(_DWORD *)(v9 + 80); ++i )
    {
      VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v9, i);
      if ( ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((DXGADAPTER ***)a1 + 285), i) )
        VidPnSourceOwnerType = 4;
      if ( (unsigned int)(VidPnSourceOwnerType - 2) <= 2 )
      {
        v12 = *((_QWORD *)a1 + 285);
        if ( *(_QWORD *)(3208LL * i + *(_QWORD *)(v12 + 112) + 712) == *(_QWORD *)a2 )
        {
          ContentRect = ADAPTER_DISPLAY::GetContentRect((DXGADAPTER **)v12, i);
          if ( ContentRect->left == a2[2] && ContentRect->right == a2[4] && ContentRect->top == a2[3] )
          {
            v17 = a2[5];
            if ( ContentRect->bottom == (_DWORD)v17 )
            {
              if ( a2[6] != -1 )
              {
                v18 = WdLogNewEntry5_WdAssertion(v17, v14, v15, v16);
                *(_QWORD *)(v18 + 24) = 7798LL;
                WdLogEvent5_WdAssertion(v18);
              }
              a2[6] = i;
              *(_QWORD *)(a2 + 7) = *(_QWORD *)((char *)a1 + 268);
              a2[9] = VidPnSourceOwnerType;
            }
          }
        }
      }
      v9 = *((_QWORD *)a1 + 285);
    }
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    v8[3] = a1;
    v8[4] = *((int *)a1 + 68);
    v8[5] = *((unsigned int *)a1 + 67);
  }
  if ( v22 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
  return 0LL;
}
