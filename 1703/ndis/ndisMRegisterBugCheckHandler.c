/*
 * XREFs of ndisMRegisterBugCheckHandler @ 0x1C00BE658
 * Callers:
 *     NdisMRegisterAdapterShutdownHandler @ 0x1C00DFB20 (NdisMRegisterAdapterShutdownHandler.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMRegisterBugCheckHandler(char *Buffer)
{
  bool v2; // zf

  if ( (unsigned __int8)Buffer[32] < 6u )
  {
    v2 = *((_QWORD *)Buffer + 259) == 0LL;
  }
  else
  {
    if ( (*((_DWORD *)Buffer + 30) & 0x400) == 0 )
      return;
    v2 = *(_QWORD *)(*((_QWORD *)Buffer + 473) + 232LL) == 0LL;
  }
  if ( !v2 && (*((_DWORD *)Buffer + 30) & 0x2000) == 0 )
  {
    Buffer[2136] = 0;
    if ( KeRegisterBugCheckCallback(
           (PKBUGCHECK_CALLBACK_RECORD)(Buffer + 2080),
           (PKBUGCHECK_CALLBACK_ROUTINE)ndisBugcheckHandler,
           Buffer,
           0x16D0u,
           (PUCHAR)"Ndis miniport") )
    {
      *((_DWORD *)Buffer + 30) |= 0x2000u;
    }
  }
}
