/*
 * XREFs of RtlFindActivationContextSectionGuid @ 0x18003C960
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     sub_18003EFCC @ 0x18003EFCC (sub_18003EFCC.c)
 *     sub_18003F2EC @ 0x18003F2EC (sub_18003F2EC.c)
 *     sub_18003F5C0 @ 0x18003F5C0 (sub_18003F5C0.c)
 *     sub_18007EE7C @ 0x18007EE7C (sub_18007EE7C.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlFindActivationContextSectionGuid(int a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  struct _TEB *v5; // r10
  struct _PEB *ProcessEnvironmentBlock; // rax
  __int64 result; // rax
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *); // rax
  __int64 v16; // [rsp+20h] [rbp-60h]
  _BYTE v17[4]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-3Ch] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-28h] BYREF
  int v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+6Ch] [rbp-14h]

  v5 = NtCurrentTeb();
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return 3222601729LL;
  }
  v18 = 0;
  result = sub_18003F2EC(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
  {
    v21[0] = 32LL;
    v21[1] = a2;
    v22 = a3;
    v23 = 0LL;
    v20 = 0LL;
    result = sub_18003EFCC(v21, &v19, &v18, &v20);
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
    {
      while ( 1 )
      {
        v12 = v18;
        if ( v18 < 0x28 )
        {
          v13 = (__int64)v19;
LABEL_27:
          LODWORD(v16) = v18;
          DbgPrintEx(
            51,
            0,
            (int)"RtlFindActivationContextSectionGuid() found section at %p (length %lu) which is not a GUID section\n",
            v13,
            v16);
          return 3222601731LL;
        }
        v13 = (__int64)v19;
        if ( *v19 != 1682469703 )
          goto LABEL_27;
        result = sub_18003F5C0(v19, a4, a5);
        if ( (int)result >= 0 )
          break;
        if ( (_DWORD)result != -1072365560 )
          return result;
        result = sub_18003EFCC(v21, &v19, &v18, &v20);
        if ( (int)result < 0 )
        {
          if ( (_DWORD)result == -1072365567 )
            return 3222601736LL;
          return result;
        }
      }
      v14 = v20;
      if ( ((v20 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
      {
        v15 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *))(v20 + 32);
        if ( v15 )
        {
          if ( (*(_BYTE *)(v20 + 48) & 8) == 0 || (*(_BYTE *)(v20 + 80) & 8) == 0 )
          {
            v17[0] = 0;
            v15(3LL, v20, *(_QWORD *)(v20 + 24), *(_QWORD *)(v20 + 40), 0LL, v17);
            *(_DWORD *)(v14 + 48) |= 8u;
            if ( v17[0] )
              *(_DWORD *)(v14 + 80) |= 8u;
          }
        }
      }
      if ( !a5 )
        return 0LL;
      result = sub_18007EE7C(a1, a5, v14, (unsigned int)v21, v13, *(_DWORD *)(v13 + 32), *(_DWORD *)(v13 + 36), v12);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
