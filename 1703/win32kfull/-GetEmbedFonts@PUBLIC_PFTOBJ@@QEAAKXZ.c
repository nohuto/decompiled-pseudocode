/*
 * XREFs of ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C0249700
 * Callers:
 *     NtGdiGetEmbedFonts @ 0x1C028D9A0 (NtGdiGetEmbedFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::GetEmbedFonts(struct PFT **const *this)
{
  unsigned int v1; // ebx
  unsigned int v4; // esi
  unsigned int CurrentThreadId; // ebp
  __int64 v6; // r10
  __int64 *v7; // r9
  __int64 i; // r8
  __int64 j; // rdx
  unsigned int v10; // ecx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *this != gpPFTPrivate )
    return 0LL;
  v4 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v11 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v6 = 20LL;
  v7 = (__int64 *)(*this + 5);
  do
  {
    if ( v7 )
    {
      for ( i = *v7; i; i = *(_QWORD *)(i + 8) )
      {
        for ( j = *(_QWORD *)(i + 160); j; j = *(_QWORD *)(j + 16) )
        {
          if ( (*(_DWORD *)(j + 8) & 4) != 0 )
          {
            v10 = v1 + 1;
            if ( *(_DWORD *)(j + 12) != CurrentThreadId )
              v10 = v1;
            v1 = v10;
          }
          else if ( *(_DWORD *)(j + 12) == v4 )
          {
            ++v1;
          }
        }
      }
    }
    ++v7;
    --v6;
  }
  while ( v6 );
  SEMOBJ::vUnlock((SEMOBJ *)&v11);
  return v1;
}
