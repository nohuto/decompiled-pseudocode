/*
 * XREFs of RtlInitializeExtendedContext @ 0x1400DAE88
 * Callers:
 *     KiRaiseException @ 0x14000D500 (KiRaiseException.c)
 *     KiDispatchException @ 0x1400DA080 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x1400DAA74 (KiContinuePreviousModeUser.c)
 *     PspGetContextThreadInternal @ 0x14049D7A0 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x14049DFC0 (PspSetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x140516788 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140583D4C (PspWow64GetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14071C9D4 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x14071D310 (PspSetContextState.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14006A610 (RtlpValidateContextFlags.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *v4; // rbx
  __int64 result; // rax
  int v6; // r10d
  __int64 v7; // r11
  unsigned __int64 v8; // rcx
  int v9; // ecx
  _DWORD *v10; // rcx
  unsigned int v11; // edi
  int v12; // eax
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  int v15; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  result = RtlpValidateContextFlags(a2, &v15);
  if ( (int)result >= 0 )
  {
    if ( (v6 & 0x10000) != 0 )
    {
      v10 = (_DWORD *)((v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v4 = v10 + 179;
      *v10 = v6;
      v10[182] = 716;
    }
    else if ( (v6 & 0x100000) != 0 )
    {
      v8 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v4 = (_DWORD *)(v8 + 1232);
      *(_DWORD *)(v8 + 48) = v6;
      *(_DWORD *)(v8 + 1244) = 1232;
    }
    else if ( (v6 & 0x200000) != 0 )
    {
      v13 = (_DWORD *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v4 = v13 + 104;
      *v13 = v6;
      v13[107] = 416;
    }
    else if ( (v6 & 0x400000) != 0 )
    {
      v14 = (_DWORD *)((v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v4 = v14 + 228;
      *v14 = v6;
      v14[231] = 912;
    }
    v9 = v4[3];
    v4[2] = -v9;
    *v4 = -v9;
    v4[1] = v9 + 24;
    if ( (v6 & 0x10020) != 65568 && (v6 & 0x10000) != 0 )
      v4[3] = 204;
    if ( (v15 & 2) != 0 )
    {
      memset((void *)(((unsigned __int64)v4 + 87) & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        *(_QWORD *)((((unsigned __int64)v4 + 87) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL;
      v11 = (((_DWORD)v4 + 87) & 0xFFFFFFC0) - (_DWORD)v4;
      v4[4] = v11;
      v12 = MEMORY[0xFFFFF780000003E8] - 512;
      v4[5] = MEMORY[0xFFFFF780000003E8] - 512;
      v4[1] = v11 + v12 - *v4;
    }
    else
    {
      v4[5] = 0;
      v4[4] = 25;
    }
    *a3 = v4;
    return 0LL;
  }
  return result;
}
