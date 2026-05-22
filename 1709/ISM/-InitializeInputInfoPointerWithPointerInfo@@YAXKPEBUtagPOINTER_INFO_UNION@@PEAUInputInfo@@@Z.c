/*
 * XREFs of ?InitializeInputInfoPointerWithPointerInfo@@YAXKPEBUtagPOINTER_INFO_UNION@@PEAUInputInfo@@@Z @ 0x180010D74
 * Callers:
 *     ?s_NonMinUserCallback@Win32kInterop@@SAHHUtagINPUTDEST@@PEAUtagPOSTINPUTINFO@@@Z @ 0x1800107A0 (-s_NonMinUserCallback@Win32kInterop@@SAHHUtagINPUTDEST@@PEAUtagPOSTINPUTINFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeInputInfoPointerWithPointerInfo(
        unsigned int a1,
        const struct tagPOINTER_INFO_UNION *a2,
        struct InputInfo *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax

  v3 = 6LL * a1;
  *((_DWORD *)a3 + 2 * v3 + 14) = *((_DWORD *)a2 + 1);
  if ( (*((_BYTE *)a2 + 12) & 2) != 0 )
    *((_DWORD *)a3 + 2 * v3 + 15) |= 1u;
  if ( (*((_BYTE *)a2 + 12) & 4) != 0 )
    *((_DWORD *)a3 + 2 * v3 + 15) |= 2u;
  if ( (*((_DWORD *)a2 + 3) & 0x8000) != 0 )
    *((_DWORD *)a3 + 2 * v3 + 15) |= 4u;
  *((_DWORD *)a3 + 2 * v3 + 14) = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 12);
  *((_DWORD *)a3 + 2 * v3 + 19) = v4;
  *((_DWORD *)a3 + 2 * v3 + 17) = v4;
  v5 = *((_DWORD *)a2 + 13);
  *((_DWORD *)a3 + 2 * v3 + 20) = v5;
  *((_DWORD *)a3 + 2 * v3 + 18) = v5;
}
