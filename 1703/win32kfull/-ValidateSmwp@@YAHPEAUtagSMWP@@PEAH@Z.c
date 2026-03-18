/*
 * XREFs of ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0064790
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0064844 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall ValidateSmwp(struct tagSMWP *a1, int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rbp

  *a2 = 1;
  v4 = HMValidateHandleNoSecure(**((_QWORD **)a1 + 5), 1);
  if ( !v4 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 7);
  v7 = *(_QWORD *)(v4 + 104);
  while ( 1 )
  {
    if ( --v6 < 0 )
      return 1LL;
    if ( !(unsigned int)ValidateWindowPos((struct tagCVR *)v5, 0LL) )
    {
      *(_QWORD *)v5 = 0LL;
      goto LABEL_8;
    }
    if ( *(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)v5) + 104LL) != v7 )
      break;
    if ( (*(_DWORD *)(v5 + 32) & 0x2000) != 0 )
      *a2 = 0;
LABEL_8:
    v5 += 168LL;
  }
  UserSetLastError(1441LL);
  return 0LL;
}
