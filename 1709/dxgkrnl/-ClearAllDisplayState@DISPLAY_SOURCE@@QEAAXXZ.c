/*
 * XREFs of ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00AEE8C
 * Callers:
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00ABA0C (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0173D5C (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01766D4 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00AF11C (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C00F2C90 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C00F8BA8 (-GetPreviousConfigIndex@@YAHH@Z.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C00F9740 (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C00FA460 (-IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z.c)
 *     ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1C0175FBC (-RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z.c)
 */

void __fastcall DISPLAY_SOURCE::ClearAllDisplayState(DISPLAY_SOURCE *this)
{
  unsigned int i; // ebp
  struct _DISPLAY_PLANE_CONFIG_QUEUE *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax

  for ( i = 0; i < *((_DWORD *)this + 934); ++i )
  {
    while ( 1 )
    {
      v3 = (DISPLAY_SOURCE *)((char *)this + 168 * i + 1120);
      if ( IsDisplayPlaneConfigQueueEmpty(v3) )
        break;
      v5 = *(int *)v3;
      if ( (_DWORD)v5 == -1 )
      {
        v6 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v6 + 24) = 7959LL;
        WdLogEvent5_WdAssertion(v6);
      }
      if ( *((_DWORD *)v3 + 1) == -1 )
      {
        v7 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v7 + 24) = 7960LL;
        WdLogEvent5_WdAssertion(v7);
      }
      memset((char *)v3 + 80 * v5 + 8, 0, 0x50uLL);
      if ( *(_DWORD *)v3 == (_DWORD)v5 )
      {
        if ( *((_DWORD *)v3 + 1) == (_DWORD)v5 )
        {
          *((_DWORD *)v3 + 1) = -1;
          *(_DWORD *)v3 = -1;
        }
        else
        {
          *(_DWORD *)v3 = GetPreviousConfigIndex(v5);
        }
      }
      else if ( *((_DWORD *)v3 + 1) == (_DWORD)v5 )
      {
        *((_DWORD *)v3 + 1) = GetNextConfigIndex(v5);
      }
    }
  }
  *((_DWORD *)this + 934) = 0;
  *((_BYTE *)this + 3744) = 0;
  while ( !IsPostCompositionConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 2800)) )
    RemovePostCompositionConfig((DISPLAY_SOURCE *)((char *)this + 2800), *((_DWORD *)this + 700));
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
}
