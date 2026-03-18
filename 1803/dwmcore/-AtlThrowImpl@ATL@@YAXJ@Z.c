/*
 * XREFs of ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18020D81C
 * Callers:
 *     ?RemoveAt@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHH@Z @ 0x1800D966C (-RemoveAt@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBL.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800DD3EF (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::AtlThrowImpl(int a1)
{
  int pExceptionObject; // [rsp+30h] [rbp+8h] BYREF

  pExceptionObject = a1;
  throw (ATL::CAtlException *)&pExceptionObject;
}
