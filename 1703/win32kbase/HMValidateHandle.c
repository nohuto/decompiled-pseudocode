/*
 * XREFs of HMValidateHandle @ 0x1C004488C
 * Callers:
 *     ValidateHmenu @ 0x1C00449C0 (ValidateHmenu.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C011DDA8 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ValidateHandleSecure @ 0x1C0040F90 (ValidateHandleSecure.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(void *a1, char a2)
{
  __int64 v3; // rbx
  char *v5; // rdi
  __int64 *v6; // r14
  __int64 v7; // r8
  __int64 v9; // rcx

  v3 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = (char *)qword_1C0189E38 + (unsigned int)(unsigned __int16)a1 * dword_1C0189E40;
    v6 = (__int64 *)((char *)gpKernelHandleTable
                   + 16 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C0189E40) >> 5));
    if ( (WORD1(a1) == *((_WORD *)v5 + 13) || WORD1(a1) == 0xFFFF || !WORD1(a1) && PsGetCurrentProcessWow64Process())
      && (v5[25] & 1) == 0
      && v5[24] == a2 )
    {
      v3 = *v6;
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL, v7) )
      v3 = 0LL;
  }
  else
  {
    v3 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL, v7) != 0);
  }
  if ( v3 )
    return v3;
  switch ( a2 )
  {
    case 1:
      v9 = 1400LL;
      break;
    case 2:
      v9 = 1401LL;
      break;
    case 3:
      v9 = 1402LL;
      break;
    case 4:
      v9 = 1405LL;
      break;
    case 5:
      v9 = 1404LL;
      break;
    case 8:
      v9 = 1403LL;
      break;
    default:
      v9 = 6LL;
      break;
  }
  UserSetLastError(v9);
  return 0LL;
}
