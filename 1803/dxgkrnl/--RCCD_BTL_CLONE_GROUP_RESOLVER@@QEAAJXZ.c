/*
 * XREFs of ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C00B08EC
 * Callers:
 *     ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00B09C8 (-ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::operator()(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // edx
  __int64 v3; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // r8d
  __int64 result; // rax
  __int64 v9; // r11
  __int64 v10; // r9
  int v11; // edi
  unsigned int v12; // esi
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r8
  char v16; // al

  v1 = (_QWORD *)a1;
  v2 = 0;
  if ( *(_WORD *)(*(_QWORD *)a1 + 32LL) )
  {
    do
    {
      v3 = 272LL * v2++;
      *(_QWORD *)(v3 + v1[1] + 48) &= 0xFFFF0FFFFFFFFFFFuLL;
      a1 = *(unsigned __int16 *)(*v1 + 32LL);
    }
    while ( v2 < (unsigned int)a1 );
  }
  Global = DXGGLOBAL::GetGlobal(a1);
  v5 = DXGGLOBAL::IterateAdaptersWithCallback(
         Global,
         BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_,
         v1,
         1LL);
  if ( v5 == -2147483622 )
  {
    v6 = 0;
    if ( *(_WORD *)(*v1 + 32LL) )
    {
      while ( 1 )
      {
        v7 = 0;
        if ( v6 )
        {
          v9 = v1[1];
          v10 = 272LL * v6;
          v11 = *(_DWORD *)(v10 + v9 + 232);
          do
          {
            v12 = v7;
            v13 = *(_DWORD *)(272LL * v7 + v9 + 232);
            if ( v13 == v11 )
              break;
            ++v7;
          }
          while ( v7 < v6 );
          v14 = v12 + 1;
          if ( v13 == v11 )
            v14 = v12;
          if ( (unsigned int)v14 < v6 )
          {
            v15 = 272 * v14;
            v16 = *(_BYTE *)(272 * v14 + v9 + 177);
            if ( v16 != *(_BYTE *)(v9 + v10 + 177)
              || !v16
              && (*(_DWORD *)(v15 + v9 + 64) != *(_DWORD *)(v9 + v10 + 64)
               || *(_DWORD *)(v15 + v9 + 68) != *(_DWORD *)(v9 + v10 + 68)) )
            {
              break;
            }
          }
        }
        if ( ++v6 >= *(unsigned __int16 *)(*v1 + 32LL) )
          return 0LL;
      }
      return 3221226021LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    result = 3221226021LL;
    if ( v5 )
      return v5;
  }
  return result;
}
