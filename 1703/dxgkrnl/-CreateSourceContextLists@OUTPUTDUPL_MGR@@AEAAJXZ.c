/*
 * XREFs of ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C0118470
 * Callers:
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0118618 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C01AE93C (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00A63E0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateSourceContextLists(OUTPUTDUPL_MGR *this, __int64 a2)
{
  unsigned int v3; // eax
  SIZE_T v4; // rax
  unsigned __int64 v5; // kr00_8
  PVOID v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  void *v13; // rcx
  SIZE_T v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  if ( *((_QWORD *)this + 2) )
  {
    v16 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v16 + 24) = 901LL;
    WdLogEvent5_WdError(v16);
    return 3221227272LL;
  }
  else
  {
    v3 = *((_DWORD *)this + 13);
    if ( v3 )
    {
      v5 = v3;
      v4 = 24LL * v3;
      if ( !is_mul_ok(v5, 0x18uLL) )
        v4 = -1LL;
      v6 = operator new(v4, 0x674D444Fu, PagedPool);
      *((_QWORD *)this + 2) = v6;
      if ( v6 )
      {
        v8 = 0LL;
        if ( !*((_DWORD *)this + 13) )
          return 0LL;
        while ( 1 )
        {
          v9 = operator new(0x10uLL, 0x674D444Fu, PagedPool);
          v10 = v9;
          if ( v9 )
          {
            *(_QWORD *)v9 = 0LL;
            v9[2] = 0;
            v9[3] = 0;
            AUTOEXPANDALLOCATION::GetBuffer((PVOID *)v9, 0x100u, 0);
          }
          else
          {
            v10 = 0LL;
          }
          *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v8 + 16) = v10;
          v11 = *(_QWORD **)(*((_QWORD *)this + 2) + 24 * v8 + 16);
          if ( !v11 || !*v11 )
            break;
          v12 = operator new(0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
          v13 = v12;
          if ( v12 )
          {
            *v12 = 0LL;
            v12[1] = 0LL;
            *((_DWORD *)v12 + 6) = 0;
            v12[2] = 0LL;
            *((_DWORD *)v12 + 7) = 42;
            *((_DWORD *)v12 + 8) = 10;
          }
          else
          {
            v13 = 0LL;
          }
          *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v8) = v13;
          if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 24 * v8) )
            goto LABEL_22;
          v14 = 8LL * *((unsigned int *)this + 2);
          if ( !is_mul_ok(*((unsigned int *)this + 2), 8uLL) )
            v14 = -1LL;
          *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v8 + 8) = operator new[](v14, 0x674D444Fu, PagedPool);
          v13 = *(void **)(*((_QWORD *)this + 2) + 24 * v8 + 8);
          if ( !v13 )
          {
LABEL_22:
            v18 = WdLogNewEntry5_WdLowResource(v13);
            *(_QWORD *)(v18 + 24) = (unsigned int)v8;
            goto LABEL_23;
          }
          memset(v13, 0, 8LL * *((unsigned int *)this + 2));
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *((_DWORD *)this + 13) )
            return 0LL;
        }
        v18 = WdLogNewEntry5_WdLowResource(v11);
        *(_QWORD *)(v18 + 24) = 926LL;
      }
      else
      {
        v18 = WdLogNewEntry5_WdLowResource(v7);
        *(_QWORD *)(v18 + 24) = 914LL;
      }
LABEL_23:
      WdLogEvent5_WdLowResource(v18);
      return 3221225495LL;
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v17 + 24) = 906LL;
      WdLogEvent5_WdError(v17);
      return 3221225485LL;
    }
  }
}
