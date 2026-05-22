/*
 * XREFs of _lambda_27c13b3ab3cd98c6277acab12c7fb549_::operator() @ 0x1800C3B64
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C2EFC (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     wil::details::lambda_call__lambda_27c13b3ab3cd98c6277acab12c7fb549___::_lambda_call__lambda_27c13b3ab3cd98c6277acab12c7fb549___ @ 0x1800C8B70 (wil--details--lambda_call__lambda_27c13b3ab3cd98c6277acab12c7fb549___--_lambda_call__lambda_27c1.c)
 * Callees:
 *     <none>
 */

void __fastcall lambda_27c13b3ab3cd98c6277acab12c7fb549_::operator()(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  RTL_SRWLOCK *v3; // rsi
  unsigned __int64 Ptr; // rax
  _QWORD *i; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  _QWORD *j; // rdi
  _QWORD *v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = **(RTL_SRWLOCK ***)a1;
  AcquireSRWLockExclusive(v3 + 7);
  if ( v2 )
  {
    Ptr = (unsigned __int64)v3[12].Ptr;
    for ( i = v3[11].Ptr; i != (_QWORD *)Ptr && *i != v2; ++i )
      ;
    if ( i != (_QWORD *)Ptr )
    {
      v6 = i + 1;
      v7 = 0LL;
      v8 = (Ptr - (unsigned __int64)(i + 1) + 7) >> 3;
      if ( (unsigned __int64)(i + 1) > Ptr )
        v8 = 0LL;
      if ( v8 )
      {
        do
        {
          if ( *v6 != v2 )
            *i++ = *v6;
          ++v6;
          ++v7;
        }
        while ( v7 != v8 );
      }
    }
    v9 = v3[12].Ptr;
    if ( i != v9 )
    {
      memmove(i, v9, 0LL);
      v3[12].Ptr = i;
    }
  }
  if ( v1 )
  {
    v10 = (unsigned __int64)v3[9].Ptr;
    for ( j = v3[8].Ptr; j != (_QWORD *)v10 && *j != v1; ++j )
      ;
    if ( j != (_QWORD *)v10 )
    {
      v12 = j + 1;
      v13 = 0LL;
      v14 = (v10 - (unsigned __int64)(j + 1) + 7) >> 3;
      if ( (unsigned __int64)(j + 1) > v10 )
        v14 = 0LL;
      if ( v14 )
      {
        do
        {
          if ( *v12 != v1 )
            *j++ = *v12;
          ++v12;
          ++v13;
        }
        while ( v13 != v14 );
      }
    }
    v15 = v3[9].Ptr;
    if ( j != v15 )
    {
      memmove(j, v15, 0LL);
      v3[9].Ptr = j;
    }
  }
  if ( v3 != (RTL_SRWLOCK *)-56LL )
    ReleaseSRWLockExclusive(v3 + 7);
}
