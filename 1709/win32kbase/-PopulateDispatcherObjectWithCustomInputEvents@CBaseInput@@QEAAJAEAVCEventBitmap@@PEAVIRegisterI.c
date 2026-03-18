/*
 * XREFs of ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0119170
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C001AB4C (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(
        CBaseInput *this,
        struct CEventBitmap *a2,
        struct IRegisterInputDispatcherObjects *a3)
{
  __int64 v3; // rdi
  _QWORD v8[12]; // [rsp+20h] [rbp-88h] BYREF

  v3 = 0LL;
  *(_DWORD *)a2 = 0;
  while ( *((_DWORD *)a2 + 1) )
  {
    if ( (*((_BYTE *)a2 + 4) & 1) != 0
      && CRIMBase::SensorDispatcherObject::IsValid((CBaseInput *)((char *)this
                                                                + 64 * (unsigned __int64)*(unsigned int *)a2
                                                                + 144)) )
    {
      v8[v3] = *((_QWORD *)this + 8 * *(unsigned int *)a2 + 24);
      v3 = (unsigned int)(v3 + 1);
    }
    ++*(_DWORD *)a2;
    *((_DWORD *)a2 + 1) >>= 1;
  }
  return (*(__int64 (__fastcall **)(struct IRegisterInputDispatcherObjects *, _QWORD, _QWORD *))(*(_QWORD *)a3 + 8LL))(
           a3,
           (unsigned int)v3,
           v8);
}
