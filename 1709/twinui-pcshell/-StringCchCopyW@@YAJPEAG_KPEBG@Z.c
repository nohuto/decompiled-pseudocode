/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180002A20
 * Callers:
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180004348 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180004614 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?ProcessWindowBool@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@AEAA_NPEAUHWND__@@@Z @ 0x180080E74 (-ProcessWindowBool@QuadShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x1801C0C08 (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     ?ApplicationViewTitleEnum@@YAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x1801C9460 (-ApplicationViewTitleEnum@@YAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 *     ?GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z @ 0x1801C94B8 (-GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x1801CAB84 (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 *     Str_SetPtrW @ 0x1801DE3C0 (Str_SetPtrW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  int v3; // r9d
  __int64 v4; // r10
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 >= 0 )
  {
    v3 = 0;
    if ( !a2 )
      goto LABEL_10;
    v4 = 2147483646 - a2;
    v5 = a3 - a1;
    do
    {
      if ( !(v4 + a2) )
        break;
      v6 = *(_WORD *)&a1[v5];
      if ( !v6 )
        break;
      *(_WORD *)a1 = v6;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
LABEL_10:
      a1 -= 2;
      v3 = -2147024774;
    }
    goto LABEL_12;
  }
  if ( a2 )
LABEL_12:
    *(_WORD *)a1 = 0;
  return (unsigned int)v3;
}
