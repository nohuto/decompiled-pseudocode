/*
 * XREFs of ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00E9148
 * Callers:
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E6420 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0170654 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0172D30 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C00A6D3C (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C00A6E44 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 *     ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C00A6EBC (-IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C0171A90 (-GetPreviousConfigIndex@@YAHH@Z.c)
 *     ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1C01726F0 (-RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z.c)
 */

void __fastcall DISPLAY_SOURCE::ClearAllDisplayState(DISPLAY_SOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int i; // ebp
  __int64 v6; // rdx
  struct _DISPLAY_PLANE_CONFIG_QUEUE *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax

  for ( i = 0; i < *((_DWORD *)this + 798); ++i )
  {
    while ( 1 )
    {
      v6 = 168LL * i;
      v7 = (DISPLAY_SOURCE *)((char *)this + v6 + 1080);
      if ( IsDisplayPlaneConfigQueueEmpty(v7, v6, a3, a4) )
        break;
      v9 = *(int *)v7;
      if ( (_DWORD)v9 == -1 )
      {
        v10 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
        *(_QWORD *)(v10 + 24) = 7307LL;
        WdLogEvent5_WdAssertion(v10);
      }
      if ( *((_DWORD *)v7 + 1) == -1 )
      {
        v11 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
        *(_QWORD *)(v11 + 24) = 7308LL;
        WdLogEvent5_WdAssertion(v11);
      }
      memset((char *)v7 + 80 * v9 + 8, 0, 0x50uLL);
      if ( *(_DWORD *)v7 == (_DWORD)v9 )
      {
        if ( *((_DWORD *)v7 + 1) == (_DWORD)v9 )
        {
          *((_DWORD *)v7 + 1) = -1;
          *(_DWORD *)v7 = -1;
        }
        else
        {
          *(_DWORD *)v7 = GetPreviousConfigIndex(v9);
        }
      }
      else if ( *((_DWORD *)v7 + 1) == (_DWORD)v9 )
      {
        *((_DWORD *)v7 + 1) = GetNextConfigIndex(v9);
      }
    }
  }
  *((_DWORD *)this + 798) = 0;
  *((_BYTE *)this + 3200) = 0;
  while ( !IsPostCompositionConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 2424), a2, a3, a4) )
    RemovePostCompositionConfig((DISPLAY_SOURCE *)((char *)this + 2424), *((_DWORD *)this + 606));
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
}
