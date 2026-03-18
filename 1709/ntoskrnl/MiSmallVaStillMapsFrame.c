/*
 * XREFs of MiSmallVaStillMapsFrame @ 0x1400C9FCC
 * Callers:
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x1400574C0 (PsGetCurrentProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiGetProcessShadowPage @ 0x14017C108 (MiGetProcessShadowPage.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiSmallVaStillMapsFrame(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  unsigned __int64 *v4; // r8
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 PteShadow; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  __int64 v11; // r11
  _KPROCESS *CurrentProcess; // rax
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-30h] BYREF

  v2 = a2;
  v3 = 4LL;
  v4 = v14;
  LODWORD(a2) = 4;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    *v4 = v5;
    v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    ++v4;
    --v3;
  }
  while ( v3 );
  while ( 1 )
  {
    a2 = (unsigned int)(a2 - 1);
    v6 = *(_QWORD *)v14[a2];
    if ( (v6 & 1) == 0 || (v6 & 0x80u) != 0LL )
      break;
    if ( (_DWORD)a2 == 1 )
    {
      if ( v2 == -1 )
        return 1LL;
      PteShadow = *(_QWORD *)v14[0];
      if ( v14[0] >= 0xFFFFF6FB7DBED000uLL && v14[0] <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v14[0], *(_QWORD *)v14[0]);
      v13 = PteShadow;
      if ( (PteShadow & 1) != 0 )
      {
        if ( MI_GET_PAGE_FRAME_FROM_PTE(&v13) == v2 )
          return 1LL;
        if ( v9 == v11 + ((v10 >> 9) & 0x7FFFFFFFF8LL) && (*(_QWORD *)(48 * v2 - 0x57FFFFFFFD8LL) & 0xFFFFFFFFFLL) == v2 )
        {
          CurrentProcess = PsGetCurrentProcess();
          if ( v2 == MiGetProcessShadowPage(CurrentProcess) )
            return 1LL;
        }
      }
      return 0LL;
    }
  }
  return 0LL;
}
