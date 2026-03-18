/*
 * XREFs of ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012AEC0
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012B4D4 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012C5F8 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall CPTPProcessor::BuildEnvironment(CPTPProcessor *this, struct tagHID_POINTER_DEVICE_INFO *const a2)
{
  _DWORD *v2; // rbx
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  int v9; // ebx
  _OWORD *v10; // rcx

  v2 = (_DWORD *)((char *)this + 808);
  memset((char *)this + 808, 0, 0x200uLL);
  v5 = &gTPThresholds;
  v6 = 2LL;
  *((_DWORD *)this + 203) = (*((_DWORD *)a2 + 65) & 1) == 0;
  *v2 = *((_DWORD *)a2 + 174);
  *(_OWORD *)((char *)this + 1196) = *(_OWORD *)((char *)a2 + 232);
  *(_QWORD *)((char *)this + 1212) = *((_QWORD *)a2 + 31);
  *((_DWORD *)this + 305) = *((_DWORD *)a2 + 64);
  *(_OWORD *)((char *)this + 824) = *(_OWORD *)((char *)a2 + 204);
  *((_DWORD *)this + 224) = *((_DWORD *)a2 + 382);
  v7 = (_OWORD *)((char *)this + 900);
  do
  {
    *v7 = *v5;
    v7[1] = v5[1];
    v7[2] = v5[2];
    v7[3] = v5[3];
    v7[4] = v5[4];
    v7[5] = v5[5];
    v7[6] = v5[6];
    v7 += 8;
    v8 = v5[7];
    v5 += 8;
    *(v7 - 1) = v8;
    --v6;
  }
  while ( v6 );
  *v7 = *v5;
  *(_OWORD *)((char *)this + 1172) = gTouchPadParameters;
  *(_QWORD *)((char *)this + 1188) = qword_1C018A108;
  *(_OWORD *)((char *)this + 1224) = gAapState;
  *(_OWORD *)((char *)this + 1240) = xmmword_1C018F340;
  *(_OWORD *)((char *)this + 1256) = xmmword_1C018F350;
  *(_OWORD *)((char *)this + 1272) = xmmword_1C018F360;
  *(_OWORD *)((char *)this + 1288) = xmmword_1C018F370;
  *(_OWORD *)((char *)this + 1304) = xmmword_1C018F380;
  *((_DWORD *)this + 211) = *((_DWORD *)a2 + 55);
  *((_DWORD *)this + 213) = *((_DWORD *)this + 209) + 1;
  *((_DWORD *)this + 210) = *((_DWORD *)a2 + 56);
  *((_DWORD *)this + 212) = *((_DWORD *)a2 + 57) + 1;
  *((_DWORD *)this + 204) = (*((_DWORD *)a2 + 65) & 2u) >> 1;
  v9 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v10 = (_OWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 36) + 40LL) + 44LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v10 = (_OWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 36) + 40LL) + 60LL);
  }
  else
  {
    v10 = (_OWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 36) + 40LL) + 28LL);
  }
  *(_OWORD *)((char *)this + 856) = *v10;
  *(_OWORD *)((char *)this + 872) = *(_OWORD *)((char *)a2 + 140);
  LOBYTE(v9) = *((_DWORD *)gpsi + 493) != 0;
  *((_DWORD *)this + 205) = v9;
  *((union _LARGE_INTEGER *)this + 111) = gliQpcFreq;
}
