/*
 * XREFs of ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C012F118
 * Callers:
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C012F400 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?IsKeyDownSpecified@@YAHEPEBE@Z @ 0x1C012EFB4 (-IsKeyDownSpecified@@YAHEPEBE@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C012F69C (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C012FD50 (ProcessKeyboardInputWorker.c)
 */

__int64 __fastcall MapFlexibleKeys(struct tagKE *a1, char a2, struct DEVICEINFO *a3)
{
  struct DEVICEINFO *v4; // r13
  struct tagKE *v5; // r15
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // r11
  unsigned int v10; // r10d
  char *v11; // rdi
  unsigned __int8 v12; // r14
  int v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // r14d
  unsigned int v16; // r12d
  __int64 v17; // rdi
  __int64 v18; // r13
  char v19; // cl
  unsigned __int8 v20; // cl
  __int64 v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // r13
  unsigned __int8 v24; // cl
  __int64 v25; // rax
  __int16 v26; // ax
  char v27; // dl
  __int64 v28; // rdi
  unsigned __int8 *v29; // rbx
  unsigned __int8 *v30; // rbx
  __int64 v31; // rdi
  _WORD v35[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v36; // [rsp+34h] [rbp-2Ch]
  int v37; // [rsp+38h] [rbp-28h]
  _BYTE v38[8]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v39[8]; // [rsp+48h] [rbp-18h] BYREF

  v4 = a3;
  v5 = a1;
  v6 = 0;
  LOWORD(v7) = 1;
  if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) )
    return 1LL;
  while ( 1 )
  {
    v8 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    v9 = 16LL * v6;
    if ( *(_BYTE *)(v9 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 1) != a2
      || *(_BYTE *)(v9 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels) != *(_BYTE *)v5 )
    {
      goto LABEL_12;
    }
    if ( *((__int16 *)v5 + 1) < 0 && v6 == iLastMatchedTarget )
      break;
    v10 = 0;
    v11 = (char *)&unk_1C01842C0;
    do
    {
      v12 = *v11;
      if ( *v11 == BYTE4(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) )
      {
        BYTE4(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 0;
      }
      else
      {
        v13 = IsKeyDownSpecified(*v11, (const unsigned __int8 *)(v9 + v8 + 2));
        LOWORD(v7) = 1;
        if ( (((unsigned __int8)(1 << (2 * (v12 & 3))) & gafRawKeyState[(unsigned __int64)v12 >> 2]) == 0) == v13 )
          break;
      }
      ++v10;
      ++v11;
    }
    while ( v10 < 0xA );
    if ( v10 >= 0xA )
      goto LABEL_15;
LABEL_12:
    if ( ++v6 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) )
      goto LABEL_15;
  }
  iLastMatchedTarget = -1;
LABEL_15:
  if ( v6 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) )
    return 1LL;
  v14 = 0;
  v15 = 0;
  if ( *((__int16 *)v5 + 1) >= 0 )
  {
    v16 = 0;
    v17 = 16LL * v6;
    v18 = v17;
    do
    {
      v19 = *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + v18 + 2);
      if ( !v19 )
        break;
      if ( !(unsigned int)IsKeyDownSpecified(
                            v19,
                            (const unsigned __int8 *)(v17 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 10LL)) )
      {
        v21 = v14;
        v14 += v7;
        v38[v21] = v20;
        SendKeyUpDown(v20, v7);
        v7 = 1LL;
      }
      v16 += v7;
      v18 += v7;
    }
    while ( v16 < 6 );
    v22 = 0;
    v23 = 16LL * v6;
    do
    {
      if ( !*(_BYTE *)(17LL * v6 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 10) )
        break;
      if ( !(unsigned int)IsKeyDownSpecified(
                            *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + v23 + 10),
                            (const unsigned __int8 *)(v17 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 2LL)) )
      {
        v25 = v15;
        v15 += v7;
        v39[v25] = v24;
        SendKeyUpDown(v24, 0);
        v7 = 1LL;
      }
      v22 += v7;
      v23 += v7;
    }
    while ( v22 < 6 );
    v5 = a1;
    v4 = a3;
  }
  v26 = 0;
  v37 = 0;
  v36 = 0;
  v27 = *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 16LL * v6 + 9);
  if ( v27 == -32 )
  {
    v26 = 2;
    goto LABEL_32;
  }
  if ( v27 == -31 )
  {
    v26 = 4;
LABEL_32:
    v36 = v26;
  }
  if ( *((__int16 *)v5 + 1) < 0 )
    v36 = v7 | v26;
  v35[1] = *(unsigned __int8 *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 16LL * v6 + 8);
  v35[0] = 0;
  ProcessKeyboardInputWorker(v35, v4, 0LL);
  if ( *((__int16 *)v5 + 1) >= 0 )
  {
    BYTE4(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = BYTE2(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    iLastMatchedTarget = v6;
  }
  if ( v14 )
  {
    v28 = v14;
    v29 = v38;
    do
    {
      SendKeyUpDown(*v29++, 0);
      --v28;
    }
    while ( v28 );
  }
  if ( v15 )
  {
    v30 = v39;
    v31 = v15;
    do
    {
      SendKeyUpDown(*v30++, 1u);
      --v31;
    }
    while ( v31 );
  }
  return 0LL;
}
