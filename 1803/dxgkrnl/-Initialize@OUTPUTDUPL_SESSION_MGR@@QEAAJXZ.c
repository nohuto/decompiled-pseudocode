/*
 * XREFs of ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C01C9C48
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C01CDBC4 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01A8AC0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::Initialize(OUTPUTDUPL_SESSION_MGR *this)
{
  int v1; // esi
  unsigned int v3; // esi
  void **v4; // rax
  void *v5; // rcx
  void **v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 1) = *(_DWORD *)this;
  v3 = 32 * v1;
  v4 = (void **)operator new[](0x10uLL, 0x674D444Fu, PagedPool);
  v6 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 3) = 0;
    AUTOEXPANDALLOCATION::GetBuffer((const void **)v4, v3, 0);
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 2) = v6;
  if ( !v6 || (v5 = *v6) == 0LL )
  {
    v7 = WdLogNewEntry5_WdLowResource(v5);
    v8 = *((unsigned int *)this + 1);
    v9 = v7;
    *(_QWORD *)(v7 + 24) = v8;
    *(_QWORD *)(v7 + 32) = (unsigned int)PsGetCurrentProcessSessionId(v8);
LABEL_6:
    WdLogEvent5_WdLowResource(v9);
    return 3221225495LL;
  }
  memset(v5, 0, v3);
  v11 = operator new[](0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
  if ( v11 )
  {
    *v11 = 0LL;
    v11[1] = 0LL;
    *((_DWORD *)v11 + 6) = 0;
    v11[2] = 0LL;
    *((_DWORD *)v11 + 7) = 43;
    *((_DWORD *)v11 + 8) = 32;
  }
  *((_QWORD *)this + 1) = v11;
  if ( !v11 )
    goto LABEL_11;
  v14 = operator new[](0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
  if ( v14 )
  {
    *v14 = 0LL;
    v14[1] = 0LL;
    *((_DWORD *)v14 + 6) = 0;
    v14[2] = 0LL;
    *((_DWORD *)v14 + 7) = 43;
    *((_DWORD *)v14 + 8) = 32;
  }
  *((_QWORD *)this + 4) = v14;
  if ( !v14 )
  {
LABEL_11:
    v9 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v9 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v13);
    goto LABEL_6;
  }
  return 0LL;
}
