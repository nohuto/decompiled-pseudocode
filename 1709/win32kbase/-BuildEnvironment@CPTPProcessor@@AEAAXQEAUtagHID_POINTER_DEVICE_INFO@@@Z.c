/*
 * XREFs of ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012A614
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012AB74 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012BD1C (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall CPTPProcessor::BuildEnvironment(CPTPProcessor *this, struct tagHID_POINTER_DEVICE_INFO *const a2)
{
  _DWORD *v2; // rbx
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1

  v2 = (_DWORD *)((char *)this + 832);
  memset((char *)this + 832, 0, 0x214uLL);
  v5 = (_OWORD *)((char *)this + 924);
  v6 = 2LL;
  *((_DWORD *)this + 209) = (*((_DWORD *)a2 + 69) & 1) == 0;
  *v2 = *((_DWORD *)a2 + 170);
  *(_OWORD *)((char *)this + 1240) = *(_OWORD *)((char *)a2 + 248);
  *((_QWORD *)this + 157) = *((_QWORD *)a2 + 33);
  *((_DWORD *)this + 316) = *((_DWORD *)a2 + 68);
  *((_OWORD *)this + 53) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)this + 230) = *((_DWORD *)a2 + 216);
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
  *((_DWORD *)v5 + 8) = *((_DWORD *)v7 + 8);
  *((_OWORD *)this + 76) = gTouchPadParameters;
  *((_QWORD *)this + 154) = qword_1C018EC78;
  *(_OWORD *)((char *)this + 1268) = gAapState;
  *(_OWORD *)((char *)this + 1284) = xmmword_1C01961A0;
  *(_OWORD *)((char *)this + 1300) = xmmword_1C01961B0;
  *(_OWORD *)((char *)this + 1316) = xmmword_1C01961C0;
  *(_OWORD *)((char *)this + 1332) = xmmword_1C01961D0;
  *(_OWORD *)((char *)this + 1348) = xmmword_1C01961E0;
  *((_DWORD *)this + 217) = *((_DWORD *)a2 + 59);
  *((_DWORD *)this + 219) = *((_DWORD *)this + 215) + 1;
  *((_DWORD *)this + 216) = *((_DWORD *)a2 + 60);
  *((_DWORD *)this + 218) = *((_DWORD *)a2 + 61) + 1;
  *((_DWORD *)this + 210) = (*((_DWORD *)a2 + 69) & 2u) >> 1;
  *((_OWORD *)this + 55) = *((_OWORD *)a2 + 10);
  *((_OWORD *)this + 56) = *((_OWORD *)a2 + 11);
  *((_DWORD *)this + 211) = *((_DWORD *)gpsi + 493) != 0;
  *((union _LARGE_INTEGER *)this + 114) = gliQpcFreq;
}
