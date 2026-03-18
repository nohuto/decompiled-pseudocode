/*
 * XREFs of ??1CChannel@@AEAA@XZ @ 0x180143A34
 * Callers:
 *     ?Release@CChannel@@UEAAKXZ @ 0x180087BF0 (-Release@CChannel@@UEAAKXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x18001F744 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x18013F148 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

void __fastcall CChannel::~CChannel(CChannel *this)
{
  void *v2; // rcx
  _QWORD **v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  void **v6; // rcx
  void *v7; // rcx

  *(_QWORD *)this = &CChannel::`vftable';
  ReleaseInterface<CConnection>((CMILRefCountBase **)this + 6);
  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
    CloseHandle(v2);
  v3 = (_QWORD **)((char *)this + 64);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    operator delete(v4);
  }
  v6 = (void **)*((_QWORD *)this + 20);
  if ( v6 )
    CCommandBatch::`scalar deleting destructor'(v6);
  *((_QWORD *)this + 20) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v7 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  operator delete(v7);
}
