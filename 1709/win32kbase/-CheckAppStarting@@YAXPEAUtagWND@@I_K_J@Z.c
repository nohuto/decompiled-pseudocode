/*
 * XREFs of ?CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C008BA40
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall CheckAppStarting(struct tagWND *a1)
{
  PEPROCESS **v1; // rdi
  LONGLONG v2; // rbx

  v1 = (PEPROCESS **)&gppiStarting;
  v2 = MEMORY[0xFFFFF78000000014] - 300000000LL;
  if ( gppiStarting )
  {
    do
    {
      if ( v2 <= PsGetProcessCreateTimeQuadPart(**v1) )
      {
        v1 = (PEPROCESS **)(*v1 + 43);
      }
      else
      {
        *((_DWORD *)*v1 + 3) &= 0xFFFFFEBF;
        *v1 = (PEPROCESS *)(*v1)[43];
      }
    }
    while ( *v1 );
  }
  memset(&ghCanActivateForegroundPIDs, 0, 0x28uLL);
}
