/*
 * XREFs of _lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator() @ 0x1C00BCC88
 * Callers:
 *     KRegKey::QueryValueBlob__lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31___ @ 0x1C00B0B30 (KRegKey--QueryValueBlob__lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31___.c)
 * Callees:
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C00B1D94 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 *     ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B52C4 (-append@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@QEAA_N_K@Z @ 0x1C00B5318 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00BFCC4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00DAEF8 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator()(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  unsigned int v6; // ebx
  _QWORD *v7; // rcx
  __int64 v8; // rsi
  int v9; // r15d
  __int64 *v10; // rax
  char v11; // bp
  NDIS_BIND_LINK_BASE *v12; // rdi
  volatile signed __int32 *v14; // rcx
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v6 = a3 / 0x12;
  if ( a3 % 0x12uLL )
    return 3221225485LL;
  if ( v6 > 0x80 )
    return 3221226539LL;
  if ( Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>>::reserve(
         (unsigned int *)(*(_QWORD *)a1 + 16LL),
         v6) )
  {
    v8 = 0LL;
    if ( !v6 )
    {
LABEL_12:
      ++*(_DWORD *)(*(_QWORD *)a1 + 96LL);
      return 0LL;
    }
    while ( 1 )
    {
      v9 = v3 | 1;
      v10 = (__int64 *)Ndis::BindStack::BuildFilterLink(
                         v7,
                         (NDIS_BIND_LINK_BASE **)&P,
                         (_QWORD *)(a2 + 18 * v8),
                         *(unsigned __int16 *)(a2 + 18 * v8 + 16));
      if ( !Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>>::append(
              *(_QWORD *)a1 + 16LL,
              v10) )
        goto LABEL_14;
      v7 = *(_QWORD **)a1;
      if ( (unsigned int)v8 >= (unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 20LL) )
        __fastfail(0xBAD0FFu);
      if ( *(_QWORD *)(v7[3] + 8 * v8) )
        v11 = 0;
      else
LABEL_14:
        v11 = 1;
      v12 = (NDIS_BIND_LINK_BASE *)P;
      v3 = v9 & 0xFFFFFFFE;
      if ( P )
      {
        v14 = (volatile signed __int32 *)*((_QWORD *)P + 10);
        if ( v14 )
        {
          if ( _InterlockedExchangeAdd(v14 + 18, 0xFFFFFFFF) == 1 )
            KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v14);
        }
        NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v12);
        ExFreePoolWithTag(v12, 0x4C6C4642u);
      }
      if ( v11 )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v6 )
        goto LABEL_12;
    }
  }
  return 3221225626LL;
}
