/*
 * XREFs of ?Release@GazeProcessor@@UEAAKXZ @ 0x1800378D0
 * Callers:
 *     ?Release@GazeProcessor@@WBI@EAAKXZ @ 0x180038790 (-Release@GazeProcessor@@WBI@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WCA@EAAKXZ @ 0x1800387C0 (-Release@GazeProcessor@@WCA@EAAKXZ.c)
 *     ?Release@GazeProcessor@@W7EAAKXZ @ 0x180038800 (-Release@GazeProcessor@@W7EAAKXZ.c)
 *     ?Release@GazeProcessor@@WBA@EAAKXZ @ 0x180038830 (-Release@GazeProcessor@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeProcessor::Release(GazeProcessor *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 32);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 10) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 32);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
