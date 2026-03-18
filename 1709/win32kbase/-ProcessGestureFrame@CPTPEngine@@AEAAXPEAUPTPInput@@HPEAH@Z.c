/*
 * XREFs of ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C013553C
 * Callers:
 *     ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C0132A68 (-DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z @ 0x1C0134B48 (-FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C0136D30 (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 */

void __fastcall CPTPEngine::ProcessGestureFrame(CPTPEngine *this, struct PTPInput *a2, unsigned int a3, int *a4)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  __int64 *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  _BYTE *v16; // rbp
  __int128 v17; // xmm1
  _DWORD *v18; // r9
  int v19; // edi
  _BYTE *v20; // r8
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  unsigned int v26; // r10d
  __int64 v27; // r11
  __int64 v28; // r8
  char v29; // si
  bool v30; // r11
  char v31; // r12
  char v32; // r15
  char v33; // r8
  unsigned int v34; // r14d
  char *v35; // rdi
  __int64 v36; // rbp
  int v37; // eax
  int v38; // ecx
  BOOL v39; // r8d
  __int64 v42; // [rsp+50h] [rbp-2C8h] BYREF
  unsigned int v43; // [rsp+80h] [rbp-298h]
  _BYTE v44[12]; // [rsp+84h] [rbp-294h] BYREF
  char v45; // [rsp+90h] [rbp-288h] BYREF

  v4 = 4LL;
  v5 = a3;
  v7 = &v42;
  do
  {
    v8 = *((_OWORD *)a2 + 1);
    *(_OWORD *)v7 = *(_OWORD *)a2;
    v9 = *((_OWORD *)a2 + 2);
    *((_OWORD *)v7 + 1) = v8;
    v10 = *((_OWORD *)a2 + 3);
    *((_OWORD *)v7 + 2) = v9;
    v11 = *((_OWORD *)a2 + 4);
    *((_OWORD *)v7 + 3) = v10;
    v12 = *((_OWORD *)a2 + 5);
    *((_OWORD *)v7 + 4) = v11;
    v13 = *((_OWORD *)a2 + 6);
    *((_OWORD *)v7 + 5) = v12;
    v14 = *((_OWORD *)a2 + 7);
    a2 = (struct PTPInput *)((char *)a2 + 128);
    *((_OWORD *)v7 + 6) = v13;
    v7 += 16;
    *((_OWORD *)v7 - 1) = v14;
    --v4;
  }
  while ( v4 );
  v15 = *((_DWORD *)a2 + 28);
  v16 = 0LL;
  v17 = *((_OWORD *)a2 + 1);
  v18 = 0LL;
  v19 = 0;
  *(_OWORD *)v7 = *(_OWORD *)a2;
  v20 = v44;
  v21 = *((_OWORD *)a2 + 2);
  *((_OWORD *)v7 + 1) = v17;
  v22 = *((_OWORD *)a2 + 3);
  *((_OWORD *)v7 + 2) = v21;
  v23 = *((_OWORD *)a2 + 4);
  *((_OWORD *)v7 + 3) = v22;
  v24 = *((_OWORD *)a2 + 5);
  *((_OWORD *)v7 + 4) = v23;
  v25 = *((_OWORD *)a2 + 6);
  *((_OWORD *)v7 + 5) = v24;
  *((_OWORD *)v7 + 6) = v25;
  *((_DWORD *)v7 + 28) = v15;
  v26 = v43;
  if ( v43 )
  {
    v27 = v43;
    do
    {
      v18 = (_DWORD *)((char *)this + 296 * (unsigned int)(*((_DWORD *)v20 + 1) % *((_DWORD *)this + 4)) + 1192);
      if ( (*v18 & 1) != 0 && (*v18 & 0x400) == 0 )
      {
        ++v19;
        v16 = v20;
      }
      v20 += 96;
      --v27;
    }
    while ( v27 );
  }
  v28 = v42;
  v29 = 0;
  v30 = !v5
     && *((_DWORD *)this + 747) > 2u
     && v42 - *((_QWORD *)this + 399) < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 87) / 0x3E8;
  if ( v19 != 1 || (*((_DWORD *)v16 + 3) & 0x40000) != 0 )
  {
    v31 = 0;
  }
  else
  {
    v31 = 1;
    if ( (*v18 & 0x8000) == 0 )
    {
      *v18 |= 0x8000u;
      *((_QWORD *)this + 397) = v28;
    }
    if ( v28 - *((_QWORD *)this + 397) >= *((_QWORD *)this + 12)
                                        * (unsigned __int64)*((unsigned int *)this + 49)
                                        / 0x3E8 )
    {
      *v18 &= ~0x8000u;
      v29 = 1;
    }
  }
  v32 = 0;
  v33 = 1;
  if ( v29 || v30 )
    v29 = 1;
  v34 = 0;
  if ( v26 )
  {
    v35 = &v45;
    do
    {
      v36 = 296LL * (unsigned int)(*((_DWORD *)v35 - 2) % *((_DWORD *)this + 4));
      v37 = *(_DWORD *)((char *)this + v36 + 1192);
      if ( (v37 & 1) != 0 && v29 && (v37 & 2) != 0 )
        *(_DWORD *)((char *)this + v36 + 1192) = v37 | 0x400;
      v38 = *(_DWORD *)((char *)this + v36 + 1192);
      if ( (v38 & 1) == 0 || (v38 & 0x400) != 0 )
      {
        *(_DWORD *)v35 = 0;
        *(_QWORD *)(v35 + 28) = 0LL;
      }
      else
      {
        v39 = (v38 & 0x20000000) != 0 || (*(_DWORD *)v35 & 0x2000) != 0;
        if ( (v38 & 2) != 0 )
          *(_DWORD *)v35 = *(_DWORD *)v35 & 0xFFFCFFFF | 0x10000;
        if ( v29 )
          *(_DWORD *)v35 = 0x40000;
        if ( (*(_DWORD *)v35 & 0x40000) == 0 )
          v32 = 1;
        CPTPEngine::FixupGestureContact(this, (struct PTPEnginePointerNode *)(v35 - 12), v39);
        v33 = 0;
        if ( !v31 )
          *(_DWORD *)((char *)this + v36 + 1192) &= ~0x8000u;
      }
      v26 = v43;
      ++v34;
      v35 += 96;
    }
    while ( v34 < v43 );
    v5 = a3;
  }
  if ( !v29 && !v33 && v32 || (*a4 = 1, !v33) )
    CBasePTPEngine::SendGestureOutput(this, 3LL, v5, v26, v44);
}
