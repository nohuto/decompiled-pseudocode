/*
 * XREFs of ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1801954E4
 * Callers:
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180195D60 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x1800B7DFC (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x180130124 (--0CMmcssTask@@QEAA@XZ.c)
 */

CManipulationManager *__fastcall CManipulationManager::CManipulationManager(
        CManipulationManager *this,
        struct CComposition *a2)
{
  __int64 v3; // rdx
  CManipulationManager *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CManipulationManager::`vftable';
  *((_DWORD *)this + 2) = 0;
  CMmcssTask::CMmcssTask((CManipulationManager *)((char *)this + 40));
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_BYTE *)this + 220) = 0;
  *((_QWORD *)this + 26) = (char *)this + 200;
  *((_QWORD *)this + 25) = (char *)this + 200;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  *((_QWORD *)this + 33) = 0LL;
  QpcTimeConverter::QpcTimeConverter((CManipulationManager *)((char *)this + 304));
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  v3 = ((unsigned __int64)(2000 * g_qpcFrequency.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  result = this;
  *((_QWORD *)this + 37) = (v3 + ((unsigned __int64)(2000 * g_qpcFrequency.QuadPart - v3) >> 1)) >> 9;
  return result;
}
