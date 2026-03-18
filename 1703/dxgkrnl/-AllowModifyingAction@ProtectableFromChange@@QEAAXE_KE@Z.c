/*
 * XREFs of ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C016D098
 * Callers:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 * Callees:
 *     ??A?$Vector@_K@@QEAAAEA_K_K@Z @ 0x1C000244C (--A-$Vector@_K@@QEAAAEA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C0020F40 (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstrai.c)
 */

void __fastcall ProtectableFromChange::AllowModifyingAction(
        ProtectableFromChange *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 v5; // bl
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _BYTE *v13; // rax

  v5 = a2;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 20) && (_BYTE)a2 != 0xFF )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  LOBYTE(a2) = v5;
  (*(void (__fastcall **)(ProtectableFromChange *, __int64, __int64, __int64, char))(*(_QWORD *)this + 16LL))(
    this,
    a2,
    1LL,
    a3,
    -1);
  if ( v5 == 0xFF )
  {
    if ( a3 != 255 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      WdLogEvent5_WdAssertion(v12);
    }
    *((_WORD *)this + 11) |= (2 << *((_BYTE *)this + 20)) - 1;
    memset(*((void **)this + 6), 0, *((_QWORD *)this + 5));
  }
  else
  {
    *((_WORD *)this + 11) |= 1 << v5;
    v13 = (_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[](
                     (__int64)this + 24,
                     v5,
                     v10,
                     v11);
    *v13 &= 0xF0u;
    *(_QWORD *)Vector<unsigned __int64>::operator[]((__int64)this + 64, v5) = a3;
  }
}
