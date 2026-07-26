/*
 * XREFs of ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C00BE574
 * Callers:
 *     _lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator() @ 0x1C00BEC94 (_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_--operator().c)
 *     _lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator() @ 0x1C00FABA4 (_lambda_ac55aedf94f20521cfbcaaf74fbc728b_--operator().c)
 * Callees:
 *     ??$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@XZ @ 0x1C0010C40 (--$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00BE238 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E4F08 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

NDIS_BIND_LINK_BASE **__fastcall Ndis::BindStack::BuildFilterLink(
        void *a1,
        NDIS_BIND_LINK_BASE **a2,
        _QWORD *a3,
        int a4)
{
  volatile signed __int32 *v6; // rbx
  NDIS_BIND_LINK_BASE *v7; // rax
  volatile signed __int32 **v8; // r14
  volatile signed __int32 *v9; // rcx
  NDIS_BIND_LINK_BASE *v11; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = a1;
  ndisBindGetFilterDriver((volatile signed __int32 **)&P, a3, 0);
  v6 = (volatile signed __int32 *)P;
  if ( P )
  {
    wil::make_unique_nothrow<NDIS_BIND_FILTER_LINK,>(&v11);
    v7 = v11;
    if ( v11 )
    {
      v8 = (volatile signed __int32 **)&v11[1];
      if ( &v11[1] != (NDIS_BIND_LINK_BASE *)&P )
      {
        v9 = *v8;
        if ( v6 != *v8 )
        {
          if ( v9 )
          {
            if ( _InterlockedExchangeAdd(v9 + 16, 0xFFFFFFFF) == 1 )
              KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v9);
            v6 = (volatile signed __int32 *)P;
          }
          *v8 = v6;
          _InterlockedIncrement(v6 + 16);
          v6 = (volatile signed __int32 *)P;
          v7 = v11;
        }
      }
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
