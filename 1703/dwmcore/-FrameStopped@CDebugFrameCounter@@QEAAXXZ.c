/*
 * XREFs of ?FrameStopped@CDebugFrameCounter@@QEAAXXZ @ 0x180130D08
 * Callers:
 *     ?WaitForWork@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013EBD4 (-WaitForWork@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180143C48 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x180143E0C (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 */

void __fastcall CDebugFrameCounter::FrameStopped(CDebugFrameCounter *this)
{
  unsigned __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // rcx
  int v5; // ecx
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 24) && *((_BYTE *)this + 25) )
  {
    v2 = CDebugFrameCounter::CurrentTime(this);
    v3 = *((_BYTE *)this + 26) == 0;
    v9 = v2;
    if ( !v3 )
    {
      if ( *((_DWORD *)this + 4) == -1 )
      {
        *((_DWORD *)this + 5) = 0;
        *((_DWORD *)this + 4) = 0;
      }
      *((_QWORD *)this + 6) = v2;
      *(_OWORD *)((char *)this + 16 * *((unsigned int *)this + 5) + 56) = *(_OWORD *)((char *)this + 40);
      if ( *((_DWORD *)this + 4) != *((_DWORD *)this + 5) )
      {
        do
        {
          v4 = 2LL * *((unsigned int *)this + 4);
          if ( *((_QWORD *)this + 2 * *((unsigned int *)this + 4) + 7) >= (unsigned __int64)(*((_QWORD *)this + 6)
                                                                                           - 10000000LL) )
            break;
          *((_QWORD *)this + 4) += *((_QWORD *)this + 2 * *((unsigned int *)this + 4) + 7)
                                 - *((_QWORD *)this + 2 * *((unsigned int *)this + 4) + 8);
          *((_QWORD *)this + v4 + 8) = 0LL;
          *((_QWORD *)this + v4 + 7) = 0LL;
          v5 = (unsigned __int8)(*((_BYTE *)this + 16) + 1);
          *((_DWORD *)this + 4) = v5;
        }
        while ( v5 != *((_DWORD *)this + 5) );
      }
      v6 = *((_QWORD *)this + 4)
         + *((_QWORD *)this + 2 * *((unsigned int *)this + 5) + 8)
         - *((_QWORD *)this + 2 * *((unsigned int *)this + 5) + 7);
      v7 = (unsigned __int8)(*((_BYTE *)this + 20) + 1);
      *((_QWORD *)this + 4) = v6;
      *((_DWORD *)this + 5) = v7;
      if ( *((_DWORD *)this + 4) == v7 )
      {
        v8 = 2LL * *((unsigned int *)this + 4);
        *((_QWORD *)this + 4) = *((_QWORD *)this + 2 * *((unsigned int *)this + 4) + 7)
                              + v6
                              - *((_QWORD *)this + 2 * *((unsigned int *)this + 4) + 8);
        *((_QWORD *)this + v8 + 8) = 0LL;
        *((_QWORD *)this + v8 + 7) = 0LL;
        *((_DWORD *)this + 4) = (unsigned __int8)(*((_DWORD *)this + 4) + 1);
      }
    }
    CDebugFrameCounter::UpdateGlitchList(this, &v9);
  }
}
