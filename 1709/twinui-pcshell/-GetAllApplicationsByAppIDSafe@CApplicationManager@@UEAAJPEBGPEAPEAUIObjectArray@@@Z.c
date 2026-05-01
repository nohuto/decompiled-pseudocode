/*
 * XREFs of ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x18000EC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetAllApplicationsByAppIDSafe(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(CApplicationManager *, __int64 *))(*(_QWORD *)this + 48LL))(this, &v8);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, struct IObjectArray **))(*(_QWORD *)v8 + 48LL))(
           v8,
           a2,
           a3);
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v5;
}
