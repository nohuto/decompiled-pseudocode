/*
 * XREFs of sub_180078F84 @ 0x180078F84
 * Callers:
 *     TpCallbackMayRunLong @ 0x180078F20 (TpCallbackMayRunLong.c)
 * Callees:
 *     sub_18007F1E0 @ 0x18007F1E0 (sub_18007F1E0.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall sub_180078F84(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3,
        signed __int32 *a4,
        signed __int32 *a5)
{
  __int64 v8; // rbx
  volatile signed __int32 *v9; // rbx
  signed __int32 v10; // edi
  signed __int32 v11; // esi
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // rcx
  signed __int64 v16; // [rsp+40h] [rbp+8h]

  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    sub_1801058B8(a1, a2);
    return 3221225485LL;
  }
  v8 = *(_QWORD *)(a1 + 184);
  if ( v8 )
    v9 = *(volatile signed __int32 **)(v8 + 144);
  else
    v9 = *(volatile signed __int32 **)(a1 + 128);
  if ( !v9 )
    return 3221225485LL;
  if ( (volatile signed __int32 *)qword_18015C368 == v9 )
    return 3221225659LL;
  v10 = _InterlockedDecrement(v9 + 104);
  v11 = _InterlockedIncrement(v9 + 105);
  _m_prefetchw((const void *)(v9 + 2));
  v12 = *((_QWORD *)v9 + 1);
  v16 = v12;
  do
  {
    LODWORD(v16) = (unsigned __int16)(v16 ^ (v16 + 1)) ^ (unsigned int)v16;
    v13 = v12;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 1, v16, v12);
    v16 = v12;
  }
  while ( v13 != v12 );
  *(_DWORD *)(a1 + 144) |= 0x10u;
  v14 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 72) = a2;
  if ( v14 )
    sub_18007F1E0();
  *a3 = v9;
  *a4 = v10;
  *a5 = v11;
  return 0LL;
}
