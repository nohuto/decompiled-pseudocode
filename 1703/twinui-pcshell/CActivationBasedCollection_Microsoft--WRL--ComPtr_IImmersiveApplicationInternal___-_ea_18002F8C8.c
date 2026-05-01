/*
 * XREFs of CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_6363101253bf33f24c351b7ac39c5c85___ @ 0x18002F8C8
 * Callers:
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x18002ECF0 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_6363101253bf33f24c351b7ac39c5c85___(
        __int64 a1,
        unsigned int *a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 i; // rbx
  __int64 v7; // rsi
  char v8; // bp
  bool v9; // r12
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+8h] BYREF

  result = (__int64)&retaddr;
  v5 = *(_QWORD *)(a1 + 16);
  for ( i = 0LL; i < v5; ++i )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 280LL))(v7);
    v8 = result;
    if ( (result & 1) != 0 )
    {
      if ( !*((_QWORD *)a2 + 1) )
        goto LABEL_7;
      v12 = 0LL;
      (*(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v7 + 464LL))(
        v7,
        &v12);
      result = SHIsSameObject(*((int (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 1), v12);
      v9 = (_DWORD)result != 0;
      v10 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        result = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[2])(v10);
      }
      if ( v9 )
      {
LABEL_7:
        result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v7 + 264LL))(
                   v7,
                   a2[1],
                   *a2,
                   0LL,
                   0);
        if ( (_BYTE)result )
        {
          if ( (v8 & 4) != 0 )
            result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 2) + 64LL))(
                       *((_QWORD *)a2 + 2),
                       v7);
        }
      }
    }
  }
  return result;
}
