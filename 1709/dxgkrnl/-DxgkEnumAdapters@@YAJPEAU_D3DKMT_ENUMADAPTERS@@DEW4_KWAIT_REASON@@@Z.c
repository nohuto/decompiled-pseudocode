/*
 * XREFs of ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C017E140
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E761C (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00F3984 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters(struct _D3DKMT_ENUMADAPTERS *a1, char a2, char a3, KWAIT_REASON a4)
{
  struct _D3DKMT_ENUMADAPTERS *v7; // rbx
  __int64 v8; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _OWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-198h] BYREF
  __int64 v21; // [rsp+28h] [rbp-190h]
  _DWORD *v22; // [rsp+30h] [rbp-188h]
  _DWORD Src[84]; // [rsp+40h] [rbp-178h] BYREF

  v7 = a1;
  if ( a1 )
  {
    memset(Src, 0, 0x144uLL);
    v20 = 0x1000000000LL;
    v21 = 0LL;
    v22 = &Src[1];
    LOBYTE(v10) = a3;
    LOBYTE(v11) = a2;
    v12 = (int)DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v20, v11, v10, a4);
    v13 = (unsigned int)v20;
    if ( (unsigned int)v20 > 0x10 )
    {
      v14 = WdLogNewEntry5_WdAssertion((unsigned int)v20);
      *(_QWORD *)(v14 + 24) = 673LL;
      WdLogEvent5_WdAssertion(v14);
      v13 = (unsigned int)v20;
    }
    if ( (unsigned int)v13 > HIDWORD(v20) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v15 + 24) = 674LL;
      WdLogEvent5_WdAssertion(v15);
      v13 = (unsigned int)v20;
    }
    if ( (unsigned int)v13 > (unsigned int)v21 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v16 + 24) = 675LL;
      WdLogEvent5_WdAssertion(v16);
      v13 = (unsigned int)v20;
    }
    if ( (int)v12 >= 0 )
    {
      Src[0] = v13;
      if ( a2 == 1 )
      {
        if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || &v7[1] <= v7 )
          *(_BYTE *)MmUserProbeAddress = 0;
        v18 = Src;
        v19 = 2LL;
        do
        {
          *(_OWORD *)&v7->NumAdapters = *v18;
          *(_OWORD *)&v7->Adapters[0].NumOfSources = v18[1];
          *(_OWORD *)&v7->Adapters[1].AdapterLuid.HighPart = v18[2];
          *(_OWORD *)&v7->Adapters[2].AdapterLuid.LowPart = v18[3];
          *(_OWORD *)&v7->Adapters[3].hAdapter = v18[4];
          *(_OWORD *)&v7->Adapters[3].bPresentMoveRegionsPreferred = v18[5];
          *(_OWORD *)&v7->Adapters[4].NumOfSources = v18[6];
          v7 = (struct _D3DKMT_ENUMADAPTERS *)((char *)v7 + 128);
          *(_OWORD *)&v7[-1].Adapters[15].AdapterLuid.LowPart = v18[7];
          v18 += 8;
          --v19;
        }
        while ( v19 );
        *(_OWORD *)&v7->NumAdapters = *v18;
        *(_OWORD *)&v7->Adapters[0].NumOfSources = v18[1];
        *(_OWORD *)&v7->Adapters[1].AdapterLuid.HighPart = v18[2];
        *(_OWORD *)&v7->Adapters[2].AdapterLuid.LowPart = v18[3];
        v7->Adapters[3].hAdapter = *((_DWORD *)v18 + 16);
      }
      else
      {
        memmove(v7, Src, 0x144uLL);
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v17 + 24) = v12;
      WdLogEvent5_WdError(v17);
    }
    return (unsigned int)v12;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
