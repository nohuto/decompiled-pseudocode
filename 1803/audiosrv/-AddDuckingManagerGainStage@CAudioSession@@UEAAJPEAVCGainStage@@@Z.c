/*
 * XREFs of ?AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCGainStage@@@Z @ 0x1800A85F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AddGainStageReference@CGainStage@@QEAAKXZ @ 0x1800A8698 (-AddGainStageReference@CGainStage@@QEAAKXZ.c)
 */

__int64 __fastcall CAudioSession::AddDuckingManagerGainStage(CAudioSession *this, struct CGainStage *a2)
{
  CGainStage *v4; // rcx
  __int64 v5; // rax
  float v6; // xmm1_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 408);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (CGainStage *)*((_QWORD *)this + 56);
  if ( v4 )
  {
    CGainStage::AddGainStageReference(v4);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 56) + 24LL))(*((_QWORD *)this + 56)) )
    {
      v5 = *((_QWORD *)this + 56);
      v6 = *((float *)a2 + 12);
      if ( *(float *)(v5 + 48) > v6 && !*(_BYTE *)(v5 + 32) )
        *(float *)(v5 + 48) = v6;
    }
  }
  else
  {
    *((_QWORD *)this + 56) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
