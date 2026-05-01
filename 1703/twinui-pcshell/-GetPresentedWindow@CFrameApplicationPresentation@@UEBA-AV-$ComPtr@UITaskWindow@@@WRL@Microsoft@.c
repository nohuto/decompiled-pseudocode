/*
 * XREFs of ?GetPresentedWindow@CFrameApplicationPresentation@@UEBA?AV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@XZ @ 0x180066FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CFrameApplicationPresentation::GetPresentedWindow(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx

  if ( !*(_DWORD *)(a1 + 200)
    && *(_BYTE *)(a1 + 204)
    && *(_QWORD *)(a1 + 72)
    && *(_QWORD *)(a1 + 80)
    && *(_BYTE *)(a1 + 88) )
  {
    v3 = *(__int64 **)(a1 + 96);
    v4 = *v3;
    *a2 = *v3;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
