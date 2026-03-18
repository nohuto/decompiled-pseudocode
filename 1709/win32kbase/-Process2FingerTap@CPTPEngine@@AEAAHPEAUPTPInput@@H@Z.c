/*
 * XREFs of ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C0135090
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0133D7C (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z @ 0x1C0136C50 (-Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z.c)
 */

__int64 __fastcall CPTPEngine::Process2FingerTap(CPTPEngine *this, struct PTPInput *a2, int a3)
{
  unsigned int v3; // eax
  __int64 v4; // r10
  int v5; // ebx
  char *v7; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // r14d
  int v13; // esi
  int v14; // r10d
  __int64 v15; // r11
  int v16; // eax
  unsigned int v17; // r10d
  bool v18; // zf
  __int64 v19; // r8
  bool v20; // cc
  int v22; // eax
  int v23; // ebp
  unsigned __int64 v24; // r8
  __int64 v25; // rbx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  int v28; // eax
  int v29; // ecx
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // [rsp+58h] [rbp+10h] BYREF
  __int64 v34; // [rsp+68h] [rbp+20h] BYREF

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0LL;
  v34 = 0LL;
  v5 = 0;
  v33 = 0LL;
  v7 = (char *)a2 + 52;
  if ( !v3 )
    return 0LL;
  v9 = v3;
  do
  {
    if ( *((_DWORD *)v7 + 3) )
    {
      ++v5;
      v10 = &v33;
      if ( v4 )
        v10 = &v34;
      *v10 = (__int64)v7;
      v4 = v33;
    }
    v7 += 96;
    --v9;
  }
  while ( v9 );
  if ( (unsigned int)(v5 - 1) > 1 )
    return 0LL;
  v11 = *(_DWORD *)(v4 + 4);
  v12 = *((_DWORD *)this + 4);
  v13 = *(_DWORD *)(v4 + 12);
  v14 = *((_DWORD *)this + 820);
  v15 = 296LL * (v11 % v12);
  if ( (v14 & 0x2000) == 0 )
  {
    if ( v5 != 2 )
      return 0LL;
    v23 = *(_DWORD *)(v34 + 12);
    v24 = *(_QWORD *)((char *)this + v15 + 1256);
    v25 = 296LL * (*(_DWORD *)(v34 + 4) % v12);
    v26 = *(_QWORD *)((char *)this + v25 + 1256);
    v27 = v24 < v26 ? v26 - v24 : v24 - v26;
    if ( v27 > *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 31) / 0x3E8 )
      return 0LL;
    v28 = *(_DWORD *)((char *)this + v15 + 1192);
    if ( (v28 & 4) != 0 )
      return 0LL;
    v29 = *(_DWORD *)((char *)this + v25 + 1192);
    if ( (v29 & 4) != 0 || (v28 & 8) != 0 || (v29 & 8) != 0 )
      return 0LL;
    if ( (v13 & v23 & 0x40000) != 0 )
    {
      if ( (*((_DWORD *)this + 103) & 0x400) == 0 || (v14 & 0x10) != 0 )
        return 1LL;
      v30 = *(_QWORD *)((char *)this + v15 + 1212);
      v31 = v30 - *(_QWORD *)((char *)this + v25 + 1212);
      LODWORD(v30) = HIDWORD(v30) - HIDWORD(*(_QWORD *)((char *)this + v25 + 1212));
      v20 = (int)v30 * (int)v30 + v31 * v31 <= (unsigned __int64)*((unsigned int *)this + 74);
LABEL_20:
      if ( v20 )
        CPTPEngine::Send2FingerTap(this, a2, *(_DWORD *)((char *)this + v15 + 1324));
      return 1LL;
    }
    if ( !*((_DWORD *)a2 + 10) )
    {
      *((_DWORD *)this + 820) = v14 | 0x2000;
      if ( (v13 & 0x40000) != 0 )
      {
        v32 = *(_QWORD *)((char *)this + v15 + 1212);
LABEL_47:
        *(_QWORD *)((char *)this + 3076) = v32;
        return 1LL;
      }
      if ( (v23 & 0x40000) != 0 )
      {
        v32 = *(_QWORD *)((char *)this + v25 + 1212);
        goto LABEL_47;
      }
    }
    return 1LL;
  }
  if ( v5 == 1 )
  {
    if ( (v13 & 0x40000) != 0 && (*((_DWORD *)this + 820) & 1) == a3 )
    {
      v16 = *(_DWORD *)((char *)this + v15 + 1192);
      if ( (v16 & 4) == 0
        && (v16 & 8) == 0
        && ((v16 & 0x80u) == 0
         || *(_QWORD *)((char *)this + v15 + 1272) - *(_QWORD *)((char *)this + v15 + 1264) < *((_QWORD *)this + 12)
                                                                                            * (unsigned __int64)*((unsigned int *)this + 27)
                                                                                            / 0x3E8) )
      {
        v17 = v14 & 0xFFFFDFFF;
        v18 = (*((_DWORD *)this + 103) & 0x400) == 0;
        *((_DWORD *)this + 820) = v17;
        if ( v18 || (v17 & 0x10) != 0 )
          return 1LL;
        v19 = *(_QWORD *)((char *)this + v15 + 1212);
        v20 = (int)((HIDWORD(v19) - HIDWORD(*(_QWORD *)((char *)this + 3076)))
                  * (HIDWORD(v19) - HIDWORD(*(_QWORD *)((char *)this + 3076)))
                  + (v19 - *(_QWORD *)((char *)this + 3076)) * (v19 - *(_QWORD *)((char *)this + 3076))) <= (unsigned __int64)*((unsigned int *)this + 74);
        goto LABEL_20;
      }
    }
    if ( (v13 & 0x20000) != 0 && (*((_DWORD *)this + 820) & 1) == a3 )
    {
      v22 = *(_DWORD *)((char *)this + v15 + 1192);
      if ( (v22 & 4) == 0 && (v22 & 8) == 0 )
        return 1LL;
    }
  }
  *((_DWORD *)this + 820) = v14 & 0xFFFFDFFF;
  return 0LL;
}
