/*
 * XREFs of ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18003A920
 * Callers:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18003AEC4 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18003BC9C (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18003BD74 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 * Callees:
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x180038488 (--1CTargetMapEntry@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CExpressionManager::UnregisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  CTargetMapEntry *v4; // rax
  void *v5; // rsi
  CTargetMapEntry *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // edx
  struct CBaseExpression **v14; // rax
  __int64 v15; // rax
  void *v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // eax
  struct CBaseExpression **i; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // r8d
  struct CBaseExpression **v23; // rcx
  __int128 v24; // [rsp+20h] [rbp-48h]
  __int128 Buffer; // [rsp+30h] [rbp-38h] BYREF
  void *v26; // [rsp+40h] [rbp-28h]

  *(_QWORD *)&v24 = *((_QWORD *)a2 + 22);
  DWORD2(v24) = *((_DWORD *)a2 + 46);
  v26 = 0LL;
  Buffer = v24;
  v4 = (CTargetMapEntry *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 336), &Buffer);
  v5 = v26;
  v6 = v4;
  while ( v5 )
  {
    v16 = v5;
    v5 = (void *)*((_QWORD *)v5 + 2);
    operator delete(v16, 0x18uLL);
  }
  if ( v6 )
  {
    v7 = *((_QWORD *)v6 + 2);
    v8 = v7;
    v9 = v7;
    if ( v7 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v8 + 16);
        if ( *(struct CBaseExpression **)(v8 + 8) == a2 )
          break;
        v9 = v8;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v10 )
          goto LABEL_8;
      }
      if ( v8 == v7 )
        *((_QWORD *)v6 + 2) = v10;
      else
        *(_QWORD *)(v9 + 16) = v10;
      operator delete((void *)v8, 0x18uLL);
    }
LABEL_8:
    if ( !*((_QWORD *)v6 + 2) )
    {
      CTargetMapEntry::~CTargetMapEntry(v6);
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 336), v6);
    }
  }
  else
  {
    *((_BYTE *)a2 + 208) &= ~2u;
  }
  v11 = 32LL * *((int *)this + 43);
  v12 = 0LL;
  v13 = *(_DWORD *)((char *)this + v11 + 200);
  v14 = *(struct CBaseExpression ***)((char *)this + v11 + 176);
  if ( v13 )
  {
    do
    {
      if ( a2 == *v14 )
        break;
      v12 = (unsigned int)(v12 + 1);
      ++v14;
    }
    while ( (unsigned int)v12 < v13 );
  }
  if ( (unsigned int)v12 < v13 )
  {
    v15 = *(_QWORD *)((char *)this + v11 + 176);
LABEL_15:
    *(_QWORD *)(v15 + 8 * v12) = 0LL;
    goto LABEL_16;
  }
  v17 = *((_DWORD *)this + 82);
  v18 = 0;
  for ( i = (struct CBaseExpression **)*((_QWORD *)this + 38); v18 < v17; ++i )
  {
    if ( a2 == *i )
      break;
    ++v18;
  }
  if ( v18 < v17 )
  {
    v12 = v18;
    v15 = *((_QWORD *)this + 38);
    goto LABEL_15;
  }
LABEL_16:
  if ( (*((_BYTE *)this + 424) & 1) != 0 )
  {
    v20 = 0;
    v21 = 32LL * (1 - *((_DWORD *)this + 43));
    v22 = *(_DWORD *)((char *)this + v21 + 200);
    v23 = *(struct CBaseExpression ***)((char *)this + v21 + 176);
    if ( v22 )
    {
      do
      {
        if ( a2 == *v23 )
          break;
        ++v20;
        ++v23;
      }
      while ( v20 < v22 );
    }
    if ( v20 < v22 )
      *(_QWORD *)(*(_QWORD *)((char *)this + v21 + 176) + 8LL * v20) = 0LL;
  }
}
