/*
 * XREFs of ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800A7F78
 * Callers:
 *     ??1CExpression@@UEAA@XZ @ 0x1800A81F4 (--1CExpression@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAHPEAVCAnimationSourceMapEntry@@@Z @ 0x1800B6D74 (-RemoveElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAHPEAVCAnimationSourceMapEntr.c)
 */

void __fastcall CExpression::UnregisterSources(CExpression **this)
{
  CExpression *v2; // rbp
  __int64 i; // rsi
  CExpression *v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r14
  int v7; // eax
  struct _RTL_GENERIC_TABLE *v8; // rcx
  _DWORD *v9; // rdi
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 j; // r8
  __int64 v13; // rdx
  int Buffer; // [rsp+20h] [rbp-38h] BYREF
  void *lpMem; // [rsp+28h] [rbp-30h]
  void *v16; // [rsp+30h] [rbp-28h]
  int v17; // [rsp+38h] [rbp-20h]
  int v18; // [rsp+3Ch] [rbp-1Ch]
  int v19; // [rsp+40h] [rbp-18h]

  if ( ((_BYTE)this[50] & 2) != 0 )
  {
    v2 = (CExpression *)this;
    if ( this[49] )
      v2 = this[49];
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 96); i = (unsigned int)(i + 1) )
    {
      v4 = this[47];
      v5 = *((_QWORD *)this[45] + *((unsigned int *)v4 + 6 * i + 5));
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          v7 = *((_DWORD *)v4 + 6 * i);
          v8 = *(struct _RTL_GENERIC_TABLE **)(v6 + 40);
          lpMem = 0LL;
          v16 = 0LL;
          v17 = 0;
          v18 = 0;
          v19 = 0;
          Buffer = v7;
          v9 = RtlLookupElementGenericTable(v8, &Buffer);
          if ( lpMem != v16 )
          {
            WPF::ProcessHeapImpl::Free(lpMem);
            lpMem = 0LL;
          }
          if ( v9 )
          {
            v10 = v9[8];
            v11 = 0LL;
            for ( j = *((_QWORD *)v9 + 1); (unsigned int)v11 < v10; v11 = (unsigned int)(v11 + 1) )
            {
              if ( v2 == *(CExpression **)(j + 8 * v11) )
                break;
            }
            if ( (unsigned int)v11 < v10 )
            {
              if ( (unsigned int)v11 < v10 - 1 )
              {
                do
                {
                  v13 = (unsigned int)(v11 + 1);
                  *(_QWORD *)(j + 8 * v11) = *(_QWORD *)(j + 8 * v13);
                  v11 = v13;
                }
                while ( (unsigned int)v13 < v9[8] - 1 );
              }
              --v9[8];
            }
            if ( !v9[8] )
              CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::RemoveElement(
                *(PRTL_GENERIC_TABLE *)(v6 + 40),
                v9);
          }
        }
      }
    }
    *((_BYTE *)this + 400) &= ~2u;
  }
}
