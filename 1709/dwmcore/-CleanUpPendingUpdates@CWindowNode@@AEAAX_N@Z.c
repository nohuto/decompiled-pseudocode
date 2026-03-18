/*
 * XREFs of ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x180099410
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x18009C498 (--1CWindowNode@@MEAA@XZ.c)
 *     ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x18009CA54 (-ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z.c)
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x18011A31C (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1801798FC (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x180179940 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
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

  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 712);
LABEL_2:
  RestartKey = 0LL;
  while ( 1 )
  {
    v5 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v5 )
      break;
    if ( !a2 )
    {
      v6 = *((_DWORD *)this + 246);
      if ( v6 )
      {
        if ( *(_DWORD *)v5 == v6 )
          continue;
      }
      v7 = *((_QWORD *)this + 115);
      if ( v7 )
      {
        if ( *(_DWORD *)v5 == *(_DWORD *)(v7 + 208) )
          continue;
      }
    }
    v8 = *(_DWORD *)v5;
    v13 = 0LL;
    Buffer = v8;
    v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 80LL);
    v10 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v9 + 232), &Buffer);
    if ( v10 )
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(v9 + 232), v10);
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v5[1] + 16LL));
    for ( i = 0; i < *((_DWORD *)v5 + 10); ++i )
      CWindowNode::PendingDxUpdate::ReleaseResponses((CWindowNode::PendingDxUpdate *)(v5[2] + 88LL * i));
    *((_DWORD *)v5 + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)(v5 + 2), 0x58u);
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(v3, v5);
    goto LABEL_2;
  }
}
