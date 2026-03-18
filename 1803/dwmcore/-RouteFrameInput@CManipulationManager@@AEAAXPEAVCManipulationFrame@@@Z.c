/*
 * XREFs of ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801D0678
 * Callers:
 *     ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801D05D0 (-RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z @ 0x1801CE788 (-CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801CEAB8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801D0B38 (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::RouteFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  int v3; // r12d
  __int64 v4; // rax
  char v5; // r14
  CManipulationManager *v6; // r9
  bool v7; // r14
  unsigned int v8; // esi
  unsigned int v9; // eax
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r10
  unsigned int v13; // r15d
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // r9
  char v17; // al
  unsigned int v18; // [rsp+34h] [rbp-C4h]
  int v19; // [rsp+38h] [rbp-C0h]
  _DWORD v20[3]; // [rsp+3Ch] [rbp-BCh] BYREF
  CManipulationManager *v21; // [rsp+48h] [rbp-B0h]
  _QWORD v22[4]; // [rsp+50h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-88h] BYREF
  _DWORD *v24; // [rsp+90h] [rbp-68h]
  int v25; // [rsp+98h] [rbp-60h]
  int v26; // [rsp+9Ch] [rbp-5Ch]
  __int64 v27; // [rsp+A0h] [rbp-58h]
  int v28; // [rsp+A8h] [rbp-50h]
  int v29; // [rsp+ACh] [rbp-4Ch]
  _QWORD *v30; // [rsp+B0h] [rbp-48h]
  int v31; // [rsp+B8h] [rbp-40h]
  int v32; // [rsp+BCh] [rbp-3Ch]

  v21 = this;
  v22[1] = this;
  v22[2] = a2;
  v3 = 0;
  v19 = 0;
  v4 = 280LL;
  if ( *((_DWORD *)a2 + 24) != 5 )
    v4 = 272LL;
  if ( *(_QWORD *)((char *)this + v4) - *((_QWORD *)a2 + 22) > *((_QWORD *)this + 37) )
  {
    *((_BYTE *)a2 + 40) |= 2u;
    CManipulationManager::TargetFrameInput(this, a2);
  }
  v5 = *((_BYTE *)a2 + 40);
  if ( (v5 & 1) != 0 && !CManipulationFrame::IsMousewheelFrame(a2) )
  {
    v7 = (v5 & 4) != 0;
    v8 = 0;
    v18 = 0;
    v9 = *((_DWORD *)a2 + 4);
    while ( v8 < v9 )
    {
      v10 = 232LL * v8;
      v20[0] = v7;
      if ( (*((_BYTE *)a2 + v10 + 320) & 1) == v20[0] && *(_DWORD *)((char *)a2 + v10 + 104) )
      {
        if ( *(_QWORD *)((char *)a2 + v10 + 120) == -1LL || CManipulationManager::CheckForBufferedDescendant(v6, a2, v8) )
        {
          v19 = ++v3;
        }
        else
        {
          AcquireSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
          dword_1802D9E18 = GetCurrentThreadId();
          v11 = 0LL;
          v12 = *(_QWORD *)((char *)a2 + v10 + 120);
          v22[0] = v12;
          v13 = v8;
          v14 = v20[0];
          while ( v13 < *((_DWORD *)a2 + 4) )
          {
            v15 = 232LL * v13;
            if ( *(_QWORD *)((char *)a2 + v15 + 120) == v12 && (*((_BYTE *)a2 + v15 + 320) & 1) == v14 )
            {
              if ( *(_DWORD *)((char *)a2 + v15 + 104) )
              {
                CManipulationManager::s_rgPointerIds[v11] = *(_DWORD *)((char *)a2 + v15 + 100);
                v11 = (unsigned int)(v11 + 1);
                *(_DWORD *)((char *)a2 + v15 + 104) = 0;
                if ( dword_1802D3FE0 > 4u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
                  {
                    v20[0] = *((_DWORD *)a2 + 6);
                    v24 = v20;
                    v25 = 4;
                    v26 = 0;
                    v27 = v16;
                    v28 = 4;
                    v29 = 0;
                    v30 = v22;
                    v31 = 8;
                    v32 = 0;
                    TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A9CA8, 0LL, 0LL, 5u, &pData);
                    v12 = v22[0];
                  }
                }
              }
            }
            ++v13;
          }
          v20[1] = v11;
          v8 = v18;
          v3 = v19;
          SetManipulationInputTarget(
            *((unsigned int *)a2 + 6),
            v12,
            (unsigned int)v11,
            CManipulationManager::s_rgPointerIds);
          *((_DWORD *)a2 + 5) += v11;
          dword_1802D9E18 = 0;
          ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
        }
      }
      v18 = ++v8;
      v9 = *((_DWORD *)a2 + 4);
      if ( v8 == v9 && v7 )
      {
        v7 = 0;
        v8 = 0;
        v18 = 0;
      }
      v6 = v21;
    }
    v17 = *((_BYTE *)a2 + 40) & 0xFE;
    *((_BYTE *)a2 + 40) = v17;
    if ( !v3 )
      *((_BYTE *)a2 + 40) = v17 & 0xFB;
  }
}
