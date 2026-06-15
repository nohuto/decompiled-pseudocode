/*
 * XREFs of s_CreateHolographicDisplay @ 0x1800DC080
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCHMDManager@@QEAAPEAXI@Z @ 0x1800DBB90 (--_GCHMDManager@@QEAAPEAXI@Z.c)
 *     ?InitHolographicDisplay@CHMDManager@@QEAAJXZ @ 0x1800DBE34 (-InitHolographicDisplay@CHMDManager@@QEAAJXZ.c)
 */

__int64 __fastcall s_CreateHolographicDisplay(__int64 a1, CHMDManager **a2)
{
  RPC_STATUS v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  CHMDManager *v7; // rdi
  CHMDManager *v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r9
  int inited; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v14; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = I_RpcBindingInqLocalClientPID(0LL, &v14);
  if ( v3 )
  {
    v4 = v3 | 0x80010000;
    v5 = 105LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
      (const char *)v4);
    return v4;
  }
  if ( LODWORD(g_ADGProcess[2].OwningThread) != v14 )
  {
    v4 = -2147024891;
    v5 = 110LL;
    goto LABEL_3;
  }
  v7 = (CHMDManager *)operator new(0x18uLL);
  if ( v7 )
  {
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v7;
  if ( v7 )
  {
    inited = CHMDManager::InitHolographicDisplay(v7);
    v9 = inited;
    if ( inited >= 0 )
    {
      v8 = 0LL;
      *a2 = v7;
      v9 = 0;
      v7 = 0LL;
      goto LABEL_15;
    }
    v11 = (unsigned int)inited;
    v10 = 116LL;
  }
  else
  {
    v9 = -2147024882;
    v10 = 114LL;
    v11 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
    (const char *)v11);
LABEL_15:
  if ( v7 )
    CHMDManager::`scalar deleting destructor'(v8);
  return v9;
}
