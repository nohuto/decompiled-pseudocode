/*
 * XREFs of ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C01AE928
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall EDIDCACHE::GetEdids(EDIDCACHE *this, struct _D3DKMT_DXGK_DIAGNOSTICS *a2)
{
  struct DXGFASTMUTEX *v4; // rdx
  unsigned int v6; // edx
  EDIDCACHE *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  char *v12; // rbx
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  char *v15; // rax
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 76);
  if ( !v4 )
    return 3221225659LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, v4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v6 = 0;
  v7 = this;
  v8 = 4LL;
  do
  {
    v9 = *(_QWORD *)v7;
    v10 = v6 + 1;
    v7 = (EDIDCACHE *)((char *)v7 + 152);
    if ( !v9 )
      v10 = v6;
    v6 = v10;
    --v8;
  }
  while ( v8 );
  if ( *(unsigned int *)a2 >= 152 * (unsigned __int64)v10 )
  {
    v12 = (char *)a2 + 4;
    v13 = 0;
    v14 = 0;
    if ( v10 )
    {
      do
      {
        if ( v14 >= 4 )
          break;
        v15 = (char *)this + 152 * v14;
        if ( *(_QWORD *)v15 )
        {
          *(_OWORD *)v12 = *(_OWORD *)v15;
          *((_OWORD *)v12 + 1) = *((_OWORD *)v15 + 1);
          *((_OWORD *)v12 + 2) = *((_OWORD *)v15 + 2);
          *((_OWORD *)v12 + 3) = *((_OWORD *)v15 + 3);
          *((_OWORD *)v12 + 4) = *((_OWORD *)v15 + 4);
          *((_OWORD *)v12 + 5) = *((_OWORD *)v15 + 5);
          *((_OWORD *)v12 + 6) = *((_OWORD *)v15 + 6);
          *((_OWORD *)v12 + 7) = *((_OWORD *)v15 + 7);
          *((_OWORD *)v12 + 8) = *((_OWORD *)v15 + 8);
          *((_QWORD *)v12 + 18) = *((_QWORD *)v15 + 18);
          v12 += 152;
          ++v13;
        }
        ++v14;
      }
      while ( v13 < v6 );
    }
    v11 = 0;
  }
  else
  {
    *(_DWORD *)a2 = 152 * v10;
    v11 = 1075707914;
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  return v11;
}
