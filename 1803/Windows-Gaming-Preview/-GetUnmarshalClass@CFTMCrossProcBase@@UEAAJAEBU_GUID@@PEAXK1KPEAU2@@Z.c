/*
 * XREFs of ?GetUnmarshalClass@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x1800410D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004163C (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcBase::GetUnmarshalClass(
        LPUNKNOWN punkOuter,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        struct _GUID *a7)
{
  struct _GUID *v7; // rdi
  struct _GUID *v12; // rax
  int FTM; // ebx
  struct _GUID *v14; // rcx

  v7 = a7;
  *a7 = GUID_NULL;
  if ( a4 == 3
    || *(_OWORD *)&GUID_NULL == *(_OWORD *)((__int64 (__fastcall *)(LPUNKNOWN))punkOuter->lpVtbl[3].Release)(punkOuter) )
  {
    a7 = 0LL;
    FTM = CFTMCrossProcBase::_GetFTM(punkOuter, a2, (void **)&a7);
    if ( FTM >= 0 )
      FTM = (*(__int64 (__fastcall **)(struct _GUID *, const struct _GUID *, void *, _QWORD, void *, unsigned int, struct _GUID *))(*(_QWORD *)&a7->Data1 + 24LL))(
              a7,
              a2,
              a3,
              a4,
              a5,
              a6,
              v7);
    v14 = a7;
    if ( a7 )
    {
      a7 = 0LL;
      (*(void (__fastcall **)(struct _GUID *))(*(_QWORD *)&v14->Data1 + 16LL))(v14);
    }
  }
  else
  {
    v12 = (struct _GUID *)((__int64 (__fastcall *)(LPUNKNOWN))punkOuter->lpVtbl[3].Release)(punkOuter);
    FTM = 0;
    *v7 = *v12;
  }
  return (unsigned int)FTM;
}
