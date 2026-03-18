/*
 * XREFs of ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C00FB054
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C00B2A74 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00FC108 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::Initialize(OUTPUTDUPL_SESSION_MGR *this)
{
  int v1; // esi
  unsigned int v3; // esi
  void **v4; // rax
  void *v5; // rcx
  void **v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 1) = *(_DWORD *)this;
  v3 = 32 * v1;
  v4 = (void **)operator new(0x10uLL, 0x674D444Fu, PagedPool);
  v6 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 3) = 0;
    AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v4, v3, 0);
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 2) = v6;
  if ( v6 && (v5 = *v6) != 0LL )
  {
    memset(v5, 0, v3);
    v7 = operator new(0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
    if ( v7 )
    {
      *v7 = 0LL;
      v7[1] = 0LL;
      *((_DWORD *)v7 + 6) = 0;
      v7[2] = 0LL;
      *((_DWORD *)v7 + 7) = 43;
      *((_DWORD *)v7 + 8) = 32;
    }
    *((_QWORD *)this + 1) = v7;
    if ( v7 )
    {
      v9 = operator new(0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
      if ( v9 )
      {
        *v9 = 0LL;
        v9[1] = 0LL;
        *((_DWORD *)v9 + 6) = 0;
        v9[2] = 0LL;
        *((_DWORD *)v9 + 7) = 43;
        *((_DWORD *)v9 + 8) = 32;
      }
      *((_QWORD *)this + 4) = v9;
      if ( v9 )
        return 0LL;
    }
    v13 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v13 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v14);
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v5);
    v12 = *((unsigned int *)this + 1);
    v13 = v11;
    *(_QWORD *)(v11 + 24) = v12;
    *(_QWORD *)(v11 + 32) = (unsigned int)PsGetCurrentProcessSessionId(v12);
  }
  WdLogEvent5_WdLowResource(v13);
  return 3221225495LL;
}
