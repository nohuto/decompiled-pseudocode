/*
 * XREFs of ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x1C02935A0
 * Callers:
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C012A128 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall STACKOBJ::bExpand(STACKOBJ *this, unsigned int a2)
{
  const void *v2; // rsi
  unsigned int v3; // edi
  void *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // rdx

  v2 = (const void *)*((_QWORD *)this + 4);
  v3 = a2 + 400;
  if ( a2 + 400 < a2 )
    return 0LL;
  v6 = PALLOCMEM2(v3, 1684817479LL, 0);
  *((_QWORD *)this + 4) = v6;
  if ( !v6 )
    return 0LL;
  memmove(v6, v2, *((unsigned int *)this + 1));
  v8 = *((_QWORD *)this + 1);
  v9 = *((_QWORD *)this + 4);
  *(_DWORD *)this = v3;
  v10 = v9 - (_QWORD)v2 + v8;
  v11 = *((_DWORD *)this + 1) == 0;
  *((_QWORD *)this + 1) = v10;
  if ( v11 )
  {
    *(_QWORD *)(v10 + 16) = v10;
  }
  else
  {
    v7 = (_QWORD *)(v10 + 16);
    if ( *(_QWORD *)(v10 + 16) != v9 )
    {
      do
      {
        v12 = v9 - (_QWORD)v2 + *v7;
        *(_QWORD *)(v10 + 16) = v12;
        v10 = v12;
        v7 = (_QWORD *)(v12 + 16);
      }
      while ( *v7 != *((_QWORD *)this + 4) );
    }
  }
  Win32FreePool(v2, v7);
  return 1LL;
}
