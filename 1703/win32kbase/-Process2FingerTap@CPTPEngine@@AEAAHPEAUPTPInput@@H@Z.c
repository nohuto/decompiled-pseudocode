/*
 * XREFs of ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C01364F8
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAA?AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z @ 0x1C0134D64 (-DoTPMouseProcessing@CPTPEngine@@AEAA-AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z @ 0x1C0137BC8 (-Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z.c)
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
  __int64 v19; // rax
  int v20; // eax
  int v21; // ebp
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rbx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // [rsp+58h] [rbp+10h] BYREF
  __int64 v31; // [rsp+68h] [rbp+20h] BYREF

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0LL;
  v31 = 0LL;
  v5 = 0;
  v30 = 0LL;
  v7 = (char *)a2 + 52;
  if ( v3 )
  {
    v9 = v3;
    do
    {
      if ( *((_DWORD *)v7 + 3) )
      {
        ++v5;
        v10 = &v30;
        if ( v4 )
          v10 = &v31;
        *v10 = (__int64)v7;
        v4 = v30;
      }
      v7 += 96;
      --v9;
    }
    while ( v9 );
    if ( (unsigned int)(v5 - 1) <= 1 )
    {
      v11 = *(_DWORD *)(v4 + 4);
      v12 = *((_DWORD *)this + 4);
      v13 = *(_DWORD *)(v4 + 12);
      v14 = *((_DWORD *)this + 805);
      LODWORD(v9) = v11 % v12;
      v15 = 288 * v9;
      if ( (v14 & 0x4000) != 0 )
      {
        if ( v5 == 1 )
        {
          if ( (v13 & 0x40000) != 0 && (*((_DWORD *)this + 805) & 1) == a3 )
          {
            v16 = *(_DWORD *)((char *)this + v15 + 1168);
            if ( (v16 & 4) == 0
              && (v16 & 8) == 0
              && ((v16 & 0x100) == 0
               || *(_QWORD *)((char *)this + v15 + 1256) - *(_QWORD *)((char *)this + v15 + 1248) < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 27) / 0x3E8) )
            {
              v17 = v14 & 0xFFFFBFFF;
              *((_DWORD *)this + 805) = v17;
              if ( (v17 & 0x10) != 0 )
                return 1LL;
              v19 = *((_QWORD *)this + 377);
              goto LABEL_20;
            }
          }
          if ( (v13 & 0x20000) != 0 && (*((_DWORD *)this + 805) & 1) == a3 )
          {
            v20 = *(_DWORD *)((char *)this + v15 + 1168);
            if ( (v20 & 4) == 0 && (v20 & 8) == 0 )
              return 1LL;
          }
        }
        *((_DWORD *)this + 805) = v14 & 0xFFFFBFFF;
      }
      else if ( v5 == 2 )
      {
        v21 = *(_DWORD *)(v31 + 12);
        v22 = *(_QWORD *)((char *)this + v15 + 1240);
        v23 = *(_DWORD *)(v31 + 4) % v12;
        v24 = 288 * v23;
        v25 = *((_QWORD *)this + 36 * (unsigned int)v23 + 155);
        v26 = v22 < v25 ? v25 - v22 : v22 - v25;
        if ( v26 <= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 31) / 0x3E8 )
        {
          v27 = *(_DWORD *)((char *)this + v15 + 1168);
          if ( (v27 & 4) == 0 )
          {
            v28 = *(_DWORD *)((char *)this + v24 + 1168);
            if ( (v28 & 4) == 0 && (v27 & 8) == 0 && (v28 & 8) == 0 )
            {
              if ( (v13 & v21 & 0x40000) == 0 )
              {
                if ( !*((_DWORD *)a2 + 10) )
                {
                  *((_DWORD *)this + 805) = v14 | 0x4000;
                  if ( (v13 & 0x40000) != 0 )
                  {
                    v29 = *(_QWORD *)((char *)this + v15 + 1188);
                  }
                  else
                  {
                    if ( (v21 & 0x40000) == 0 )
                      return 1LL;
                    v29 = *(_QWORD *)((char *)this + v24 + 1188);
                  }
                  *((_QWORD *)this + 377) = v29;
                }
                return 1LL;
              }
              if ( (v14 & 0x10) != 0 )
                return 1LL;
              v19 = *(_QWORD *)((char *)this + v24 + 1188);
LABEL_20:
              if ( (int)((HIDWORD(*(_QWORD *)((char *)this + v15 + 1188)) - HIDWORD(v19))
                       * (HIDWORD(*(_QWORD *)((char *)this + v15 + 1188)) - HIDWORD(v19))
                       + (*(_QWORD *)((char *)this + v15 + 1188) - v19) * (*(_QWORD *)((char *)this + v15 + 1188) - v19)) <= (unsigned __int64)*((unsigned int *)this + 74) )
                CPTPEngine::Send2FingerTap(this, a2, *(_DWORD *)((char *)this + v15 + 1304));
              return 1LL;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
