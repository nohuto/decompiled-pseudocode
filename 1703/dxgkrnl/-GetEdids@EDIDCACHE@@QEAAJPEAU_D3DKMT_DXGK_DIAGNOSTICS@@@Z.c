/*
 * XREFs of ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C0198AC8
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall EDIDCACHE::GetEdids(EDIDCACHE *this, struct _D3DKMT_DXGK_DIAGNOSTICS *a2, __int64 a3, __int64 a4)
{
  struct DXGFASTMUTEX *v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  char *v14; // rbx
  char *v15; // rax
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 76);
  if ( !v6 )
    return 3221225659LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, v6, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  LODWORD(v8) = 0;
  v9 = (__int64)this;
  v10 = 4LL;
  do
  {
    v11 = *(_QWORD *)v9;
    v12 = v8 + 1;
    v9 += 152LL;
    if ( !v11 )
      v12 = v8;
    v8 = v12;
    --v10;
  }
  while ( v10 );
  if ( *(unsigned int *)a2 >= 152 * (unsigned __int64)v12 )
  {
    v14 = (char *)a2 + 4;
    v10 = 0LL;
    v9 = 0LL;
    if ( v12 )
    {
      do
      {
        if ( (unsigned int)v9 >= 4 )
          break;
        v15 = (char *)this + 152 * (unsigned int)v9;
        if ( *(_QWORD *)v15 )
        {
          *(_OWORD *)v14 = *(_OWORD *)v15;
          *((_OWORD *)v14 + 1) = *((_OWORD *)v15 + 1);
          *((_OWORD *)v14 + 2) = *((_OWORD *)v15 + 2);
          *((_OWORD *)v14 + 3) = *((_OWORD *)v15 + 3);
          *((_OWORD *)v14 + 4) = *((_OWORD *)v15 + 4);
          *((_OWORD *)v14 + 5) = *((_OWORD *)v15 + 5);
          *((_OWORD *)v14 + 6) = *((_OWORD *)v15 + 6);
          *((_OWORD *)v14 + 7) = *((_OWORD *)v15 + 7);
          *((_OWORD *)v14 + 8) = *((_OWORD *)v15 + 8);
          *((_QWORD *)v14 + 18) = *((_QWORD *)v15 + 18);
          v14 += 152;
          v10 = (unsigned int)(v10 + 1);
        }
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v10 < (unsigned int)v8 );
    }
    v13 = 0;
  }
  else
  {
    *(_DWORD *)a2 = 152 * v12;
    v13 = 1075707914;
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16, v8, v9, v10);
  return v13;
}
