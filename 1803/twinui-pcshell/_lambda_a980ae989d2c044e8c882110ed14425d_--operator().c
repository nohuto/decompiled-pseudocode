/*
 * XREFs of _lambda_a980ae989d2c044e8c882110ed14425d_::operator() @ 0x1801F0EDC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a980ae989d2c044e8c882110ed14425d___::Run @ 0x1801F3250 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a980ae989d2c044e8c882110ed14425d___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1801F1FEC (-CommitImportanceVector@WindowWrapperBase@@AEAAXT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 */

__int64 __fastcall lambda_a980ae989d2c044e8c882110ed14425d_::operator()(int *a1)
{
  int v2; // ebx
  __int64 v3; // r8
  int v4; // ecx
  __int16 v5; // dx
  char v6; // cl
  __int64 v7; // r8
  int v8; // r9d
  __int16 v9; // cx
  wil *v10; // rcx
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+50h] [rbp+8h]
  unsigned int v16; // [rsp+58h] [rbp+10h]
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    v2 = a1[2];
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)a1 + 312LL) + 152LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 312LL),
      &SRWLock);
    v3 = a1[3];
    HIWORD(v16) = HIWORD(v2);
    if ( v3 == -1 )
    {
      v5 = v2;
    }
    else
    {
      v4 = *(_DWORD *)(*(_QWORD *)a1 + 292LL);
      if ( (v3 & 1) != 0 )
      {
        v5 = v4 ^ ((unsigned __int8)v2 ^ (unsigned __int8)v4) & 1;
        LOWORD(v4) = v5;
      }
      else
      {
        v5 = v4;
      }
      if ( (v3 & 2) != 0 )
      {
        v5 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)v2) & 0xE;
        LOWORD(v4) = v5;
      }
      if ( (v3 & 4) != 0 )
      {
        v5 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)v2) & 0x30;
        LOWORD(v4) = v5;
      }
      if ( (v3 & 8) != 0 )
      {
        v5 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)v2) & 0x40;
        LOWORD(v4) = v5;
      }
      if ( (v3 & 0x10) != 0 )
      {
        v5 = v4 ^ (v4 ^ v2) & 0x80;
        LOWORD(v4) = v5;
      }
      if ( (v3 & 0x20) != 0 )
      {
        v5 = v4 ^ (v4 ^ v2) & 0x100;
        LOWORD(v4) = v5;
      }
      if ( (v3 & 0x40) != 0 )
      {
        v5 = v4 ^ (v4 ^ v2) & 0x200;
        LOWORD(v4) = v5;
      }
      if ( (v3 & 0x80) != 0 )
      {
        v5 = v4 ^ (v4 ^ v2) & 0x400;
        LOWORD(v4) = v5;
      }
      if ( (v3 & 0x100) != 0 )
        v5 = v4 ^ (v4 ^ v2) & 0x800;
      LOBYTE(v4) = BYTE2(v4);
      if ( (v3 & 0x200) != 0 )
        LOBYTE(v4) = BYTE2(v2);
      BYTE2(v16) = v4;
      v6 = HIBYTE(v4);
      if ( (v3 & 0x400) != 0 )
        v6 = HIBYTE(v2);
      HIBYTE(v16) = v6;
    }
    v7 = *(_QWORD *)a1;
    v8 = *(_DWORD *)(*(_QWORD *)a1 + 352LL);
    if ( (v8 & 4) == 0 )
      v5 ^= ((unsigned __int8)v5 ^ (unsigned __int8)*(_WORD *)(v7 + 292)) & 0xF;
    v9 = *(_WORD *)(v7 + 292);
    if ( (v8 & 8) == 0 )
      v5 ^= ((unsigned __int8)v5 ^ (unsigned __int8)v9) & 0x31;
    LOWORD(v16) = (v5 ^ v9) & 0xC0 ^ v5;
    if ( v16 != *(_DWORD *)(v7 + 292) )
      WindowWrapperBase::CommitImportanceVector(v7, v16);
    v10 = (wil *)SRWLock;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  catch ( ... )
  {
    **((_DWORD **)a1 + 2) = wil::ResultFromCaughtException(v10);
    v12 = (const char *)**((unsigned int **)a1 + 2);
    v15 = (unsigned int)v12;
    if ( (int)v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x69F,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v12);
    return v15;
  }
  return 0LL;
}
