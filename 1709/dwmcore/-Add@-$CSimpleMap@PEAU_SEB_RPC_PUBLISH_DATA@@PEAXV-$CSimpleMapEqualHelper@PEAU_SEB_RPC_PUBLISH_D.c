/*
 * XREFs of ?Add@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@AEBQEAX@Z @ 0x1801CC934
 * Callers:
 *     PubSebRegisterRpc @ 0x1801CCDD0 (PubSebRegisterRpc.c)
 * Callees:
 *     _recalloc @ 0x1800C4160 (_recalloc.c)
 */

__int64 __fastcall ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v5; // rax
  __int64 result; // rax
  char *v7; // rax
  char *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // r8
  char *v11; // rdx

  v5 = _recalloc(Block, (int)qword_180272610 + 1, 8uLL);
  if ( !v5 )
    return 0LL;
  Block = v5;
  v7 = (char *)_recalloc(*(&Block + 1), (int)qword_180272610 + 1, 8uLL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v9 = (int)qword_180272610;
  *(&Block + 1) = v7;
  v10 = (char *)Block + 8 * (int)qword_180272610;
  if ( v10 )
  {
    *v10 = *a2;
    v8 = (char *)*(&Block + 1);
  }
  v11 = &v8[8 * v9];
  if ( v11 )
    *(_QWORD *)v11 = *a3;
  result = 1LL;
  LODWORD(qword_180272610) = qword_180272610 + 1;
  return result;
}
