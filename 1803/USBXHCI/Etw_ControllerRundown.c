/*
 * XREFs of Etw_ControllerRundown @ 0x1C0001374
 * Callers:
 *     Etw_EnableCallback @ 0x1C0001150 (Etw_EnableCallback.c)
 * Callees:
 *     Etw_DeviceListRundown @ 0x1C00015D0 (Etw_DeviceListRundown.c)
 *     McTemplateK0pqqqqqqqsssxqqqtcctqqqqtxxqqqqq @ 0x1C0002554 (McTemplateK0pqqqqqqqsssxqqqtcctqqqqtxxqqqqq.c)
 */

__int64 __fastcall Etw_ControllerRundown(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r12d
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // r13d
  int v8; // ecx
  __int64 v9; // rbx
  int v12; // [rsp+168h] [rbp+10h]
  int v13; // [rsp+170h] [rbp+18h]
  int v14; // [rsp+178h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 88);
  LOBYTE(v3) = -1;
  if ( v2 )
  {
    v14 = *(_DWORD *)(v2 + 104);
    v13 = *(_DWORD *)(v2 + 108);
  }
  else
  {
    LOBYTE(v14) = -1;
    LOBYTE(v13) = -1;
  }
  v5 = *(_QWORD *)(a2 + 96);
  if ( v5 )
    v12 = *(_DWORD *)(v5 + 20);
  else
    LOBYTE(v12) = -1;
  v6 = *(_QWORD *)(a2 + 128);
  if ( v6 )
  {
    v3 = *(_DWORD *)(v6 + 20);
    v7 = *(_DWORD *)(v6 + 16);
  }
  else
  {
    LOBYTE(v7) = -1;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
  {
    v8 = *(unsigned __int8 *)(a2 + 552);
    v9 = a1;
    McTemplateK0pqqqqqqqsssxqqqtcctqqqqtxxqqqqq(
      v8,
      *(unsigned __int8 *)(a2 + 441),
      a1,
      *(_QWORD *)(a2 + 8),
      *(_DWORD *)(a2 + 180),
      *(_DWORD *)(a2 + 196),
      *(_WORD *)(a2 + 200),
      *(_WORD *)(a2 + 204),
      *(_WORD *)(a2 + 184),
      *(_WORD *)(a2 + 188),
      *(_BYTE *)(a2 + 192),
      a2 + 240,
      a2 + 245,
      a2 + 250,
      *(_QWORD *)(a2 + 264),
      *(_DWORD *)(a2 + 392),
      *(_DWORD *)(a2 + 328),
      *(_DWORD *)(a2 + 176),
      *(_BYTE *)(a2 + 440),
      *(_BYTE *)(a2 + 256),
      *(_BYTE *)(a2 + 257),
      *(_BYTE *)(a2 + 441),
      *(_DWORD *)(a2 + 444),
      *(_DWORD *)(a2 + 448),
      *(_DWORD *)(a2 + 400),
      *(_DWORD *)(a2 + 532),
      v8,
      *(_QWORD *)(a2 + 272),
      *(_QWORD *)(a2 + 280),
      v14,
      v13,
      v12,
      v3,
      v7);
  }
  else
  {
    v9 = a1;
  }
  return Etw_DeviceListRundown(v9, a2);
}
