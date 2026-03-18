/*
 * XREFs of ?FreeMsgDataInt@@YAXPEAUtagPOINTERMSGDATA@@@Z @ 0x1C01F5E50
 * Callers:
 *     ?FreeMsgData@PointerList@@YAX_K@Z @ 0x1C01F5DA8 (-FreeMsgData@PointerList@@YAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeMsgDataInt(struct tagPOINTERMSGDATA *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // eax

  if ( gbCleanupInitiated || gbExitInProgress )
  {
    Win32FreePool(a1, a2, a3);
  }
  else
  {
    v4 = gcFPMEntries;
    *((_DWORD *)a1 + 9) |= 0x40u;
    v5 = v4 / 0x3E8;
    v6 = v4 % 0x3E8;
    v7 = 2LL * (unsigned int)v6;
    v8 = *((_QWORD *)&gapFPMData + 2 * (unsigned int)v6 + 1);
    if ( v8 )
    {
      Win32FreePool(v8, v5, v6);
      *((_QWORD *)&gapFPMData + v7 + 1) = 0LL;
      *((_DWORD *)&gapFPMData + 2 * v7) = 0;
    }
    v9 = gcFPMEntries;
    *((_DWORD *)&gapFPMData + 2 * v7) = gcFPMEntries;
    gcFPMEntries = v9 + 1;
    *((_QWORD *)&gapFPMData + v7 + 1) = a1;
  }
}
