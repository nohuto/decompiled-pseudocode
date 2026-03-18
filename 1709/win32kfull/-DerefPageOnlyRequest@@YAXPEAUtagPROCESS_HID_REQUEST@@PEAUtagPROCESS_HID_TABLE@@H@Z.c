/*
 * XREFs of ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C0009354
 * Callers:
 *     FreeHidProcessRequest @ 0x1C00C7160 (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01B6038 (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C00093EC (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 */

void __fastcall DerefPageOnlyRequest(struct tagPROCESS_HID_REQUEST *a1, struct tagPROCESS_HID_TABLE *a2, int a3)
{
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  __int64 **v9; // rax
  int v10; // eax

  SetHidPOCountToTLCInfo(*((_WORD *)a1 + 8), --*(_DWORD *)(*((_QWORD *)a1 + 3) + 20LL), a3);
  v7 = (__int64 *)*((_QWORD *)a1 + 3);
  if ( !*((_DWORD *)v7 + 5) && a3 )
  {
    v8 = (__int64 *)*v7;
    if ( *(__int64 **)(*v7 + 8) != v7 || (v9 = (__int64 **)v7[1], *v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = (__int64)v9;
    Win32FreePool(v7, v8, v6);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  v10 = *((_DWORD *)a1 + 5);
  if ( (v10 & 1) != 0 )
  {
    *((_DWORD *)a1 + 5) = v10 & 0xFFFFFFFE;
    --*((_DWORD *)a2 + 20);
    --gHidCounters[2];
  }
}
