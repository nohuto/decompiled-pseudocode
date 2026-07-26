/*
 * XREFs of ndisOidPostTcpConnectionOffloadParameters @ 0x1C0045D50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

void __fastcall ndisOidPostTcpConnectionOffloadParameters(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  size_t v4; // rsi
  unsigned int v5; // eax
  size_t v6; // r8
  __int64 v7; // rax
  unsigned int v8; // eax

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xF9u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3);
  if ( *(_DWORD *)(v3 + 4) == 1 && !*(_DWORD *)(a1 + 40) )
  {
    v4 = 60LL;
    if ( *(_QWORD *)a1 )
    {
      v5 = *(_DWORD *)(v3 + 52);
      if ( v5 < 0x38 )
      {
        *(_DWORD *)(a1 + 40) = -1073741823;
      }
      else
      {
        v6 = 60LL;
        if ( v5 <= 0x3C )
          v6 = v5;
        memmove((void *)(*(_QWORD *)(v1 + 4120) + 992LL), *(const void **)(v3 + 40), v6);
      }
    }
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      v1 = *(_QWORD *)(v7 + 16);
      v8 = *(_DWORD *)(v3 + 52);
      if ( v8 < 0x38 )
      {
        *(_DWORD *)(a1 + 40) = -1073741823;
      }
      else
      {
        if ( v8 <= 0x3C )
          v4 = v8;
        memmove((void *)(*(_QWORD *)(v1 + 4120) + 932LL), *(const void **)(v3 + 40), v4);
      }
    }
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0xFAu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, *(_DWORD *)(a1 + 40));
}
