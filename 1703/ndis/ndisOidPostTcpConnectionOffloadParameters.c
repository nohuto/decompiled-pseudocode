/*
 * XREFs of ndisOidPostTcpConnectionOffloadParameters @ 0x1C0048930
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 */

void __fastcall ndisOidPostTcpConnectionOffloadParameters(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  char v4; // r14
  size_t v5; // rsi
  unsigned int v6; // eax
  size_t v7; // r8
  __int64 v8; // rax
  unsigned int v9; // eax

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qq(0xE7u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, v3);
    v4 = byte_1C0092612;
  }
  if ( *(_DWORD *)(v3 + 4) == 1 && !*(_DWORD *)(a1 + 40) )
  {
    v5 = 60LL;
    if ( *(_QWORD *)a1 )
    {
      v6 = *(_DWORD *)(v3 + 52);
      if ( v6 < 0x38 )
      {
        *(_DWORD *)(a1 + 40) = -1073741823;
      }
      else
      {
        v7 = 60LL;
        if ( v6 <= 0x3C )
          v7 = v6;
        memmove((void *)(*(_QWORD *)(v1 + 4120) + 992LL), *(const void **)(v3 + 40), v7);
      }
    }
    v8 = *(_QWORD *)(a1 + 24);
    if ( v8 )
    {
      v1 = *(_QWORD *)(v8 + 16);
      v9 = *(_DWORD *)(v3 + 52);
      if ( v9 < 0x38 )
      {
        *(_DWORD *)(a1 + 40) = -1073741823;
      }
      else
      {
        if ( v9 <= 0x3C )
          v5 = v9;
        memmove((void *)(*(_QWORD *)(v1 + 4120) + 932LL), *(const void **)(v3 + 40), v5);
      }
    }
  }
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qD(0xE8u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, *(_DWORD *)(a1 + 40));
}
