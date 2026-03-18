/*
 * XREFs of ?PrepareMakePointerMessage@@YAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C01C7254
 * Callers:
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6BC4 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 */

const struct tagPOINTER_INFO *__fastcall PrepareMakePointerMessage(
        __int64 a1,
        struct tagPOINT *a2,
        int *a3,
        int *a4,
        int *a5)
{
  struct _LIST_ENTRY *FrameById; // rax
  __int64 v9; // r10
  _DWORD *v10; // r11
  _DWORD *v11; // rdx

  if ( !a1 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById )
    return 0LL;
  v11 = (_DWORD *)FrameById[5].Blink + 54 * *(unsigned int *)(v9 + 32);
  *a2 = *(struct tagPOINT *)(v11 + 9);
  *a3 = v11[8];
  *v10 = -__CFSHR__(*v11, 18);
  *a5 = -__CFSHR__(*v11, 19);
  return (const struct tagPOINTER_INFO *)(v11 + 14);
}
