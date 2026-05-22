/*
 * XREFs of ?OnPointerInfoFrame@TouchProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x18006AE90
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 */

__int64 __fastcall TouchProcessor::OnPointerInfoFrame(
        TouchProcessor *this,
        unsigned int a2,
        struct tagPOINTER_INFO_UNION *a3)
{
  __int64 v4; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rax
  _DWORD v9[4]; // [rsp+20h] [rbp-5D8h] BYREF
  _BYTE v10[1440]; // [rsp+30h] [rbp-5C8h] BYREF

  v4 = a2;
  v6 = 0;
  memset_0(v9, 0, 0x5B0uLL);
  if ( (_DWORD)v4 )
    memcpy_0(v10, a3, 144 * v4);
  v9[3] = *((_DWORD *)this + 4);
  v7 = *((_QWORD *)this - 1);
  v9[0] = v4;
  v9[2] = 1;
  v9[1] = *(unsigned __int8 *)(v7 + 48);
  if ( !(unsigned int)MITSynthesizeTouchInput(v9) )
  {
    if ( (int)GetLastError() > 0 )
      return (unsigned __int16)GetLastError() | 0x80070000;
    else
      return GetLastError();
  }
  return v6;
}
