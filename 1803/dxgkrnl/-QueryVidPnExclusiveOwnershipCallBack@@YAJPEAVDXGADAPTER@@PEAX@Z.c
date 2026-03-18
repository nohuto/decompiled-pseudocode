/*
 * XREFs of ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C010BC70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0019B40 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0019B84 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0019BCC (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 */

__int64 __fastcall QueryVidPnExclusiveOwnershipCallBack(struct DXGADAPTER *a1, char *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int i; // esi
  int VidPnSourceOwnerType; // ebp
  _QWORD *v12; // rax
  __int64 v13; // rcx
  const struct tagRECT *ContentRect; // rax
  int v15; // edx
  int v16; // edx
  __int64 v17; // rax
  struct tagRECT v18; // [rsp+20h] [rbp-38h]
  _BYTE v19[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v20; // [rsp+38h] [rbp-20h]
  char v21; // [rsp+40h] [rbp-18h]

  v20 = a1;
  v21 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    v8 = *((_QWORD *)a1 + 307);
    for ( i = 0; i < *(_DWORD *)(v8 + 80); ++i )
    {
      VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v8, i);
      if ( ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((DXGADAPTER ***)a1 + 307), i) )
        VidPnSourceOwnerType = 4;
      if ( (unsigned int)(VidPnSourceOwnerType - 2) <= 2 )
      {
        v13 = *((_QWORD *)a1 + 307);
        if ( *(_QWORD *)(3760LL * i + *(_QWORD *)(v13 + 112) + 712) == *(_QWORD *)a2 )
        {
          ContentRect = ADAPTER_DISPLAY::GetContentRect((DXGADAPTER **)v13, i);
          v15 = *((_DWORD *)a2 + 2);
          v18 = *ContentRect;
          if ( ContentRect->left <= v15 && v18.right >= v15 )
          {
            v16 = *((_DWORD *)a2 + 3);
            if ( v18.top <= v16 && v18.bottom >= v16 )
            {
              if ( *((_DWORD *)a2 + 4) != -1 )
              {
                v17 = WdLogNewEntry5_WdAssertion(HIDWORD(*(_QWORD *)&v18.left));
                *(_QWORD *)(v17 + 24) = 8850LL;
                WdLogEvent5_WdAssertion(v17);
              }
              *((_DWORD *)a2 + 4) = i;
              *(_QWORD *)(a2 + 20) = *(_QWORD *)((char *)a1 + 268);
              *((_DWORD *)a2 + 7) = VidPnSourceOwnerType;
            }
          }
        }
      }
      v8 = *((_QWORD *)a1 + 307);
    }
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    v12[3] = a1;
    v12[4] = *((int *)a1 + 68);
    v12[5] = *((unsigned int *)a1 + 67);
  }
  if ( v21 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
  return 0LL;
}
