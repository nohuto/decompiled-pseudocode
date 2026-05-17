/*
 * XREFs of RtlFindActivationContextSectionString @ 0x18003E8E0
 * Callers:
 *     sub_18003E4CC @ 0x18003E4CC (sub_18003E4CC.c)
 *     sub_1800770AC @ 0x1800770AC (sub_1800770AC.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlAddRefActivationContext @ 0x180029120 (RtlAddRefActivationContext.c)
 *     sub_18003EC30 @ 0x18003EC30 (sub_18003EC30.c)
 *     sub_18003EFCC @ 0x18003EFCC (sub_18003EFCC.c)
 *     sub_18003F160 @ 0x18003F160 (sub_18003F160.c)
 *     sub_18003F2EC @ 0x18003F2EC (sub_18003F2EC.c)
 *     sub_18007EE7C @ 0x18007EE7C (sub_18007EE7C.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlFindActivationContextSectionString(int a1, __int64 a2, int a3, int a4, __int64 a5)
{
  struct _TEB *v5; // r10
  int v7; // r14d
  struct _PEB *ProcessEnvironmentBlock; // rax
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rbx
  _DWORD *v14; // rdi
  struct _TEB *v15; // rcx
  const char *SystemDefaultActivationContextData; // rsi
  unsigned int v17; // r14d
  __int64 v18; // rdi
  struct _PEB *v19; // r13
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  void (__fastcall *v23)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *); // rax
  struct _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  __int64 v25; // [rsp+28h] [rbp-41h]
  char v26[4]; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-1Dh] BYREF
  __int64 v28; // [rsp+50h] [rbp-19h] BYREF
  _DWORD *v29; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-9h] BYREF
  int v31; // [rsp+64h] [rbp-5h]
  __int64 v32; // [rsp+68h] [rbp-1h]
  int v33; // [rsp+70h] [rbp+7h]
  unsigned int v34; // [rsp+74h] [rbp+Bh]
  int v35; // [rsp+78h] [rbp+Fh]
  int v36; // [rsp+80h] [rbp+17h] BYREF
  int v37; // [rsp+84h] [rbp+1Bh] BYREF
  struct _TEB *v38; // [rsp+88h] [rbp+1Fh]

  v5 = NtCurrentTeb();
  v7 = a4;
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return 3222601729LL;
  }
  v11 = a5;
  v37 = -1;
  v27 = 0;
  v36 = 0;
  result = sub_18003F2EC(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
  {
    v33 = a3;
    v28 = 0LL;
    v30 = 32;
    v31 = a1;
    v35 = 0;
    v32 = a2;
    if ( (a1 & 0xFFFFFFF8) != 0 )
    {
      return 3221225485LL;
    }
    else
    {
      v34 = 0;
      result = sub_18003EFCC(&v30, &v29, &v27, &v28);
      v13 = v28;
      if ( (int)result < 0 )
        return result;
      v14 = v29;
LABEL_6:
      if ( v27 < 0x2C || *v14 != 1682469715 )
      {
        LODWORD(v25) = v27;
        DbgPrintEx(
          51,
          0,
          (int)"RtlFindActivationContextSectionString() found section at %p (length %lu) which is not a string section\n",
          v14,
          v25);
        return 3222601731LL;
      }
      result = sub_18003EC30((_DWORD)v14, v27, v7, v11, (__int64)&v37, (__int64)&v36);
      if ( (int)result >= 0 )
      {
        if ( ((v13 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
        {
          v23 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *))(v13 + 32);
          if ( v23 )
          {
            if ( (*(_BYTE *)(v13 + 48) & 8) == 0 || (*(_BYTE *)(v13 + 80) & 8) == 0 )
            {
              v26[0] = 0;
              v23(3LL, v13, *(_QWORD *)(v13 + 24), *(_QWORD *)(v13 + 40), 0LL, v26);
              *(_DWORD *)(v13 + 48) |= 8u;
              if ( v26[0] )
                *(_DWORD *)(v13 + 80) |= 8u;
            }
          }
        }
        if ( !v11 )
          return 0LL;
        result = sub_18007EE7C(a1, v11, v13, (unsigned int)&v30, (__int64)v14, v14[9], v14[10], v27);
        if ( (int)result >= 0 )
          return 0LL;
        return result;
      }
      if ( (_DWORD)result != -1072365560 )
        return result;
      v13 = 0LL;
      v28 = 0LL;
      if ( v30 >= 0x20 && (v31 & 0xFFFFFFF8) == 0 )
      {
        v15 = NtCurrentTeb();
        SystemDefaultActivationContextData = 0LL;
        v17 = v34;
        v18 = 0LL;
        v38 = v15;
        v19 = v15->ProcessEnvironmentBlock;
        while ( 1 )
        {
          if ( v17 )
          {
            if ( v17 != 1 )
            {
              if ( v17 != 2 )
                goto LABEL_16;
              goto LABEL_25;
            }
          }
          else
          {
            ActivationContextStackPointer = v15->ActivationContextStackPointer;
            if ( ActivationContextStackPointer && ActivationContextStackPointer->ActiveFrame )
            {
              v18 = *((_QWORD *)ActivationContextStackPointer->ActiveFrame + 1);
              if ( v18 )
              {
                if ( v18 == -4 )
                {
                  SystemDefaultActivationContextData = (const char *)v19->SystemDefaultActivationContextData;
                }
                else
                {
                  if ( v18 == -3 )
                  {
                    SystemDefaultActivationContextData = "Actx ";
LABEL_60:
                    v17 = 1;
LABEL_27:
                    v34 = v17;
                    goto LABEL_17;
                  }
                  SystemDefaultActivationContextData = *(const char **)(v18 + 24);
                }
              }
              if ( SystemDefaultActivationContextData )
                goto LABEL_60;
            }
          }
          SystemDefaultActivationContextData = (const char *)v19->ActivationContextData;
          v18 = 0LL;
          if ( SystemDefaultActivationContextData )
          {
            v17 = 2;
            goto LABEL_27;
          }
LABEL_25:
          SystemDefaultActivationContextData = (const char *)v19->SystemDefaultActivationContextData;
          v18 = -4LL;
          if ( SystemDefaultActivationContextData )
          {
            v17 = 3;
            goto LABEL_27;
          }
LABEL_16:
          if ( v17 > 3 )
          {
            result = 3221225701LL;
            goto LABEL_19;
          }
LABEL_17:
          if ( !SystemDefaultActivationContextData )
          {
            result = 3222601729LL;
            goto LABEL_19;
          }
          result = sub_18003F160(
                     (_DWORD)SystemDefaultActivationContextData,
                     v32,
                     v33,
                     (unsigned int)&v29,
                     (__int64)&v27);
          if ( (int)result >= 0 )
          {
            v20 = 2;
            v21 = 0;
            if ( v18 != -4 )
              v20 = 0;
            LOBYTE(v21) = v18 == 0;
            v22 = v21 | v20;
            result = 0LL;
            v35 = v22;
            if ( v18 != -4 )
              v13 = v18;
LABEL_33:
            if ( (int)result < 0 )
              goto LABEL_19;
            RtlAddRefActivationContext((volatile signed __int32 *)v13);
            v14 = v29;
            v11 = a5;
            v7 = a4;
            goto LABEL_6;
          }
          if ( (_DWORD)result != -1072365567 || v17 == 3 )
            goto LABEL_33;
          v15 = v38;
        }
      }
      result = 3221225485LL;
LABEL_19:
      if ( (_DWORD)result == -1072365567 )
        return 3222601736LL;
    }
  }
  return result;
}
