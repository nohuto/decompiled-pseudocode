/*
 * XREFs of ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00DF944
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00DF5E8 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     EtwTraceInputProcessDelay @ 0x1C00E03A0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00E0800 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     <none>
 */

int __fastcall EtwpGetThreadInfoFlags(struct tagTHREADINFO *const a1)
{
  int v1; // r9d
  int v3; // r8d
  int v4; // eax
  int v5; // ecx
  bool v6; // sf
  int v7; // r9d
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rcx
  int result; // eax

  v1 = *((_DWORD *)a1 + 296);
  v3 = ((unsigned int)v1 >> 29) & 1 | 2;
  v4 = *((_DWORD *)a1 + 218);
  if ( (v1 & 0x40000000) == 0 )
    v3 = (*((_DWORD *)a1 + 296) >> 29) & 1;
  v5 = v3 | 4;
  v6 = v1 < 0;
  v7 = *((_DWORD *)a1 + 116);
  if ( !v6 )
    v5 = v3;
  v8 = v5 | 8;
  if ( !v4 )
    v8 = v5;
  v9 = v8 | 0x10;
  if ( !*((_DWORD *)a1 + 217) )
    v9 = v8;
  v10 = v9 | 0x20;
  if ( v7 >= 0 )
    v10 = v9;
  v11 = v10 | 0x40;
  if ( (v7 & 1) == 0 )
    v11 = v10;
  v12 = v11 | 0x200;
  if ( (v7 & 0x400) == 0 )
    v12 = v11;
  v13 = v12 | 0x80;
  if ( !*((_QWORD *)a1 + 139) )
    v13 = v12;
  v14 = *((_QWORD *)a1 + 51);
  result = v13;
  if ( v14 && *(_DWORD *)(v14 + 40) )
    result = v13 | 0x100;
  if ( gptiForeground == a1 )
    result |= 0x400u;
  if ( v14 == gpqForeground )
    return result | 0x800;
  return result;
}
