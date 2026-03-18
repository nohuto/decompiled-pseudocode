/*
 * XREFs of ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x1C01367C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?UpdatePTPRightClickZone@CPTPEngine@@AEAAXH@Z @ 0x1C01389C4 (-UpdatePTPRightClickZone@CPTPEngine@@AEAAXH@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessEnvironment(CPTPEngine *this, int a2)
{
  __int64 v3; // r8
  int v4; // eax
  unsigned __int64 v5; // rcx
  double v6; // xmm0_8
  __int64 result; // rax

  if ( !*((_BYTE *)this + 1160) )
  {
    (*(void (__fastcall **)(CPTPEngine *))(*(_QWORD *)this + 56LL))(this);
    *((_BYTE *)this + 1160) = 1;
  }
  CPTPEngine::UpdatePTPRightClickZone(this, a2);
  v3 = *((_QWORD *)this + 12);
  v4 = *((_DWORD *)this + 68);
  *((_DWORD *)this + 792) = *((_DWORD *)this + 10) - *((_DWORD *)this + 70);
  v5 = v3 * *((unsigned int *)this + 27);
  *((_DWORD *)this + 805) |= 0x10000000u;
  *((_DWORD *)this + 791) = v4;
  *((_DWORD *)this + 793) = *((_DWORD *)this + 11);
  *((_DWORD *)this + 790) = *((_DWORD *)this + 69);
  *((_QWORD *)this + 381) = v5 / 0x3E8;
  *((_QWORD *)this + 382) = v3 * (unsigned __int64)*((unsigned int *)this + 42) / 0x3E8;
  *((_QWORD *)this + 383) = v3 * (unsigned __int64)*((unsigned int *)this + 60) / 0x3E8;
  *((_QWORD *)this + 384) = v3 * (unsigned __int64)*((unsigned int *)this + 65) / 0x3E8;
  *((_QWORD *)this + 385) = v3 * (unsigned __int64)*((unsigned int *)this + 50) / 0x3E8;
  v6 = (double)*((int *)this + 92);
  *((_QWORD *)this + 387) = v3 * (unsigned __int64)*((unsigned int *)this + 35) / 0x3E8;
  result = 0LL;
  *((double *)this + 386) = v6 / 1000.0;
  return result;
}
