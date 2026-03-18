/*
 * XREFs of RtlpReadExtendedContext @ 0x140425F70
 * Callers:
 *     KiContinuePreviousModeUser @ 0x140008A84 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140135720 (KiRaiseException.c)
 *     PspWow64SetContextThread @ 0x1404254C4 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140425814 (PspWow64GetContextThread.c)
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 * Callees:
 *     RtlpCopyExtendedContext @ 0x140008B98 (RtlpCopyExtendedContext.c)
 *     RtlpValidateContextFlags @ 0x1400FCB40 (RtlpValidateContextFlags.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlpReadExtendedContextLayout @ 0x14042623C (RtlpReadExtendedContextLayout.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpReadExtendedContext(__int64 a1, char a2, __int64 a3, unsigned int a4, __int64 a5, __int64 *a6)
{
  __int64 v8; // rdi
  __int64 *v9; // r14
  __int64 result; // rax
  int v11; // ecx
  char v12; // r15
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  int v18; // r15d
  unsigned int v19; // edi
  unsigned int *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  _QWORD *v25; // rcx
  int v27; // [rsp+48h] [rbp-50h] BYREF
  __int64 v28; // [rsp+50h] [rbp-48h] BYREF

  v8 = 0LL;
  v9 = &v28;
  if ( a6 )
    v9 = a6;
  result = RtlpValidateContextFlags(a4, &v27);
  if ( (int)result < 0 )
    return result;
  v12 = v27;
  LOBYTE(v11) = 1;
  result = RtlpReadExtendedContextLayout(v11, a4, a5, v27, (__int64)v9);
  if ( (int)result < 0 )
    return result;
  if ( (a4 & 0x10000) != 0 )
  {
    v13 = 4;
    v8 = a5 + 716;
  }
  else
  {
    if ( (a4 & 0x100000) != 0 )
    {
      v8 = a5 + 1232;
    }
    else
    {
      if ( (a4 & 0x200000) != 0 )
      {
        v13 = 8;
        v8 = a5 + 416;
        goto LABEL_9;
      }
      v13 = 0;
      if ( (a4 & 0x400000) == 0 )
        goto LABEL_9;
      v8 = a5 + 912;
    }
    v13 = 16;
  }
LABEL_9:
  if ( (v12 & 1) != 0 )
  {
    v14 = *((unsigned int *)v9 + 3);
    if ( (_DWORD)v14 )
    {
      v15 = *((int *)v9 + 2);
      v16 = v15 + v8;
      if ( (((_DWORD)v15 + (_DWORD)v8) & (v13 - 1)) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = v8 + v14 + v15;
      if ( v17 > 0x7FFFFFFF0000LL || v17 < v16 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v18 = v12 & 2;
  if ( v18 )
  {
    v21 = *((unsigned int *)v9 + 5);
    if ( (_DWORD)v21 )
    {
      v22 = *((int *)v9 + 4);
      v23 = v22 + v8;
      if ( (((_BYTE)v22 + (_BYTE)v8) & 0x3F) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = v8 + v21 + v22;
      if ( v24 > 0x7FFFFFFF0000LL || v24 < v23 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = RtlpCopyExtendedContext(a2, a3, 0LL, a4, v8, (__int64)v9);
  v19 = result;
  if ( (int)result >= 0 )
  {
    v20 = (unsigned int *)(a3 + *(int *)(a3 + 8));
    if ( (a4 & 0x10000) == 0 )
    {
      if ( (a4 & 0x100000) != 0 )
      {
        v20[12] = a4;
LABEL_19:
        if ( v18 )
        {
          v25 = (_QWORD *)(a3 + *(int *)(a3 + 16));
          *v25 &= MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
            v25[1] = MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL;
          else
            v25[1] = 0LL;
          memset(v25 + 2, 0, 0x30uLL);
        }
        return v19;
      }
      if ( (a4 & 0x200000) == 0 && (a4 & 0x400000) == 0 )
        goto LABEL_19;
    }
    *v20 = a4;
    goto LABEL_19;
  }
  return result;
}
