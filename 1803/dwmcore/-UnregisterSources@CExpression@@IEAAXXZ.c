/*
 * XREFs of ?UnregisterSources@CExpression@@IEAAXXZ @ 0x180054774
 * Callers:
 *     ??1CExpression@@UEAA@XZ @ 0x180054BAC (--1CExpression@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CExpression::UnregisterSources(CExpression *this)
{
  char v1; // dl
  CExpression *v3; // r14
  __int64 v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rbp
  int v8; // eax
  struct _RTL_GENERIC_TABLE *v9; // rcx
  _DWORD *v10; // rdi
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 i; // r8
  void *v14; // r8
  struct _RTL_GENERIC_TABLE *v15; // rbp
  int Buffer; // [rsp+20h] [rbp-38h] BYREF
  void *lpMem[2]; // [rsp+28h] [rbp-30h]
  int v18; // [rsp+38h] [rbp-20h]
  int v19; // [rsp+3Ch] [rbp-1Ch]
  int v20; // [rsp+40h] [rbp-18h]

  v1 = *((_BYTE *)this + 416);
  if ( (v1 & 2) != 0 )
  {
    v3 = this;
    if ( *((_QWORD *)this + 51) )
      v3 = (CExpression *)*((_QWORD *)this + 51);
    v4 = 0LL;
    if ( *((_DWORD *)this + 100) )
    {
      do
      {
        v5 = *((_QWORD *)this + 49);
        v6 = *(_QWORD *)(*((_QWORD *)this + 47) + 8LL * *(unsigned int *)(v5 + 24 * v4 + 20));
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 8);
          if ( v7 )
          {
            v8 = *(_DWORD *)(v5 + 24 * v4);
            v9 = *(struct _RTL_GENERIC_TABLE **)(v7 + 40);
            v18 = 0;
            v19 = 0;
            v20 = 0;
            *(_OWORD *)lpMem = 0LL;
            Buffer = v8;
            v10 = RtlLookupElementGenericTable(v9, &Buffer);
            if ( lpMem[0] != lpMem[1] )
            {
              operator delete(lpMem[0]);
              lpMem[0] = 0LL;
            }
            if ( v10 )
            {
              v11 = v10[8];
              v12 = 0LL;
              for ( i = *((_QWORD *)v10 + 1); (unsigned int)v12 < v11; v12 = (unsigned int)(v12 + 1) )
              {
                if ( v3 == *(CExpression **)(i + 8 * v12) )
                  break;
              }
              if ( (unsigned int)v12 < v11 )
              {
                while ( (unsigned int)v12 < v11 - 1 )
                {
                  *(_QWORD *)(i + 8 * v12) = *(_QWORD *)(i + 8LL * (unsigned int)(v12 + 1));
                  v12 = (unsigned int)(v12 + 1);
                  v11 = v10[8];
                }
                v10[8] = v11 - 1;
              }
              if ( !v10[8] )
              {
                v14 = (void *)*((_QWORD *)v10 + 1);
                v15 = *(struct _RTL_GENERIC_TABLE **)(v7 + 40);
                if ( v14 != *((void **)v10 + 2) )
                {
                  if ( v14 )
                    HeapFree(WPF::g_processHeap, 0, v14);
                  *((_QWORD *)v10 + 1) = 0LL;
                }
                RtlDeleteElementGenericTable(v15, v10);
              }
            }
          }
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 100) );
      v1 = *((_BYTE *)this + 416);
    }
    *((_BYTE *)this + 416) = v1 & 0xFD;
  }
}
