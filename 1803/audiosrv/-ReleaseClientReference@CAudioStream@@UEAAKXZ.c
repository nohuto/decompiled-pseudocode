/*
 * XREFs of ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18002EFE0
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180046D50 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180048240 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::ReleaseClientReference(CAudioStream *this)
{
  unsigned __int32 v2; // edi
  unsigned int (__fastcall *v3)(CAudioStream *__hidden); // rax

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 11);
  if ( !v2 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  v3 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)this + 16LL);
  if ( v3 == CAudioStream::Release )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 8, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
      (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 3) + 24LL))((char *)this + 24, 1LL);
    }
  }
  else
  {
    v3(this);
  }
  return v2;
}
