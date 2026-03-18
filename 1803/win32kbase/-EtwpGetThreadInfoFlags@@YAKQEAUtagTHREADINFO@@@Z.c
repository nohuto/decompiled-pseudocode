/*
 * XREFs of ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00AB2F4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     EtwTraceProcessWindowInfo @ 0x1C005AE60 (EtwTraceProcessWindowInfo.c)
 *     EtwTraceInputProcessDelay @ 0x1C00706D0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0070E20 (EtwTraceMessageCheckDelay.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00AAE20 (-EtwCaptureStateCallback@@YAXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall EtwpGetThreadInfoFlags(struct tagTHREADINFO *const a1)
{
  int v1; // r9d
  int v3; // r8d
  int v4; // ecx
  bool v5; // sf
  int v6; // r9d
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rcx
  int result; // eax

  v1 = *((_DWORD *)a1 + 300);
  v3 = ((unsigned int)v1 >> 29) & 1 | 2;
  if ( (v1 & 0x40000000) == 0 )
    v3 = ((unsigned int)v1 >> 29) & 1;
  v4 = v3 | 4;
  v5 = v1 < 0;
  v6 = *((_DWORD *)a1 + 120);
  if ( !v5 )
    v4 = v3;
  v7 = v4 | 8;
  if ( !*((_DWORD *)a1 + 222) )
    v7 = v4;
  v8 = v7 | 0x10;
  if ( !*((_DWORD *)a1 + 221) )
    v8 = v7;
  v9 = v8 | 0x20;
  if ( v6 >= 0 )
    v9 = v8;
  v10 = v9 | 0x40;
  if ( (v6 & 1) == 0 )
    v10 = v9;
  v11 = v10 | 0x200;
  if ( (v6 & 0x400) == 0 )
    v11 = v10;
  v12 = v11 | 0x80;
  if ( !*((_QWORD *)a1 + 141) )
    v12 = v11;
  v13 = *((_QWORD *)a1 + 53);
  result = v12;
  if ( v13 && *(_DWORD *)(v13 + 40) )
    result = v12 | 0x100;
  if ( gptiForeground == a1 )
    result |= 0x400u;
  if ( v13 == gpqForeground )
    return result | 0x800;
  return result;
}
