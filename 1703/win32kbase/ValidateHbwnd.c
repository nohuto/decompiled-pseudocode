/*
 * XREFs of ValidateHbwnd @ 0x1C00D5660
 * Callers:
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01182FC (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C011842C (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHbwnd(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  char *v6; // rbx

  v4 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = a1 >> 16;
    v6 = (char *)qword_1C0189E38 + (unsigned int)(v4 * dword_1C0189E40);
    if ( ((_WORD)v5 == *((_WORD *)v6 + 13) || (_WORD)v5 == 0xFFFF || !(_WORD)v5 && PsGetCurrentProcessWow64Process())
      && v6[24] == 23 )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      a2 = *((_QWORD *)gpKernelHandleTable + 2 * (unsigned int)((v6 - (_BYTE *)qword_1C0189E38) >> 5));
      if ( a2 )
      {
        if ( (v6[25] & 1) == 0 )
          return *((_QWORD *)gpKernelHandleTable + 2 * (unsigned int)((v6 - (_BYTE *)qword_1C0189E38) >> 5));
      }
    }
  }
  UserSetLastError(1400LL, a2, v4, a4);
  return 0LL;
}
