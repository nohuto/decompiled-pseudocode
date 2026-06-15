/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140039D50
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140039C00 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x14000493C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z @ 0x140039708 (--0-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceExclusive>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // esi
  CSystemAudioDeviceExclusive *v7; // rax
  CSystemAudioDeviceExclusive *v8; // rdi
  int v9; // eax
  CSystemAudioDeviceExclusive *v12; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (CSystemAudioDeviceExclusive *)operator new(0x188uLL);
    if ( v7 )
      v8 = ATL::CComObject<CSystemAudioDeviceExclusive>::CComObject<CSystemAudioDeviceExclusive>(v7);
    else
      v8 = 0LL;
    v12 = v8;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v8 = v12;
  }
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v8 + 74);
    v9 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v8 + 304));
    if ( v9 >= 0 )
    {
      *((_BYTE *)v8 + 344) = 1;
      v9 = 0;
    }
    v6 = 0;
    if ( v9 < 0 )
      v6 = v9;
    _InterlockedDecrement((volatile signed __int32 *)v8 + 74);
    if ( v6
      || (v6 = (**(__int64 (__fastcall ***)(CSystemAudioDeviceExclusive *, __int64, _QWORD *))v8)(v8, v4, v3)) != 0 )
    {
      (*(void (__fastcall **)(CSystemAudioDeviceExclusive *, __int64))(*(_QWORD *)v8 + 184LL))(v8, 1LL);
    }
  }
  return v6;
}
