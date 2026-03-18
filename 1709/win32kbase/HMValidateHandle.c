/*
 * XREFs of HMValidateHandle @ 0x1C007D620
 * Callers:
 *     ValidateHmenu @ 0x1C007D5D0 (ValidateHmenu.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C011CBE8 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 * Callees:
 *     ValidateHandleSecure @ 0x1C003E310 (ValidateHandleSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(void *a1, char a2)
{
  __int64 v3; // rbx
  _QWORD *v5; // r15
  char *v6; // rdi
  __int64 v7; // r14
  int v9; // ecx

  v3 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = gpKernelHandleTable;
    v6 = (char *)qword_1C018E9B8 + (unsigned int)(unsigned __int16)a1 * dword_1C018E9C0;
    v7 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C018E9C0) >> 5);
    if ( (WORD1(a1) == *((_WORD *)v6 + 13)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (v6[25] & 1) == 0
      && v6[24] == a2 )
    {
      v3 = v5[v7];
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3) )
      v3 = 0LL;
  }
  else
  {
    v3 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2) != 0);
  }
  if ( v3 )
    return v3;
  switch ( a2 )
  {
    case 1:
      v9 = 1400;
      break;
    case 2:
      v9 = 1401;
      break;
    case 3:
      v9 = 1402;
      break;
    case 4:
      v9 = 1405;
      break;
    case 5:
      v9 = 1404;
      break;
    case 8:
      v9 = 1403;
      break;
    default:
      v9 = 6;
      break;
  }
  UserSetLastError(v9);
  return 0LL;
}
