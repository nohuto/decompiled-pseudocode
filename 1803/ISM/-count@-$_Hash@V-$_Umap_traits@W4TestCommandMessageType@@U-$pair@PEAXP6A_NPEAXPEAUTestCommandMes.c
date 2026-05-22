/*
 * XREFs of ?count@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBW4TestCommandMessageType@@@Z @ 0x18000A06C
 * Callers:
 *     ??1CommandRegistrationToken@TestCommandHost@@QEAA@XZ @ 0x1800098AC (--1CommandRegistrationToken@TestCommandHost@@QEAA@XZ.c)
 *     ?OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z @ 0x180009ED0 (-OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::count(
        _QWORD *a1,
        int *a2)
{
  __int64 v2; // r10
  unsigned __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  _QWORD *v12; // rdi
  _QWORD *i; // rax
  _QWORD *v14; // rcx
  int v15; // r11d
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // r8

  v2 = 0LL;
  v4 = 0LL;
  v5 = 0xCBF29CE484222325uLL;
  do
  {
    v6 = *((unsigned __int8 *)a2 + v4++);
    v5 = 0x100000001B3LL * (v6 ^ v5);
  }
  while ( v4 < 4 );
  v7 = a1[3];
  v8 = (_QWORD *)a1[1];
  v9 = v5 & a1[6];
  v10 = 2 * (v5 & a1[6]);
  v11 = 2 * v9;
  v12 = *(_QWORD **)(v7 + 16 * v9);
  for ( i = *(_QWORD **)(v7 + 8 * v10); ; i = (_QWORD *)*i )
  {
    if ( v12 == v8 )
      v14 = v8;
    else
      v14 = **(_QWORD ***)(v7 + 8 * v11 + 8);
    if ( i == v14 )
      goto LABEL_18;
    v15 = *a2;
    if ( *((_DWORD *)i + 4) == *a2 )
      break;
  }
  v16 = i;
  v17 = i;
  while ( 1 )
  {
    v18 = v12 == v8 ? v8 : **(_QWORD ***)(v7 + 8 * v10 + 8);
    if ( i == v18 || v15 != *((_DWORD *)i + 4) )
      break;
    i = (_QWORD *)*i;
  }
  if ( v16 == i )
  {
LABEL_18:
    v17 = v8;
    i = v8;
  }
  while ( v17 != i )
  {
    v17 = (_QWORD *)*v17;
    ++v2;
  }
  return v2;
}
