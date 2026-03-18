/*
 * XREFs of ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800CFDF0
 * Callers:
 *     ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18004DE38 (-RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z @ 0x18004DEC8 (-CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18004E068 (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CManipulationManager::RouteFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  struct CManipulationFrame *v2; // rbx
  int v3; // r15d
  __int64 v4; // rax
  char v5; // r14
  bool v6; // r14
  unsigned int v7; // esi
  bool v8; // cf
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r10
  unsigned int v12; // r12d
  int v13; // r15d
  __int64 v14; // rdx
  const GUID *v15; // r8
  const GUID *v16; // r9
  char v17; // al
  bool v18; // [rsp+30h] [rbp-E8h]
  unsigned int v19; // [rsp+34h] [rbp-E4h]
  int v20; // [rsp+38h] [rbp-E0h]
  int v21; // [rsp+3Ch] [rbp-DCh] BYREF
  int v22; // [rsp+40h] [rbp-D8h]
  CManipulationManager *v23; // [rsp+48h] [rbp-D0h]
  unsigned int v24; // [rsp+50h] [rbp-C8h]
  __int64 v25; // [rsp+58h] [rbp-C0h] BYREF
  CManipulationManager *v26; // [rsp+60h] [rbp-B8h]
  struct CManipulationFrame *v27; // [rsp+68h] [rbp-B0h]
  __int64 v28; // [rsp+70h] [rbp-A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-98h] BYREF
  int *v30; // [rsp+A0h] [rbp-78h]
  int v31; // [rsp+A8h] [rbp-70h]
  int v32; // [rsp+ACh] [rbp-6Ch]
  const GUID *v33; // [rsp+B0h] [rbp-68h]
  int v34; // [rsp+B8h] [rbp-60h]
  int v35; // [rsp+BCh] [rbp-5Ch]
  __int64 *v36; // [rsp+C0h] [rbp-58h]
  int v37; // [rsp+C8h] [rbp-50h]
  int v38; // [rsp+CCh] [rbp-4Ch]

  v28 = -2LL;
  v2 = a2;
  v23 = this;
  v26 = this;
  v27 = a2;
  v3 = 0;
  v20 = 0;
  v4 = 272LL;
  if ( *((_DWORD *)a2 + 24) == 5 )
    v4 = 280LL;
  if ( *(_QWORD *)((char *)this + v4) - *((_QWORD *)a2 + 22) > *((_QWORD *)this + 37) )
  {
    *((_BYTE *)a2 + 40) |= 2u;
    CManipulationManager::TargetFrameInput(this, a2);
    this = v23;
  }
  v5 = *((_BYTE *)v2 + 40);
  if ( (v5 & 1) != 0 )
  {
    v6 = (v5 & 4) != 0;
LABEL_7:
    v7 = 0;
    v19 = 0;
    v18 = v6;
LABEL_8:
    v8 = v7 < *((_DWORD *)v2 + 4);
    while ( v8 )
    {
      v9 = 152LL * v7;
      v21 = v6;
      if ( (*((_BYTE *)v2 + v9 + 244) & 1) == v21 && *(_DWORD *)((char *)v2 + v9 + 104) )
      {
        if ( *(_QWORD *)((char *)v2 + v9 + 120) == -1LL
          || CManipulationManager::CheckForBufferedDescendant(this, v2, v7) )
        {
          v20 = ++v3;
        }
        else
        {
          AcquireSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
          dword_180241A48 = GetCurrentThreadId();
          v10 = 0LL;
          v11 = *(_QWORD *)((char *)v2 + v9 + 120);
          v25 = v11;
          v24 = *(_DWORD *)((char *)v2 + v9 + 240);
          v12 = v7;
          v13 = v21;
          while ( v12 < *((_DWORD *)v2 + 4) )
          {
            v14 = 152LL * v12;
            if ( *(_QWORD *)((char *)v2 + v14 + 120) == v11 && (*((_BYTE *)v2 + v14 + 244) & 1) == v13 )
            {
              if ( *(_DWORD *)((char *)v2 + v14 + 104) )
              {
                CManipulationManager::s_rgPointerIds[v10] = *(_DWORD *)((char *)v2 + v14 + 100);
                v10 = (unsigned int)(v10 + 1);
                *(_DWORD *)((char *)v2 + v14 + 104) = 0;
                if ( dword_18023D7F0 > 4u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
                  {
                    v21 = *((_DWORD *)v2 + 6);
                    v30 = &v21;
                    v31 = 4;
                    v32 = 0;
                    v33 = v16;
                    v34 = 4;
                    v35 = 0;
                    v36 = &v25;
                    v37 = 8;
                    v38 = 0;
                    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F8391, v15, v16, 5u, &pData);
                    v11 = v25;
                  }
                }
              }
            }
            ++v12;
          }
          v22 = v10;
          v7 = v19;
          v3 = v20;
          try
          {
            SetManipulationInputTarget(
              *((unsigned int *)v2 + 6),
              v25,
              v24,
              (unsigned int)v10,
              CManipulationManager::s_rgPointerIds);
          }
          catch ( ... )
          {
            v3 = v20;
            v6 = v18;
            v7 = v19;
            LODWORD(v10) = v22;
            v23 = v26;
            v2 = v27;
          }
          *((_DWORD *)v2 + 5) += v10;
          dword_180241A48 = 0;
          ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
        }
      }
      v19 = ++v7;
      v8 = v7 < *((_DWORD *)v2 + 4);
      this = v23;
      if ( v7 == *((_DWORD *)v2 + 4) )
      {
        if ( !v6 )
          goto LABEL_8;
        v6 = 0;
        goto LABEL_7;
      }
    }
    v17 = *((_BYTE *)v2 + 40) & 0xFE;
    *((_BYTE *)v2 + 40) = v17;
    if ( !v3 )
      *((_BYTE *)v2 + 40) = v17 & 0xFB;
  }
}
