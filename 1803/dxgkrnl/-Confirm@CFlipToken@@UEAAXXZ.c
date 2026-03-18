/*
 * XREFs of ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C000EE00
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C0017C08 (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::Confirm(CFlipToken *this)
{
  __int64 v1; // r14
  __int64 v3; // r15
  unsigned int v4; // r12d
  BOOL v5; // ebp
  int v6; // ebx
  void (__fastcall *v7)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64); // rdi
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // [rsp+80h] [rbp+8h]

  v1 = *((_QWORD *)this + 4);
  v3 = *((_QWORD *)this + 5);
  v4 = *((_DWORD *)this + 26);
  v5 = *((_BYTE *)this + 559) == 0;
  *((_DWORD *)this + 6) = 4;
  v10 = *(_QWORD *)(v1 + 16);
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 1970LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v6 = *((unsigned __int8 *)this + 556);
  v7 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal
                                                                                                  + 219)
                                                                                                + 80LL);
  v8 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v7(v1, v4, v8, *((_QWORD *)this + 12), 4, v6, v5, v10, v3);
  if ( *((_BYTE *)this + 557) )
  {
    CompositionSurfaceObject::ConfirmIndependentFlipEntry(
      *((CompositionSurfaceObject **)this + 4),
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 70),
      *((_QWORD *)this + 12),
      *((_DWORD *)this + 144),
      *((_DWORD *)this + 145),
      *((_QWORD *)this + 71));
    *((_BYTE *)this + 557) = 0;
  }
}
