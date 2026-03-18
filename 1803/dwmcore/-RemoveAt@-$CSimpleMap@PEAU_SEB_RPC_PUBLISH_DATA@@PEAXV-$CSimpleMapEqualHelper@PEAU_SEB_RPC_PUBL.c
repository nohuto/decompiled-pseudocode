/*
 * XREFs of ?RemoveAt@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHH@Z @ 0x1800D966C
 * Callers:
 *     PubSebUnregisterRpc @ 0x1800D94F8 (PubSebUnregisterRpc.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18020D81C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  int v3; // r10d
  errno_t v4; // eax
  errno_t v5; // eax
  void *v6; // rax
  void *v7; // rax
  __int64 result; // rax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v3 = qword_1802D68A0;
  if ( a2 >= (int)qword_1802D68A0 )
    return 0LL;
  if ( a2 != (_DWORD)qword_1802D68A0 - 1 )
  {
    v4 = memmove_s(
           (char *)Block + 8 * a2,
           8LL * ((int)qword_1802D68A0 - a2),
           (char *)Block + 8 * a2 + 8,
           8LL * ((int)qword_1802D68A0 - a2 - 1));
    if ( v4 )
    {
      if ( v4 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v4 == 22 || v4 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v4 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
    v5 = memmove_s(
           (char *)*(&Block + 1) + 8 * v2,
           8LL * ((int)qword_1802D68A0 - (int)v2),
           (char *)*(&Block + 1) + 8 * v2 + 8,
           8LL * ((int)qword_1802D68A0 - (int)v2 - 1));
    if ( v5 )
    {
      if ( v5 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v5 == 22 || v5 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v5 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
    v3 = qword_1802D68A0;
  }
  v6 = (void *)_o__recalloc(Block, v3 - 1, 8LL);
  if ( v6 || (_DWORD)qword_1802D68A0 == 1 )
    Block = v6;
  v7 = (void *)_o__recalloc(*(&Block + 1), (int)qword_1802D68A0 - 1, 8LL);
  if ( v7 || (_DWORD)qword_1802D68A0 == 1 )
    *(&Block + 1) = v7;
  result = 1LL;
  LODWORD(qword_1802D68A0) = qword_1802D68A0 - 1;
  return result;
}
