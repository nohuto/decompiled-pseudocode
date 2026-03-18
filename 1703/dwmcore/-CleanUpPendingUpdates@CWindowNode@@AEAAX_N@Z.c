/*
 * XREFs of ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x180050588
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800538D0 (--1CWindowNode@@MEAA@XZ.c)
 *     ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x180053DF8 (-ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z.c)
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x18012A668 (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1800CC130 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x180162AC8 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
 */

void __fastcall CWindowNode::CleanUpPendingUpdates(CWindowNode *this, char a2)
{
  struct _RTL_GENERIC_TABLE *v3; // rbp
  _QWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  PVOID v10; // rax
  unsigned int i; // edi
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  PVOID RestartKey; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 688);
LABEL_2:
  RestartKey = 0LL;
  while ( 1 )
  {
    v5 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v5 )
      break;
    if ( !a2 )
    {
      v6 = *((_DWORD *)this + 240);
      if ( v6 )
      {
        if ( *(_DWORD *)v5 == v6 )
          continue;
      }
      v7 = *((_QWORD *)this + 112);
      if ( v7 )
      {
        if ( *(_DWORD *)v5 == *(_DWORD *)(v7 + 200) )
          continue;
      }
    }
    v8 = *(_DWORD *)v5;
    v13 = 0LL;
    Buffer = v8;
    v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    v10 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v9 + 232), &Buffer);
    if ( v10 )
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(v9 + 232), v10);
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v5[1] + 16LL));
    for ( i = 0; i < *((_DWORD *)v5 + 10); ++i )
      CWindowNode::PendingDxUpdate::ReleaseResponses((CWindowNode::PendingDxUpdate *)(v5[2] + 88LL * i));
    *((_DWORD *)v5 + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5 + 2, 88LL);
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(v3, v5);
    goto LABEL_2;
  }
}
