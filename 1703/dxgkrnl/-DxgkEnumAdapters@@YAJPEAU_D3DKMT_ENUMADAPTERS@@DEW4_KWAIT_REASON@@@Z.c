/*
 * XREFs of ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C017A760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C009800C (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C009FA34 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkEnumAdapters(struct _D3DKMT_ENUMADAPTERS *a1, __int64 a2, char a3, unsigned int a4)
{
  char v6; // si
  struct _D3DKMT_ENUMADAPTERS *v7; // rbx
  __int64 v8; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _OWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-198h] BYREF
  __int64 v24; // [rsp+28h] [rbp-190h]
  _DWORD *v25; // [rsp+30h] [rbp-188h]
  _DWORD Src[84]; // [rsp+40h] [rbp-178h] BYREF

  v6 = a2;
  v7 = a1;
  if ( a1 )
  {
    memset(Src, 0, 0x144uLL);
    v23 = 0x1000000000LL;
    v24 = 0LL;
    v25 = &Src[1];
    LOBYTE(v10) = a3;
    LOBYTE(v11) = v6;
    v13 = (int)DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v23, v11, v10, a4);
    v16 = (unsigned int)v23;
    if ( (unsigned int)v23 > 0x10 )
    {
      v17 = WdLogNewEntry5_WdAssertion((unsigned int)v23, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = 673LL;
      WdLogEvent5_WdAssertion(v17);
      v16 = (unsigned int)v23;
    }
    if ( (unsigned int)v16 > HIDWORD(v23) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v16, v12, v14, v15);
      *(_QWORD *)(v18 + 24) = 674LL;
      WdLogEvent5_WdAssertion(v18);
      v16 = (unsigned int)v23;
    }
    if ( (unsigned int)v16 > (unsigned int)v24 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v16, v12, v14, v15);
      *(_QWORD *)(v19 + 24) = 675LL;
      WdLogEvent5_WdAssertion(v19);
      v16 = (unsigned int)v23;
    }
    if ( (int)v13 >= 0 )
    {
      Src[0] = v16;
      if ( v6 == 1 )
      {
        if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || &v7[1] <= v7 )
          *(_BYTE *)MmUserProbeAddress = 0;
        v21 = Src;
        v22 = 2LL;
        do
        {
          *(_OWORD *)&v7->NumAdapters = *v21;
          *(_OWORD *)&v7->Adapters[0].NumOfSources = v21[1];
          *(_OWORD *)&v7->Adapters[1].AdapterLuid.HighPart = v21[2];
          *(_OWORD *)&v7->Adapters[2].AdapterLuid.LowPart = v21[3];
          *(_OWORD *)&v7->Adapters[3].hAdapter = v21[4];
          *(_OWORD *)&v7->Adapters[3].bPresentMoveRegionsPreferred = v21[5];
          *(_OWORD *)&v7->Adapters[4].NumOfSources = v21[6];
          v7 = (struct _D3DKMT_ENUMADAPTERS *)((char *)v7 + 128);
          *(_OWORD *)&v7[-1].Adapters[15].AdapterLuid.LowPart = v21[7];
          v21 += 8;
          --v22;
        }
        while ( v22 );
        *(_OWORD *)&v7->NumAdapters = *v21;
        *(_OWORD *)&v7->Adapters[0].NumOfSources = v21[1];
        *(_OWORD *)&v7->Adapters[1].AdapterLuid.HighPart = v21[2];
        *(_OWORD *)&v7->Adapters[2].AdapterLuid.LowPart = v21[3];
        v7->Adapters[3].hAdapter = *((_DWORD *)v21 + 16);
      }
      else
      {
        memmove(v7, Src, 0x144uLL);
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v16, v12);
      *(_QWORD *)(v20 + 24) = v13;
      WdLogEvent5_WdError(v20);
    }
    return (unsigned int)v13;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
