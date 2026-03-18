/*
 * XREFs of ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00FDCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000F5AC (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C000F5F4 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 */

__int64 __fastcall QueryVidPnExclusiveOwnershipCallBack(struct DXGADAPTER *a1, char *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int i; // edi
  int VidPnSourceOwnerType; // ebp
  __int64 v9; // rcx
  const struct tagRECT *ContentRect; // rax
  int v11; // edx
  int v12; // edx
  _QWORD *v14; // rax
  __int64 v15; // rax
  struct tagRECT v16; // [rsp+20h] [rbp-38h]
  _BYTE v17[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v18; // [rsp+38h] [rbp-20h]
  char v19; // [rsp+40h] [rbp-18h]

  v18 = a1;
  v19 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    v6 = *((_QWORD *)a1 + 288);
    for ( i = 0; i < *(_DWORD *)(v6 + 80); ++i )
    {
      VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v6, i);
      if ( ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((DXGADAPTER ***)a1 + 288), i) )
        VidPnSourceOwnerType = 4;
      if ( (unsigned int)(VidPnSourceOwnerType - 2) <= 2 )
      {
        v9 = *((_QWORD *)a1 + 288);
        if ( *(_QWORD *)(3760LL * i + *(_QWORD *)(v9 + 112) + 712) == *(_QWORD *)a2 )
        {
          ContentRect = ADAPTER_DISPLAY::GetContentRect((DXGADAPTER **)v9, i);
          v11 = *((_DWORD *)a2 + 2);
          v16 = *ContentRect;
          if ( ContentRect->left <= v11 && v16.right >= v11 )
          {
            v12 = *((_DWORD *)a2 + 3);
            if ( v16.top <= v12 && v16.bottom >= v12 )
            {
              if ( *((_DWORD *)a2 + 4) != -1 )
              {
                v15 = WdLogNewEntry5_WdAssertion(HIDWORD(*(_QWORD *)&v16.left));
                *(_QWORD *)(v15 + 24) = 8106LL;
                WdLogEvent5_WdAssertion(v15);
              }
              *((_DWORD *)a2 + 4) = i;
              *(_QWORD *)(a2 + 20) = *(_QWORD *)((char *)a1 + 268);
              *((_DWORD *)a2 + 7) = VidPnSourceOwnerType;
            }
          }
        }
      }
      v6 = *((_QWORD *)a1 + 288);
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4);
    v14[3] = a1;
    v14[4] = *((int *)a1 + 68);
    v14[5] = *((unsigned int *)a1 + 67);
  }
  if ( v19 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
  return 0LL;
}
