/*
 * XREFs of ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C01734F8
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ADAPTER_RENDER::CopyDListFileName(const wchar_t **this, unsigned __int16 *a2)
{
  __int64 CurrentProcess; // rax
  size_t v5; // rdx
  const wchar_t *v6; // r8
  unsigned __int16 v7; // ax

  CurrentProcess = PsGetCurrentProcess(this);
  if ( PsGetProcessWow64Process(CurrentProcess) )
  {
    v6 = this[39];
    v7 = *((_WORD *)this + 152);
  }
  else
  {
    v6 = this[37];
    v7 = *((_WORD *)this + 144);
  }
  if ( a2 )
    *a2 = 0;
  return RtlStringCbCopyNW(a2, v5, v6, v7);
}
