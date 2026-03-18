/*
 * XREFs of ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C01C6184
 * Callers:
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C01C5558 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C01C86F8 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0007DC4 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C000F4D8 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C002AAE8 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::DestroySourceContextLists(OUTPUTDUPL_MGR *this)
{
  __int64 i; // rbp
  __int64 v3; // rdi
  AUTOEXPANDALLOCATION *v4; // rcx
  DXGFASTMUTEX *v5; // rcx
  __int64 j; // r14
  OUTPUTDUPL_CONTEXT *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  if ( *((_QWORD *)this + 2) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 13); i = (unsigned int)(i + 1) )
    {
      v3 = *((_QWORD *)this + 2);
      v4 = *(AUTOEXPANDALLOCATION **)(v3 + 24 * i + 16);
      if ( v4 )
      {
        AUTOEXPANDALLOCATION::`scalar deleting destructor'(v4);
        *(_QWORD *)(v3 + 24 * i + 16) = 0LL;
      }
      v5 = *(DXGFASTMUTEX **)(v3 + 24 * i);
      if ( v5 )
      {
        DXGFASTMUTEX::`scalar deleting destructor'(v5);
        *(_QWORD *)(v3 + 24 * i) = 0LL;
      }
      if ( *(_QWORD *)(v3 + 24 * i + 8) )
      {
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 2); j = (unsigned int)(j + 1) )
        {
          v7 = *(OUTPUTDUPL_CONTEXT **)(*(_QWORD *)(v3 + 24 * i + 8) + 8 * j);
          if ( v7 )
          {
            OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(v7);
            *(_QWORD *)(*(_QWORD *)(v3 + 24 * i + 8) + 8 * j) = 0LL;
          }
        }
        v8 = *(void **)(v3 + 24 * i + 8);
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        *(_QWORD *)(v3 + 24 * i + 8) = 0LL;
      }
    }
    v9 = (void *)*((_QWORD *)this + 2);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      *((_QWORD *)this + 2) = 0LL;
    }
    *((_DWORD *)this + 13) = 0;
  }
}
