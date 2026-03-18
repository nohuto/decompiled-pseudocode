/*
 * XREFs of ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180087B48
 * Callers:
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18005E8C8 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::PostMessageToChannel(CChannel *this, const struct MIL_MESSAGE *a2)
{
  unsigned int v4; // edi
  CChannel *v5; // rax
  CChannel *v6; // rbx
  CChannel **v7; // rcx

  v4 = 0;
  v5 = (CChannel *)HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
  v6 = v5;
  if ( v5 )
  {
    *((_OWORD *)v5 + 1) = *(_OWORD *)a2;
    *((_QWORD *)v5 + 4) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v5 + 10) = *((_DWORD *)a2 + 6);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    v7 = (CChannel **)*((_QWORD *)this + 9);
    if ( *v7 != (CChannel *)((char *)this + 64) )
      __fastfail(3u);
    *(_QWORD *)v6 = (char *)this + 64;
    *((_QWORD *)v6 + 1) = v7;
    *v7 = v6;
    *((_QWORD *)this + 9) = v6;
    SetEvent(*((HANDLE *)this + 10));
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1A2u);
  }
  return v4;
}
