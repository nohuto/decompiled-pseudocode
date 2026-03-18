/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180137EC0
 * Callers:
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180187E68 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1800C677C (StringCopyWorkerW.c)
 */

HRESULT __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, size_t *a3)
{
  __int64 v4; // rdx
  unsigned __int16 *v5; // rax
  HRESULT result; // eax
  __int64 v7; // rcx
  size_t v8; // [rsp+20h] [rbp-18h]

  v4 = 260LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
    v7 = 260 - v4;
  else
    v7 = 0LL;
  if ( v4 )
    return StringCopyWorkerW(&a1[v7], 260 - v7, a3, (STRSAFE_PCNZWCH)a3, v8);
  return result;
}
