/*
 * XREFs of ComputeFNTCacheFastCheckSum @ 0x1C00EC144
 * Callers:
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C00279DC (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z.c)
 * Callees:
 *     Win32FileInfo @ 0x1C00EC214 (Win32FileInfo.c)
 */

__int64 __fastcall ComputeFNTCacheFastCheckSum(
        unsigned int a1,
        unsigned __int16 *a2,
        __int64 *a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned int v10; // edi
  __int64 v11; // r15
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  _DWORD *v16; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax

  v6 = 0LL;
  v7 = a1;
  v10 = 0;
  if ( a4 )
  {
    v11 = a4;
    do
    {
      v12 = *a3;
      if ( !*(_DWORD *)(*a3 + 24) || !*(_QWORD *)v12 )
      {
        Win32FileInfo(*(PCWSTR *)(v12 + 80));
        *(_DWORD *)(*a3 + 24) = 0;
      }
      v13 = (_DWORD *)*a3++;
      v10 = v13[1] + 257 * (*v13 + 257 * (257 * v10 + v13[6]));
      --v11;
    }
    while ( v11 );
  }
  if ( (_DWORD)v7 )
  {
    v14 = v7;
    do
    {
      v15 = *a2++;
      v10 = v15 + 257 * v10;
      --v14;
    }
    while ( v14 );
  }
  v16 = (_DWORD *)a5;
  if ( a5 && a6 )
  {
    v18 = (unsigned __int64)a6 >> 2;
    v19 = a5 + 4 * v18;
    v20 = (4 * v18 + 3) >> 2;
    if ( a5 > v19 )
      v20 = 0LL;
    if ( v20 )
    {
      do
      {
        ++v6;
        v10 = *v16++ + 257 * v10;
      }
      while ( v6 < v20 );
    }
  }
  return v10;
}
