/*
 * XREFs of ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C01C8FBC
 * Callers:
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C01C7F74 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C01CB88C (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001A030 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C00359B8 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0035A30 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::DestroySourceContextLists(OUTPUTDUPL_MGR *this)
{
  void *v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // rsi
  AUTOEXPANDALLOCATION *v5; // rcx
  DXGFASTMUTEX *v6; // rcx
  OUTPUTDUPL_CONTEXT **v7; // rcx
  __int64 i; // r14

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_DWORD *)this + 13) )
    {
      do
      {
        v4 = *((_QWORD *)this + 2);
        v5 = *(AUTOEXPANDALLOCATION **)(v4 + 24 * v3 + 16);
        if ( v5 )
        {
          AUTOEXPANDALLOCATION::`scalar deleting destructor'(v5);
          *(_QWORD *)(v4 + 24 * v3 + 16) = 0LL;
        }
        v6 = *(DXGFASTMUTEX **)(v4 + 24 * v3);
        if ( v6 )
        {
          DXGFASTMUTEX::`scalar deleting destructor'(v6);
          *(_QWORD *)(v4 + 24 * v3) = 0LL;
        }
        v7 = *(OUTPUTDUPL_CONTEXT ***)(v4 + 24 * v3 + 8);
        if ( v7 )
        {
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 2); i = (unsigned int)(i + 1) )
          {
            v7 = *(OUTPUTDUPL_CONTEXT ***)(v4 + 24 * v3 + 8);
            if ( v7[i] )
            {
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(v7[i]);
              *(_QWORD *)(*(_QWORD *)(v4 + 24 * v3 + 8) + 8 * i) = 0LL;
              v7 = *(OUTPUTDUPL_CONTEXT ***)(v4 + 24 * v3 + 8);
            }
          }
          operator delete[](v7);
          *(_QWORD *)(v4 + 24 * v3 + 8) = 0LL;
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *((_DWORD *)this + 13) );
      v2 = (void *)*((_QWORD *)this + 2);
    }
    if ( v2 )
    {
      operator delete[](v2);
      *((_QWORD *)this + 2) = 0LL;
    }
    *((_DWORD *)this + 13) = 0;
  }
}
