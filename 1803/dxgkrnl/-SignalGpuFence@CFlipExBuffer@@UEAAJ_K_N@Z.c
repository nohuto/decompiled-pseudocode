/*
 * XREFs of ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C0013670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C00DBC1C (DxgkImmediateSignalSynchronizationObjectByReference.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00FA0F4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall CFlipExBuffer::SignalGpuFence(CFlipExBuffer *this, __int64 a2, char a3)
{
  int v3; // esi
  __int64 *v6; // r14
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
      goto LABEL_14;
    v6 = 0LL;
    v3 = -1073741823;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v13 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v13 + 24) = 1970LL;
      WdLogEvent5_WdAssertion(v13);
    }
    SessionData = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
    if ( SessionData )
    {
      v8 = (__int64 *)*((_QWORD *)SessionData + 2335);
      if ( v8 )
      {
        (*(void (__fastcall **)(_QWORD))*v8)(*((_QWORD *)SessionData + 2335));
        v3 = 0;
        v6 = v8;
      }
    }
    if ( v3 >= 0 )
    {
      if ( *((_BYTE *)this + 576) )
      {
        v14 = *((_QWORD *)this + 77);
        *((_BYTE *)this + 624) = 1;
        v15 = (*(__int64 (__fastcall **)(__int64 *))(*v6 + 136))(v6);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14) != v15 )
          v3 = -1073741823;
        if ( v3 >= 0 )
        {
          v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 77) + 64LL))(
                 *((_QWORD *)this + 77),
                 *((unsigned int *)this + 149),
                 *((unsigned int *)this + 152),
                 *((_QWORD *)this + 80));
          if ( v3 >= 0 )
          {
            v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 77) + 16LL))(
                   *((_QWORD *)this + 77),
                   *((_QWORD *)this + 75),
                   *((_QWORD *)this + 80) + 1LL);
            if ( v3 >= 0 )
              v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 77) + 48LL))(
                     *((_QWORD *)this + 77),
                     *((unsigned int *)this + 149),
                     *((_QWORD *)this + 39),
                     a2);
          }
        }
        *((_BYTE *)this + 576) = 0;
        if ( v3 >= 0 )
          *((_BYTE *)this + 624) = 0;
      }
      v9 = *v6;
      v10 = *((_QWORD *)this + 41);
      v16 = 0LL;
      v3 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v9 + 128))(v6, v10, &v16);
      if ( v3 >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v16 + 16LL))(
               v16,
               *((_QWORD *)this + 39),
               a2);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
    if ( v3 < 0 )
    {
LABEL_14:
      v12 = *((_QWORD *)this + 39);
      v3 = -1073741637;
      if ( v12 )
        return (unsigned int)DxgkImmediateSignalSynchronizationObjectByReference(v12, a2);
    }
  }
  return (unsigned int)v3;
}
