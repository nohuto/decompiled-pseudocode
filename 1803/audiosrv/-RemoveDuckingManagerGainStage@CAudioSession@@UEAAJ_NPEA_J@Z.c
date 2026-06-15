/*
 * XREFs of ?RemoveDuckingManagerGainStage@CAudioSession@@UEAAJ_NPEA_J@Z @ 0x1800AC990
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18004A884 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveGainStageReference@CGainStage@@QEAAKXZ @ 0x1800ACA58 (-RemoveGainStageReference@CGainStage@@QEAAKXZ.c)
 */

__int64 __fastcall CAudioSession::RemoveDuckingManagerGainStage(CAudioSession *this, char a2, __int64 *a3)
{
  CGainStage *v6; // rcx
  unsigned int v7; // ebx
  CRefCountedObject *v8; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 )
    *a3 = 0LL;
  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 408);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = (CGainStage *)*((_QWORD *)this + 56);
  if ( v6 )
  {
    if ( !CGainStage::RemoveGainStageReference(v6) || a2 )
    {
      if ( a3 )
        *a3 = *(_QWORD *)(*((_QWORD *)this + 56) + 40LL);
      v8 = (CRefCountedObject *)*((_QWORD *)this + 56);
      *((_QWORD *)this + 56) = 0LL;
      if ( v8 )
        CRefCountedObject::Release(v8);
    }
    v7 = 0;
  }
  else
  {
    v7 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF9E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070490LL);
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
