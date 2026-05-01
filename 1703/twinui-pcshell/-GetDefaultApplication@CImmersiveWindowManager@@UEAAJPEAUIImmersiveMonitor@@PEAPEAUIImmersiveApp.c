/*
 * XREFs of ?GetDefaultApplication@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x18002E6A0
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveWindowManager::GetDefaultApplication(
        CImmersiveWindowManager *this,
        struct IImmersiveMonitor *a2,
        struct IImmersiveApplication **a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  bool v9; // r13
  __int64 v10; // rdi
  bool v11; // al
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v13; // edi
  bool v15; // [rsp+70h] [rbp+8h]
  int (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h]

  *a3 = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  v7 = *((_QWORD *)this + 8);
  v8 = 0LL;
  if ( v7 )
  {
    v9 = a2 == 0LL;
    while ( 1 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v8);
      if ( v9 )
        goto LABEL_7;
      v16 = 0LL;
      (*(void (__fastcall **)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v10 + 464LL))(
        v10,
        &v16);
      v11 = (unsigned int)SHIsSameObject(v16, (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) != 0;
      v15 = v11;
      v12 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[2])(v12);
        v11 = v15;
      }
      if ( v11 )
      {
LABEL_7:
        if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 280LL))(v10) & 4) != 0 )
          break;
      }
      if ( ++v8 >= v7 )
        goto LABEL_11;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v6 = v10;
    v17 = v10;
    (**(void (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v10)(
      v10,
      &GUID_8b14e88b_5663_4caf_b196_c31479262831,
      a3);
  }
LABEL_11:
  v13 = *a3 == 0LL ? 0x8002802B : 0;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v13;
}
