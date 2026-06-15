/*
 * XREFs of ?RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800CAA58
 * Callers:
 *     ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800C9090 (-DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800C9170 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUIAudioStreamInfo@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUIAudioStreamInfo@@@std@@@std@@@2@0@Z @ 0x180099964 (-erase@-$vector@PEAUIAudioStreamInfo@@V-$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAA-AV-$_V.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseStreamGroupProxy::RemoveStream(CBaseStreamGroupProxy *this, struct IAudioStreamInfo *a2)
{
  unsigned int v4; // ebp
  char *v5; // r8
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v11[3]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v13[96]; // [rsp+50h] [rbp-88h] BYREF

  v11[1] = -2LL;
  v11[0] = 0LL;
  (*(void (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 120LL))(a2, v11);
  v4 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v11[2] = (__int64)this + 152;
  v5 = (char *)*((_QWORD *)this + 24);
  v6 = *((_QWORD *)this + 25);
  while ( v5 != (char *)v6 && *(struct IAudioStreamInfo **)v5 != a2 )
    v5 += 8;
  if ( v5 != (char *)v6 )
  {
    v7 = v5 + 8;
    v8 = 0LL;
    v9 = (v6 - (unsigned __int64)(v5 + 8) + 7) >> 3;
    if ( (unsigned __int64)(v5 + 8) > v6 )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        if ( (struct IAudioStreamInfo *)*v7 != a2 )
        {
          *(_QWORD *)v5 = *v7;
          v5 += 8;
        }
        ++v7;
        ++v8;
      }
      while ( v8 != v9 );
    }
  }
  std::vector<IAudioStreamInfo *>::erase((__int64)this + 192, &v12, v5, *((char **)this + 25));
  memset_0(v13, 0, sizeof(v13));
  (*(void (__fastcall **)(struct IAudioStreamInfo *, _BYTE *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, v13, 0LL);
  if ( this != (CBaseStreamGroupProxy *)-152LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v11[0] + 216LL))(v11[0], 2LL, 0xFFFFFFFFLL, v4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v11);
  return 0LL;
}
