/*
 * XREFs of ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C00C8240
 * Callers:
 *     FreeHidProcessRequest @ 0x1C00C7160 (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01B6038 (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     FreeHidTLCInfo @ 0x1C00C6A64 (FreeHidTLCInfo.c)
 */

void __fastcall DerefIncludeRequest(struct tagPROCESS_HID_REQUEST *a1, struct tagPROCESS_HID_TABLE *a2, int a3, int a4)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  __int64 v14; // rcx

  if ( a3 )
  {
    v7 = *((_DWORD *)a2 + 25);
    if ( (v7 & 0x100) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 2 )
      *((_DWORD *)a2 + 25) = v7 & 0xFFFFFEFF;
    v8 = *((_DWORD *)a2 + 25);
    if ( (v8 & 0x200) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
      *((_DWORD *)a2 + 25) = v8 & 0xFFFFFDFF;
    v9 = *((_DWORD *)a2 + 25);
    if ( (v9 & 0x400) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
      *((_DWORD *)a2 + 25) = v9 & 0xFFFFFBFF;
    v10 = *((_DWORD *)a2 + 25);
    if ( (v10 & 0x800) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
      *((_DWORD *)a2 + 25) = v10 & 0xFFFFF7FF;
  }
  else
  {
    v12 = *((_QWORD *)a1 + 3);
    if ( (*(_DWORD *)(v12 + 24))-- == 1 )
    {
      if ( a4 )
      {
        v14 = *((_QWORD *)a1 + 3);
        if ( !(*(_DWORD *)(v14 + 20) | *(_DWORD *)(v14 + 24) | *(_DWORD *)(v14 + 32) | *(_DWORD *)(v14 + 36)) )
          FreeHidTLCInfo((_QWORD *)v14);
      }
    }
  }
  v11 = *((_DWORD *)a1 + 5);
  if ( (v11 & 1) != 0 )
  {
    *((_DWORD *)a1 + 5) = v11 & 0xFFFFFFFE;
    if ( !a3 )
    {
      --*((_DWORD *)a2 + 20);
      --gHidCounters[2];
    }
  }
}
