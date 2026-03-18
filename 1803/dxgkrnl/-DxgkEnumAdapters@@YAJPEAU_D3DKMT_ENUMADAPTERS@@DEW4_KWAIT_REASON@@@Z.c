/*
 * XREFs of ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C0164C30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00D2540 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00D4274 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkEnumAdapters(struct _D3DKMT_ENUMADAPTERS *a1, char a2, char a3, enum _KWAIT_REASON a4)
{
  struct _D3DKMT_ENUMADAPTERS *v7; // rbx
  __int64 v8; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _OWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-198h] BYREF
  __int64 v20; // [rsp+28h] [rbp-190h]
  _DWORD *v21; // [rsp+30h] [rbp-188h]
  _DWORD Src[84]; // [rsp+40h] [rbp-178h] BYREF

  v7 = a1;
  if ( a1 )
  {
    memset(Src, 0, 0x144uLL);
    v19 = 0x1000000000LL;
    v20 = 0LL;
    v21 = &Src[1];
    LOBYTE(v10) = a3;
    v11 = (int)DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v19, a2, v10, a4);
    v12 = (unsigned int)v19;
    if ( (unsigned int)v19 > 0x10 )
    {
      v13 = WdLogNewEntry5_WdAssertion((unsigned int)v19);
      *(_QWORD *)(v13 + 24) = 705LL;
      WdLogEvent5_WdAssertion(v13);
      v12 = (unsigned int)v19;
    }
    if ( (unsigned int)v12 > HIDWORD(v19) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v14 + 24) = 706LL;
      WdLogEvent5_WdAssertion(v14);
      v12 = (unsigned int)v19;
    }
    if ( (unsigned int)v12 > (unsigned int)v20 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v15 + 24) = 707LL;
      WdLogEvent5_WdAssertion(v15);
      v12 = (unsigned int)v19;
    }
    if ( (int)v11 >= 0 )
    {
      Src[0] = v12;
      if ( a2 == 1 )
      {
        if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || &v7[1] <= v7 )
          *(_BYTE *)MmUserProbeAddress = 0;
        v17 = Src;
        v18 = 2LL;
        do
        {
          *(_OWORD *)&v7->NumAdapters = *v17;
          *(_OWORD *)&v7->Adapters[0].NumOfSources = v17[1];
          *(_OWORD *)&v7->Adapters[1].AdapterLuid.HighPart = v17[2];
          *(_OWORD *)&v7->Adapters[2].AdapterLuid.LowPart = v17[3];
          *(_OWORD *)&v7->Adapters[3].hAdapter = v17[4];
          *(_OWORD *)&v7->Adapters[3].bPresentMoveRegionsPreferred = v17[5];
          *(_OWORD *)&v7->Adapters[4].NumOfSources = v17[6];
          v7 = (struct _D3DKMT_ENUMADAPTERS *)((char *)v7 + 128);
          *(_OWORD *)&v7[-1].Adapters[15].AdapterLuid.LowPart = v17[7];
          v17 += 8;
          --v18;
        }
        while ( v18 );
        *(_OWORD *)&v7->NumAdapters = *v17;
        *(_OWORD *)&v7->Adapters[0].NumOfSources = v17[1];
        *(_OWORD *)&v7->Adapters[1].AdapterLuid.HighPart = v17[2];
        *(_OWORD *)&v7->Adapters[2].AdapterLuid.LowPart = v17[3];
        v7->Adapters[3].hAdapter = *((_DWORD *)v17 + 16);
      }
      else
      {
        memmove(v7, Src, 0x144uLL);
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v16 + 24) = v11;
      WdLogEvent5_WdError(v16);
    }
    return (unsigned int)v11;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
