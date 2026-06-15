/*
 * XREFs of ?HoloshellStateChangeCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800363D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXAEBW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x180036448 (-OnHoloshellStateChange@CExclusiveModeListener@@AEAAXAEBW4ShellState@Holographic@Shell@Internal@.c)
 */

__int64 __fastcall CExclusiveModeListener::HoloshellStateChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        CExclusiveModeListener *a4,
        int *a5,
        unsigned int a6)
{
  int v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 3;
  if ( a6 == 4 )
    v7 = *a5;
  CExclusiveModeListener::OnHoloshellStateChange(
    a4,
    (const enum Windows::Internal::Shell::Holographic::ShellState *)&v7);
  return 0LL;
}
