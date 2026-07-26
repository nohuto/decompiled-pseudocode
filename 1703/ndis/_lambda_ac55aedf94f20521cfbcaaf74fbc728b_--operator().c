/*
 * XREFs of _lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator() @ 0x1C00F16B0
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_43d9c6f647151fdb2f2362c6d885aaea___lambda_ac55aedf94f20521cfbcaaf74fbc728b___ @ 0x1C00F1500 (KRegKey--QueryValueMultisz__lambda_43d9c6f647151fdb2f2362c6d885aaea___lambda_ac55aedf94f20521cfb.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C00B1D94 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 *     ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B52C4 (-append@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00BFCC4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00DAEF8 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ?ParseV1FilterString@BindStack@Ndis@@AEAA_NPEBGPEAU_NDIS_FILTERLIST_ITEM@@@Z @ 0x1C00F1AD0 (-ParseV1FilterString@BindStack@Ndis@@AEAA_NPEBGPEAU_NDIS_FILTERLIST_ITEM@@@Z.c)
 */

__int64 __fastcall lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator()(
        Ndis::BindStack *a1,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rdi
  void *v5; // rcx
  __int64 *v7; // rax
  char v8; // di
  NDIS_BIND_LINK_BASE *v9; // rbx
  __int64 v10; // rcx
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  struct _NDIS_FILTERLIST_ITEM v12; // [rsp+28h] [rbp-30h] BYREF

  LODWORD(P) = 0;
  v4 = a3;
  if ( !Ndis::BindStack::ParseV1FilterString(a1, a2, &v12) )
    return 3221225485LL;
  v7 = (__int64 *)Ndis::BindStack::BuildFilterLink(v5, (NDIS_BIND_LINK_BASE **)&P, &v12, v12.FilterIndex);
  if ( !Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>>::append(
          *(_QWORD *)&a1->Protocols.m_bufferSize + 16LL,
          v7) )
    goto LABEL_8;
  if ( v4 >= *(unsigned int *)(*(_QWORD *)&a1->Protocols.m_bufferSize + 20LL) )
    __fastfail(0xBAD0FFu);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&a1->Protocols.m_bufferSize + 24LL) + 8 * v4) )
    v8 = 0;
  else
LABEL_8:
    v8 = 1;
  v9 = (NDIS_BIND_LINK_BASE *)P;
  if ( P )
  {
    v10 = *((_QWORD *)P + 10);
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 72), 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((_QWORD *)v10);
    }
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v9);
    ExFreePoolWithTag(v9, 0x4C6C4642u);
  }
  return v8 != 0 ? 0xC000009A : 0;
}
