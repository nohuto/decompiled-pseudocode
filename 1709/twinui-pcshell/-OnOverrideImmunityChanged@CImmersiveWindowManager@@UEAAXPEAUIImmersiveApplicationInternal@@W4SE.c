/*
 * XREFs of ?OnOverrideImmunityChanged@CImmersiveWindowManager@@UEAAXPEAUIImmersiveApplicationInternal@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@@Z @ 0x180030640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180006B2C (WPP_SF_.c)
 *     WPP_SF_d @ 0x180006C40 (WPP_SF_d.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::OnOverrideImmunityChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // ebx
  PSRWLOCK v9; // rbx
  PVOID Ptr; // rcx
  bool v11; // zf
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 400LL))(a2);
  if ( (_BYTE)result )
  {
    if ( a4 == 1 )
    {
      v8 = 2;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_4e27f474225631ead68bce5eebdfa9d6_Traceguids);
    }
    else
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a2 + 464LL))(
        a2,
        &v13);
      v9 = CApplicationManagerUtility::g_pIAMGlobals;
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
      if ( Ptr )
      {
        v11 = *((_DWORD *)CApplicationManagerUtility::g_pIAMGlobals[1].Ptr + (_QWORD)Ptr - 1) == 1;
      }
      else if ( LODWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr)
             && (unsigned int)SHIsSameObject(
                                v13,
                                (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))CApplicationManagerUtility::g_pIAMGlobals[6].Ptr) )
      {
        v11 = LODWORD(v9[5].Ptr) == 1;
      }
      else
      {
        v11 = HIDWORD(v9[5].Ptr) == 1;
      }
      v8 = v11 + 1;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_4e27f474225631ead68bce5eebdfa9d6_Traceguids, v8);
      v12 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[2])(v12);
      }
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 264LL))(a2, v8, a3, a4, 1);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 272LL))(a2, a3, a4);
  }
  return result;
}
