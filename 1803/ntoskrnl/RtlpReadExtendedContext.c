/*
 * XREFs of RtlpReadExtendedContext @ 0x1405B8618
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1401321E0 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140249930 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1404D0960 (PspSetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x140563548 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140563880 (PspWow64GetContextThread.c)
 *     PspGetContextThreadInternal @ 0x1405B83A0 (PspGetContextThreadInternal.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x140131930 (RtlpValidateContextFlags.c)
 *     RtlpCopyExtendedContext @ 0x140131EE0 (RtlpCopyExtendedContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpReadExtendedContextLayout @ 0x1405B88E0 (RtlpReadExtendedContextLayout.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpReadExtendedContext(__int64 a1, char a2, __int64 a3, int a4, __int64 a5, __int64 *a6)
{
  int v8; // esi
  __int64 v9; // rdi
  __int64 *v10; // r15
  __int64 result; // rax
  int v12; // ecx
  char v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  int v17; // r12d
  unsigned int v18; // edi
  int *v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  int v26; // [rsp+48h] [rbp-50h] BYREF
  int v27; // [rsp+4Ch] [rbp-4Ch]
  __int64 v28; // [rsp+50h] [rbp-48h] BYREF

  v8 = 0;
  v9 = 0LL;
  v10 = &v28;
  if ( a6 )
    v10 = a6;
  result = RtlpValidateContextFlags(a4, &v26);
  if ( (int)result < 0 )
    return result;
  v13 = v26;
  LOBYTE(v12) = 1;
  result = RtlpReadExtendedContextLayout(v12, a4, a5, v26, (__int64)v10);
  if ( (int)result < 0 )
    return result;
  v27 = a4 & 0x10000;
  if ( (a4 & 0x10000) != 0 )
  {
    v8 = 4;
    v9 = a5 + 716;
  }
  else
  {
    if ( (a4 & 0x100000) != 0 )
    {
      v9 = a5 + 1232;
    }
    else
    {
      if ( (a4 & 0x200000) != 0 )
      {
        v8 = 8;
        v9 = a5 + 416;
        goto LABEL_9;
      }
      if ( (a4 & 0x400000) == 0 )
        goto LABEL_9;
      v9 = a5 + 912;
    }
    v8 = 16;
  }
LABEL_9:
  if ( (v13 & 1) != 0 )
  {
    v14 = *((unsigned int *)v10 + 3);
    if ( (_DWORD)v14 )
    {
      v15 = *((int *)v10 + 2);
      if ( ((unsigned int)(v8 - 1) & (unsigned __int64)(v15 + v9)) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = v9 + v15 + v14;
      if ( v16 > 0x7FFFFFFF0000LL || v16 < v15 + v9 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v17 = v13 & 2;
  if ( v17 )
  {
    v21 = *((unsigned int *)v10 + 5);
    if ( (_DWORD)v21 )
    {
      v22 = *((int *)v10 + 4);
      v23 = v22 + v9;
      if ( (((_BYTE)v22 + (_BYTE)v9) & 0x3F) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = v9 + v21 + v22;
      if ( v24 > 0x7FFFFFFF0000LL || v24 < v23 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = RtlpCopyExtendedContext(a2, a3, 0LL, a4, v9, (__int64)v10);
  v18 = result;
  if ( (int)result >= 0 )
  {
    v19 = (int *)(a3 + *(int *)(a3 + 8));
    if ( !v27 )
    {
      if ( (a4 & 0x100000) != 0 )
      {
        v19[12] = a4;
LABEL_19:
        if ( v17 )
        {
          v20 = (_QWORD *)(a3 + *(int *)(a3 + 16));
          *v20 &= MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
            v20[1] = MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL;
          else
            v20[1] = 0LL;
          memset(v20 + 2, 0, 0x30uLL);
        }
        return v18;
      }
      if ( (a4 & 0x200000) == 0 && (a4 & 0x400000) == 0 )
        goto LABEL_19;
    }
    *v19 = a4;
    goto LABEL_19;
  }
  return result;
}
