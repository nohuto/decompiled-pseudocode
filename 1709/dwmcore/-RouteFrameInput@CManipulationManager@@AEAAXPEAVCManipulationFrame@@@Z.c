/*
 * XREFs of ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180197FA4
 * Callers:
 *     ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180197F14 (-RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z @ 0x180195B90 (-CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18019856C (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::RouteFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  struct CManipulationFrame *v2; // rbx
  CManipulationManager *v3; // r13
  int v4; // r15d
  __int64 v5; // rax
  char v6; // r14
  bool v7; // r14
  unsigned int v8; // esi
  bool v9; // cf
  __int64 v10; // r12
  unsigned int v11; // edx
  __int64 v12; // r10
  unsigned int v13; // r12d
  int v14; // r15d
  __int64 v15; // r8
  const GUID *v16; // r8
  const GUID *v17; // r9
  char v18; // al
  bool v19; // [rsp+30h] [rbp-D8h]
  unsigned int v20; // [rsp+34h] [rbp-D4h]
  int v21; // [rsp+38h] [rbp-D0h]
  unsigned int v22; // [rsp+3Ch] [rbp-CCh]
  int v23; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  CManipulationManager *v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+58h] [rbp-B0h]
  CManipulationManager *v27; // [rsp+60h] [rbp-A8h]
  struct CManipulationFrame *v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-88h] BYREF
  int *v31; // [rsp+A0h] [rbp-68h]
  int v32; // [rsp+A8h] [rbp-60h]
  int v33; // [rsp+ACh] [rbp-5Ch]
  const GUID *v34; // [rsp+B0h] [rbp-58h]
  int v35; // [rsp+B8h] [rbp-50h]
  int v36; // [rsp+BCh] [rbp-4Ch]
  __int64 *v37; // [rsp+C0h] [rbp-48h]
  int v38; // [rsp+C8h] [rbp-40h]
  int v39; // [rsp+CCh] [rbp-3Ch]

  v29 = -2LL;
  v2 = a2;
  v3 = this;
  v25 = this;
  v27 = this;
  v28 = a2;
  v4 = 0;
  v21 = 0;
  v5 = 280LL;
  if ( *((_DWORD *)a2 + 24) != 5 )
    v5 = 272LL;
  if ( *(_QWORD *)((char *)this + v5) - *((_QWORD *)a2 + 22) > *((_QWORD *)this + 37) )
  {
    *((_BYTE *)a2 + 40) |= 2u;
    CManipulationManager::TargetFrameInput(this, a2);
  }
  v6 = *((_BYTE *)v2 + 40);
  if ( (v6 & 1) != 0 )
  {
    v7 = (v6 & 4) != 0;
LABEL_7:
    v8 = 0;
    v22 = 0;
    v19 = v7;
LABEL_8:
    v9 = v8 < *((_DWORD *)v2 + 4);
    while ( v9 )
    {
      v10 = 224LL * v8;
      v23 = v7;
      if ( (*((_BYTE *)v2 + v10 + 312) & 1) == v23 && *(_DWORD *)((char *)v2 + v10 + 104) )
      {
        if ( *(_QWORD *)((char *)v2 + v10 + 120) == -1LL || CManipulationManager::CheckForBufferedDescendant(v3, v2, v8) )
        {
          v21 = ++v4;
        }
        else
        {
          AcquireSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
          dword_180272588 = GetCurrentThreadId();
          v11 = 0;
          v20 = 0;
          v12 = *(_QWORD *)((char *)v2 + v10 + 120);
          v24 = v12;
          v26 = *(_QWORD *)((char *)v2 + v10 + 304);
          v13 = v8;
          v14 = v23;
          while ( v13 < *((_DWORD *)v2 + 4) )
          {
            v15 = 224LL * v13;
            if ( *(_QWORD *)((char *)v2 + v15 + 120) == v12 && (*((_BYTE *)v2 + v15 + 312) & 1) == v14 )
            {
              if ( *(_DWORD *)((char *)v2 + v15 + 104) )
              {
                CManipulationManager::s_rgPointerIds[v11++] = *(_DWORD *)((char *)v2 + v15 + 100);
                v20 = v11;
                *(_DWORD *)((char *)v2 + v15 + 104) = 0;
                if ( dword_18026D7B0 > 4u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
                  {
                    v23 = *((_DWORD *)v2 + 6);
                    v31 = &v23;
                    v32 = 4;
                    v33 = 0;
                    v34 = v17;
                    v35 = 4;
                    v36 = 0;
                    v37 = &v24;
                    v38 = 8;
                    v39 = 0;
                    TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180214CEE, v16, v17, 5u, &pData);
                    v12 = v24;
                  }
                  v11 = v20;
                }
              }
            }
            ++v13;
          }
          v4 = v21;
          v3 = v25;
          try
          {
            SetManipulationInputTarget(*((unsigned int *)v2 + 6), v24, v26, v11, CManipulationManager::s_rgPointerIds);
          }
          catch ( ... )
          {
            v4 = v21;
            v7 = v19;
            v8 = v22;
            v3 = v27;
            v25 = v27;
            v2 = v28;
          }
          *((_DWORD *)v2 + 5) += v20;
          dword_180272588 = 0;
          ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
        }
      }
      v22 = ++v8;
      v9 = v8 < *((_DWORD *)v2 + 4);
      if ( v8 == *((_DWORD *)v2 + 4) )
      {
        if ( !v7 )
          goto LABEL_8;
        v7 = 0;
        goto LABEL_7;
      }
    }
    v18 = *((_BYTE *)v2 + 40) & 0xFE;
    *((_BYTE *)v2 + 40) = v18;
    if ( !v4 )
      *((_BYTE *)v2 + 40) = v18 & 0xFB;
  }
}
