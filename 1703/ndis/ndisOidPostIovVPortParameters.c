/*
 * XREFs of ndisOidPostIovVPortParameters @ 0x1C006B970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006ABA8 (ndisIovFindVPortByVPortId.c)
 */

void __fastcall ndisOidPostIovVPortParameters(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 *VPortByVPortId; // rdx
  KIRQL v6; // r10
  int v7; // eax
  __int64 v8; // r8
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rcx

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_qq(0x39u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v3, v1);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) == 1 && v3 && !*(_DWORD *)(a1 + 40) )
  {
    v4 = *(_QWORD *)(v1 + 40);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 1856) = 2889029;
    VPortByVPortId = ndisIovFindVPortByVPortId(v3, *(_DWORD *)(v4 + 12));
    if ( VPortByVPortId )
    {
      v7 = *(_DWORD *)(v4 + 4);
      if ( (v7 & 0x10000) != 0 )
        *((_DWORD *)VPortByVPortId + 29) = (unsigned __int16)v7;
      if ( (*(_DWORD *)(v4 + 4) & 0x40000) != 0 )
        *((_DWORD *)VPortByVPortId + 163) = *(_DWORD *)(v4 + 540);
      if ( (*(_DWORD *)(v4 + 4) & 0x80000) != 0 )
        *((_DWORD *)VPortByVPortId + 164) = *(_DWORD *)(v4 + 544);
      if ( (*(_DWORD *)(v4 + 4) & 0x100000) != 0 )
        *(_OWORD *)(VPortByVPortId + 83) = *(_OWORD *)(v4 + 552);
      if ( (*(_DWORD *)(v4 + 4) & 0x20000) != 0 )
      {
        v8 = 4LL;
        v9 = VPortByVPortId + 16;
        v10 = (_OWORD *)(v4 + 16);
        do
        {
          *v9 = *v10;
          v9[1] = v10[1];
          v9[2] = v10[2];
          v9[3] = v10[3];
          v9[4] = v10[4];
          v9[5] = v10[5];
          v9[6] = v10[6];
          v9 += 8;
          v11 = v10[7];
          v10 += 8;
          *(v9 - 1) = v11;
          --v8;
        }
        while ( v8 );
        *(_DWORD *)v9 = *(_DWORD *)v10;
      }
      if ( (*(_DWORD *)(v4 + 4) & 0x800000) != 0 )
      {
        v12 = VPortByVPortId[11];
        if ( v12 )
        {
          if ( *(_DWORD *)(v4 + 12) )
          {
            *(_DWORD *)(v12 + 96) -= *((_DWORD *)VPortByVPortId + 162);
            *(_DWORD *)(VPortByVPortId[11] + 96) += *(_DWORD *)(v4 + 536);
          }
          else
          {
            *(_DWORD *)(v12 + 648) = *(_DWORD *)(v4 + 536);
          }
          *((_DWORD *)VPortByVPortId + 162) = *(_DWORD *)(v4 + 536);
        }
      }
    }
    else
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v6);
  }
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_qq(0x3Au, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v3, v1);
}
