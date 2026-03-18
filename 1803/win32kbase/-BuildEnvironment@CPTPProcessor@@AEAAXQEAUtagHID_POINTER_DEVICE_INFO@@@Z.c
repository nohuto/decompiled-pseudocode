/*
 * XREFs of ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0125048
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01255B4 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01268D4 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 */

void __fastcall CPTPProcessor::BuildEnvironment(CPTPProcessor *this, struct tagHID_POINTER_DEVICE_INFO *const a2)
{
  _DWORD *v2; // rbx
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1

  v2 = (_DWORD *)((char *)this + 656);
  memset((char *)this + 656, 0, 0x218uLL);
  v5 = (_OWORD *)((char *)this + 748);
  v6 = 2LL;
  *((_DWORD *)this + 165) = (*((_DWORD *)a2 + 69) & 1) == 0;
  *v2 = *((_DWORD *)a2 + 170);
  *(_OWORD *)((char *)this + 1068) = *(_OWORD *)((char *)a2 + 248);
  *(_QWORD *)((char *)this + 1084) = *((_QWORD *)a2 + 33);
  *((_DWORD *)this + 273) = *((_DWORD *)a2 + 68);
  *((_OWORD *)this + 42) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)this + 186) = *((_DWORD *)a2 + 216);
  v7 = &gTPThresholds;
  do
  {
    *v5 = *v7;
    v5[1] = v7[1];
    v5[2] = v7[2];
    v5[3] = v7[3];
    v5[4] = v7[4];
    v5[5] = v7[5];
    v5[6] = v7[6];
    v5 += 8;
    v8 = v7[7];
    v7 += 8;
    *(v5 - 1) = v8;
    --v6;
  }
  while ( v6 );
  *v5 = *v7;
  v5[1] = v7[1];
  *((_QWORD *)v5 + 4) = *((_QWORD *)v7 + 4);
  *(_OWORD *)((char *)this + 1044) = gTouchPadParameters;
  *(_QWORD *)((char *)this + 1060) = qword_1C01A02B8;
  *(_OWORD *)((char *)this + 1096) = gAapState;
  *(_OWORD *)((char *)this + 1112) = xmmword_1C01A2BA0;
  *(_OWORD *)((char *)this + 1128) = xmmword_1C01A2BB0;
  *(_OWORD *)((char *)this + 1144) = xmmword_1C01A2BC0;
  *(_OWORD *)((char *)this + 1160) = xmmword_1C01A2BD0;
  *(_OWORD *)((char *)this + 1176) = xmmword_1C01A2BE0;
  *((_DWORD *)this + 173) = *((_DWORD *)a2 + 59);
  *((_DWORD *)this + 175) = *((_DWORD *)this + 171) + 1;
  *((_DWORD *)this + 172) = *((_DWORD *)a2 + 60);
  *((_DWORD *)this + 174) = *((_DWORD *)a2 + 61) + 1;
  *((_DWORD *)this + 166) = (*((_DWORD *)a2 + 69) & 2u) >> 1;
  *((_OWORD *)this + 44) = *((_OWORD *)a2 + 10);
  *((_OWORD *)this + 45) = *((_OWORD *)a2 + 11);
  *((_DWORD *)this + 167) = *((_DWORD *)gpsi + 497) != 0;
  *((union _LARGE_INTEGER *)this + 92) = gliQpcFreq;
}
