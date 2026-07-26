/*
 * XREFs of ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C00BBB14
 * Callers:
 *     _lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator() @ 0x1C00C90FC (_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_--operator().c)
 *     _lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator() @ 0x1C00FD6C8 (_lambda_ac55aedf94f20521cfbcaaf74fbc728b_--operator().c)
 * Callees:
 *     ??$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@XZ @ 0x1C001DE40 (--$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00B5ECC (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00B6318 (-reset@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E6768 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

NDIS_BIND_LINK_BASE **__fastcall Ndis::BindStack::BuildFilterLink(
        void *a1,
        NDIS_BIND_LINK_BASE **a2,
        _QWORD *a3,
        int a4)
{
  volatile signed __int32 *v6; // rbx
  NDIS_BIND_LINK_BASE *v7; // rdi
  NDIS_BIND_LINK_BASE *v9; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = a1;
  ndisBindGetFilterDriver(&P, a3, 0);
  v6 = (volatile signed __int32 *)P;
  if ( P )
  {
    wil::make_unique_nothrow<NDIS_BIND_FILTER_LINK,>(&v9);
    v7 = v9;
    if ( v9 )
    {
      if ( &v9[1] != (NDIS_BIND_LINK_BASE *)&P )
        KRef<NDIS_BIND_FILTER_DRIVER>::reset((volatile signed __int32 **)&v9[1], v6);
      *(_DWORD *)&v7[1].BindState.AllowBindDespiteMandatory = a4;
      *a2 = v7;
    }
    else
    {
      *a2 = 0LL;
    }
    if ( _InterlockedExchangeAdd(v6 + 16, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(P);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
